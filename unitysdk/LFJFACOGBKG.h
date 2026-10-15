#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimAnimatorCullingMode.h"
#include "unitysdk/UnityEngine/AnimatorCullingMode.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/RPG/MVector3.h"
class EFODGECFLLC;
class HIOEAKHGILF;
class NDNNILEFPHG;
class PEEDLCHFAFL;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::GameCore { class FiveDimAddDynamicColliderDetectAction; }
namespace RPG::GameCore { class FiveDimAddGlobalTimeScaleAction; }
namespace RPG::GameCore { class FiveDimAddMoneyAction; }
namespace RPG::GameCore { class FiveDimAddRTPCAction; }
namespace RPG::GameCore { class FiveDimApplyPlayerInteractAction; }
namespace RPG::GameCore { class FiveDimAudioPostEventAction; }
namespace RPG::GameCore { class FiveDimAudioSetStateAction; }
namespace RPG::GameCore { class FiveDimBaseScrollGameEndAction; }
namespace RPG::GameCore { class FiveDimBeatBackPlayerAction; }
namespace RPG::GameCore { class FiveDimBroadcastEventToChildrenMinionAction; }
namespace RPG::GameCore { class FiveDimBubbleTalkAction; }
namespace RPG::GameCore { class FiveDimCameraShakeAction; }
namespace RPG::GameCore { class FiveDimChenLingCaptureFrameAction; }
namespace RPG::GameCore { class FiveDimChenLingEmotionAudioPostEventAction; }
namespace RPG::GameCore { class FiveDimClearPlayerVelocityAction; }
namespace RPG::GameCore { class FiveDimClientFinishMissionAction; }
namespace RPG::GameCore { class FiveDimConditionAllOf; }
namespace RPG::GameCore { class FiveDimConditionAnyOf; }
namespace RPG::GameCore { class FiveDimConditionNoneOf; }
namespace RPG::GameCore { class FiveDimCreateMascotFakePlayerAction; }
namespace RPG::GameCore { class FiveDimCreatePhantomPlayerAction; }
namespace RPG::GameCore { class FiveDimCrystalChangeHPAction; }
namespace RPG::GameCore { class FiveDimDebugLogEventAction; }
namespace RPG::GameCore { class FiveDimDestroyCleanerBotAction; }
namespace RPG::GameCore { class FiveDimDestroyMascotFakePlayerAction; }
namespace RPG::GameCore { class FiveDimDestroyPhantomPlayerAction; }
namespace RPG::GameCore { class FiveDimDropEntityAction; }
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace RPG::GameCore { class FiveDimEnableGrenadierAttackAction; }
namespace RPG::GameCore { class FiveDimEnableIntervalSpawnAction; }
namespace RPG::GameCore { class FiveDimEnableSimpleHitBoxAction; }
namespace RPG::GameCore { class FiveDimEnergyBlockChargeAction; }
namespace RPG::GameCore { class FiveDimEnterDashPrepareStateAction; }
namespace RPG::GameCore { class FiveDimEnterHiddenAreaAction; }
namespace RPG::GameCore { class FiveDimEvilSmileCrazyAction; }
namespace RPG::GameCore { class FiveDimEvilSmileDieAction; }
namespace RPG::GameCore { class FiveDimEvilSmileSetTraceTargetAction; }
namespace RPG::GameCore { class FiveDimFinishChenLingGameBoyAction; }
namespace RPG::GameCore { class FiveDimFireAvatarEffectAction; }
namespace RPG::GameCore { class FiveDimFireEffectAction; }
namespace RPG::GameCore { class FiveDimForceResetMascotFakePlayerAction; }
namespace RPG::GameCore { class FiveDimForceResetPlayerAction; }
namespace RPG::GameCore { class FiveDimGarbageBinFinishMoveAction; }
namespace RPG::GameCore { class FiveDimGrenadierAttackAction; }
namespace RPG::GameCore { class FiveDimJumpToSplinePointAction; }
namespace RPG::GameCore { class FiveDimKillAvatarEffectAction; }
namespace RPG::GameCore { class FiveDimLightningChangeStateAction; }
namespace RPG::GameCore { class FiveDimMiniGameCoinCollectedAction; }
namespace RPG::GameCore { class FiveDimMinionDestroyByPresetNameAction; }
namespace RPG::GameCore { class FiveDimMinionDestroySelfAction; }
namespace RPG::GameCore { class FiveDimMissionTalkAction; }
namespace RPG::GameCore { class FiveDimMoveToMascotFakePlayerAction; }
namespace RPG::GameCore { class FiveDimMoveToNextSplinePointAction; }
namespace RPG::GameCore { class FiveDimMoveToSpecificSplinePointAction; }
namespace RPG::GameCore { class FiveDimMutePlayerInputAction; }
namespace RPG::GameCore { class FiveDimMutePlayerSkillAction; }
namespace RPG::GameCore { class FiveDimMuteUIInputAction; }
namespace RPG::GameCore { class FiveDimOverrideGrenadierTargetAction; }
namespace RPG::GameCore { class FiveDimOverrideSimpleGameLevelTipAction; }
namespace RPG::GameCore { class FiveDimPauseMusicAction; }
namespace RPG::GameCore { class FiveDimPlayShootArrowAnimAction; }
namespace RPG::GameCore { class FiveDimPlaySummonBotAnimAction; }
namespace RPG::GameCore { class FiveDimPlayUsePropAnimAction; }
namespace RPG::GameCore { class FiveDimPlayerSkillArrowCondition; }
namespace RPG::GameCore { class FiveDimPlayerSkillCleanerBotCondition; }
namespace RPG::GameCore { class FiveDimPlayerSkillDashCondition; }
namespace RPG::GameCore { class FiveDimPropBakedMoveConfig; }
namespace RPG::GameCore { class FiveDimRIStateEmissionAction; }
namespace RPG::GameCore { class FiveDimRandomBubbleTalkAction; }
namespace RPG::GameCore { class FiveDimRefillPlayerDashEnergyAction; }
namespace RPG::GameCore { class FiveDimRefillPlayerJumpEnergyAction; }
namespace RPG::GameCore { class FiveDimRemoveGlobalTimeScaleAction; }
namespace RPG::GameCore { class FiveDimResetBillboardAction; }
namespace RPG::GameCore { class FiveDimResumeMusicAction; }
namespace RPG::GameCore { class FiveDimReverseGeckoMoveAction; }
namespace RPG::GameCore { class FiveDimSetAdvAchievementAction; }
namespace RPG::GameCore { class FiveDimSetAnimParamByDoorKeyCountAction; }
namespace RPG::GameCore { class FiveDimSetAnimParamByLevelVarAction; }
namespace RPG::GameCore { class FiveDimSetAnimParamByRawLevelVarAction; }
namespace RPG::GameCore { class FiveDimSetAnimatorCullingModeAction; }
namespace RPG::GameCore { class FiveDimSetArrowCollectCoinAction; }
namespace RPG::GameCore { class FiveDimSetAudioListenerFollowTargetAction; }
namespace RPG::GameCore { class FiveDimSetBillboardAction; }
namespace RPG::GameCore { class FiveDimSetCameraActiveAction; }
namespace RPG::GameCore { class FiveDimSetColliderVisibleAction; }
namespace RPG::GameCore { class FiveDimSetConveyorDirectionAction; }
namespace RPG::GameCore { class FiveDimSetDanmuTrackAction; }
namespace RPG::GameCore { class FiveDimSetDynamicAttachAction; }
namespace RPG::GameCore { class FiveDimSetEntityVisibleAction; }
namespace RPG::GameCore { class FiveDimSetJumpEnergyVisibleAction; }
namespace RPG::GameCore { class FiveDimSetLevelVarShortAction; }
namespace RPG::GameCore { class FiveDimSetLocalAvatarJumpEnergyAction; }
namespace RPG::GameCore { class FiveDimSetPlayerInteractEnableAction; }
namespace RPG::GameCore { class FiveDimSetPlayerInvincibleAction; }
namespace RPG::GameCore { class FiveDimSetPlayerResetModeAction; }
namespace RPG::GameCore { class FiveDimSetPlayerSkillMoveAction; }
namespace RPG::GameCore { class FiveDimSetPlayerSkillUpgradeAction; }
namespace RPG::GameCore { class FiveDimSetPlayerToMusicFallAction; }
namespace RPG::GameCore { class FiveDimSetPropSpawnerEnableAction; }
namespace RPG::GameCore { class FiveDimSetRenderVisibleAction; }
namespace RPG::GameCore { class FiveDimSetRenderVisibleNeverDitherAction; }
namespace RPG::GameCore { class FiveDimSetRenderingItemStateAction; }
namespace RPG::GameCore { class FiveDimSetResetPointAction; }
namespace RPG::GameCore { class FiveDimSetSharedMatStateAction; }
namespace RPG::GameCore { class FiveDimSetSplineMoveDirectionAction; }
namespace RPG::GameCore { class FiveDimSetSplineMoveSpeedMultiplierAction; }
namespace RPG::GameCore { class FiveDimSetSplineTraceEffectVisibleAction; }
namespace RPG::GameCore { class FiveDimSetSuiyangDeadAction; }
namespace RPG::GameCore { class FiveDimSetTriggerEnableAction; }
namespace RPG::GameCore { class FiveDimShowMusicComboAction; }
namespace RPG::GameCore { class FiveDimSpawnArrowAction; }
namespace RPG::GameCore { class FiveDimSpawnCleanerBotAction; }
namespace RPG::GameCore { class FiveDimSpawnPropAction; }
namespace RPG::GameCore { class FiveDimStartChenLingGameBoyCountDownAction; }
namespace RPG::GameCore { class FiveDimStartDanmuAction; }
namespace RPG::GameCore { class FiveDimStartLimaoDropMoveAction; }
namespace RPG::GameCore { class FiveDimStartMusicAction; }
namespace RPG::GameCore { class FiveDimStartSplineMoveAction; }
namespace RPG::GameCore { class FiveDimStartSplineMoveWithParamAction; }
namespace RPG::GameCore { class FiveDimStartSuiyangBeatAction; }
namespace RPG::GameCore { class FiveDimStartWindowStageAction; }
namespace RPG::GameCore { class FiveDimStatisticGetTrainEnergyAction; }
namespace RPG::GameCore { class FiveDimStopBubbleTalkAction; }
namespace RPG::GameCore { class FiveDimStopDanmuAction; }
namespace RPG::GameCore { class FiveDimStopMusicAction; }
namespace RPG::GameCore { class FiveDimStopSplineMoveAction; }
namespace RPG::GameCore { class FiveDimStopWindowStageAction; }
namespace RPG::GameCore { class FiveDimSwitchSplineMoveDirectionAction; }
namespace RPG::GameCore { class FiveDimTeleportAction; }
namespace RPG::GameCore { class FiveDimTriggerDashOrbAction; }
namespace RPG::GameCore { class FiveDimTriggerEventNextBeatAction; }
namespace RPG::GameCore { class FiveDimTriggerGameLoadingViewAction; }
namespace RPG::GameCore { class FiveDimTriggerSelfEventAction; }
namespace RPG::GameCore { class FiveDimTryMutePlayerMoveOnSurfaceDestroyAction; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LFJFACOGBKG_CHDLENHLNKB_OFFSET UNITYSDK_OFFSET(0xB670560)
#define LFJFACOGBKG_CMAGBIELHJD_OFFSET UNITYSDK_OFFSET(0xB6741E0)
#define LFJFACOGBKG_CTOR_OFFSET UNITYSDK_OFFSET(0xB6688B0)
#define LFJFACOGBKG_EPJDMHODBNF_OFFSET UNITYSDK_OFFSET(0xB670AD0)
#define LFJFACOGBKG_GET__TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0xB675AE0)
#define LFJFACOGBKG_GGJDABLPGGA_OFFSET UNITYSDK_OFFSET(0xB6703B0)
#define LFJFACOGBKG_HEELDKBGJDC_OFFSET UNITYSDK_OFFSET(0xB6737A0)
#define LFJFACOGBKG_LFHADAPBLOH_OFFSET UNITYSDK_OFFSET(0xB672540)
#define LFJFACOGBKG_LJCDMNOKDEN_OFFSET UNITYSDK_OFFSET(0xB670660)
#define LFJFACOGBKG_OBJCFBJGHAN_OFFSET UNITYSDK_OFFSET(0xB6738E0)
#define LFJFACOGBKG_OPOJEJDEJJN_OFFSET UNITYSDK_OFFSET(0xB673AC0)
#define LFJFACOGBKG_PELNNEOJPNE_OFFSET UNITYSDK_OFFSET(0xB673A10)
#define LFJFACOGBKG__CHECKCONDITION_1_OFFSET UNITYSDK_OFFSET(0xB679720)
#define LFJFACOGBKG__CHECKCONDITION_2_OFFSET UNITYSDK_OFFSET(0xB679810)
#define LFJFACOGBKG__CHECKCONDITION_3_OFFSET UNITYSDK_OFFSET(0xB679900)
#define LFJFACOGBKG__CHECKCONDITION_4_OFFSET UNITYSDK_OFFSET(0xB679A20)
#define LFJFACOGBKG__CHECKCONDITION_5_OFFSET UNITYSDK_OFFSET(0xB679B40)
#define LFJFACOGBKG__CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0xB679630)
#define LFJFACOGBKG__DISPOSE_OFFSET UNITYSDK_OFFSET(0xB668A70)
#define LFJFACOGBKG__DOACTION_100_OFFSET UNITYSDK_OFFSET(0xB676C80)
#define LFJFACOGBKG__DOACTION_101_OFFSET UNITYSDK_OFFSET(0xB676D00)
#define LFJFACOGBKG__DOACTION_102_OFFSET UNITYSDK_OFFSET(0xB676D90)
#define LFJFACOGBKG__DOACTION_103_OFFSET UNITYSDK_OFFSET(0xB676E10)
#define LFJFACOGBKG__DOACTION_104_OFFSET UNITYSDK_OFFSET(0xB676E90)
#define LFJFACOGBKG__DOACTION_105_OFFSET UNITYSDK_OFFSET(0xB676F10)
#define LFJFACOGBKG__DOACTION_106_OFFSET UNITYSDK_OFFSET(0xB676F90)
#define LFJFACOGBKG__DOACTION_107_OFFSET UNITYSDK_OFFSET(0xB6772B0)
#define LFJFACOGBKG__DOACTION_108_OFFSET UNITYSDK_OFFSET(0xB677340)
#define LFJFACOGBKG__DOACTION_109_OFFSET UNITYSDK_OFFSET(0xB677D30)
#define LFJFACOGBKG__DOACTION_10_OFFSET UNITYSDK_OFFSET(0xB66AB00)
#define LFJFACOGBKG__DOACTION_110_OFFSET UNITYSDK_OFFSET(0xB677E80)
#define LFJFACOGBKG__DOACTION_111_OFFSET UNITYSDK_OFFSET(0xB677FD0)
#define LFJFACOGBKG__DOACTION_112_OFFSET UNITYSDK_OFFSET(0xB678530)
#define LFJFACOGBKG__DOACTION_113_OFFSET UNITYSDK_OFFSET(0xB678A20)
#define LFJFACOGBKG__DOACTION_114_OFFSET UNITYSDK_OFFSET(0xB678CC0)
#define LFJFACOGBKG__DOACTION_115_OFFSET UNITYSDK_OFFSET(0xB678E20)
#define LFJFACOGBKG__DOACTION_116_OFFSET UNITYSDK_OFFSET(0xB678EA0)
#define LFJFACOGBKG__DOACTION_117_OFFSET UNITYSDK_OFFSET(0xB679060)
#define LFJFACOGBKG__DOACTION_118_OFFSET UNITYSDK_OFFSET(0xB6790E0)
#define LFJFACOGBKG__DOACTION_119_OFFSET UNITYSDK_OFFSET(0xB679160)
#define LFJFACOGBKG__DOACTION_11_OFFSET UNITYSDK_OFFSET(0xB66AD00)
#define LFJFACOGBKG__DOACTION_120_OFFSET UNITYSDK_OFFSET(0xB679240)
#define LFJFACOGBKG__DOACTION_121_OFFSET UNITYSDK_OFFSET(0xB6792C0)
#define LFJFACOGBKG__DOACTION_122_OFFSET UNITYSDK_OFFSET(0xB679350)
#define LFJFACOGBKG__DOACTION_123_OFFSET UNITYSDK_OFFSET(0xB679570)
#define LFJFACOGBKG__DOACTION_124_OFFSET UNITYSDK_OFFSET(0xB679C30)
#define LFJFACOGBKG__DOACTION_125_OFFSET UNITYSDK_OFFSET(0xB679D30)
#define LFJFACOGBKG__DOACTION_12_OFFSET UNITYSDK_OFFSET(0xB66AE50)
#define LFJFACOGBKG__DOACTION_13_OFFSET UNITYSDK_OFFSET(0xB66B050)
#define LFJFACOGBKG__DOACTION_14_OFFSET UNITYSDK_OFFSET(0xB66B270)
#define LFJFACOGBKG__DOACTION_15_OFFSET UNITYSDK_OFFSET(0xB66B480)
#define LFJFACOGBKG__DOACTION_16_OFFSET UNITYSDK_OFFSET(0xB66B690)
#define LFJFACOGBKG__DOACTION_17_OFFSET UNITYSDK_OFFSET(0xB66BA80)
#define LFJFACOGBKG__DOACTION_18_OFFSET UNITYSDK_OFFSET(0xB66BE50)
#define LFJFACOGBKG__DOACTION_19_OFFSET UNITYSDK_OFFSET(0xB66C140)
#define LFJFACOGBKG__DOACTION_1_OFFSET UNITYSDK_OFFSET(0xB669320)
#define LFJFACOGBKG__DOACTION_20_OFFSET UNITYSDK_OFFSET(0xB66C360)
#define LFJFACOGBKG__DOACTION_21_OFFSET UNITYSDK_OFFSET(0xB66C720)
#define LFJFACOGBKG__DOACTION_22_OFFSET UNITYSDK_OFFSET(0xB66C790)
#define LFJFACOGBKG__DOACTION_23_OFFSET UNITYSDK_OFFSET(0xB66C810)
#define LFJFACOGBKG__DOACTION_24_OFFSET UNITYSDK_OFFSET(0xB66C8E0)
#define LFJFACOGBKG__DOACTION_25_OFFSET UNITYSDK_OFFSET(0xB66CBE0)
#define LFJFACOGBKG__DOACTION_26_OFFSET UNITYSDK_OFFSET(0xB66CCE0)
#define LFJFACOGBKG__DOACTION_27_OFFSET UNITYSDK_OFFSET(0xB66D070)
#define LFJFACOGBKG__DOACTION_28_OFFSET UNITYSDK_OFFSET(0xB66D0E0)
#define LFJFACOGBKG__DOACTION_29_OFFSET UNITYSDK_OFFSET(0xB66D3B0)
#define LFJFACOGBKG__DOACTION_2_OFFSET UNITYSDK_OFFSET(0xB669AF0)
#define LFJFACOGBKG__DOACTION_30_OFFSET UNITYSDK_OFFSET(0xB66D540)
#define LFJFACOGBKG__DOACTION_31_OFFSET UNITYSDK_OFFSET(0xB66D6C0)
#define LFJFACOGBKG__DOACTION_32_OFFSET UNITYSDK_OFFSET(0xB66D790)
#define LFJFACOGBKG__DOACTION_33_OFFSET UNITYSDK_OFFSET(0xB66D930)
#define LFJFACOGBKG__DOACTION_34_OFFSET UNITYSDK_OFFSET(0xB66D9F0)
#define LFJFACOGBKG__DOACTION_35_OFFSET UNITYSDK_OFFSET(0xB66DAD0)
#define LFJFACOGBKG__DOACTION_36_OFFSET UNITYSDK_OFFSET(0xB66DB40)
#define LFJFACOGBKG__DOACTION_37_OFFSET UNITYSDK_OFFSET(0xB66DBB0)
#define LFJFACOGBKG__DOACTION_38_OFFSET UNITYSDK_OFFSET(0xB66DF30)
#define LFJFACOGBKG__DOACTION_39_OFFSET UNITYSDK_OFFSET(0xB66E550)
#define LFJFACOGBKG__DOACTION_3_OFFSET UNITYSDK_OFFSET(0xB669B70)
#define LFJFACOGBKG__DOACTION_40_OFFSET UNITYSDK_OFFSET(0xB66E6C0)
#define LFJFACOGBKG__DOACTION_41_OFFSET UNITYSDK_OFFSET(0xB66E830)
#define LFJFACOGBKG__DOACTION_42_OFFSET UNITYSDK_OFFSET(0xB66E9A0)
#define LFJFACOGBKG__DOACTION_43_OFFSET UNITYSDK_OFFSET(0xB66EB10)
#define LFJFACOGBKG__DOACTION_44_OFFSET UNITYSDK_OFFSET(0xB66EC80)
#define LFJFACOGBKG__DOACTION_45_OFFSET UNITYSDK_OFFSET(0xB66ED00)
#define LFJFACOGBKG__DOACTION_46_OFFSET UNITYSDK_OFFSET(0xB66EF40)
#define LFJFACOGBKG__DOACTION_47_OFFSET UNITYSDK_OFFSET(0xB66F280)
#define LFJFACOGBKG__DOACTION_48_OFFSET UNITYSDK_OFFSET(0xB66F670)
#define LFJFACOGBKG__DOACTION_49_OFFSET UNITYSDK_OFFSET(0xB66FB10)
#define LFJFACOGBKG__DOACTION_4_OFFSET UNITYSDK_OFFSET(0xB669D30)
#define LFJFACOGBKG__DOACTION_50_OFFSET UNITYSDK_OFFSET(0xB66FD20)
#define LFJFACOGBKG__DOACTION_51_OFFSET UNITYSDK_OFFSET(0xB670040)
#define LFJFACOGBKG__DOACTION_52_OFFSET UNITYSDK_OFFSET(0xB6700B0)
#define LFJFACOGBKG__DOACTION_53_OFFSET UNITYSDK_OFFSET(0xB670120)
#define LFJFACOGBKG__DOACTION_54_OFFSET UNITYSDK_OFFSET(0xB670190)
#define LFJFACOGBKG__DOACTION_55_OFFSET UNITYSDK_OFFSET(0xB670400)
#define LFJFACOGBKG__DOACTION_56_OFFSET UNITYSDK_OFFSET(0xB670D30)
#define LFJFACOGBKG__DOACTION_57_OFFSET UNITYSDK_OFFSET(0xB670E10)
#define LFJFACOGBKG__DOACTION_58_OFFSET UNITYSDK_OFFSET(0xB670ED0)
#define LFJFACOGBKG__DOACTION_59_OFFSET UNITYSDK_OFFSET(0xB670F70)
#define LFJFACOGBKG__DOACTION_5_OFFSET UNITYSDK_OFFSET(0xB669DF0)
#define LFJFACOGBKG__DOACTION_60_OFFSET UNITYSDK_OFFSET(0xB671230)
#define LFJFACOGBKG__DOACTION_61_OFFSET UNITYSDK_OFFSET(0xB6712F0)
#define LFJFACOGBKG__DOACTION_62_OFFSET UNITYSDK_OFFSET(0xB671500)
#define LFJFACOGBKG__DOACTION_63_OFFSET UNITYSDK_OFFSET(0xB671950)
#define LFJFACOGBKG__DOACTION_64_OFFSET UNITYSDK_OFFSET(0xB6719D0)
#define LFJFACOGBKG__DOACTION_65_OFFSET UNITYSDK_OFFSET(0xB671C70)
#define LFJFACOGBKG__DOACTION_66_OFFSET UNITYSDK_OFFSET(0xB671D50)
#define LFJFACOGBKG__DOACTION_67_OFFSET UNITYSDK_OFFSET(0xB671E80)
#define LFJFACOGBKG__DOACTION_68_OFFSET UNITYSDK_OFFSET(0xB671FB0)
#define LFJFACOGBKG__DOACTION_69_OFFSET UNITYSDK_OFFSET(0xB6720E0)
#define LFJFACOGBKG__DOACTION_6_OFFSET UNITYSDK_OFFSET(0xB66A380)
#define LFJFACOGBKG__DOACTION_70_OFFSET UNITYSDK_OFFSET(0xB6724E0)
#define LFJFACOGBKG__DOACTION_71_OFFSET UNITYSDK_OFFSET(0xB673730)
#define LFJFACOGBKG__DOACTION_72_OFFSET UNITYSDK_OFFSET(0xB674450)
#define LFJFACOGBKG__DOACTION_73_OFFSET UNITYSDK_OFFSET(0xB6745A0)
#define LFJFACOGBKG__DOACTION_74_OFFSET UNITYSDK_OFFSET(0xB674810)
#define LFJFACOGBKG__DOACTION_75_OFFSET UNITYSDK_OFFSET(0xB674890)
#define LFJFACOGBKG__DOACTION_76_OFFSET UNITYSDK_OFFSET(0xB6749E0)
#define LFJFACOGBKG__DOACTION_77_OFFSET UNITYSDK_OFFSET(0xB674AD0)
#define LFJFACOGBKG__DOACTION_78_OFFSET UNITYSDK_OFFSET(0xB674B60)
#define LFJFACOGBKG__DOACTION_79_OFFSET UNITYSDK_OFFSET(0xB674C70)
#define LFJFACOGBKG__DOACTION_7_OFFSET UNITYSDK_OFFSET(0xB66A480)
#define LFJFACOGBKG__DOACTION_80_OFFSET UNITYSDK_OFFSET(0xB674D00)
#define LFJFACOGBKG__DOACTION_81_OFFSET UNITYSDK_OFFSET(0xB674DB0)
#define LFJFACOGBKG__DOACTION_82_OFFSET UNITYSDK_OFFSET(0xB6750E0)
#define LFJFACOGBKG__DOACTION_83_OFFSET UNITYSDK_OFFSET(0xB675150)
#define LFJFACOGBKG__DOACTION_84_OFFSET UNITYSDK_OFFSET(0xB675770)
#define LFJFACOGBKG__DOACTION_85_OFFSET UNITYSDK_OFFSET(0xB675910)
#define LFJFACOGBKG__DOACTION_86_OFFSET UNITYSDK_OFFSET(0xB675BE0)
#define LFJFACOGBKG__DOACTION_87_OFFSET UNITYSDK_OFFSET(0xB675D30)
#define LFJFACOGBKG__DOACTION_88_OFFSET UNITYSDK_OFFSET(0xB675E10)
#define LFJFACOGBKG__DOACTION_89_OFFSET UNITYSDK_OFFSET(0xB675FD0)
#define LFJFACOGBKG__DOACTION_8_OFFSET UNITYSDK_OFFSET(0xB66A7F0)
#define LFJFACOGBKG__DOACTION_90_OFFSET UNITYSDK_OFFSET(0xB676110)
#define LFJFACOGBKG__DOACTION_91_OFFSET UNITYSDK_OFFSET(0xB6763F0)
#define LFJFACOGBKG__DOACTION_92_OFFSET UNITYSDK_OFFSET(0xB6764C0)
#define LFJFACOGBKG__DOACTION_93_OFFSET UNITYSDK_OFFSET(0xB676570)
#define LFJFACOGBKG__DOACTION_94_OFFSET UNITYSDK_OFFSET(0xB676610)
#define LFJFACOGBKG__DOACTION_95_OFFSET UNITYSDK_OFFSET(0xB676690)
#define LFJFACOGBKG__DOACTION_96_OFFSET UNITYSDK_OFFSET(0xB676770)
#define LFJFACOGBKG__DOACTION_97_OFFSET UNITYSDK_OFFSET(0xB676830)
#define LFJFACOGBKG__DOACTION_98_OFFSET UNITYSDK_OFFSET(0xB6768B0)
#define LFJFACOGBKG__DOACTION_99_OFFSET UNITYSDK_OFFSET(0xB676930)
#define LFJFACOGBKG__DOACTION_9_OFFSET UNITYSDK_OFFSET(0xB66A8B0)
#define LFJFACOGBKG__DOACTION_OFFSET UNITYSDK_OFFSET(0xB668B70)
#define LFJFACOGBKG__LOGERROR_OFFSET UNITYSDK_OFFSET(0xB668B10)

inline static constexpr unsigned int LFJFACOGBKG_TypeDefinitionIndex = 76882;

