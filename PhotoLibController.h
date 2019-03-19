//
//  PhotoLibController.h
//  GetAddressBookInfo
//
//  Created by Ed on 2016/3/2.
//  Copyright © 2016年 Ed. All rights reserved.
//

/*-------------------

 將圖片存入手機相簿，並建立自訂相簿的使用範例：
 [PhotoLibController setAssetCollectionWithName:PHOTO_ALBUM_NAME completion:^(NSString *errorMsg, PHAssetCollection *assetCollection) {
 
     [PhotoLibController addAssetsToAlbumWithImageArray:imageArray toAssetCollection:assetCollection completion:^(NSString *errorMsg) {
 
     }];
 }];
 
-------------------*/

#import <Foundation/Foundation.h>
#import <Photos/Photos.h>

@interface PhotoLibController : NSObject

/* 自訂相簿，若不存在就建立一個，並回傳AssetCollection */
+ (void)setAssetCollectionWithName:(NSString*)name completion:(void(^)(NSString* errorMsg, PHAssetCollection* assetCollection))completion;

/* 將圖片存到手機，並指定到自訂相簿 */
+ (void)addAssetsToAlbumWithImageArray:(NSMutableArray*)imageArray toAssetCollection:(PHAssetCollection*)assetCollection completion:(void(^)(NSString* errorMsg))completion;

/* 用名稱取得AssetCollection */
+ (PHAssetCollection*)getAssetCollectionWithName:(NSString*)name;

/* 建立自訂相簿 */
+ (void)createAssetCollectionWithName:(NSString*)name completion:(void(^)(NSString* errorMsg))completion;

@end
