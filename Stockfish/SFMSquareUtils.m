//
//  SFMSquareUtils.m
//  Stockfish
//
//  Created by Daylen Yang on 12/25/14.
//  Copyright (c) 2014 Daylen Yang. All rights reserved.
//

#import "SFMSquareUtils.h"

@implementation SFMSquareUtils

+ (NSString *)description:(SFMSquare)sq {
    int letter = sq % 8;
    long number = sq / 8;
    return [NSString stringWithFormat:@"%c%ld", 65 + letter, number + 1];
}

+ (double)distanceFrom:(SFMSquare)from to:(SFMSquare)to {
    int x1 = from % 8;
    int x2 = to % 8;
    long y1 = from / 8;
    long y2 = to / 8;

    long dx = x1 - x2;
    long dy = y1 - y2;

    return sqrt(pow(dx, 2) + pow(dy, 2));
}

@end
