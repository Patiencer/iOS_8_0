{ Parsed from SpriteKit.framework (iPhoneOS8.2) SKRegion.h }
{ Created on Fri Mar 20 2:11:19 2015 }


{$ifdef TYPES}
type
  SKRegionPtr = ^SKRegion;
{$endif}

{$ifdef CLASSES}

type
  SKRegion = objcclass external (NSObject, NSCopyingProtocol, NSCodingProtocol)
  public
    function path: CGPathRef; message 'path';
    class function infiniteRegion: instancetype; message 'infiniteRegion';
    function initWithRadius (radius: single): instancetype; message 'initWithRadius:';
    function initWithSize (size: CGSize): instancetype; message 'initWithSize:';
    function initWithPath (path_: CGPathRef): instancetype; message 'initWithPath:';
    function inverseRegion: instancetype; message 'inverseRegion';
    function regionByUnionWithRegion (region: SKRegion): instancetype; message 'regionByUnionWithRegion:';
    function regionByDifferenceFromRegion (region: SKRegion): instancetype; message 'regionByDifferenceFromRegion:';
    function regionByIntersectionWithRegion (region: SKRegion): instancetype; message 'regionByIntersectionWithRegion:';
    function containsPoint (point: CGPoint): boolean; message 'containsPoint:';

    { Adopted protocols }
    function copyWithZone (zone: NSZonePtr): id; message 'copyWithZone:';
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
  end;
{$endif}

