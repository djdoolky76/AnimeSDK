#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJCFIOLIACA.h"
#include "unitysdk/BLIHJELFEHM_TransitionMode.h"
#include "unitysdk/CHFAIKPJMGE.h"
#include "unitysdk/CIOANIFBLCN.h"
#include "unitysdk/FLALMMMNNOG.h"
#include "unitysdk/MLLKNHEPNNF.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_ClipPlaneOverridePriority.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_DisableCameraProtectReason.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_KeepOrthographicOnResetReason.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_MazeBattleShotDataType.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_PauseMainCameraUpdateReason.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_RoamingStyle.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_TrackCameraTrackType.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_TrackRoamingCameraRotationMode.h"
#include "unitysdk/RPG/Client/CameraResultData.h"
#include "unitysdk/RPG/GameCore/ActiveTrackCameraMode.h"
#include "unitysdk/RPG/GameCore/AdventureCameraOrthographicResetMode.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/CameraMode.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/TeamFormationType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LOHLDEIBJLO.h"
#include "unitysdk/RPG/MQuaternion.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/ValueTuple_2.h"
class ACEPKKPFMKI;
class AJDAJPHJBME;
class BBICCJAGCDL;
class BLIHJELFEHM_TransitionShotData;
class CameraShakeTask;
class DLEODCKNBBI;
class EKKGJHMHIIB;
class GNBHHBLMAIM;
class JBDGMDEOBIO;
class KFELGAIGHAP;
class LHBGGEHHLJC;
class NEOCEOCDEAF;
class ONGJAABPPCP;
class PMCCDNCDGJJ;
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class CameraFreelook3rdConfigData; }
namespace RPG::Client { class CameraLookAtConfigData; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class CameraNormalConfigData; }
namespace RPG::Client { class GameCoreCameraData; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class ShotTemplateRuntime; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VCameraBlend; }
namespace RPG::GameCore { class VCameraConfig; }
namespace RPG::GameCore { class VCameraFreelook3rdConfig; }
namespace RPG::GameCore { class VCameraNoiseChange; }
namespace RPGTools::Timeline { class CameraData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CAMERADATAANDFLAGS_ACTIVESHOTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1D310880)
#define RPG_CLIENT_CAMERADATAANDFLAGS_APPLYCAMERANOISECHANGECONFIG_OFFSET UNITYSDK_OFFSET(0x1D30BEE0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_APPLYINHERITPARAMS_OFFSET UNITYSDK_OFFSET(0x1D30B990)
#define RPG_CLIENT_CAMERADATAANDFLAGS_APPLYPENDINGCUTONNEXTVCAMERACHANGE_OFFSET UNITYSDK_OFFSET(0x1D30F500)
#define RPG_CLIENT_CAMERADATAANDFLAGS_APPLYVCAMERASHAKECONFIG_OFFSET UNITYSDK_OFFSET(0x1D30EFB0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_CALCCAMERALOOKATANGLE_OFFSET UNITYSDK_OFFSET(0x1D30F5B0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_CONSUMESHOTTEMPLATEDATA_OFFSET UNITYSDK_OFFSET(0x1D310960)
#define RPG_CLIENT_CAMERADATAANDFLAGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D30B2D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_DEACTIVESHOTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1D3108F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_DISABLECAMERAPROTECT_OFFSET UNITYSDK_OFFSET(0x1D30BAE0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D30B760)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENABLENOISE_OFFSET UNITYSDK_OFFSET(0x1D30C470)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERAFREELOOK3RDCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x1D30ED30)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERALOOKATCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x1D3106F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEDEFERREDCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x1D310760)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERACLOSEUPTASK_OFFSET UNITYSDK_OFFSET(0x1D30EE60)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHAKETASK_OFFSET UNITYSDK_OFFSET(0x1D3107F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHOTANIMTASK_OFFSET UNITYSDK_OFFSET(0x1D30EDF0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETADJOINATKTARGETAVERAGEPOS_OFFSET UNITYSDK_OFFSET(0x1D30B1E0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETBATTLEMONSTERCAMERAOFFSETHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D30ABB0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERAMODE_OFFSET UNITYSDK_OFFSET(0x1D30D780)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERASHAKEDISTANCEATTENUATIONTARGET_OFFSET UNITYSDK_OFFSET(0x1D30FE70)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCHARACTERSOMATO_OFFSET UNITYSDK_OFFSET(0x1D30AC20)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCURRENTCLIPPLANEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1D30BE00)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMENTITY_OFFSET UNITYSDK_OFFSET(0x1D30A950)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONCENTERWORLDPOSFROMBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x1D30B0A0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONCENTERWORLDPOS_OFFSET UNITYSDK_OFFSET(0x1D30AFD0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONWIDTH_OFFSET UNITYSDK_OFFSET(0x1D30A590)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMMAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D30A7F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETINHERITPARAMS_OFFSET UNITYSDK_OFFSET(0x1D30B8C0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMENTITY_OFFSET UNITYSDK_OFFSET(0x1D30AA00)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFACEDIR_OFFSET UNITYSDK_OFFSET(0x1D30AC90)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONCENTERWORLDPOSFROMBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x1D30AF00)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONCENTERWORLDPOS_OFFSET UNITYSDK_OFFSET(0x1D30AE30)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONWIDTH_OFFSET UNITYSDK_OFFSET(0x1D30A520)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORWARD_OFFSET UNITYSDK_OFFSET(0x1D30A710)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMLEFT_OFFSET UNITYSDK_OFFSET(0x1D30A600)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMLOCKTARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D30AB30)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMROTATION_OFFSET UNITYSDK_OFFSET(0x1D30AAB0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMALIVEENTITIESCENTERWORLDPOS_OFFSET UNITYSDK_OFFSET(0x1D30AD30)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMFORMATIONWIDTH_OFFSET UNITYSDK_OFFSET(0x1D30A410)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x1D30A310)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTRANSFORMCOMPONENTYAWANGLE_OFFSET UNITYSDK_OFFSET(0x1D30B170)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET UNITYSDK_OFFSET(0x1D30BA50)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_CINEMACHINEBRAINREF_OFFSET UNITYSDK_OFFSET(0x1D30C990)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_DISABLEPROTECTFLAG_OFFSET UNITYSDK_OFFSET(0x1D30BA90)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_GAMECOREDATA_OFFSET UNITYSDK_OFFSET(0x1D30C9B0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_HASCLIPPLANEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1D30BC90)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_KEEPORTHOGRAPHICONRESET_OFFSET UNITYSDK_OFFSET(0x1D30BED0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_LASTFRAMEFOVRESULT_OFFSET UNITYSDK_OFFSET(0x1D30BA70)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_LOCKRELATEDTARGET_OFFSET UNITYSDK_OFFSET(0x1D30C9D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_PAUSECAMERAUPDATE_OFFSET UNITYSDK_OFFSET(0x1D3109D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_PUSHCLIPPLANEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1D30BCF0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_QUERYCHARACTERSINTEAM_OFFSET UNITYSDK_OFFSET(0x1D30A360)
#define RPG_CLIENT_CAMERADATAANDFLAGS_RECOVERNORMALCONFIGCAMERA_OFFSET UNITYSDK_OFFSET(0x1D30F9F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_REFRESH_OFFSET UNITYSDK_OFFSET(0x1D30C9F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_REGISTERNOISETRANSITION_OFFSET UNITYSDK_OFFSET(0x1D30C150)
#define RPG_CLIENT_CAMERADATAANDFLAGS_REMOVECLIPPLANEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1D30BDA0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_RESETVCAMERAGLOBALDYNAMICOFFSET_OFFSET UNITYSDK_OFFSET(0x1D30FF50)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETACTIVEENTITYREF_OFFSET UNITYSDK_OFFSET(0x1D30D520)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETBLENDCONFIG_OFFSET UNITYSDK_OFFSET(0x1D30F0D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETCAMERAMODE_OFFSET UNITYSDK_OFFSET(0x1D30D710)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETKEEPORTHOGRAPHICONRESET_OFFSET UNITYSDK_OFFSET(0x1D30BE60)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETUSINGULTRADISTANCEGLOBALDYNAMICOFFSETFLAG_OFFSET UNITYSDK_OFFSET(0x1D30FFA0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x1D30D7D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAGLOBALDYNAMICOFFSET_OFFSET UNITYSDK_OFFSET(0x1D30FD30)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAHIDEENTITY_OFFSET UNITYSDK_OFFSET(0x1D30F930)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET UNITYSDK_OFFSET(0x1D30BA60)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_CINEMACHINEBRAINREF_OFFSET UNITYSDK_OFFSET(0x1D30C9A0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_GAMECOREDATA_OFFSET UNITYSDK_OFFSET(0x1D30C9C0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_LASTFRAMEFOVRESULT_OFFSET UNITYSDK_OFFSET(0x1D30BA80)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_LOCKRELATEDTARGET_OFFSET UNITYSDK_OFFSET(0x1D30C9E0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_THIRDROAMINGRELEASEENABLECAMERAPROTECT_OFFSET UNITYSDK_OFFSET(0x1D30BBE0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_THIRDROAMINGSETENABLECAMERAPROTECT_OFFSET UNITYSDK_OFFSET(0x1D30BB80)
#define RPG_CLIENT_CAMERADATAANDFLAGS_TICKNOISETRANSITION_OFFSET UNITYSDK_OFFSET(0x1D30C5F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_UNREGISTERNOISETRANSITION_OFFSET UNITYSDK_OFFSET(0x1D30C3C0)
#define RPG_CLIENT_CAMERADATAANDFLAGS__CHECKPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D30EC00)
#define RPG_CLIENT_CAMERADATAANDFLAGS__ONTEAMLEADERENTITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1D30C700)
#define RPG_CLIENT_CAMERADATAANDFLAGS__REFRESHLOCALPLAYERDEF_OFFSET UNITYSDK_OFFSET(0x1D30C750)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDataAndFlags_TypeDefinitionIndex = 71504;

	class CameraDataAndFlags : public ::System::Object
	{
	public:
		::System::String* ProjectionBlendInCurve; // 0x10
		::RPG::Client::GameCoreCameraData* _GameCoreData_k__BackingField; // 0x18
		::System::Collections::Generic::Queue_1<::RPG::Client::CameraFreelook3rdConfigData*>* CameraFreelook3rdConfigDataQueue; // 0x20
		::KFELGAIGHAP* TrackCameraExitFromStartSeq; // 0x28
		::BBICCJAGCDL* DisableProtectPriorityQueue; // 0x30
		::RPG::GameCore::GameEntity* VCameraFollowTarget; // 0x38
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* ForceHiddenEntityList; // 0x40
		::UnityEngine::Transform* ShotTemplateLookAt; // 0x48
		::System::String* TrackCameraName; // 0x50
		::AJDAJPHJBME* RoamingFreelook3rdControllerRef; // 0x58
		::ACEPKKPFMKI* _ClipPlaneOverrideQueue; // 0x60
		::System::String* ProjectionBlendOutCurve; // 0x68
		::RPG::GameCore::GameEntity* Freelook3rdCameraLookAtTarget; // 0x70
		::BLIHJELFEHM_TransitionShotData* CustomShotData; // 0x78
		::System::Collections::Generic::Queue_1<::GNBHHBLMAIM*>* VCameraShotAnimTaskQueue; // 0x80
		::DLEODCKNBBI* CurrentBaseChangeParam; // 0x88
		::KFELGAIGHAP* TrackCameraExitFromEndSeq; // 0x90
		::System::String* TrackCameraAreaName; // 0x98
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* AimTargetFocusEntityList; // 0xA0
		::LHBGGEHHLJC* RoamingVCameraControllerRef; // 0xA8
		::KFELGAIGHAP* TrackCameraOnOutOfRange; // 0xB0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::CIOANIFBLCN>* GlobalDynamicOffsetIgnoreEntityList; // 0xB8
		::LHBGGEHHLJC* CurActiveCameraController; // 0xC0
		::RPG::GameCore::GameEntity* ConfigCaster; // 0xC8
		::RPG::Client::CameraNormalConfigData* CurrentCameraNormalConfigData; // 0xD0
		::RPG::GameCore::VCameraBlend* HoldenBlendForCastAnimation; // 0xD8
		::System::Collections::Generic::Queue_1<::RPG::Client::CameraLookAtConfigData*>* CameraLookAtConfigDataQueue; // 0xE0
		::UnityEngine::Transform* ShotTemplateFollow; // 0xE8
		::RPG::Client::CameraResultData LastResult; // 0xF0
		::AJDAJPHJBME* Freelook3rdControllerRef; // 0x188
		::System::Collections::Generic::Queue_1<::PMCCDNCDGJJ*>* DeferredCameraAfterCloseupShot; // 0x190
		::RPG::GameCore::GameEntity* CurrentPlayerEntity; // 0x198
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::VCameraState, ::RPG::Client::CameraNormalConfigData*>* StateAdditiveNormalConfigMap; // 0x1A0
		::NEOCEOCDEAF* NoiseTransition; // 0x1A8
		::RPG::Client::CameraFreelook3rdConfigData* CurrentFreelook3rdChangeParam; // 0x1B0
		::JBDGMDEOBIO* CameraConfigRecoverData; // 0x1B8
		::UnityEngine::Transform* OverrideFreelook3rdTarget; // 0x1C0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* HideEntityList; // 0x1C8
		::RPG::Client::ShotTemplateRuntime* ShotTemplate; // 0x1D0
		::System::String* IsometricCurvePath; // 0x1D8
		::RPGTools::Timeline::CameraData* PlayingCameraTimelineData; // 0x1E0
		::RPG::Client::CameraResultData CurrentResult; // 0x1E8
		::System::Collections::Generic::Queue_1<::ONGJAABPPCP*>* CameraCloseupShotTaskQueue; // 0x280
		::EKKGJHMHIIB* GlobalNamedDynamicOffsetData; // 0x288
		::Cinemachine::CinemachineBrain* _CinemachineBrainRef_k__BackingField; // 0x290
		::System::Collections::Generic::Queue_1<::CameraShakeTask*>* VCameraShakeTaskQueue; // 0x298
		::RPG::Client::CameraNormalConfigData* NextCameraNormalConfigData; // 0x2A0
		::Cinemachine::CinemachineVirtualCameraBase* LittleGameDirectCamera; // 0x2A8
		::System::Single ProjectionBlendOutTime; // 0x2B0
		::UnityEngine::Vector3 LastSelectDarkTeamEntityAim; // 0x2B4
		::System::Boolean ForbidCameraZoomChange; // 0x2C0
		::System::Boolean DisableFreelook3rdCameraInput; // 0x2C1
		::System::Boolean _LockRelatedTarget_k__BackingField; // 0x2C2
		::System::Boolean CloseupShotPureTimelineAnimFlag; // 0x2C3
		::System::Boolean IsFreeLookAt; // 0x2C4
		::System::Boolean IsRecovering; // 0x2C5
		::System::Boolean DofGetNewConfig; // 0x2C6
		::System::Boolean ForbidCameraShake; // 0x2C7
		::RPG::GameCore::TeamFormationType LightTeamRefreshTypeWhenSetVCameraConfig; // 0x2C8
		::UnityEngine::Vector3 OpticalIllusionPosition; // 0x2CC
		::System::Single FreeLookMinDistance; // 0x2D8
		::System::Single CameraZoomRatio; // 0x2DC
		::System::Boolean _BlockAimDampUntilLookAtTargetMoved_k__BackingField; // 0x2E0
		::System::Boolean ForbidAimOffsetLerpFlag; // 0x2E1
		::System::Boolean CameraDampSmoothReset; // 0x2E2
		::System::Boolean MazeBattleTransitionOpen; // 0x2E3
		::System::Single MazeBattleTransitionOverrideInitBlendTime; // 0x2E4
		::System::UInt32 _DisableProtectCount; // 0x2E8
		::CHFAIKPJMGE DisableFreelook3rdCameraInputX; // 0x2EC
		::System::Boolean IsNoiseOpen; // 0x2F0
		::System::Boolean DofNeedReset; // 0x2F1
		::System::Boolean CameraZoomEnable; // 0x2F2
		::System::Boolean IsShowEntityListIgnoreDither; // 0x2F3
		::System::Single OrthographicSize; // 0x2F4
		::System::Single MoveControlDistance; // 0x2F8
		::System::Single TargetAutoAdsorbAxisY; // 0x2FC
		::System::Single CameraZoomDistanceDelta; // 0x300
		::System::Single TrackRoamingXAnglePercentage; // 0x304
		::System::Single OverrideAimOffsetLerpRatio; // 0x308
		::CHFAIKPJMGE DisableFreelook3rdCameraInputY; // 0x30C
		::System::Boolean TrackCameraEnable; // 0x310
		::System::Boolean IsNeedBlend; // 0x311
		::System::Boolean IsForceHugeMonsterHalfDither; // 0x312
		::System::Boolean RoamingUseInitLookAtPos; // 0x313
		::System::Single FirstPersonHeightOverride; // 0x314
		::System::Boolean ResetToFightNormalModeFlag; // 0x318
		::System::Boolean LookAtLockAxisInput; // 0x319
		::System::Boolean DoOpticalIllusionSet; // 0x31A
		::System::Boolean ForbidRoamingZoomChange; // 0x31B
		::System::Single IsometricOrthographicSize; // 0x31C
		::UnityEngine::Vector2 ShotAimScreenOffset; // 0x320
		::System::Boolean KeepInputCameraDirection; // 0x328
		::System::Boolean DisableElevationDither; // 0x329
		::System::Boolean LockRecenterY; // 0x32A
		::System::Boolean StartIsometricSizeBlend; // 0x32B
		::System::Single TrackCameraPathWayDetectWidth; // 0x32C
		::FLALMMMNNOG UltraDistanceGlobalDynamicOffsetData; // 0x330
		::System::Single DialogModeBlendingWeight; // 0x354
		::System::Single TrackRoamingAngleDeadZoneLimitX; // 0x358
		::System::Boolean PendingCutOnNextVCameraChange; // 0x35C
		::System::Boolean NoiseTransitionFinishNeedApply; // 0x35D
		::System::Boolean ForceHiddenEntityReset; // 0x35E
		::System::Boolean IsForbidHugeMonsterHalfDither; // 0x35F
		::UnityEngine::Vector3 OffsetPos; // 0x360
		::System::Boolean ForbidRoamingPosUpdate; // 0x36C
		::System::Boolean TrackCameraMappingInput; // 0x36D
		::System::Boolean ClearHidingEntityFlag; // 0x36E
		::System::Boolean ResetTeamRootPos; // 0x36F
		::RPG::GameCore::ActiveTrackCameraMode TrackCameraPlayMode; // 0x370
		::System::Single ProjectionBlendInTime; // 0x374
		::System::Single TrackRoamingAngleRecoverDamp; // 0x378
		::RPG::GameCore::TeamFormationType DarkTeamRefreshTypeWhenSetVCameraConfig; // 0x37C
		::System::Single TrackRoamingAngleRotationFactorMin; // 0x380
		::System::Single CameraZoomDistance; // 0x384
		::System::Single MazeBattleTransitionSpeed; // 0x388
		::System::Single FOVAdaptionRatio; // 0x38C
		::System::Boolean ForbidRoamingInput; // 0x390
		::System::Boolean IsAutoAdsorbOn; // 0x391
		::System::Boolean EnableProtectAfterBlend; // 0x392
		::System::Boolean ShotTemplateDirty; // 0x393
		::System::Boolean IsPlayerDitherByDistance; // 0x394
		::System::Boolean DoProjectionBlendToOrthographic; // 0x395
		::System::Boolean DisableDitherClose; // 0x396
		::System::Boolean VCameraDitherNPCOn; // 0x397
		::System::Int32 TrackCameraStartBlendOutIndex; // 0x398
		::UnityEngine::Vector3 RoamingInitForward; // 0x39C
		::System::Nullable_1<::UnityEngine::Vector3> DialogModeTargetPos; // 0x3A8
		::System::Byte _padding0[0x8];
		::UnityEngine::Vector2 refAnchorAngularVelocity; // 0x3B8
		::RPG::Client::CameraDataAndFlags_KeepOrthographicOnResetReason KeepOrthographicOnResetCounter; // 0x3C0
		::System::Single CameraAimOffsetDelta; // 0x3C4
		::System::UInt32 ConfigVersion; // 0x3C8
		::System::Single TrackRoamingStandardSpeed; // 0x3CC
		::System::Single CameraZoomVelocityAdditiveRatio; // 0x3D0
		::System::Boolean RoamingVCameraControllerDragMode; // 0x3D4
		::System::Boolean IsScreenPointerDown; // 0x3D5
		::System::Boolean IsCloseFightDitherDarkRight; // 0x3D6
		::System::Boolean ResetToFaceDir; // 0x3D7
		::RPG::GameCore::CameraMode CurrentMode; // 0x3D8
		::System::Single OpticalIllusionSize; // 0x3DC
		::System::Boolean LookAtUnlockAxisInputAfterRecover; // 0x3E0
		::System::Boolean BlockVCameraChange; // 0x3E1
		::System::Boolean ShotAnimClear; // 0x3E2
		::System::Boolean ForbidCameraZoomInput; // 0x3E3
		::System::Boolean ResetCinemachineZoomFlag; // 0x3E4
		::System::Boolean NoiseIgnoreActionWaitOrder; // 0x3E5
		::System::Boolean IsInBattleDataViewMode; // 0x3E6
		::System::Boolean IsometricUseCurve; // 0x3E7
		::System::Single RoamingZoomValue; // 0x3E8
		::UnityEngine::Vector3 CameraShakeRotOffset; // 0x3EC
		::System::Single TrackRoamingAngleLimitY; // 0x3F8
		::RPG::Client::CameraDataAndFlags_RoamingStyle CurRoamingStyle; // 0x3FC
		::UnityEngine::Matrix4x4 PresetOrthographicProjectionMatrix; // 0x400
		::MLLKNHEPNNF CurrentFrameResult; // 0x440
		::System::Single _LastFrameFovResult_k__BackingField; // 0x448
		::UnityEngine::Vector3 RoamingInitLookAtPos; // 0x44C
		::System::Single TrackRoamingAngleDeadZoneLimitY; // 0x458
		::System::Single CameraZoomAddValue; // 0x45C
		::UnityEngine::Vector3 FreeLookAtPos; // 0x460
		::RPG::GameCore::AdventureCameraOrthographicResetMode OrthographicMatrixResetMode; // 0x46C
		::MLLKNHEPNNF LastFrameResult; // 0x470
		::System::Nullable_1<::System::Single> DialogModeZoomDistance; // 0x478
		::System::Nullable_1<::UnityEngine::Vector3> Freelook3rdChangeParamFollowDamping; // 0x480
		::System::Byte _padding1[0x8];
		::System::Single DialogModeBlendingRatio; // 0x490
		::RPG::Client::CameraDataAndFlags_MazeBattleShotDataType ShotDataType; // 0x494
		::UnityEngine::Vector3 ShotInitCenterPos; // 0x498
		::System::Boolean EnableFreelookCameraDragMode; // 0x4A4
		::System::Boolean DoProjectionBlendRecoverToProjection; // 0x4A5
		::System::Boolean ChangeDOF; // 0x4A6
		::System::Boolean BlendOutImmediately; // 0x4A7
		::UnityEngine::Vector3 CameraShakePosOffset; // 0x4A8
		::UnityEngine::Vector3 ForwardDir; // 0x4B4
		::System::Single ScreenPointUpTimer; // 0x4C0
		::System::Single MazeBattleTransitionWorldYOffset; // 0x4C4
		::System::Single TrackRoamingAngleRotationFactorMax; // 0x4C8
		::System::Single VCameraDitherAlphaNPCMin; // 0x4CC
		::System::UInt32 TrackPathWayID; // 0x4D0
		::System::Single TrackRoamingStandardScreenDis; // 0x4D4
		::System::Boolean IsCameraBlendCut; // 0x4D8
		::System::Boolean DialogModeBlending; // 0x4D9
		::System::Boolean UseLookAtChangeOffset; // 0x4DA
		::System::Byte _padding2[0x1];
		::UnityEngine::Vector2 LookAtMouseSpeedRatio; // 0x4DC
		::System::Single BlockDitherTime; // 0x4E4
		::BLIHJELFEHM_TransitionMode MazeBattleTransitionMode; // 0x4E8
		::System::Single TrackRoamingSpeedDamp; // 0x4EC
		::System::Single RoamingInitFov; // 0x4F0
		::RPG::Client::CameraDataAndFlags_TrackCameraTrackType TrackCameraUseTrackType; // 0x4F4
		::UnityEngine::Vector3 CameraAimOffsetResult; // 0x4F8
		::RPG::Client::CameraDataAndFlags_TrackRoamingCameraRotationMode TrackRoamingRotationMode; // 0x504
		::System::Boolean CloseupPendingTimelineUpdate; // 0x508
		::System::Boolean DisableCameraRecenter; // 0x509
		::System::Boolean MazePrepareTriggerBattle; // 0x50A
		::System::Boolean HasProtectDistance; // 0x50B
		::UnityEngine::Vector3 ShotAnimOffset; // 0x50C
		::System::Single FreeLookMaxDistance; // 0x518
		::System::Boolean CameraRotating; // 0x51C
		::System::Boolean DoIsometricSizeBlend; // 0x51D
		::System::Boolean CloseupShotExitFlag; // 0x51E
		::System::Boolean IsForceClearDitherOnce; // 0x51F
		::System::Int32 TrackCameraEndBlendInIndex; // 0x520
		::System::UInt32 TrackPathWayGroupID; // 0x524
		::RPG::GameCore::VCameraState NextVCameraState; // 0x528
		::System::Single OverrideRayHitDietherCheckInterval; // 0x52C
		::System::Int32 ConfigPriority; // 0x530
		::System::Single FOVSmoothDampTime; // 0x534
		::System::Single MoveControlDir; // 0x538
		::System::Single VCameraDitherNPCMaxDistance; // 0x53C
		::RPG::GameCore::VCameraState CurVCameraState; // 0x540
		::System::Boolean ResetZoomKeepCameraBlend; // 0x544
		::System::Boolean NeedDefaultBlendCurveFlag; // 0x545
		::System::Boolean MazeBattleTransitionOverrideWorldYOffset; // 0x546
		::System::Boolean ResetCinemachineZoomImmFlag; // 0x547
		::System::Nullable_1<::System::Single> EraLightFollowModeZoomDistanceLimit; // 0x548
		::System::Nullable_1<::UnityEngine::Vector3> Freelook3rdChangeParamLookAtDamping; // 0x550
		::System::Byte _padding3[0x8];
		::System::UInt32 PauseLateUpdateCount; // 0x560
		::UnityEngine::Vector3 ShotAimCenterPos; // 0x564
		::System::Single RoamingCurFovRatio; // 0x570
		::UnityEngine::Quaternion OpticalIllusionRotation; // 0x574
		::System::Single TargetAutoAdsorbFaceDir; // 0x584
		::System::Single NearClippingPlane; // 0x588
		::System::Single TrackRoamingAngleLimitX; // 0x58C
		::System::Single ScreenPointDownTimer; // 0x590
		::System::Single TrackRoamingRotationFactor; // 0x594
		::BJCFIOLIACA DofConfig; // 0x598
		::UnityEngine::Matrix4x4 ProjectionBlendCameraOriMatrix; // 0x5AC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_CTOR_OFFSET))(this);
		}

		::System::Single GetTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETTIMESCALE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntityList* QueryCharactersInTeam(::RPG::GameCore::TeamTypeMask a1, ::RPG::GameCore::AliveStateMask a2)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_QUERYCHARACTERSINTEAM_OFFSET))(this, a1, a2);
		}

		::System::Single GetTeamFormationWidth(::RPG::GameCore::TeamType a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMFORMATIONWIDTH_OFFSET))(this, a1);
		}

		::System::Single GetLightTeamFormationWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONWIDTH_OFFSET))(this);
		}

		::System::Single GetDarkTeamFormationWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONWIDTH_OFFSET))(this);
		}

		::RPG::MVector3 GetLightTeamLeft()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMLEFT_OFFSET))(this);
		}

		::RPG::MVector3 GetLightTeamForward()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORWARD_OFFSET))(this);
		}

		::System::Single GetDarkTeamMaxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMMAXHEIGHT_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetDarkTeamEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetLightTeamEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMENTITY_OFFSET))(this);
		}

		::RPG::MQuaternion GetLightTeamRotation()
		{
			return ((::RPG::MQuaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMROTATION_OFFSET))(this);
		}

		::UnityEngine::Transform* GetLightTeamLockTargetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMLOCKTARGETTRANSFORM_OFFSET))(this);
		}

		::System::Single GetBattleMonsterCameraOffsetHeight(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETBATTLEMONSTERCAMERAOFFSETHEIGHT_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterSomatoType GetCharacterSomato(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::CharacterSomatoType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETCHARACTERSOMATO_OFFSET))(this, a1);
		}

		::System::Single GetLightTeamFaceDir()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFACEDIR_OFFSET))(this);
		}

		::RPG::MVector3 GetTeamAliveEntitiesCenterWorldPos(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMALIVEENTITIESCENTERWORLDPOS_OFFSET))(this, a1);
		}

		::RPG::MVector3 GetLightTeamFormationCenterWorldPos()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONCENTERWORLDPOS_OFFSET))(this);
		}

		::RPG::MVector3 GetLightTeamFormationCenterWorldPosFromBoundBox()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONCENTERWORLDPOSFROMBOUNDBOX_OFFSET))(this);
		}

		::RPG::MVector3 GetDarkTeamFormationCenterWorldPos()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONCENTERWORLDPOS_OFFSET))(this);
		}

		::RPG::MVector3 GetDarkTeamFormationCenterWorldPosFromBoundBox()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONCENTERWORLDPOSFROMBOUNDBOX_OFFSET))(this);
		}

		::System::Single GetTransformComponentYawAngle(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETTRANSFORMCOMPONENTYAWANGLE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetAdjoinAtkTargetAveragePos(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillCharacterComponent* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillCharacterComponent*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETADJOINATKTARGETAVERAGEPOS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_DISPOSE_OFFSET))(this);
		}

		::LOHLDEIBJLO GetInheritParams()
		{
			return ((::LOHLDEIBJLO(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETINHERITPARAMS_OFFSET))(this);
		}

		::System::Void ApplyInheritParams(::LOHLDEIBJLO a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOHLDEIBJLO))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_APPLYINHERITPARAMS_OFFSET))(this, a1);
		}

		::System::Boolean get_BlockAimDampUntilLookAtTargetMoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET))(this);
		}

		::System::Void set_BlockAimDampUntilLookAtTargetMoved(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET))(this, a1);
		}

		::System::Single get_LastFrameFovResult()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_LASTFRAMEFOVRESULT_OFFSET))(this);
		}

		::System::Void set_LastFrameFovResult(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_LASTFRAMEFOVRESULT_OFFSET))(this, a1);
		}

		::System::Boolean get_DisableProtectFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_DISABLEPROTECTFLAG_OFFSET))(this);
		}

		::System::Void DisableCameraProtect(::System::Boolean a1, ::RPG::Client::CameraDataAndFlags_DisableCameraProtectReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::CameraDataAndFlags_DisableCameraProtectReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_DISABLECAMERAPROTECT_OFFSET))(this, a1, a2);
		}

		::System::Void ThirdRoamingSetEnableCameraProtect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_THIRDROAMINGSETENABLECAMERAPROTECT_OFFSET))(this);
		}

		::System::Void ThirdRoamingReleaseEnableCameraProtect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_THIRDROAMINGRELEASEENABLECAMERAPROTECT_OFFSET))(this);
		}

		::System::Boolean get_HasClipPlaneOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_HASCLIPPLANEOVERRIDE_OFFSET))(this);
		}

		::System::Void PushClipPlaneOverride(::RPG::Client::CameraDataAndFlags_ClipPlaneOverridePriority a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags_ClipPlaneOverridePriority, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_PUSHCLIPPLANEOVERRIDE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveClipPlaneOverride(::RPG::Client::CameraDataAndFlags_ClipPlaneOverridePriority a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags_ClipPlaneOverridePriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_REMOVECLIPPLANEOVERRIDE_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> GetCurrentClipPlaneOverride()
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETCURRENTCLIPPLANEOVERRIDE_OFFSET))(this);
		}

		::System::Void SetKeepOrthographicOnReset(::System::Boolean a1, ::RPG::Client::CameraDataAndFlags_KeepOrthographicOnResetReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::CameraDataAndFlags_KeepOrthographicOnResetReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETKEEPORTHOGRAPHICONRESET_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_KeepOrthographicOnReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_KEEPORTHOGRAPHICONRESET_OFFSET))(this);
		}

		::System::Void ApplyCameraNoiseChangeConfig(::RPG::GameCore::VCameraNoiseChange* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraNoiseChange*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_APPLYCAMERANOISECHANGECONFIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EnableNoise(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENABLENOISE_OFFSET))(this, a1);
		}

		::System::Void RegisterNoiseTransition(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_REGISTERNOISETRANSITION_OFFSET))(this, a1, a2);
		}

		::System::Void UnregisterNoiseTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_UNREGISTERNOISETRANSITION_OFFSET))(this);
		}

		::System::Void TickNoiseTransition(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_TICKNOISETRANSITION_OFFSET))(this, a1);
		}

		::System::Void _OnTeamLeaderEntityChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS__ONTEAMLEADERENTITYCHANGED_OFFSET))(this, a1);
		}

		::System::Void _RefreshLocalPlayerDef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS__REFRESHLOCALPLAYERDEF_OFFSET))(this);
		}

		::Cinemachine::CinemachineBrain* get_CinemachineBrainRef()
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_CINEMACHINEBRAINREF_OFFSET))(this);
		}

		::System::Void set_CinemachineBrainRef(::Cinemachine::CinemachineBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_CINEMACHINEBRAINREF_OFFSET))(this, a1);
		}

		::RPG::Client::GameCoreCameraData* get_GameCoreData()
		{
			return ((::RPG::Client::GameCoreCameraData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_GAMECOREDATA_OFFSET))(this);
		}

		::System::Void set_GameCoreData(::RPG::Client::GameCoreCameraData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GameCoreCameraData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_GAMECOREDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_LockRelatedTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_LOCKRELATEDTARGET_OFFSET))(this);
		}

		::System::Void set_LockRelatedTarget(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_LOCKRELATEDTARGET_OFFSET))(this, a1);
		}

		::System::Void Refresh(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::PipelineCameraGlobalConfig* a2, ::RPG::Client::CameraModuleConfigCollection* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_REFRESH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetActiveEntityRef(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETACTIVEENTITYREF_OFFSET))(this, a1);
		}

		::System::Void SetCameraMode(::RPG::GameCore::CameraMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CameraMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETCAMERAMODE_OFFSET))(this, a1);
		}

		::RPG::GameCore::CameraMode GetCameraMode()
		{
			return ((::RPG::GameCore::CameraMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERAMODE_OFFSET))(this);
		}

		::System::Void SetVCameraConfig(::RPG::Client::PipelineCameraEngine* a1, ::RPG::GameCore::VCameraConfig* a2, ::System::Nullable_1<::RPG::MVector3> a3, ::System::Nullable_1<::RPG::MVector3> a4, ::System::Nullable_1<::RPG::MQuaternion> a5, ::RPG::GameCore::TeamType a6, ::System::Action* a7, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a8, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a9, ::RPG::GameCore::GameEntity* a10, ::RPG::GameCore::GameEntity* a11, ::RPG::GameCore::TargetEvaluator* a12, ::RPG::GameCore::TargetEvaluator* a13, ::System::Boolean a14, ::RPG::GameCore::GameEntity* a15, ::RPG::GameCore::GameEntity* a16, ::System::Single a17, ::System::Single a18, ::System::Boolean a19, ::System::Boolean a20, ::System::String* a21)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::GameCore::VCameraConfig*, ::System::Nullable_1<::RPG::MVector3>, ::System::Nullable_1<::RPG::MVector3>, ::System::Nullable_1<::RPG::MQuaternion>, ::RPG::GameCore::TeamType, ::System::Action*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::TargetEvaluator*, ::System::Boolean, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERACONFIG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21);
		}

		::System::Single CalcCameraLookAtAngle(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_CALCCAMERALOOKATANGLE_OFFSET))(this, a1);
		}

		::System::Void SetVCameraHideEntity(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::VCameraConfig* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::VCameraConfig*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAHIDEENTITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ApplyPendingCutOnNextVCameraChange(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraNormalConfigData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraNormalConfigData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_APPLYPENDINGCUTONNEXTVCAMERACHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void SetBlendConfig(::RPG::Client::PipelineCameraEngine* a1, ::RPG::GameCore::VCameraBlend* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::GameCore::VCameraBlend*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETBLENDCONFIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RecoverNormalConfigCamera(::RPG::Client::PipelineCameraEngine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_RECOVERNORMALCONFIGCAMERA_OFFSET))(this, a1);
		}

		::System::Void SetVCameraGlobalDynamicOffset(::RPG::Client::PipelineCameraEngine* a1, ::System::String* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAGLOBALDYNAMICOFFSET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ApplyVCameraShakeConfig(::RPG::Client::PipelineCameraEngine* a1, ::RPG::GameCore::VCameraConfig* a2, ::RPG::GameCore::GameEntity* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::GameCore::VCameraConfig*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_APPLYVCAMERASHAKECONFIG_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::TargetEvaluator* GetCameraShakeDistanceAttenuationTarget(::RPG::GameCore::VCameraConfig* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERASHAKEDISTANCEATTENUATIONTARGET_OFFSET))(this, a1);
		}

		::System::Void ResetVCameraGlobalDynamicOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_RESETVCAMERAGLOBALDYNAMICOFFSET_OFFSET))(this);
		}

		::System::Void SetUsingUltraDistanceGlobalDynamicOffsetFlag(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETUSINGULTRADISTANCEGLOBALDYNAMICOFFSETFLAG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::CameraFreelook3rdConfigData* EnqueueCameraFreelook3rdConfigData(::RPG::GameCore::VCameraFreelook3rdConfig* a1, ::UnityEngine::Vector3 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::CameraFreelook3rdConfigData*(*)(::PVOID, ::RPG::GameCore::VCameraFreelook3rdConfig*, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERAFREELOOK3RDCONFIGDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EnqueueCameraLookAtConfigData(::RPG::Client::CameraLookAtConfigData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraLookAtConfigData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERALOOKATCONFIGDATA_OFFSET))(this, a1);
		}

		::System::Void EnqueueDeferredCameraConfig(::PMCCDNCDGJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMCCDNCDGJJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEDEFERREDCAMERACONFIG_OFFSET))(this, a1);
		}

		::System::Void EnqueueVCameraCloseupTask(::ONGJAABPPCP* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::ONGJAABPPCP*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERACLOSEUPTASK_OFFSET))(this, a1, a2);
		}

		::System::Void EnqueueVCameraShakeTask(::CameraShakeTask* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CameraShakeTask*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHAKETASK_OFFSET))(this, a1);
		}

		::System::Void EnqueueVCameraShotAnimTask(::GNBHHBLMAIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNBHHBLMAIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHOTANIMTASK_OFFSET))(this, a1);
		}

		::System::Void ActiveShotTemplate(::RPG::Client::ShotTemplateRuntime* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ShotTemplateRuntime*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ACTIVESHOTTEMPLATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DeactiveShotTemplate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_DEACTIVESHOTTEMPLATE_OFFSET))(this);
		}

		::System::Void ConsumeShotTemplateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_CONSUMESHOTTEMPLATEDATA_OFFSET))(this);
		}

		::System::Void PauseCameraUpdate(::System::Boolean a1, ::RPG::Client::CameraDataAndFlags_PauseMainCameraUpdateReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::CameraDataAndFlags_PauseMainCameraUpdateReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_PAUSECAMERAUPDATE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckPriority(::RPG::Client::PipelineCameraEngine* a1, ::RPG::GameCore::VCameraConfig* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS__CHECKPRIORITY_OFFSET))(this, a1, a2);
		}

	};
}
