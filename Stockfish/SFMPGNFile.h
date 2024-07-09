//
//  SFMPGNFile.h
//  Stockfish
//
//  Created by Daylen Yang on 1/8/14.
//  Copyright (c) 2014 Daylen Yang. All rights reserved.
//

@interface SFMPGNFile : NSObject

#pragma mark - Properties

@property NSMutableArray /* of SFMChessGame */ *_Nullable games;

#pragma mark - Init

/*!
 Create a PGN with one game.
 */
- (instancetype _Nullable)init;

/*!
 Create the given PGN.
 @param str
 */
- (instancetype _Nullable)initWithString:(NSString *_Nullable)str error:(NSError *_Nullable __autoreleasing *_Nullable)error;

#pragma mark - Export

/*!
 Export the PGN file.
 @return The PGN file as an NSData blob.
 */
@property (nonatomic, readonly, copy) NSData *_Nullable data;

+ (SFMPGNFile * _Nullable)gameFromPgnOrFen:(NSString *_Nonnull)str error:(NSError *_Nullable __autoreleasing *_Nullable)error;

@end