	class LFJFACOGBKG
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::FiveDimSpawnCleanerBotAction*>* OJDKBKDDIEE; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::PoolHashSet_1<::System::String*>*>* NMJBHJFGANF; // 0x70
		::EFODGECFLLC* EEFMDEHLLFI; // 0x78
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x80
		::System::Int32 CBOPGPAGFHG; // 0x88
		::System::Void _ctor(::EFODGECFLLC* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EFODGECFLLC*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + LFJFACOGBKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DISPOSE_OFFSET))(this);
		}

		::System::Void _LogError(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__LOGERROR_OFFSET))(this, a1);
		}

		::System::Void _DoAction(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetAnimParamByLevelVarAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetAnimParamByLevelVarAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_1(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_1_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_2(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimMuteUIInputAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimMuteUIInputAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_2_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_3(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimTryMutePlayerMoveOnSurfaceDestroyAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimTryMutePlayerMoveOnSurfaceDestroyAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_3_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_4(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimOverrideSimpleGameLevelTipAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimOverrideSimpleGameLevelTipAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_4_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_5(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_5_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_6(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimEnterHiddenAreaAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimEnterHiddenAreaAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_6_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_7(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetLevelVarShortAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetLevelVarShortAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_7_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_8(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimDebugLogEventAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimDebugLogEventAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_8_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_9(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimStartSplineMoveAction* a2, ::NDNNILEFPHG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimStartSplineMoveAction*, ::NDNNILEFPHG*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_9_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _DoAction_10(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimStopSplineMoveAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimStopSplineMoveAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_10_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_11(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetConveyorDirectionAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetConveyorDirectionAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_11_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_12(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSwitchSplineMoveDirectionAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSwitchSplineMoveDirectionAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_12_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_13(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetSplineMoveDirectionAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetSplineMoveDirectionAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_13_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_14(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetSplineMoveSpeedMultiplierAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetSplineMoveSpeedMultiplierAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_14_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_15(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimMoveToNextSplinePointAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimMoveToNextSplinePointAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_15_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_16(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimMoveToSpecificSplinePointAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimMoveToSpecificSplinePointAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_16_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_17(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimStartSplineMoveWithParamAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimStartSplineMoveWithParamAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_17_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_18(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimJumpToSplinePointAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimJumpToSplinePointAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_18_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_19(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimStartChenLingGameBoyCountDownAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimStartChenLingGameBoyCountDownAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_19_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_20(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimFinishChenLingGameBoyAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimFinishChenLingGameBoyAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_20_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_21(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSpawnPropAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSpawnPropAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_21_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_22(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_22_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_23(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimEnterDashPrepareStateAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimEnterDashPrepareStateAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_23_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_24(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimAddDynamicColliderDetectAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimAddDynamicColliderDetectAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_24_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_25(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimEnableIntervalSpawnAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimEnableIntervalSpawnAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_25_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_26(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimCreateMascotFakePlayerAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimCreateMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_26_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_27(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimDestroyMascotFakePlayerAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimDestroyMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_27_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_28(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetRenderVisibleAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetRenderVisibleAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_28_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_29(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetRenderVisibleNeverDitherAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetRenderVisibleNeverDitherAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_29_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_30(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetColliderVisibleAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetColliderVisibleAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_30_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_31(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetEntityVisibleAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetEntityVisibleAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_31_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_32(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetJumpEnergyVisibleAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetJumpEnergyVisibleAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_32_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_33(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetTriggerEnableAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetTriggerEnableAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_33_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_34(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimBeatBackPlayerAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimBeatBackPlayerAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_34_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_35(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimForceResetPlayerAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimForceResetPlayerAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_35_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_36(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimForceResetMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_36_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_37(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimMoveToMascotFakePlayerAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimMoveToMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_37_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_38(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimStartLimaoDropMoveAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimStartLimaoDropMoveAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_38_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_39(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimGarbageBinFinishMoveAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimGarbageBinFinishMoveAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_39_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_40(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimStartMusicAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimStartMusicAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_40_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_41(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimStopMusicAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimStopMusicAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_41_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_42(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimPauseMusicAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimPauseMusicAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_42_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_43(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimResumeMusicAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimResumeMusicAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_43_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_44(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetLocalAvatarJumpEnergyAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetLocalAvatarJumpEnergyAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_44_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_45(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_45_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_46(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimAddRTPCAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimAddRTPCAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_46_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_47(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimAudioPostEventAction* a2, ::NDNNILEFPHG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimAudioPostEventAction*, ::NDNNILEFPHG*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_47_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _DoAction_48(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimChenLingEmotionAudioPostEventAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimChenLingEmotionAudioPostEventAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_48_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_49(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimAudioSetStateAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimAudioSetStateAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_49_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_50(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetAudioListenerFollowTargetAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetAudioListenerFollowTargetAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_50_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_51(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimStartDanmuAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimStartDanmuAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_51_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_52(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimStopDanmuAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimStopDanmuAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_52_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_53(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetDanmuTrackAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetDanmuTrackAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_53_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_54(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetAnimatorCullingModeAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetAnimatorCullingModeAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_54_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::AnimatorCullingMode GGJDABLPGGA(::RPG::GameCore::FiveDimAnimatorCullingMode a1)
		{
			return ((::UnityEngine::AnimatorCullingMode(*)(::RPG::GameCore::FiveDimAnimatorCullingMode))((::PBYTE)hIl2Cpp + LFJFACOGBKG_GGJDABLPGGA_OFFSET))(a1);
		}

		::System::Void _DoAction_55(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_55_OFFSET))(this, a1, a2);
		}

		::System::Void LJCDMNOKDEN(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG_LJCDMNOKDEN_OFFSET))(this, a1, a2);
		}

		::System::Boolean CHDLENHLNKB(::HIOEAKHGILF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LFJFACOGBKG_CHDLENHLNKB_OFFSET))(this, a1);
		}

		::System::Void EPJDMHODBNF(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LFJFACOGBKG_EPJDMHODBNF_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_56(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetSuiyangDeadAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetSuiyangDeadAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_56_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_57(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimStartSuiyangBeatAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimStartSuiyangBeatAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_57_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_58(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimDropEntityAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimDropEntityAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_58_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_59(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimEnergyBlockChargeAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimEnergyBlockChargeAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_59_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_60(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimTriggerEventNextBeatAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimTriggerEventNextBeatAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_60_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_61(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimShowMusicComboAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimShowMusicComboAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_61_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_62(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimStartWindowStageAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimStartWindowStageAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_62_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_63(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimStopWindowStageAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimStopWindowStageAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_63_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_64(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimAddMoneyAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimAddMoneyAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_64_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_65(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimRefillPlayerJumpEnergyAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimRefillPlayerJumpEnergyAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_65_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_66(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimPlayShootArrowAnimAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimPlayShootArrowAnimAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_66_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_67(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimPlaySummonBotAnimAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimPlaySummonBotAnimAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_67_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_68(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimPlayUsePropAnimAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimPlayUsePropAnimAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_68_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_69(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSpawnArrowAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSpawnArrowAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_69_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_70(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSpawnCleanerBotAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSpawnCleanerBotAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_70_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_71(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimDestroyCleanerBotAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimDestroyCleanerBotAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_71_OFFSET))(this, a1, a2);
		}

		::System::Void HEELDKBGJDC(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + LFJFACOGBKG_HEELDKBGJDC_OFFSET))(this, a1, a2);
		}

		::System::Void OBJCFBJGHAN(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LFJFACOGBKG_OBJCFBJGHAN_OFFSET))(this, a1);
		}

		::System::Void PELNNEOJPNE(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LFJFACOGBKG_PELNNEOJPNE_OFFSET))(this, a1);
		}

		::System::Void LFHADAPBLOH(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSpawnCleanerBotAction* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSpawnCleanerBotAction*, ::System::Boolean))((::PBYTE)hIl2Cpp + LFJFACOGBKG_LFHADAPBLOH_OFFSET))(this, a1, a2, a3);
		}

		::RPG::MVector3 OPOJEJDEJJN(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimPropBakedMoveConfig* a2)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimPropBakedMoveConfig*))((::PBYTE)hIl2Cpp + LFJFACOGBKG_OPOJEJDEJJN_OFFSET))(this, a1, a2);
		}

		::System::Void CMAGBIELHJD(::KLNKLOMDIIC a1, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KLNKLOMDIIC, ::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>*))((::PBYTE)hIl2Cpp + LFJFACOGBKG_CMAGBIELHJD_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_72(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimReverseGeckoMoveAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimReverseGeckoMoveAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_72_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_73(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetPlayerResetModeAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetPlayerResetModeAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_73_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_74(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetCameraActiveAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetCameraActiveAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_74_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_75(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimFireEffectAction* a2, ::NDNNILEFPHG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimFireEffectAction*, ::NDNNILEFPHG*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_75_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _DoAction_76(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimFireAvatarEffectAction* a2, ::NDNNILEFPHG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimFireAvatarEffectAction*, ::NDNNILEFPHG*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_76_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _DoAction_77(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimKillAvatarEffectAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimKillAvatarEffectAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_77_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_78(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimMinionDestroySelfAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimMinionDestroySelfAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_78_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_79(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetPlayerSkillUpgradeAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetPlayerSkillUpgradeAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_79_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_80(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetRenderingItemStateAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetRenderingItemStateAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_80_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_81(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetSharedMatStateAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetSharedMatStateAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_81_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_82(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimRIStateEmissionAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimRIStateEmissionAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_82_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_83(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimTriggerSelfEventAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimTriggerSelfEventAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_83_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_84(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetSplineTraceEffectVisibleAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetSplineTraceEffectVisibleAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_84_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_85(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimMissionTalkAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimMissionTalkAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_85_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_86(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetResetPointAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetResetPointAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_86_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_87(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetPlayerSkillMoveAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetPlayerSkillMoveAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_87_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_88(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetDynamicAttachAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetDynamicAttachAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_88_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_89(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimBaseScrollGameEndAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimBaseScrollGameEndAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_89_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_90(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimMiniGameCoinCollectedAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimMiniGameCoinCollectedAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_90_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_91(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimTeleportAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimTeleportAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_91_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_92(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimClearPlayerVelocityAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimClearPlayerVelocityAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_92_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_93(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimApplyPlayerInteractAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimApplyPlayerInteractAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_93_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_94(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_94_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_95(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimMinionDestroyByPresetNameAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimMinionDestroyByPresetNameAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_95_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_96(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimCreatePhantomPlayerAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimCreatePhantomPlayerAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_96_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_97(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimDestroyPhantomPlayerAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimDestroyPhantomPlayerAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_97_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_98(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimStatisticGetTrainEnergyAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimStatisticGetTrainEnergyAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_98_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_99(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimAddGlobalTimeScaleAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimAddGlobalTimeScaleAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_99_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_100(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimRemoveGlobalTimeScaleAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimRemoveGlobalTimeScaleAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_100_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_101(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimCrystalChangeHPAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimCrystalChangeHPAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_101_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_102(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimLightningChangeStateAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimLightningChangeStateAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_102_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_103(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimEnableSimpleHitBoxAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimEnableSimpleHitBoxAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_103_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_104(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimGrenadierAttackAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimGrenadierAttackAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_104_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_105(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimEnableGrenadierAttackAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimEnableGrenadierAttackAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_105_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_106(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimOverrideGrenadierTargetAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimOverrideGrenadierTargetAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_106_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_107(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetAdvAchievementAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetAdvAchievementAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_107_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_108(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimBroadcastEventToChildrenMinionAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimBroadcastEventToChildrenMinionAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_108_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_109(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimEvilSmileCrazyAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimEvilSmileCrazyAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_109_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_110(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimEvilSmileDieAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimEvilSmileDieAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_110_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_111(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimEvilSmileSetTraceTargetAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimEvilSmileSetTraceTargetAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_111_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_112(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimBubbleTalkAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimBubbleTalkAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_112_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_113(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimRandomBubbleTalkAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimRandomBubbleTalkAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_113_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_114(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimTriggerDashOrbAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimTriggerDashOrbAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_114_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_115(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimRefillPlayerDashEnergyAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimRefillPlayerDashEnergyAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_115_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_116(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimStopBubbleTalkAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimStopBubbleTalkAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_116_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_117(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetBillboardAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetBillboardAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_117_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_118(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimResetBillboardAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimResetBillboardAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_118_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_119(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimClientFinishMissionAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimClientFinishMissionAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_119_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_120(::RPG::GameCore::FiveDimCameraShakeAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraShakeAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_120_OFFSET))(this, a1);
		}

		::System::Void _DoAction_121(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_121_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_122(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSetArrowCollectCoinAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSetArrowCollectCoinAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_122_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_123(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_123_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckCondition(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimConditionAllOf* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimConditionAllOf*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__CHECKCONDITION_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckCondition_1(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimConditionAnyOf* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimConditionAnyOf*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__CHECKCONDITION_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckCondition_2(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimConditionNoneOf* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimConditionNoneOf*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__CHECKCONDITION_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckCondition_3(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimPlayerSkillArrowCondition* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimPlayerSkillArrowCondition*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__CHECKCONDITION_3_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckCondition_4(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimPlayerSkillCleanerBotCondition* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimPlayerSkillCleanerBotCondition*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__CHECKCONDITION_4_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckCondition_5(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimPlayerSkillDashCondition* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimPlayerSkillDashCondition*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__CHECKCONDITION_5_OFFSET))(this, a1, a2);
		}

		::System::Void _DoAction_124(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimMutePlayerInputAction* a2, ::NDNNILEFPHG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimMutePlayerInputAction*, ::NDNNILEFPHG*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_124_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _DoAction_125(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimMutePlayerSkillAction* a2, ::NDNNILEFPHG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimMutePlayerSkillAction*, ::NDNNILEFPHG*))((::PBYTE)hIl2Cpp + LFJFACOGBKG__DOACTION_125_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::TaskContext* get__TaskContext()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJFACOGBKG_GET__TASKCONTEXT_OFFSET))(this);
		}

	};
