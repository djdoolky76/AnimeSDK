#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/MoleMole/Config/ConfigMisc_HPBarLineColorParam.h"
#include "unitysdk/MoleMole/Config/ConfigMisc_HPBarLineParam.h"
#include "unitysdk/MoleMole/Config/ConfigMisc_NapAnimatorUpdateMode.h"
#include "unitysdk/MoleMole/Config/ConfigMisc_SearchValidBornPos.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/Config/InputGroup.h"
#include "unitysdk/MoleMole/FuncSwitchType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class DitherConfig; }
namespace MoleMole { class Traffic_Area; }
namespace MoleMole { class UIAvatarAnimatorParamsSetting; }
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Config { class ConfigAvatarGround; }
namespace MoleMole::Config { class ConfigHollowLevelEnd; }
namespace MoleMole::Config { class ConfigMisc_PlayerInitSetting; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class ConfigTurnback; }
namespace MoleMole::Config { class ConfigUISettings; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Shader; }

#define MOLEMOLE_CONFIG_CONFIGMISC_GETMONSTERLEVELHUDSHOWDISTANCEONIDLE_OFFSET UNITYSDK_OFFSET(0x1A031330)
#define MOLEMOLE_CONFIG_CONFIGMISC_TRYGETMONSTERLEVELHUDOVERRIDESHOWDURATIONONENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x1A031480)
#define MOLEMOLE_CONFIG_CONFIGMISC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0315E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMisc_TypeDefinitionIndex = 92037;

	class ConfigMisc : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::String* mainCityStageEntryName; // 0x58
		::System::String* mainCitySectionEntryName; // 0x60
		::MoleMole::Config::ConfigMisc_PlayerInitSetting* mainCityAvatar; // 0x68
		::System::Single globalSwitchAvatarCD; // 0x70
		::System::Int32 SwitchAvatarMaxEP; // 0x74
		::System::Single SwitchAvatarSilenceCD; // 0x78
		::System::Single SwitchAvatarForceCD; // 0x7C
		::MoleMole::Config::ConfigPosRot* posRot; // 0x80
		::MoleMole::Config::ConfigPosRot* posRotAfterBuddyQTE; // 0x88
		::MoleMole::Config::ConfigPosRot* posRotAfterBuddyQTEAssaultAid; // 0x90
		::MoleMole::Battle::AnimatorParamControl* defaultSwitchOutAnimatorParamControl; // 0x98
		::MoleMole::Battle::AnimatorParamControl* defaultSwitchInAnimatorParamControl; // 0xA0
		::System::Single defaultMinVanishDelay; // 0xA8
		::System::Single defaultMaxVanishDelay; // 0xAC
		::System::Single defaultTriggerSwitchOutDelay; // 0xB0
		::System::Single defaultTriggerSwitchInDelay; // 0xB4
		::System::Single defaultFadeOutDuration; // 0xB8
		::System::Single defaultFadeInDuration; // 0xBC
		::System::Collections::Generic::List_1<::System::String*>* SwitchOutAnimatorZoneTags; // 0xC0
		::System::String* PerfectSwitchSPEnoughTag; // 0xC8
		::System::Single PerfectSwitchChargeValueLimit; // 0xD0
		::System::Single PerfectSwitchChargeRecoverySpeed; // 0xD4
		::System::Int32 PerfectSwitchInitEnergyPoint; // 0xD8
		::System::Int32 PerfectSwitchMaxEnergyPoint; // 0xDC
		::System::Single PerfectSwitchWindowCloseMuteSwitchTime; // 0xE0
		::System::Byte _padding0[0x4];
		::System::String* PerfectSwitchCandidateLockTargetID; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* PerfectSwitchParryAttackLevelTagMap; // 0xF0
		::System::Collections::Generic::List_1<::System::String*>* PerfectSwitchMonsterParryAttackTag; // 0xF8
		::System::Single PerfectSwitchExitParrySpecialModeClearCDTime; // 0x100
		::System::Single PerfectSwitchParrySpecialModeRBLDelta; // 0x104
		::System::Boolean PerfectSwitchParrySpecialModeEnableHitNoEffect; // 0x108
		::System::Boolean PerfectSwitchWindowForceIncludeEvadeAid; // 0x109
		::System::Byte _padding1[0x2];
		::System::Single qteTriggerDuration; // 0x10C
		::System::Int32 qteMaxPoint; // 0x110
		::System::Single defaultQTEWindowTime; // 0x114
		::System::Single defaultQTEBlockSwitchTime; // 0x118
		::System::Single defaultQTEBlockInterruptTime; // 0x11C
		::System::Single defaultQTEBlockSkillBtnTime; // 0x120
		::System::Byte _padding2[0x4];
		::System::String* defaultQteStunResetLockTargetId; // 0x128
		::System::Collections::Generic::List_1<::System::String*>* OpenQTEWindowTagList; // 0x130
		::System::Collections::Generic::List_1<::System::String*>* OpenQTEWindowTagListInExQTE; // 0x138
		::System::Collections::Generic::List_1<::System::String*>* QTEHoldIgnoreTagList; // 0x140
		::System::Collections::Generic::List_1<::System::String*>* QTEHoldBlackTagList; // 0x148
		::System::Collections::Generic::List_1<::System::String*>* QTEHoldBlackAnimZoneTagList; // 0x150
		::System::Single QTECancelDoubleClickThresholdTime; // 0x158
		::System::Single AidAttackChainAidAvatarOutDelayTime; // 0x15C
		::System::Int32 AidAttackChainAidQTESwitchInIndex; // 0x160
		::System::Single SwitchTeamInBattleProtectTime; // 0x164
		::System::String* SwitchTeamInBattleDitherKey; // 0x168
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>* mainBuddyPosRots; // 0x170
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyTeamType, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>*>* buddyTeamPosRots; // 0x178
		::MoleMole::Config::ConfigMisc_SearchValidBornPos BuddySearchValidBornPos; // 0x180
		::UnityEngine::Vector3 mainBuddyReviveOffset; // 0x198
		::System::Single mainBuddyReviveDelay; // 0x1A4
		::MoleMole::Battle::AnimatorParamControl* defaultBuddySwitchOutAnimatorParamControl; // 0x1A8
		::MoleMole::Battle::AnimatorParamControl* defaultBuddySwitchInAnimatorParamControl; // 0x1B0
		::System::Single defaultBuddyMinVanishDelay; // 0x1B8
		::System::Single defaultBuddyMaxVanishDelay; // 0x1BC
		::System::Single defaultTriggerBuddySwitchOutDelay; // 0x1C0
		::System::Single defaultTriggerBuddySwitchInDelay; // 0x1C4
		::System::Single defaultBuddyFadeOutDuration; // 0x1C8
		::System::Single defaultBuddyFadeInDuration; // 0x1CC
		::System::Single BuddyQTEGlobalCD; // 0x1D0
		::System::Single MaxSwitchPositionSearchLimitRadius; // 0x1D4
		::System::Single MaxSwitchPositionHeightDiff; // 0x1D8
		::System::Single MaxSwitchPositionSearchDistance; // 0x1DC
		::System::Single MaxSwitchPositionSearchDistanceQTE; // 0x1E0
		::System::Single MaxSwitchPositionSearchDistanceAidAttack; // 0x1E4
		::System::Single StartSwitchPositionTurnAngle; // 0x1E8
		::System::Single StartSwitchPositionTurnCheckDistance; // 0x1EC
		::System::Collections::Generic::List_1<::MoleMole::Config::AidAttackType>* AidAttackTypeLineSelectPosModeList; // 0x1F0
		::System::Single MaxLineSelectPosDistance; // 0x1F8
		::System::Boolean AidAttackUseLineSelectSwitchInPos; // 0x1FC
		::System::Byte _padding3[0x3];
		::Cinemachine::CinemachineBlendDefinition SwitchAvatarStopCameraShotBlendOutConfig; // 0x200
		::Cinemachine::CinemachineBlendDefinition LevelEndStopCameraShotBlendOutConfig; // 0x210
		::System::Boolean IgnoreStreamingPageSkillButtonBlock; // 0x220
		::System::Byte _padding4[0x7];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* GlobalSummonTagMax; // 0x228
		::MoleMole::Config::ConfigTurnback* defConfigTurnback; // 0x230
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigTurnback*>* avatarTurnbackOverrideMap; // 0x238
		::MoleMole::Config::ConfigAvatarGround* configAvatarGround; // 0x240
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ExclusivePropertyControllers; // 0x248
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* UnagiMagicValueFlameMaterial; // 0x250
		::System::Single QingYiMatChangePercantage; // 0x258
		::System::Byte _padding5[0x4];
		::System::String* QingYiMatPath; // 0x260
		::System::String* JaneMatPath; // 0x268
		::System::Single SethChangePercantage; // 0x270
		::System::Byte _padding6[0x4];
		::System::String* SethMatPath; // 0x278
		::MoleMole::Config::ConfigHollowLevelEnd* hollowLevelEnd; // 0x280
		::MoleMole::Config::ConfigUISettings* uiSettings; // 0x288
		::System::Boolean EnableGrounderIK; // 0x290
		::System::Byte _padding7[0x7];
		::System::String* LookIKTargetKey; // 0x298
		::System::String* LookIKInMainCityPlayerTargetKey; // 0x2A0
		::System::String* LookIKInMainCityNpcTargetKey; // 0x2A8
		::System::String* LookIKInMainCityNpcCameraKey; // 0x2B0
		::System::String* LockExecuteCoreKey; // 0x2B8
		::System::UInt32 ExecuteCoreMonsterTemplateID; // 0x2C0
		::System::Byte _padding8[0x4];
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>* mainBuddyBornPosRots; // 0x2C8
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyTeamType, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>*>* BuddyTeamBornPosRots; // 0x2D0
		::System::Int32 MaxFightingBuddyNum; // 0x2D8
		::System::Int32 MaxAssistingBuddyNum; // 0x2DC
		::System::Single HitOtherDistance1; // 0x2E0
		::System::Single HitOtherDistance2; // 0x2E4
		::System::Single HitOtherDistance3; // 0x2E8
		::System::Single EvadeToMoveTime; // 0x2EC
		::System::Single MoveToAttackTimeLow; // 0x2F0
		::System::Single MoveToAttackTimeHigh; // 0x2F4
		::System::Single AttackToEvadeTime; // 0x2F8
		::System::Single AttackToMoveTime; // 0x2FC
		::System::Single BuddyFollowToAttackTime; // 0x300
		::System::Single BuddyAttackToFollowTime; // 0x304
		::System::Single MonsterAttackToFollowTime; // 0x308
		::System::Single InBattleDis; // 0x30C
		::System::Single OutBattleDis; // 0x310
		::System::Single OutBattleTime; // 0x314
		::System::Single MonsterEnterBattleTime1; // 0x318
		::System::Single MonsterEnterBattleTime2; // 0x31C
		::System::Single MonsterEnterBattleTime3; // 0x320
		::System::Single MonsterEnterBattleTime4; // 0x324
		::System::Single AvatarEnterBattleDistance1; // 0x328
		::System::Single AvatarEnterBattleDistance2; // 0x32C
		::System::Single AvatarEnterBattleTime1; // 0x330
		::System::Boolean EnableSystemMuteOptimization; // 0x334
		::System::Byte _padding9[0x3];
		::System::Single MonsterEnterExitBattleMuteDistance; // 0x338
		::System::Single MonsterEnterExitBattleUnmuteDistance; // 0x33C
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* ACTOR_PROP_MIN_DICT; // 0x340
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* ACTOR_PROP_MAX_DICT; // 0x348
		::System::String* MONSTER_HUD_SCALE_CURVE; // 0x350
		::System::String* MONSTER_HUD_ALPHA_CURVE; // 0x358
		::System::Single MonsterHudLockAlphaRatio; // 0x360
		::System::Single MonsterHudLockBeHitAlphaLerpTime; // 0x364
		::System::Single MonsterHudLockBeHitAlphaKeepTime; // 0x368
		::System::Byte _padding10[0x4];
		::UnityEngine::AnimationCurve* MonsterHudGrowthCurve; // 0x370
		::System::Single MonsterHud1HpMin; // 0x378
		::UnityEngine::Vector2 MonsterHPNormalizeMap; // 0x37C
		::UnityEngine::Color MonsterHudStunColor; // 0x384
		::System::Boolean IsShowBuffRoot; // 0x394
		::System::Byte _padding11[0x3];
		::UnityEngine::Color StunLabelColor; // 0x398
		::System::Single OverDriveStunFillFadeDelayFrame; // 0x3A8
		::System::Single OverDriveStunMaxLockDelayFrame; // 0x3AC
		::System::Single OverDriveStunFadeSpeed; // 0x3B0
		::System::Single StunFadeSpeedForEtherBarrier; // 0x3B4
		::System::String* MonsterLineFadeCurveKey; // 0x3B8
		::System::Int32 LineDelayFrame; // 0x3C0
		::System::Int32 LineFrameLength; // 0x3C4
		::System::Single ElementAbnormalSwitchIconCdTime; // 0x3C8
		::System::Single StunDamageKeepTime; // 0x3CC
		::System::Single HudTagKeepTime; // 0x3D0
		::System::Single HudTagRequireTime; // 0x3D4
		::System::Boolean PreloadHUDInstance; // 0x3D8
		::System::Byte _padding12[0x3];
		::System::Int32 PreloadCommonInstanceCount; // 0x3DC
		::System::Int32 PreloadBossInstanceCount; // 0x3E0
		::UnityEngine::Color damageLineColor1; // 0x3E4
		::UnityEngine::Color damageLineColor2; // 0x3F4
		::System::Single damageLineRecoverTime; // 0x404
		::UnityEngine::AnimationCurve* damageLineRecoverCurve; // 0x408
		::System::Single damageLineKeepTime; // 0x410
		::System::Single damageLineClearTime; // 0x414
		::System::Single multiHPDamageLineClearTime; // 0x418
		::System::Byte _padding13[0x4];
		::MoleMole::Config::ConfigMisc_HPBarLineParam RecoverHPLineParam; // 0x420
		::MoleMole::Config::ConfigMisc_HPBarLineColorParam HPBarLineColor; // 0x448
		::System::Single SKILL_CD_RATIO_LIMIT_LOW; // 0x4A8
		::System::Byte _padding14[0x4];
		::MoleMole::Config::ConfigPosRot* UltimatePosRot; // 0x4B0
		::System::String* UltimateBornLockKey; // 0x4B8
		::System::Single UltimateFadeInDuration; // 0x4C0
		::System::Single UltimateFadeOutDuration; // 0x4C4
		::System::Single StunResetCD; // 0x4C8
		::System::Single lastResetStunTime; // 0x4CC
		::System::Single lastResetStunRecoverCD; // 0x4D0
		::System::Single StunResetDistance; // 0x4D4
		::System::Boolean ForbidStunAutoAwake; // 0x4D8
		::System::Byte _padding15[0x3];
		::System::Single CurStunResetParam; // 0x4DC
		::System::Single CostStunResetParam; // 0x4E0
		::System::Boolean StunResetLimit; // 0x4E4
		::System::Boolean IsBulletHitEnableMultiRecovery; // 0x4E5
		::System::Boolean IsBulletExplodeHitEnableMultiRecovery; // 0x4E6
		::System::Byte _padding16[0x1];
		::System::Single bulletHitStageCDTime; // 0x4E8
		::MoleMole::Config::ConfigMisc_NapAnimatorUpdateMode AnimatorUpdateMode; // 0x4EC
		::System::Boolean IsAnimatorEventUseFrame; // 0x4F0
		::System::Boolean IsAnimatorZoneUseFrame; // 0x4F1
		::System::Byte _padding17[0x2];
		::System::Single MinTurnAroundAngle; // 0x4F4
		::System::Single MaxTurnAroundAngle; // 0x4F8
		::System::Single NPCNameUIOffset; // 0x4FC
		::System::Single NPCMaxShowDistance; // 0x500
		::System::Single NPCMinShowDistance; // 0x504
		::System::Single NPCNameUIOffsetOnlyBubble; // 0x508
		::System::Single NPCHUDVerticalOffset; // 0x50C
		::System::Single NPCHUDMinTrackIconDistance; // 0x510
		::System::Single NPCHUDMaxTrackIconDistance; // 0x514
		::System::Single NPCHUDMinGuideIndicatorDistance; // 0x518
		::System::Single NPCHUDPixelGuideIndicatorDistance; // 0x51C
		::System::Single NPCHUDMaxNameTextDistance; // 0x520
		::System::Single NPCHUDMaxNameTextFadeOutDistance; // 0x524
		::System::Single NPCHUDMaxActiveDistance; // 0x528
		::System::Single NPCHUDChatBubbleInterruptDistance; // 0x52C
		::System::Single NPCHUDOcclusionSphereCastRadius; // 0x530
		::System::Single NPCHUDOcclusionSphereCastTargetOffset; // 0x534
		::System::Single NPCHUDOcclusionSphereCastCameraOffset; // 0x538
		::System::Single NPCHUDOcclusionHideRatio; // 0x53C
		::System::Single NPCHUDOcclusionShowRatio; // 0x540
		::System::Single NPCHUDOcclusionRaycastInterval; // 0x544
		::System::Single NPCHUDOcclusionIconOpacity; // 0x548
		::System::Single NPCHUDGuideOffset; // 0x54C
		::System::Single NPCHUDGuideOffsetWithoutName; // 0x550
		::System::Byte _padding18[0x4];
		::System::Collections::Generic::List_1<::System::UInt32>* TrashbinNPCTagIDs; // 0x558
		::System::Single TrashbinNPCTriggerTurnDistance; // 0x560
		::System::Single TrashbinNPCTriggerTurnAngle; // 0x564
		::System::String* TrashbinNPCTurnLeftTrigger; // 0x568
		::System::String* TrashbinNPCTurnRightTrigger; // 0x570
		::System::Single NpcMdbInitialBlendTime; // 0x578
		::System::Single InteractMaxTime; // 0x57C
		::System::Single WalkFarAwayTime; // 0x580
		::System::Single InteractSpeed; // 0x584
		::System::Collections::Generic::List_1<::System::Object*>* RotateInfo; // 0x588
		::System::Collections::Generic::List_1<::System::Object*>* FemaleRotateInfo; // 0x590
		::System::Single ChatTime; // 0x598
		::System::Single ResetNPCDistance; // 0x59C
		::MoleMole::UIAvatarAnimatorParamsSetting* ResetAnimatorParamsSetting; // 0x5A0
		::System::Single ResetAngle; // 0x5A8
		::System::Byte _padding19[0x4];
		::System::String* SundryTitle; // 0x5B0
		::System::String* SundryEnTitle; // 0x5B8
		::System::String* TeleportTitle; // 0x5C0
		::System::String* TeleportEnTitle; // 0x5C8
		::System::String* SundryLoopText; // 0x5D0
		::System::String* TeleportLoopText; // 0x5D8
		::System::String* EnemyIndicatorModelPath; // 0x5E0
		::System::Single EnemyIndicatorRadius; // 0x5E8
		::System::Single EnemyIndicatorHeight; // 0x5EC
		::System::Single EnemyIndicatorAppearDis; // 0x5F0
		::System::Single EnemyIndicatorDisappearDis; // 0x5F4
		::UnityEngine::Color EnemyIndicatorNormalColorA; // 0x5F8
		::UnityEngine::Color EnemyIndicatorNormalColorB; // 0x608
		::UnityEngine::Color EnemyIndicatorAttackColorA; // 0x618
		::UnityEngine::Color EnemyIndicatorAttackColorB; // 0x628
		::MoleMole::DitherConfig* EnemyIndicatorDitherConfig; // 0x638
		::UnityEngine::Color EnemyIndicatorTwinkleColorA; // 0x640
		::UnityEngine::Color EnemyIndicatorTwinkleColorB; // 0x650
		::System::Single EnemyIndicatorTwinkleFrequency; // 0x660
		::System::Int32 EnemyIndicatorTwinkleCount; // 0x664
		::System::Single EnemyIndicatorDelayHideTime; // 0x668
		::UnityEngine::Color EnemyIndicatorAttackColor02A; // 0x66C
		::UnityEngine::Color EnemyIndicatorAttackColor02B; // 0x67C
		::System::Single EnemyIndicatorAttackTwinkleFrequency; // 0x68C
		::System::String* LevelResultCameraScreenOffsetKey; // 0x690
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InputGroup, ::System::Collections::Generic::List_1<::System::String*>*>* InputMuteResetParams; // 0x698
		::System::Int32 ReconnectTime; // 0x6A0
		::System::Single ShowReconnectTime; // 0x6A4
		::System::Boolean IsLevelConditionOpen; // 0x6A8
		::System::Byte _padding20[0x3];
		::System::Single BeHitFlyConditionProtectTime; // 0x6AC
		::System::Single FlyHeightLimitStart; // 0x6B0
		::System::Single FlyHeightLimitMax; // 0x6B4
		::System::String* FlyHeightCurveKey; // 0x6B8
		::System::Single WitchSlowFlyHeightLimitStart; // 0x6C0
		::System::Single WitchSlowFlyHeightLimitMax; // 0x6C4
		::System::String* WitchSlowFlyHeightCurveKey; // 0x6C8
		::System::Boolean EnableAssistQTE; // 0x6D0
		::System::Boolean IsToggleAssistQTELongPress; // 0x6D1
		::System::Boolean DisableAssistQTECameraMoveAndInputBlock; // 0x6D2
		::System::Byte _padding21[0x1];
		::System::Single AssistQTELongPressTime; // 0x6D4
		::System::Int32 AvatarID; // 0x6D8
		::System::Byte _padding22[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* ForbiddenTrapChessID; // 0x6E0
		::System::Collections::Generic::Dictionary_2<::MoleMole::FuncSwitchType, ::System::Boolean>* funcSwitchs; // 0x6E8
		::System::String* HighlightGoPath; // 0x6F0
		::System::Boolean GalForbidClickWhenPlay; // 0x6F8
		::System::Byte _padding23[0x3];
		::System::Single GalAllowClickNarratorTime; // 0x6FC
		::System::Single GalAllowClickTextTime; // 0x700
		::System::Single GalDefaultAllowClickTextTimeWhenClose; // 0x704
		::System::Boolean ComicForbidClickWhenPlay; // 0x708
		::System::Byte _padding24[0x3];
		::System::Single ComicAllowClickNarratorTime; // 0x70C
		::System::Single AttackDistanceAttenuationRatioMin; // 0x710
		::System::Single AttackDistanceAttenuationRatioMax; // 0x714
		::System::Single WitchSlowDownProtectedTime; // 0x718
		::System::Single AttackResultFilterNavMaxDistance; // 0x71C
		::System::Single AttackResultFilterCoreDistance; // 0x720
		::System::Byte _padding25[0x4];
		::System::String* LaserBlockPointAttachPoint; // 0x728
		::System::Single AttackPatternHitColliderDistanceWeight; // 0x730
		::System::Single AttackPatternHitColliderAngleWeight; // 0x734
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* ResetAnimCtrlerTriggers; // 0x738
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* ResetAnimCtrlerBools; // 0x740
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* ResetAnimCtrlerInts; // 0x748
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* ResetAnimCtrlerFloats; // 0x750
		::System::String* DisableAlliesCollisionAbilityKey; // 0x758
		::System::String* DisableAlliesCollisionDitherKey; // 0x760
		::System::Single LerpLogicVelocityThreshold; // 0x768
		::System::Single LogicVelocityResetLerpDiff; // 0x76C
		::System::Single RightJoyStickRatio; // 0x770
		::System::Single RightJoyStickThreshold; // 0x774
		::System::Single LeftJoyStickRatio; // 0x778
		::System::Boolean OpenMatCapFade; // 0x77C
		::System::Byte _padding26[0x3];
		::System::Single MatCapFadeDuration; // 0x780
		::System::Single MinRopeMixinTimeScale; // 0x784
		::System::Boolean UseTestRopeDampingScale; // 0x788
		::System::Byte _padding27[0x3];
		::System::Single TestYiXuanUIFadeoutDelay; // 0x78C
		::System::Boolean SpecialEffectForceCheckDestroyEveryFrame; // 0x790
		::System::Byte _padding28[0x3];
		::System::Single TeleportSelectDelay; // 0x794
		::System::Boolean OpenTestGhost; // 0x798
		::System::Byte _padding29[0x3];
		::System::Int32 MaxGhostCount; // 0x79C
		::System::Single GhostEchoTime; // 0x7A0
		::System::Single GhostLifeTime; // 0x7A4
		::System::Boolean NameEffectsMgrEnable; // 0x7A8
		::System::Boolean RoleHudUltGoHandleEnable; // 0x7A9
		::System::Boolean AttachPointsRegisterHandleEnable; // 0x7AA
		::System::Boolean HandleInitDynamicAccsRenderers; // 0x7AB
		::System::Boolean OutsideModelAttachPointFallbackEnable; // 0x7AC
		::System::Boolean MatPropMdfUvSpeedFirstFrameFixEnable; // 0x7AD
		::System::Boolean EnableZenkovAlertPoint; // 0x7AE
		::System::Boolean WindCatalyzeConvertSameElementEnable; // 0x7AF
		::System::Boolean MonsterAlertCheckEnemyWhenBeingHit; // 0x7B0
		::System::Byte _padding30[0x3];
		::System::Single MonsterHudDistanceCullSqr; // 0x7B4
		::System::Boolean CustomTagsUseAnimator; // 0x7B8
		::System::Boolean MonsterAlertDistUseDirectDist; // 0x7B9
		::System::Byte _padding31[0x2];
		::System::Int32 MonsterEnterBattleNavmeshFraneSkipCount; // 0x7BC
		::System::Collections::Generic::HashSet_1<::System::Int32>* DynamicAccRequiredMonsterSubIDs; // 0x7C0
		::System::Boolean MAFiltersUseDeepCopy; // 0x7C8
		::System::Boolean MonsterHudRespectUIHideItemEnable; // 0x7C9
		::System::Boolean StunElapsedTimeIgnoreQTEResetEnable; // 0x7CA
		::System::Boolean PauseScreenEffectFollowUIFadeEnable; // 0x7CB
		::System::Boolean GachaPreloadUseSyncLoadEnable; // 0x7CC
		::System::Byte _padding32[0x3];
		::System::Int32 ElementEffectiveResistThreshold; // 0x7D0
		::System::Int32 ElementIneffectiveResistThreshold; // 0x7D4
		::System::Collections::Generic::HashSet_1<::System::String*>* ElementAllActorPropertyList; // 0x7D8
		::System::String* SolidProjectileTagName; // 0x7E0
		::System::String* IndicatedLightModelPath; // 0x7E8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Shader*>* Shaders; // 0x7F0
		::System::Boolean isOpenTrafficArea; // 0x7F8
		::System::Byte _padding33[0x7];
		::System::Collections::Generic::List_1<::MoleMole::Traffic_Area*>* TrafficAreas; // 0x800
		::System::Int32 CloudPlatformPerfectSwitchExtentFrame; // 0x808
		::System::Byte _padding34[0x4];
		::System::Collections::Generic::List_1<::System::String*>* PromoteMonsterEnableTags; // 0x810
		::System::Single BigSceneReportPropertiesTime; // 0x818
		::System::Byte _padding35[0x4];
		::System::String* ReplaceTeamMatAniKey; // 0x820
		::System::Single MonsterLevelHUDShowDistanceOnIdle; // 0x828
		::System::Single MonsterLevelHUDHideDelayOnIdle; // 0x82C
		::System::Single MonsterLevelHUDShowDurationOnEnterBattle; // 0x830
		::System::Byte _padding36[0x4];
		::System::String* MonsterLevelHUDRedMatPath; // 0x838
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* MonsterLevelHUDOverrideParams; // 0x840
		::System::String* IgnisFatuusEffAttachPoint; // 0x848
		::System::String* IgnisFatuusMatPropertyModifierKey; // 0x850
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EntityType, ::System::String*>* EntityIgnisFatuusEffects; // 0x858
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* IgnisFatuusEffectMaterialControls; // 0x860
		::System::Single SocialCirlceMsgCacheTime; // 0x868
		::System::Byte _padding37[0x4];
		::System::String* WeakPanelWoundLockZoneTag; // 0x870
		::System::Collections::Generic::HashSet_1<::System::Int32>* EffectShapeForceLODMeshCasterIDs; // 0x878

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC__CTOR_OFFSET))(this);
		}

		::System::Single GetMonsterLevelHUDShowDistanceOnIdle(::System::String* key)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_GETMONSTERLEVELHUDSHOWDISTANCEONIDLE_OFFSET))(this, key);
		}

		::System::Boolean TryGetMonsterLevelHUDOverrideShowDurationOnEnterBattle(::System::String* key, ::System::Single& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_TRYGETMONSTERLEVELHUDOVERRIDESHOWDURATIONONENTERBATTLE_OFFSET))(this, key, value);
		}
	};
}
