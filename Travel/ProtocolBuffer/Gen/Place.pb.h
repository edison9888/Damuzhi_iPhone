// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

@class HotelRoom;
@class HotelRoom_Builder;
@class Place;
@class PlaceList;
@class PlaceList_Builder;
@class PlaceStatistics;
@class PlaceStatistics_Builder;
@class Place_Builder;
@class Statistics;
@class Statistics_Builder;

@interface PlaceRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface HotelRoom : PBGeneratedMessage {
@private
  BOOL hasRoomId_:1;
  BOOL hasName_:1;
  BOOL hasBreakfast_:1;
  BOOL hasPrice_:1;
  int32_t roomId;
  NSString* name;
  NSString* breakfast;
  NSString* price;
}
- (BOOL) hasRoomId;
- (BOOL) hasName;
- (BOOL) hasBreakfast;
- (BOOL) hasPrice;
@property (readonly) int32_t roomId;
@property (readonly, retain) NSString* name;
@property (readonly, retain) NSString* breakfast;
@property (readonly, retain) NSString* price;

+ (HotelRoom*) defaultInstance;
- (HotelRoom*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (HotelRoom_Builder*) builder;
+ (HotelRoom_Builder*) builder;
+ (HotelRoom_Builder*) builderWithPrototype:(HotelRoom*) prototype;

+ (HotelRoom*) parseFromData:(NSData*) data;
+ (HotelRoom*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (HotelRoom*) parseFromInputStream:(NSInputStream*) input;
+ (HotelRoom*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (HotelRoom*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (HotelRoom*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface HotelRoom_Builder : PBGeneratedMessage_Builder {
@private
  HotelRoom* result;
}

- (HotelRoom*) defaultInstance;

- (HotelRoom_Builder*) clear;
- (HotelRoom_Builder*) clone;

- (HotelRoom*) build;
- (HotelRoom*) buildPartial;

- (HotelRoom_Builder*) mergeFrom:(HotelRoom*) other;
- (HotelRoom_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (HotelRoom_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasRoomId;
- (int32_t) roomId;
- (HotelRoom_Builder*) setRoomId:(int32_t) value;
- (HotelRoom_Builder*) clearRoomId;

- (BOOL) hasName;
- (NSString*) name;
- (HotelRoom_Builder*) setName:(NSString*) value;
- (HotelRoom_Builder*) clearName;

- (BOOL) hasBreakfast;
- (NSString*) breakfast;
- (HotelRoom_Builder*) setBreakfast:(NSString*) value;
- (HotelRoom_Builder*) clearBreakfast;

- (BOOL) hasPrice;
- (NSString*) price;
- (HotelRoom_Builder*) setPrice:(NSString*) value;
- (HotelRoom_Builder*) clearPrice;
@end

@interface Place : PBGeneratedMessage {
@private
  BOOL hasLatitude_:1;
  BOOL hasLongitude_:1;
  BOOL hasPriceRank_:1;
  BOOL hasHotelStar_:1;
  BOOL hasAreaId_:1;
  BOOL hasPlaceFavoriteCount_:1;
  BOOL hasRank_:1;
  BOOL hasHasDiscount_:1;
  BOOL hasSubCategoryId_:1;
  BOOL hasCategoryId_:1;
  BOOL hasCityId_:1;
  BOOL hasPlaceId_:1;
  BOOL hasParkingGuide_:1;
  BOOL hasTips_:1;
  BOOL hasOpenTime_:1;
  BOOL hasPriceDescription_:1;
  BOOL hasWebsite_:1;
  BOOL hasTransportation_:1;
  BOOL hasIntroduction_:1;
  BOOL hasIcon_:1;
  BOOL hasAvgPrice_:1;
  BOOL hasPrice_:1;
  BOOL hasName_:1;
  Float64 latitude;
  Float64 longitude;
  int32_t priceRank;
  int32_t hotelStar;
  int32_t areaId;
  int32_t placeFavoriteCount;
  int32_t rank;
  int32_t hasDiscount;
  int32_t subCategoryId;
  int32_t categoryId;
  int32_t cityId;
  int32_t placeId;
  NSString* parkingGuide;
  NSString* tips;
  NSString* openTime;
  NSString* priceDescription;
  NSString* website;
  NSString* transportation;
  NSString* introduction;
  NSString* icon;
  NSString* avgPrice;
  NSString* price;
  NSString* name;
  NSMutableArray* mutableProvidedServiceIdList;
  NSMutableArray* mutableTelephoneList;
  NSMutableArray* mutableAddressList;
  NSMutableArray* mutableImagesList;
  NSMutableArray* mutableKeywordsList;
  NSMutableArray* mutableTypicalDishesList;
  NSMutableArray* mutableRoomsList;
}
- (BOOL) hasPlaceId;
- (BOOL) hasCityId;
- (BOOL) hasCategoryId;
- (BOOL) hasSubCategoryId;
- (BOOL) hasName;
- (BOOL) hasRank;
- (BOOL) hasLongitude;
- (BOOL) hasLatitude;
- (BOOL) hasAreaId;
- (BOOL) hasPrice;
- (BOOL) hasAvgPrice;
- (BOOL) hasPriceRank;
- (BOOL) hasIcon;
- (BOOL) hasIntroduction;
- (BOOL) hasTransportation;
- (BOOL) hasWebsite;
- (BOOL) hasPriceDescription;
- (BOOL) hasOpenTime;
- (BOOL) hasTips;
- (BOOL) hasHotelStar;
- (BOOL) hasParkingGuide;
- (BOOL) hasPlaceFavoriteCount;
- (BOOL) hasHasDiscount;
@property (readonly) int32_t placeId;
@property (readonly) int32_t cityId;
@property (readonly) int32_t categoryId;
@property (readonly) int32_t subCategoryId;
@property (readonly, retain) NSString* name;
@property (readonly) int32_t rank;
@property (readonly) Float64 longitude;
@property (readonly) Float64 latitude;
@property (readonly) int32_t areaId;
@property (readonly, retain) NSString* price;
@property (readonly, retain) NSString* avgPrice;
@property (readonly) int32_t priceRank;
@property (readonly, retain) NSString* icon;
@property (readonly, retain) NSString* introduction;
@property (readonly, retain) NSString* transportation;
@property (readonly, retain) NSString* website;
@property (readonly, retain) NSString* priceDescription;
@property (readonly, retain) NSString* openTime;
@property (readonly, retain) NSString* tips;
@property (readonly) int32_t hotelStar;
@property (readonly, retain) NSString* parkingGuide;
@property (readonly) int32_t placeFavoriteCount;
@property (readonly) int32_t hasDiscount;
- (NSArray*) providedServiceIdList;
- (int32_t) providedServiceIdAtIndex:(int32_t) index;
- (NSArray*) imagesList;
- (NSString*) imagesAtIndex:(int32_t) index;
- (NSArray*) telephoneList;
- (NSString*) telephoneAtIndex:(int32_t) index;
- (NSArray*) addressList;
- (NSString*) addressAtIndex:(int32_t) index;
- (NSArray*) keywordsList;
- (NSString*) keywordsAtIndex:(int32_t) index;
- (NSArray*) typicalDishesList;
- (NSString*) typicalDishesAtIndex:(int32_t) index;
- (NSArray*) roomsList;
- (HotelRoom*) roomsAtIndex:(int32_t) index;

+ (Place*) defaultInstance;
- (Place*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (Place_Builder*) builder;
+ (Place_Builder*) builder;
+ (Place_Builder*) builderWithPrototype:(Place*) prototype;

+ (Place*) parseFromData:(NSData*) data;
+ (Place*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Place*) parseFromInputStream:(NSInputStream*) input;
+ (Place*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Place*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Place*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface Place_Builder : PBGeneratedMessage_Builder {
@private
  Place* result;
}

- (Place*) defaultInstance;

- (Place_Builder*) clear;
- (Place_Builder*) clone;

- (Place*) build;
- (Place*) buildPartial;

- (Place_Builder*) mergeFrom:(Place*) other;
- (Place_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (Place_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasPlaceId;
- (int32_t) placeId;
- (Place_Builder*) setPlaceId:(int32_t) value;
- (Place_Builder*) clearPlaceId;

- (BOOL) hasCityId;
- (int32_t) cityId;
- (Place_Builder*) setCityId:(int32_t) value;
- (Place_Builder*) clearCityId;

- (BOOL) hasCategoryId;
- (int32_t) categoryId;
- (Place_Builder*) setCategoryId:(int32_t) value;
- (Place_Builder*) clearCategoryId;

- (BOOL) hasSubCategoryId;
- (int32_t) subCategoryId;
- (Place_Builder*) setSubCategoryId:(int32_t) value;
- (Place_Builder*) clearSubCategoryId;

- (BOOL) hasName;
- (NSString*) name;
- (Place_Builder*) setName:(NSString*) value;
- (Place_Builder*) clearName;

- (BOOL) hasRank;
- (int32_t) rank;
- (Place_Builder*) setRank:(int32_t) value;
- (Place_Builder*) clearRank;

- (NSArray*) providedServiceIdList;
- (int32_t) providedServiceIdAtIndex:(int32_t) index;
- (Place_Builder*) replaceProvidedServiceIdAtIndex:(int32_t) index with:(int32_t) value;
- (Place_Builder*) addProvidedServiceId:(int32_t) value;
- (Place_Builder*) addAllProvidedServiceId:(NSArray*) values;
- (Place_Builder*) clearProvidedServiceIdList;

- (BOOL) hasLongitude;
- (Float64) longitude;
- (Place_Builder*) setLongitude:(Float64) value;
- (Place_Builder*) clearLongitude;

- (BOOL) hasLatitude;
- (Float64) latitude;
- (Place_Builder*) setLatitude:(Float64) value;
- (Place_Builder*) clearLatitude;

- (BOOL) hasAreaId;
- (int32_t) areaId;
- (Place_Builder*) setAreaId:(int32_t) value;
- (Place_Builder*) clearAreaId;

- (BOOL) hasPrice;
- (NSString*) price;
- (Place_Builder*) setPrice:(NSString*) value;
- (Place_Builder*) clearPrice;

- (BOOL) hasAvgPrice;
- (NSString*) avgPrice;
- (Place_Builder*) setAvgPrice:(NSString*) value;
- (Place_Builder*) clearAvgPrice;

- (BOOL) hasPriceRank;
- (int32_t) priceRank;
- (Place_Builder*) setPriceRank:(int32_t) value;
- (Place_Builder*) clearPriceRank;

- (BOOL) hasIcon;
- (NSString*) icon;
- (Place_Builder*) setIcon:(NSString*) value;
- (Place_Builder*) clearIcon;

- (NSArray*) imagesList;
- (NSString*) imagesAtIndex:(int32_t) index;
- (Place_Builder*) replaceImagesAtIndex:(int32_t) index with:(NSString*) value;
- (Place_Builder*) addImages:(NSString*) value;
- (Place_Builder*) addAllImages:(NSArray*) values;
- (Place_Builder*) clearImagesList;

- (BOOL) hasIntroduction;
- (NSString*) introduction;
- (Place_Builder*) setIntroduction:(NSString*) value;
- (Place_Builder*) clearIntroduction;

- (BOOL) hasTransportation;
- (NSString*) transportation;
- (Place_Builder*) setTransportation:(NSString*) value;
- (Place_Builder*) clearTransportation;

- (NSArray*) telephoneList;
- (NSString*) telephoneAtIndex:(int32_t) index;
- (Place_Builder*) replaceTelephoneAtIndex:(int32_t) index with:(NSString*) value;
- (Place_Builder*) addTelephone:(NSString*) value;
- (Place_Builder*) addAllTelephone:(NSArray*) values;
- (Place_Builder*) clearTelephoneList;

- (NSArray*) addressList;
- (NSString*) addressAtIndex:(int32_t) index;
- (Place_Builder*) replaceAddressAtIndex:(int32_t) index with:(NSString*) value;
- (Place_Builder*) addAddress:(NSString*) value;
- (Place_Builder*) addAllAddress:(NSArray*) values;
- (Place_Builder*) clearAddressList;

- (BOOL) hasWebsite;
- (NSString*) website;
- (Place_Builder*) setWebsite:(NSString*) value;
- (Place_Builder*) clearWebsite;

- (BOOL) hasPriceDescription;
- (NSString*) priceDescription;
- (Place_Builder*) setPriceDescription:(NSString*) value;
- (Place_Builder*) clearPriceDescription;

- (BOOL) hasOpenTime;
- (NSString*) openTime;
- (Place_Builder*) setOpenTime:(NSString*) value;
- (Place_Builder*) clearOpenTime;

- (BOOL) hasTips;
- (NSString*) tips;
- (Place_Builder*) setTips:(NSString*) value;
- (Place_Builder*) clearTips;

- (NSArray*) keywordsList;
- (NSString*) keywordsAtIndex:(int32_t) index;
- (Place_Builder*) replaceKeywordsAtIndex:(int32_t) index with:(NSString*) value;
- (Place_Builder*) addKeywords:(NSString*) value;
- (Place_Builder*) addAllKeywords:(NSArray*) values;
- (Place_Builder*) clearKeywordsList;

- (NSArray*) typicalDishesList;
- (NSString*) typicalDishesAtIndex:(int32_t) index;
- (Place_Builder*) replaceTypicalDishesAtIndex:(int32_t) index with:(NSString*) value;
- (Place_Builder*) addTypicalDishes:(NSString*) value;
- (Place_Builder*) addAllTypicalDishes:(NSArray*) values;
- (Place_Builder*) clearTypicalDishesList;

- (BOOL) hasHotelStar;
- (int32_t) hotelStar;
- (Place_Builder*) setHotelStar:(int32_t) value;
- (Place_Builder*) clearHotelStar;

- (BOOL) hasParkingGuide;
- (NSString*) parkingGuide;
- (Place_Builder*) setParkingGuide:(NSString*) value;
- (Place_Builder*) clearParkingGuide;

- (BOOL) hasPlaceFavoriteCount;
- (int32_t) placeFavoriteCount;
- (Place_Builder*) setPlaceFavoriteCount:(int32_t) value;
- (Place_Builder*) clearPlaceFavoriteCount;

- (BOOL) hasHasDiscount;
- (int32_t) hasDiscount;
- (Place_Builder*) setHasDiscount:(int32_t) value;
- (Place_Builder*) clearHasDiscount;

- (NSArray*) roomsList;
- (HotelRoom*) roomsAtIndex:(int32_t) index;
- (Place_Builder*) replaceRoomsAtIndex:(int32_t) index with:(HotelRoom*) value;
- (Place_Builder*) addRooms:(HotelRoom*) value;
- (Place_Builder*) addAllRooms:(NSArray*) values;
- (Place_Builder*) clearRoomsList;
@end

@interface PlaceList : PBGeneratedMessage {
@private
  BOOL hasCityId_:1;
  int32_t cityId;
  NSMutableArray* mutableListList;
}
- (BOOL) hasCityId;
@property (readonly) int32_t cityId;
- (NSArray*) listList;
- (Place*) listAtIndex:(int32_t) index;

+ (PlaceList*) defaultInstance;
- (PlaceList*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (PlaceList_Builder*) builder;
+ (PlaceList_Builder*) builder;
+ (PlaceList_Builder*) builderWithPrototype:(PlaceList*) prototype;

+ (PlaceList*) parseFromData:(NSData*) data;
+ (PlaceList*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PlaceList*) parseFromInputStream:(NSInputStream*) input;
+ (PlaceList*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PlaceList*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (PlaceList*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface PlaceList_Builder : PBGeneratedMessage_Builder {
@private
  PlaceList* result;
}

- (PlaceList*) defaultInstance;

- (PlaceList_Builder*) clear;
- (PlaceList_Builder*) clone;

- (PlaceList*) build;
- (PlaceList*) buildPartial;

- (PlaceList_Builder*) mergeFrom:(PlaceList*) other;
- (PlaceList_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (PlaceList_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (NSArray*) listList;
- (Place*) listAtIndex:(int32_t) index;
- (PlaceList_Builder*) replaceListAtIndex:(int32_t) index with:(Place*) value;
- (PlaceList_Builder*) addList:(Place*) value;
- (PlaceList_Builder*) addAllList:(NSArray*) values;
- (PlaceList_Builder*) clearListList;

- (BOOL) hasCityId;
- (int32_t) cityId;
- (PlaceList_Builder*) setCityId:(int32_t) value;
- (PlaceList_Builder*) clearCityId;
@end

@interface Statistics : PBGeneratedMessage {
@private
  BOOL hasId_:1;
  BOOL hasCount_:1;
  BOOL hasName_:1;
  int32_t id;
  int32_t count;
  NSString* name;
}
- (BOOL) hasId;
- (BOOL) hasName;
- (BOOL) hasCount;
@property (readonly) int32_t id;
@property (readonly, retain) NSString* name;
@property (readonly) int32_t count;

+ (Statistics*) defaultInstance;
- (Statistics*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (Statistics_Builder*) builder;
+ (Statistics_Builder*) builder;
+ (Statistics_Builder*) builderWithPrototype:(Statistics*) prototype;

+ (Statistics*) parseFromData:(NSData*) data;
+ (Statistics*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Statistics*) parseFromInputStream:(NSInputStream*) input;
+ (Statistics*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Statistics*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Statistics*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface Statistics_Builder : PBGeneratedMessage_Builder {
@private
  Statistics* result;
}

- (Statistics*) defaultInstance;

- (Statistics_Builder*) clear;
- (Statistics_Builder*) clone;

- (Statistics*) build;
- (Statistics*) buildPartial;

- (Statistics_Builder*) mergeFrom:(Statistics*) other;
- (Statistics_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (Statistics_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (int32_t) id;
- (Statistics_Builder*) setId:(int32_t) value;
- (Statistics_Builder*) clearId;

- (BOOL) hasName;
- (NSString*) name;
- (Statistics_Builder*) setName:(NSString*) value;
- (Statistics_Builder*) clearName;

- (BOOL) hasCount;
- (int32_t) count;
- (Statistics_Builder*) setCount:(int32_t) value;
- (Statistics_Builder*) clearCount;
@end

@interface PlaceStatistics : PBGeneratedMessage {
@private
  NSMutableArray* mutableSubCategoryStaticsList;
  NSMutableArray* mutableAreaStaticsList;
  NSMutableArray* mutableServiceStaticsList;
}
- (NSArray*) subCategoryStaticsList;
- (Statistics*) subCategoryStaticsAtIndex:(int32_t) index;
- (NSArray*) areaStaticsList;
- (Statistics*) areaStaticsAtIndex:(int32_t) index;
- (NSArray*) serviceStaticsList;
- (Statistics*) serviceStaticsAtIndex:(int32_t) index;

+ (PlaceStatistics*) defaultInstance;
- (PlaceStatistics*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (PlaceStatistics_Builder*) builder;
+ (PlaceStatistics_Builder*) builder;
+ (PlaceStatistics_Builder*) builderWithPrototype:(PlaceStatistics*) prototype;

+ (PlaceStatistics*) parseFromData:(NSData*) data;
+ (PlaceStatistics*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PlaceStatistics*) parseFromInputStream:(NSInputStream*) input;
+ (PlaceStatistics*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PlaceStatistics*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (PlaceStatistics*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface PlaceStatistics_Builder : PBGeneratedMessage_Builder {
@private
  PlaceStatistics* result;
}

- (PlaceStatistics*) defaultInstance;

- (PlaceStatistics_Builder*) clear;
- (PlaceStatistics_Builder*) clone;

- (PlaceStatistics*) build;
- (PlaceStatistics*) buildPartial;

- (PlaceStatistics_Builder*) mergeFrom:(PlaceStatistics*) other;
- (PlaceStatistics_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (PlaceStatistics_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (NSArray*) subCategoryStaticsList;
- (Statistics*) subCategoryStaticsAtIndex:(int32_t) index;
- (PlaceStatistics_Builder*) replaceSubCategoryStaticsAtIndex:(int32_t) index with:(Statistics*) value;
- (PlaceStatistics_Builder*) addSubCategoryStatics:(Statistics*) value;
- (PlaceStatistics_Builder*) addAllSubCategoryStatics:(NSArray*) values;
- (PlaceStatistics_Builder*) clearSubCategoryStaticsList;

- (NSArray*) areaStaticsList;
- (Statistics*) areaStaticsAtIndex:(int32_t) index;
- (PlaceStatistics_Builder*) replaceAreaStaticsAtIndex:(int32_t) index with:(Statistics*) value;
- (PlaceStatistics_Builder*) addAreaStatics:(Statistics*) value;
- (PlaceStatistics_Builder*) addAllAreaStatics:(NSArray*) values;
- (PlaceStatistics_Builder*) clearAreaStaticsList;

- (NSArray*) serviceStaticsList;
- (Statistics*) serviceStaticsAtIndex:(int32_t) index;
- (PlaceStatistics_Builder*) replaceServiceStaticsAtIndex:(int32_t) index with:(Statistics*) value;
- (PlaceStatistics_Builder*) addServiceStatics:(Statistics*) value;
- (PlaceStatistics_Builder*) addAllServiceStatics:(NSArray*) values;
- (PlaceStatistics_Builder*) clearServiceStaticsList;
@end

