///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBFILESGetMetadataArg.h"
#import "DBSerializableProtocol.h"

@class DBFILESAlphaGetMetadataArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `AlphaGetMetadataArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESAlphaGetMetadataArg : DBFILESGetMetadataArg <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// If set to a valid list of template IDs, `propertyGroups` in
/// `DBFILESFileMetadata` is set for files with custom properties.
@property (nonatomic, readonly, nullable) NSArray<NSString *> *includePropertyTemplates;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path The path of a file or folder on Dropbox.
/// @param includeMediaInfo If true, `mediaInfo` in `DBFILESFileMetadata` is set
/// for photo and video.
/// @param includeDeleted If true, DeletedMetadata will be returned for deleted
/// file or folder, otherwise `notFound` in `DBFILESLookupError` will be
/// returned.
/// @param includeHasExplicitSharedMembers If true, the results will include a
/// flag for each file indicating whether or not  that file has any explicit
/// members.
/// @param includePropertyTemplates If set to a valid list of template IDs,
/// `propertyGroups` in `DBFILESFileMetadata` is set for files with custom
/// properties.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path
                   includeMediaInfo:(nullable NSNumber *)includeMediaInfo
                     includeDeleted:(nullable NSNumber *)includeDeleted
    includeHasExplicitSharedMembers:(nullable NSNumber *)includeHasExplicitSharedMembers
           includePropertyTemplates:(nullable NSArray<NSString *> *)includePropertyTemplates;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param path The path of a file or folder on Dropbox.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `AlphaGetMetadataArg` struct.
///
@interface DBFILESAlphaGetMetadataArgSerializer : NSObject

///
/// Serializes `DBFILESAlphaGetMetadataArg` instances.
///
/// @param instance An instance of the `DBFILESAlphaGetMetadataArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESAlphaGetMetadataArg` API object.
///
+ (NSDictionary *)serialize:(DBFILESAlphaGetMetadataArg *)instance;

///
/// Deserializes `DBFILESAlphaGetMetadataArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESAlphaGetMetadataArg` API object.
///
/// @return An instantiation of the `DBFILESAlphaGetMetadataArg` object.
///
+ (DBFILESAlphaGetMetadataArg *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END