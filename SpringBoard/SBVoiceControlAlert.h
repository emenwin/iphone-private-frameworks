/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlert.h"


@interface SBVoiceControlAlert : SBAlert {
	struct {
		unsigned shouldBeActivated : 1;
		unsigned isReadyToBeActivated : 1;
		unsigned hasBeenActivated : 1;
	} _voiceControlFlags;
}
+(id)pendingOrActiveAlert;
// inherited: +(void)registerForAlerts;
+(void)setAppDisabledVoiceControl:(BOOL)control bundleIdentifier:(id)identifier;
+(BOOL)shouldEnterVoiceControl;
+(BOOL)resetVoiceControlIfNecessary:(BOOL)necessary;
+(void)bluetoothDeviceRequestedVoiceControl:(id)control;
+(void)_configureSession:(id)session forAlert:(id)alert;
+(void)setNextRecognitionAudioInputPaths:(id)paths;
+(void)_setNextRecognitionAudioInputPathForSession:(id)session resetting:(BOOL)resetting;
-(void)_resign;
-(void)_makeActive;
-(id)_session;
-(void)_workspaceActivate;
-(BOOL)recognitionSessionWillBeginAction:(id)recognitionSession;
-(void)_prime;
-(void)_setRoutingAttributesForWiredHeadset:(BOOL)wiredHeadset;
// inherited: -(id)init;
-(id)initFromWiredHeadsetButton;
-(id)initFromBluetoothDevice:(id)bluetoothDevice;
-(void)_bluetoothDeviceTerminatedVoiceControl:(id)control;
// inherited: -(BOOL)allowsEventOnlySuspension;
// inherited: -(void)deactivate;
// inherited: -(void)deactivateAfterLocking;
// inherited: -(void)activate;
-(id)initFromMenuButton;
-(void)activateWhenReady;
-(void)cancelIfNotActivated;
-(void)cancel;
// inherited: -(void)dealloc;
-(void)_proximityChanged:(id)changed;
-(void)handleHeadsetButtonUpFromActivation:(BOOL)activation;
// inherited: -(void)handleMenuButtonTap;
// inherited: -(double)autoDimTime;
// inherited: -(id)alertDisplayViewWithSize:(CGSize)size;
@end

