///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGDeviceUnlinkPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DeviceUnlinkPolicy` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGDeviceUnlinkPolicy : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGDeviceUnlinkPolicyTag` enum type represents the possible tag
/// states with which the `DBTEAMLOGDeviceUnlinkPolicy` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMLOGDeviceUnlinkPolicyTag) {
  /// (no description).
  DBTEAMLOGDeviceUnlinkPolicyRemove,

  /// (no description).
  DBTEAMLOGDeviceUnlinkPolicyKeep,

  /// (no description).
  DBTEAMLOGDeviceUnlinkPolicyOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGDeviceUnlinkPolicyTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "remove".
///
/// @return An initialized instance.
///
- (instancetype)initWithRemove;

///
/// Initializes union class with tag state of "keep".
///
/// @return An initialized instance.
///
- (instancetype)initWithKeep;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "remove".
///
/// @return Whether the union's current tag state has value "remove".
///
- (BOOL)isRemove;

///
/// Retrieves whether the union's current tag state has value "keep".
///
/// @return Whether the union's current tag state has value "keep".
///
- (BOOL)isKeep;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMLOGDeviceUnlinkPolicy` union.
///
@interface DBTEAMLOGDeviceUnlinkPolicySerializer : NSObject

///
/// Serializes `DBTEAMLOGDeviceUnlinkPolicy` instances.
///
/// @param instance An instance of the `DBTEAMLOGDeviceUnlinkPolicy` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGDeviceUnlinkPolicy` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGDeviceUnlinkPolicy *)instance;

///
/// Deserializes `DBTEAMLOGDeviceUnlinkPolicy` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGDeviceUnlinkPolicy` API object.
///
/// @return An instantiation of the `DBTEAMLOGDeviceUnlinkPolicy` object.
///
+ (DBTEAMLOGDeviceUnlinkPolicy *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
