{ Parsed from ExternalAccessory.framework (iPhoneOS8.2) EAAccessory.h }
{ Created on Fri Mar 20 2:10:53 2015 }


{$ifdef TYPES}
type
  EAAccessoryPtr = ^EAAccessory;
  EAAccessoryDelegateProtocolPtr = ^EAAccessoryDelegateProtocol;
{$endif}

{$ifdef TYPES}
const
  EAConnectionIDNone = 0;
{$endif}

{$ifdef CLASSES}

type
  EAAccessory = objcclass external (NSObject)
  private
    _internal: EAAccessoryInternal;
  public
    function isConnected: boolean; message 'isConnected';
    function connectionID: NSUInteger; message 'connectionID';
    function manufacturer: NSString; message 'manufacturer';
    function name: NSString; message 'name';
    function modelNumber: NSString; message 'modelNumber';
    function serialNumber: NSString; message 'serialNumber';
    function firmwareRevision: NSString; message 'firmwareRevision';
    function hardwareRevision: NSString; message 'hardwareRevision';
    function protocolStrings: NSArray; message 'protocolStrings';
    procedure setDelegate(newValue: EAAccessoryDelegateProtocol); message 'setDelegate:';
    function delegate: EAAccessoryDelegateProtocol; message 'delegate';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  EAAccessoryDelegateProtocol = objcprotocol external name 'EAAccessoryDelegate' (NSObjectProtocol)
  optional
    procedure accessoryDidDisconnect (accessory: EAAccessory); message 'accessoryDidDisconnect:'; { available starting in __MAC_NA,__IPHONE_3_0 }
  end;
{$endif}

