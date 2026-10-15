#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SurfaceType.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BMAGJGLPIIF.h"
#include "unitysdk/CNHKFCHOEHK.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/FloatCurveFrame.h"
#include "unitysdk/RPG/IVec3.h"
#include "unitysdk/RPG/MColor.h"
#include "unitysdk/RPG/MRect.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/RPG/Vector3CurveFrame.h"
#include "unitysdk/RPG/Vector4CurveFrame.h"
class ACNFHAKPMIK;
class AFFPPNMGCMF;
class AGAGMFCPBED;
class AJBACDGLCMO;
class AOOFHMBDLPL;
class BDKIHEDECCJ;
class BDLHKCMCMGJ;
class BDPMKFANNDM;
class BJMLCLKHBJN;
class CBJMIBEHHND;
class CFBFPOLPBIE;
class DFFLGKHHLLH;
class DLDHCDCAEPM;
class DNILHDGHLGL;
class DOHCNAGPAEM;
class ECADOJALGKJ;
class EGAMINIBAKN;
class EGLGEOOKCNM;
class EHPBMPFKNFP;
class EJHJKIIHLLE;
class ELLIFHOBAEJ;
class ENEIHJJPNPI;
class EPJLDNFONEE;
class GAKCNIMEPPO;
class GFKIPGPPFOB;
class GHMHPIANEIG;
class GJJIBJDCLHM;
class GLFJJMLOPMO;
class GPGGGPJOGID;
class HDOCLPDDMKK;
class HKOACDGAJNO;
class HMGEOKPCKOK;
class HPCOJDJAHOG;
class IANEMJNCHDN;
class IGDCNPMKMEB;
class IHLFEBHOKAP;
class IMNNDJAAKBC;
class JCBAIKOADID;
class JCDELEMIIME;
class JEBDGFNFEND;
class JFBLKOIBDEE;
class JLCGLIDLLFL;
class KBLANADAHOM;
class KKGGBIEDPKJ;
class LCDMLIEHLOE;
class LDNFONFKMFJ;
class LHABGIKFJLH;
class LKAKGGLAHGA;
class LNCKPENJCCC;
class MBPOHBNACLH;
class MCAIABAKIJJ;
class MDBNOPEIDAH;
class MDCEMPKNOKN;
class MIBNEIMGOPK;
class MJCOCAMJABP;
class MLJGEGPAAFF;
class MLMOAFNJPBG;
class NDFKINKPKHF;
class NKGIHJEMCDA;
class NMMMDIEGLEI;
class NNMNLEFGMOC;
class NOLPNHJGAJG;
class NPHIKPFNJJO;
class OFDEKOCILAF;
class OGCPMCECAPG;
class OKCCOEHNEEF;
class OOADBMLOOEI;
class OOHFEMPOOCO;
class OOOHHEMKMFJ;
class PCAPHLBJNIA;
class PDHJJNFJCJF;
class PDKPLHGKFOI;
class PEFPDGCHBCL;
class PIPIGCPDNBO;
class PLEFHKNEOCE;
class PMDAHIHMGFG;
namespace RPG::Client { class ByCanPlanetFesLevelUp; }
namespace RPG::Client { class ByCanPlanetFesSkillLevelUp; }
namespace RPG::Client { class ByCompareMatchThreeV2BirdLocation; }
namespace RPG::Client { class ByComparePlanetFesEventProgressLeft; }
namespace RPG::Client { class ByIsPlanetFesBusinessDayFinished; }
namespace RPG::Client { class ByIsPlanetFesLandAvailableForPurchase; }
namespace RPG::Client { class ByPlantFesIsInMove; }
namespace RPG::Client { class ByPlantFesIsInSpineAnim; }
namespace RPG::Client { class ST_Parkour_ByCompareDistanceToPlayer; }
namespace RPG::Client { class ST_Parkour_ByCompareHitFlyCount; }
namespace RPG::Client { class ST_Parkour_ByCompareLapCount; }
namespace RPG::Client { class ST_Parkour_ByCompareProjectileHitCount; }
namespace RPG::Client { class ST_Parkour_ByCompareRank; }
namespace RPG::Client::LittleGameShare { class LittleGamePredicateConfig; }
namespace RPG::Client::LittleGameShare { class ST_ByRandom; }
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCanEnterLock; }
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCompareHasEffect; }
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCompareSupportCatBehindDistance; }
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCompareSupportCatID; }
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCompareSupportCatRank; }
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByIdleCanEnterAIState; }
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByIsAIState; }
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByIsSkillCD; }
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByPropertyCompare; }
namespace RPG::GameCore { class AdvByCheckFarmElementActive; }
namespace RPG::GameCore { class AdvByCheckGameMode; }
namespace RPG::GameCore { class AdvByCheckNeedWaitServerCheckSkillResult; }
namespace RPG::GameCore { class AdvByCheckWindowInSlot; }
namespace RPG::GameCore { class AdvByCheckWindowPermCodes; }
namespace RPG::GameCore { class AdvByCompareCharacterID; }
namespace RPG::GameCore { class AdvByCompareDimensionID; }
namespace RPG::GameCore { class AdvByCompareDynamicValue; }
namespace RPG::GameCore { class AdvByCompareEnhancedID; }
namespace RPG::GameCore { class AdvByCompareInvasionLevel; }
namespace RPG::GameCore { class AdvByContainBehaviorFlag; }
namespace RPG::GameCore { class AdvByEntitiesExist; }
namespace RPG::GameCore { class AdvByEntityExist; }
namespace RPG::GameCore { class AdvByFastDeliverFinish; }
namespace RPG::GameCore { class AdvByFastDeliverHasMultiRoute; }
namespace RPG::GameCore { class AdvByHasMoveSinceLastTeleport; }
namespace RPG::GameCore { class AdvByInCustomZone; }
namespace RPG::GameCore { class AdvByIsEliteMonster; }
namespace RPG::GameCore { class AdvByIsInPhantomFrozen; }
namespace RPG::GameCore { class AdvByPerceiveValueReachMax; }
namespace RPG::GameCore { class AdvByPlayerHide; }
namespace RPG::GameCore { class AdvByPlayerInVisionZone; }
namespace RPG::GameCore { class AdvByRollShopResult; }
namespace RPG::GameCore { class AdvByTriggeredTrackedSearch; }
namespace RPG::GameCore { class AdvGroupFetchTargetByString; }
namespace RPG::GameCore { class AdvGroupFetchTargetByStringList; }
namespace RPG::GameCore { class AdvTriggerEffectList; }
namespace RPG::GameCore { class AdventureByCheckMoveInput; }
namespace RPG::GameCore { class AdventureByCompareHPRatio; }
namespace RPG::GameCore { class AdventureByCompareMP; }
namespace RPG::GameCore { class AdventureByCompareSPRatio; }
namespace RPG::GameCore { class AdventureByInAnimZone; }
namespace RPG::GameCore { class AdventureByInMotionState; }
namespace RPG::GameCore { class AdventureByIsBattlePostureType; }
namespace RPG::GameCore { class AdventureByIsBattleSkillType; }
namespace RPG::GameCore { class AdventureByIsInPosition; }
namespace RPG::GameCore { class AdventureByIsInRotation; }
namespace RPG::GameCore { class AdventureByIsLocateAtArea; }
namespace RPG::GameCore { class AdventureByIsNPCControlled; }
namespace RPG::GameCore { class AdventureByIsPropertyValueMinOrMax; }
namespace RPG::GameCore { class AdventureByIsWeakTypeActive; }
namespace RPG::GameCore { class AdventureByMazeSkillUseCheck; }
namespace RPG::GameCore { class AdventureByMotionHitColliderWall; }
namespace RPG::GameCore { class AdventureByMoveInputTowardsTarget; }
namespace RPG::GameCore { class AdventureByNPCMonsterPurposeType; }
namespace RPG::GameCore { class AdventureByNpcMazeSkillCooldown; }
namespace RPG::GameCore { class AdventureByPlayerCurrentSkillType; }
namespace RPG::GameCore { class AdventureByPropInPosition; }
namespace RPG::GameCore { class AdventureByPropShowInfoId; }
namespace RPG::GameCore { class AdventureIsTriggerBattleByNpcMonster; }
namespace RPG::GameCore { class AssistWayPoint; }
namespace RPG::GameCore { class AssistWayPointCondition; }
namespace RPG::GameCore { class AssistWayPointConditionMain; }
namespace RPG::GameCore { class AssistWayPointConditionPack; }
namespace RPG::GameCore { class AssistWayPointDistanceCondition; }
namespace RPG::GameCore { class AssistWayPointFCVCondition; }
namespace RPG::GameCore { class AssistWayPointFastComplete; }
namespace RPG::GameCore { class AssistWayPointGroupPropertyCondition; }
namespace RPG::GameCore { class AssistWayPointLittleGameCondition; }
namespace RPG::GameCore { class AssistWayPointPack; }
namespace RPG::GameCore { class AssistWayPointPropEraFlipShowCondition; }
namespace RPG::GameCore { class AssistWayPointPropStateCondition; }
namespace RPG::GameCore { class AssistWayPointRegionEraFlipStateCondition; }
namespace RPG::GameCore { class AssistWayPointTimelineStateCondition; }
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class ByAdvCharacterLogicState; }
namespace RPG::GameCore { class ByAlertValueInRange; }
namespace RPG::GameCore { class ByAllowInstantKill; }
namespace RPG::GameCore { class ByAnchorAngleDiffWithMainCameraOverThan; }
namespace RPG::GameCore { class ByAnd; }
namespace RPG::GameCore { class ByAngle; }
namespace RPG::GameCore { class ByAnimStateLogicType; }
namespace RPG::GameCore { class ByAnimatorParam; }
namespace RPG::GameCore { class ByAny; }
namespace RPG::GameCore { class ByAnyNpcMonsterInRange; }
namespace RPG::GameCore { class ByAttackSkillEffect; }
namespace RPG::GameCore { class ByAttackType; }
namespace RPG::GameCore { class ByAvatarBaseType; }
namespace RPG::GameCore { class ByBattleHasCertainResult; }
namespace RPG::GameCore { class ByBattleMissionTalkFinish; }
namespace RPG::GameCore { class ByBreakStanceDamageType; }
namespace RPG::GameCore { class ByCanAutoUseItemToRecoverMP; }
namespace RPG::GameCore { class ByCanPlayIdleShow; }
namespace RPG::GameCore { class ByCasterAliveOrLimbo; }
namespace RPG::GameCore { class ByCharacterDamageType; }
namespace RPG::GameCore { class ByCharacterSomatoWidthType; }
namespace RPG::GameCore { class ByCheckActionDelayChanged; }
namespace RPG::GameCore { class ByCheckActionDelayEffectType; }
namespace RPG::GameCore { class ByCheckAdditionalConditions; }
namespace RPG::GameCore { class ByCheckAdvModifierCallBackBehaviorFlag; }
namespace RPG::GameCore { class ByCheckAdvModifierCallBackName; }
namespace RPG::GameCore { class ByCheckBloodLinkDead; }
namespace RPG::GameCore { class ByCheckCharacterDie; }
namespace RPG::GameCore { class ByCheckCharacterFly; }
namespace RPG::GameCore { class ByCheckColonyMirrorTakenDiff; }
namespace RPG::GameCore { class ByCheckColonyTrace; }
namespace RPG::GameCore { class ByCheckCustomValueBool; }
namespace RPG::GameCore { class ByCheckDarkTeamDestroy; }
namespace RPG::GameCore { class ByCheckElfTodayManaged; }
namespace RPG::GameCore { class ByCheckFightFinish; }
namespace RPG::GameCore { class ByCheckFloorCustomBool; }
namespace RPG::GameCore { class ByCheckFloorCustomBoolV2; }
namespace RPG::GameCore { class ByCheckIsLimboRevivable; }
namespace RPG::GameCore { class ByCheckLastBattleSkillDrop; }
namespace RPG::GameCore { class ByCheckLineupAvatarBaseType; }
namespace RPG::GameCore { class ByCheckMechanismBarPhase; }
namespace RPG::GameCore { class ByCheckModifierCallBackBehaviorFlag; }
namespace RPG::GameCore { class ByCheckModifierCallBackIsInfected; }
namespace RPG::GameCore { class ByCheckModifierCallBackIsSelf; }
namespace RPG::GameCore { class ByCheckModifierCallBackModifierValue; }
namespace RPG::GameCore { class ByCheckModifierCallBackName; }
namespace RPG::GameCore { class ByCheckModifierCallBackStatusType; }
namespace RPG::GameCore { class ByCheckModifierDeathSource; }
namespace RPG::GameCore { class ByCheckMonsterDie; }
namespace RPG::GameCore { class ByCheckMonsterHurt; }
namespace RPG::GameCore { class ByCheckRogueExploreWin; }
namespace RPG::GameCore { class ByCheckRoleTrialNormalWaveShowDetail; }
namespace RPG::GameCore { class ByCheckTargetHPCanBeDamage; }
namespace RPG::GameCore { class ByCheckTimeRewindEntityPauseBySkillCount; }
namespace RPG::GameCore { class ByCheckTimelineEntityState; }
namespace RPG::GameCore { class ByCheckTrialCharacterDie; }
namespace RPG::GameCore { class ByCheckTurnCountMatch; }
namespace RPG::GameCore { class ByChimeraDuelIsMasterSelected; }
namespace RPG::GameCore { class ByCompareAIVariableInt; }
namespace RPG::GameCore { class ByCompareAbilityProperty; }
namespace RPG::GameCore { class ByCompareAlertValue; }
namespace RPG::GameCore { class ByCompareAliveEnemyNumber; }
namespace RPG::GameCore { class ByCompareAllWaveMonsterRank; }
namespace RPG::GameCore { class ByCompareAngleBetweenVCameraAndDir; }
namespace RPG::GameCore { class ByCompareBP; }
namespace RPG::GameCore { class ByCompareBaseTypeCount; }
namespace RPG::GameCore { class ByCompareBattleEventID; }
namespace RPG::GameCore { class ByCompareCarryMazebuff; }
namespace RPG::GameCore { class ByCompareChallengeGroupType; }
namespace RPG::GameCore { class ByCompareChallengeLeft; }
namespace RPG::GameCore { class ByCompareChangeValue; }
namespace RPG::GameCore { class ByCompareCharacterID; }
namespace RPG::GameCore { class ByCompareCharacterNumber; }
namespace RPG::GameCore { class ByCompareCharacterSpeed; }
namespace RPG::GameCore { class ByCompareCityAtmosphereSubwayArrived; }
namespace RPG::GameCore { class ByCompareControlSkillEffect; }
namespace RPG::GameCore { class ByCompareControlSkillEffectIsDamaging; }
namespace RPG::GameCore { class ByCompareCountOfBaseType; }
namespace RPG::GameCore { class ByCompareCurrentModifierStatusType; }
namespace RPG::GameCore { class ByCompareCurrentSkillEffectIsDamaging; }
namespace RPG::GameCore { class ByCompareCurrentSkillUseParam; }
namespace RPG::GameCore { class ByCompareCurrentTeammemberCount; }
namespace RPG::GameCore { class ByCompareCustomString; }
namespace RPG::GameCore { class ByCompareDamageCustomName; }
namespace RPG::GameCore { class ByCompareDamageTag; }
namespace RPG::GameCore { class ByCompareDynamicValue; }
namespace RPG::GameCore { class ByCompareEnhancedID; }
namespace RPG::GameCore { class ByCompareEntityAuthoritySide; }
namespace RPG::GameCore { class ByCompareEnvProfilePath; }
namespace RPG::GameCore { class ByCompareEvolveBuildGearLevel; }
namespace RPG::GameCore { class ByCompareEvolveBuildProperty; }
namespace RPG::GameCore { class ByCompareFSVwithGP; }
namespace RPG::GameCore { class ByCompareFearCharacterCount; }
namespace RPG::GameCore { class ByCompareFirstPerformance; }
namespace RPG::GameCore { class ByCompareFiveDimContainerDynamicFloat; }
namespace RPG::GameCore { class ByCompareFloorCustomFloat; }
namespace RPG::GameCore { class ByCompareFloorCustomFloatV2; }
namespace RPG::GameCore { class ByCompareFloorCustomString; }
namespace RPG::GameCore { class ByCompareFloorCustomStringV2; }
namespace RPG::GameCore { class ByCompareFloorSavedValue; }
namespace RPG::GameCore { class ByCompareFloorSavedValueV2; }
namespace RPG::GameCore { class ByCompareFourRotateVoxelCurrentDirection; }
namespace RPG::GameCore { class ByCompareGPwithGP; }
namespace RPG::GameCore { class ByCompareGraphDynamicFloat; }
namespace RPG::GameCore { class ByCompareGraphDynamicString; }
namespace RPG::GameCore { class ByCompareGridFightProperty; }
namespace RPG::GameCore { class ByCompareGroupProperty; }
namespace RPG::GameCore { class ByCompareGroupState; }
namespace RPG::GameCore { class ByCompareHP; }
namespace RPG::GameCore { class ByCompareHPRatio; }
namespace RPG::GameCore { class ByCompareHeartDialScriptEmo; }
namespace RPG::GameCore { class ByCompareHeartDialScriptStep; }
namespace RPG::GameCore { class ByCompareHeartDialTracingNPC; }
namespace RPG::GameCore { class ByCompareHipplenEnergy; }
namespace RPG::GameCore { class ByCompareInfiniteWaveSummonProgress; }
namespace RPG::GameCore { class ByCompareIsBookAvailable; }
namespace RPG::GameCore { class ByCompareIsEntityInDialogue; }
namespace RPG::GameCore { class ByCompareIsWolfBroBulletActivated; }
namespace RPG::GameCore { class ByCompareIsWolfBroPuzzleAvatar; }
namespace RPG::GameCore { class ByCompareItemNum; }
namespace RPG::GameCore { class ByCompareItemNumber; }
namespace RPG::GameCore { class ByCompareItemPair; }
namespace RPG::GameCore { class ByCompareLastKillSkill; }
namespace RPG::GameCore { class ByCompareLastKillType; }
namespace RPG::GameCore { class ByCompareLineupAvatarHpRatio; }
namespace RPG::GameCore { class ByCompareLittleGameLevelVarFixPoint; }
namespace RPG::GameCore { class ByCompareLittleGameLevelVarShort; }
namespace RPG::GameCore { class ByCompareMainMissionState; }
namespace RPG::GameCore { class ByCompareMatchThreeBirdLocation; }
namespace RPG::GameCore { class ByCompareMissionBattleWin; }
namespace RPG::GameCore { class ByCompareMissionCustomValue; }
namespace RPG::GameCore { class ByCompareModifierCallBackDynamicValue; }
namespace RPG::GameCore { class ByCompareModifierCustomEvent; }
namespace RPG::GameCore { class ByCompareModifierValue; }
namespace RPG::GameCore { class ByCompareMonsterID; }
namespace RPG::GameCore { class ByCompareMonsterPhase; }
namespace RPG::GameCore { class ByCompareMonsterRank; }
namespace RPG::GameCore { class ByCompareMonsterTemplateID; }
namespace RPG::GameCore { class ByCompareMonsterUniqueID; }
namespace RPG::GameCore { class ByCompareMusicRhythmSongID; }
namespace RPG::GameCore { class ByCompareNPCMonsterCheckState; }
namespace RPG::GameCore { class ByCompareNPCMonsterID; }
namespace RPG::GameCore { class ByCompareNextUnusedInsertAction; }
namespace RPG::GameCore { class ByCompareNpcMonsterRank; }
namespace RPG::GameCore { class ByCompareParamString; }
namespace RPG::GameCore { class ByCompareParamValue; }
namespace RPG::GameCore { class ByComparePerformance; }
namespace RPG::GameCore { class ByComparePerformanceResult; }
namespace RPG::GameCore { class ByComparePhoneMessageItem; }
namespace RPG::GameCore { class ByComparePreShowStanceBreakMonsterRank; }
namespace RPG::GameCore { class ByCompareProjectileLifetime; }
namespace RPG::GameCore { class ByComparePropAnimState; }
namespace RPG::GameCore { class ByComparePropFastDeliverCheckSimplifiedMode; }
namespace RPG::GameCore { class ByComparePropHPRatio; }
namespace RPG::GameCore { class ByComparePropID; }
namespace RPG::GameCore { class ByComparePropPuzzleCreated; }
namespace RPG::GameCore { class ByComparePropState; }
namespace RPG::GameCore { class ByComparePropStateNumber; }
namespace RPG::GameCore { class ByComparePropType; }
namespace RPG::GameCore { class ByCompareQuestGetReward; }
namespace RPG::GameCore { class ByCompareQuestProgress; }
namespace RPG::GameCore { class ByCompareRedStanceCount; }
namespace RPG::GameCore { class ByCompareResistChance; }
namespace RPG::GameCore { class ByCompareRogueDiceRotateImmediately; }
namespace RPG::GameCore { class ByCompareRogueMode; }
namespace RPG::GameCore { class ByCompareRotatableRegionLoadingState; }
namespace RPG::GameCore { class ByCompareSPChangeTag; }
namespace RPG::GameCore { class ByCompareSPRatio; }
namespace RPG::GameCore { class ByCompareScepterFuncType; }
namespace RPG::GameCore { class ByCompareScepterMainUnitEffectTag; }
namespace RPG::GameCore { class ByCompareScreenRatio; }
namespace RPG::GameCore { class ByCompareSelectSkillEffect; }
namespace RPG::GameCore { class ByCompareSeriesID; }
namespace RPG::GameCore { class ByCompareSkillBPChangePreview; }
namespace RPG::GameCore { class ByCompareSkillLevel; }
namespace RPG::GameCore { class ByCompareSkillUsageLimit; }
namespace RPG::GameCore { class ByCompareSomatoType; }
namespace RPG::GameCore { class ByCompareSoundEventInCD; }
namespace RPG::GameCore { class ByCompareSpecialAvatarType; }
namespace RPG::GameCore { class ByCompareSpecialSPRatio; }
namespace RPG::GameCore { class ByCompareStageID; }
namespace RPG::GameCore { class ByCompareStageType; }
namespace RPG::GameCore { class ByCompareStance; }
namespace RPG::GameCore { class ByCompareStanceCount; }
namespace RPG::GameCore { class ByCompareStanceRatio; }
namespace RPG::GameCore { class ByCompareStoryLineID; }
namespace RPG::GameCore { class ByCompareSubMissionState; }
namespace RPG::GameCore { class ByCompareSummonUnitCount; }
namespace RPG::GameCore { class ByCompareSwitchHandCatchItem; }
namespace RPG::GameCore { class ByCompareSwitchHandGestureType; }
namespace RPG::GameCore { class ByCompareSwitchMascotPickupCount; }
namespace RPG::GameCore { class ByCompareTarget; }
namespace RPG::GameCore { class ByCompareTargetCount; }
namespace RPG::GameCore { class ByCompareTargetCountClientOnly; }
namespace RPG::GameCore { class ByCompareTargetNatureID; }
namespace RPG::GameCore { class ByCompareTeamFormationRowIndex; }
namespace RPG::GameCore { class ByCompareTeamFormationWidth; }
namespace RPG::GameCore { class ByCompareTeamLeaderBodySize; }
namespace RPG::GameCore { class ByCompareTeamLeaderPath; }
namespace RPG::GameCore { class ByCompareTextJoinValue; }
namespace RPG::GameCore { class ByCompareTurnActionEntityTeamType; }
namespace RPG::GameCore { class ByCompareUnusedInsertAbilityCount; }
namespace RPG::GameCore { class ByCompareUnusedUltraSkillCount; }
namespace RPG::GameCore { class ByCompareValue; }
namespace RPG::GameCore { class ByCompareVersionFinalMainMission; }
namespace RPG::GameCore { class ByCompareWaveCount; }
namespace RPG::GameCore { class ByContainBehaviorFlag; }
namespace RPG::GameCore { class ByContainCustomString; }
namespace RPG::GameCore { class ByContainMonsterOnWave; }
namespace RPG::GameCore { class ByContainOpInSkill; }
namespace RPG::GameCore { class ByContainResistBehaviorFlag; }
namespace RPG::GameCore { class ByContainsCharacterState; }
namespace RPG::GameCore { class ByContainsParamFlag; }
namespace RPG::GameCore { class ByContainsRedStance; }
namespace RPG::GameCore { class ByCurrentAudioLanguage; }
namespace RPG::GameCore { class ByCurrentContainAbilityTag; }
namespace RPG::GameCore { class ByCurrentRogueHasMiracle; }
namespace RPG::GameCore { class ByCurrentRogueShopHasStage; }
namespace RPG::GameCore { class ByCurrentSkillEffect; }
namespace RPG::GameCore { class ByCurrentSkillName; }
namespace RPG::GameCore { class ByCurrentSkillTargetType; }
namespace RPG::GameCore { class ByCurrentSkillType; }
namespace RPG::GameCore { class ByCurrentTurnState; }
namespace RPG::GameCore { class ByCurrentVCameraConfigCaster; }
namespace RPG::GameCore { class ByDamageSourceContainBehaviorFlag; }
namespace RPG::GameCore { class ByDeployPuzzleBasePointIsAnswer; }
namespace RPG::GameCore { class ByDieAnimFinished; }
namespace RPG::GameCore { class ByDistance; }
namespace RPG::GameCore { class ByDrinkMakerCheersStoryDrinkHasMade; }
namespace RPG::GameCore { class ByDrinkMakerCheersStoryLastMakedDrinkIsPositive; }
namespace RPG::GameCore { class ByDynamicSkillButtonInputSlot; }
namespace RPG::GameCore { class ByDynamicValueDefined; }
namespace RPG::GameCore { class ByEnableStoryStreamingSource; }
namespace RPG::GameCore { class ByEntityCreated; }
namespace RPG::GameCore { class ByEntityOriginalEraConfig; }
namespace RPG::GameCore { class ByEntityTimeScaleZero; }
namespace RPG::GameCore { class ByFromBattleViewModeChange; }
namespace RPG::GameCore { class ByFuncUnlockCheck; }
namespace RPG::GameCore { class ByGameEntityNotCreated; }
namespace RPG::GameCore { class ByGridFightCharacterIsPreset; }
namespace RPG::GameCore { class ByGridFightCompareRoleExtInfo; }
namespace RPG::GameCore { class ByGridFightHasSameTrait; }
namespace RPG::GameCore { class ByGridFightHasTrait; }
namespace RPG::GameCore { class ByGridFightTraitSelectedCharacter; }
namespace RPG::GameCore { class ByHasActiveUnitOnScepter; }
namespace RPG::GameCore { class ByHasAssistAvatar; }
namespace RPG::GameCore { class ByHasBillboard; }
namespace RPG::GameCore { class ByHasCharacterRevived; }
namespace RPG::GameCore { class ByHasInsertAbilityExecutingDuringGameModePause; }
namespace RPG::GameCore { class ByHasInsertAbilityPending; }
namespace RPG::GameCore { class ByHasInsertActionByTarget; }
namespace RPG::GameCore { class ByHasInsertBattlePerform; }
namespace RPG::GameCore { class ByHasPausedElationTime; }
namespace RPG::GameCore { class ByHasPlayerMoveInput; }
namespace RPG::GameCore { class ByHasSecretWeak; }
namespace RPG::GameCore { class ByHasSkillTag; }
namespace RPG::GameCore { class ByHasSkillType; }
namespace RPG::GameCore { class ByHasSpareTeamFormation; }
namespace RPG::GameCore { class ByHasStanceWeak; }
namespace RPG::GameCore { class ByHasStanceWeakPreview; }
namespace RPG::GameCore { class ByHasSummonRelation; }
namespace RPG::GameCore { class ByHasUnGottenLevelReward; }
namespace RPG::GameCore { class ByHaveAbilityTarget; }
namespace RPG::GameCore { class ByHaveDyingEntity; }
namespace RPG::GameCore { class ByHaveEnemyAlive; }
namespace RPG::GameCore { class ByHaveInsertUltraWait; }
namespace RPG::GameCore { class ByHaveLockTargetInCamera; }
namespace RPG::GameCore { class ByHaveObstacle; }
namespace RPG::GameCore { class ByHaveSkillPointEntity; }
namespace RPG::GameCore { class ByHaveUniqueNameEffect; }
namespace RPG::GameCore { class ByHeroGender; }
namespace RPG::GameCore { class ByIfGroupIsOccupied; }
namespace RPG::GameCore { class ByInAttackRange; }
namespace RPG::GameCore { class ByInTimelinePerform; }
namespace RPG::GameCore { class ByInTrackCamera; }
namespace RPG::GameCore { class ByInTrackCameraByPathID; }
namespace RPG::GameCore { class ByInTurnBasedGameModeState; }
namespace RPG::GameCore { class ByInVision; }
namespace RPG::GameCore { class ByInfiniteMonsterWaveLeft; }
namespace RPG::GameCore { class ByIsActivityInSchedule; }
namespace RPG::GameCore { class ByIsAllLightTeamDied; }
namespace RPG::GameCore { class ByIsAllPuzzleStateMatchedClientOnly; }
namespace RPG::GameCore { class ByIsAllowUseSkill; }
namespace RPG::GameCore { class ByIsAutoBattle; }
namespace RPG::GameCore { class ByIsBattleEventEntity; }
namespace RPG::GameCore { class ByIsBattleReStart; }
namespace RPG::GameCore { class ByIsBodyPart; }
namespace RPG::GameCore { class ByIsBodyPartClientOnly; }
namespace RPG::GameCore { class ByIsBodyPartOwner; }
namespace RPG::GameCore { class ByIsCharacterChangeSource; }
namespace RPG::GameCore { class ByIsCharacterChangeTarget; }
namespace RPG::GameCore { class ByIsCharacterWeaknessActivated; }
namespace RPG::GameCore { class ByIsContainAdventureModifier; }
namespace RPG::GameCore { class ByIsContainModifier; }
namespace RPG::GameCore { class ByIsControlSkillDisable; }
namespace RPG::GameCore { class ByIsConvertDamage; }
namespace RPG::GameCore { class ByIsCurrentModifierAlive; }
namespace RPG::GameCore { class ByIsCurrentSkillActive; }
namespace RPG::GameCore { class ByIsCurrentSkillAllowMultiTarget; }
namespace RPG::GameCore { class ByIsDamageCritical; }
namespace RPG::GameCore { class ByIsDamageLuckCritical; }
namespace RPG::GameCore { class ByIsDamageType; }
namespace RPG::GameCore { class ByIsDirectKillBattle; }
namespace RPG::GameCore { class ByIsElfRestaurantFarmPlantFull; }
namespace RPG::GameCore { class ByIsElfRestaurantHasFarmer; }
namespace RPG::GameCore { class ByIsElfRestaurantRecipeCooked; }
namespace RPG::GameCore { class ByIsEnableNegativeHP; }
namespace RPG::GameCore { class ByIsEnemy; }
namespace RPG::GameCore { class ByIsEntityActionState; }
namespace RPG::GameCore { class ByIsEraFlipperEntityShow; }
namespace RPG::GameCore { class ByIsEvolveBuildCountDownItemShow; }
namespace RPG::GameCore { class ByIsExcludeInMultiCharacterFormation; }
namespace RPG::GameCore { class ByIsFakeSkillByName; }
namespace RPG::GameCore { class ByIsFakeSkillBySlot; }
namespace RPG::GameCore { class ByIsFirstChallengeBattle; }
namespace RPG::GameCore { class ByIsFirstInsertAbilityInQueue; }
namespace RPG::GameCore { class ByIsForbidChangeOthersActionDelay; }
namespace RPG::GameCore { class ByIsGenderType; }
namespace RPG::GameCore { class ByIsHealCallBackStack; }
namespace RPG::GameCore { class ByIsHitAllCallBackStack; }
namespace RPG::GameCore { class ByIsInAnimZone; }
namespace RPG::GameCore { class ByIsInCharacterIDGroup; }
namespace RPG::GameCore { class ByIsInCharmAction; }
namespace RPG::GameCore { class ByIsInCustomTeamFormation; }
namespace RPG::GameCore { class ByIsInDistrict; }
namespace RPG::GameCore { class ByIsInElationTime; }
namespace RPG::GameCore { class ByIsInEraFlipperSpotArea; }
namespace RPG::GameCore { class ByIsInModifierCallback; }
namespace RPG::GameCore { class ByIsInStoryMode; }
namespace RPG::GameCore { class ByIsIndirectDamage; }
namespace RPG::GameCore { class ByIsInfiniteBattle; }
namespace RPG::GameCore { class ByIsInsertAction; }
namespace RPG::GameCore { class ByIsMatchTeammateCount; }
namespace RPG::GameCore { class ByIsMazeBuffAffectCurrentWave; }
namespace RPG::GameCore { class ByIsMazeSkillAffectCurrentWave; }
namespace RPG::GameCore { class ByIsMultiTargetCustomTeamFormation; }
namespace RPG::GameCore { class ByIsProjectileHitTarget; }
namespace RPG::GameCore { class ByIsPropLockable; }
namespace RPG::GameCore { class ByIsPropertyValueMinOrMax; }
namespace RPG::GameCore { class ByIsRebuiltSummonUnit; }
namespace RPG::GameCore { class ByIsRogueTournCollectionDisplayingCollection; }
namespace RPG::GameCore { class ByIsRogueTournCurRoomFinish; }
namespace RPG::GameCore { class ByIsRogueTournLastRoom; }
namespace RPG::GameCore { class ByIsRootHitCallback; }
namespace RPG::GameCore { class ByIsRotatableTimeRewindTarget; }
namespace RPG::GameCore { class ByIsScepter; }
namespace RPG::GameCore { class ByIsShowInActionBar; }
namespace RPG::GameCore { class ByIsSkillTypeDisable; }
namespace RPG::GameCore { class ByIsSplitDamage; }
namespace RPG::GameCore { class ByIsStageBuffAffectCurrentWave; }
namespace RPG::GameCore { class ByIsStageFirstWave; }
namespace RPG::GameCore { class ByIsSubTargetOfHpSharedGroup; }
namespace RPG::GameCore { class ByIsSwordTrainingSkillCanLearn; }
namespace RPG::GameCore { class ByIsTargetAbleToAction; }
namespace RPG::GameCore { class ByIsTargetCustomUnselectable; }
namespace RPG::GameCore { class ByIsTargetUnselectable; }
namespace RPG::GameCore { class ByIsTargetValid; }
namespace RPG::GameCore { class ByIsTeamLeader; }
namespace RPG::GameCore { class ByIsTeamLocationIndexType; }
namespace RPG::GameCore { class ByIsTeammate; }
namespace RPG::GameCore { class ByIsTopActionDelayTarget; }
namespace RPG::GameCore { class ByIsTriggerBattleAttacker; }
namespace RPG::GameCore { class ByIsTriggeredBlockDamage; }
namespace RPG::GameCore { class ByIsTurnActionEntity; }
namespace RPG::GameCore { class ByIsTurnOwnerEntity; }
namespace RPG::GameCore { class ByIsTutorialFinish; }
namespace RPG::GameCore { class ByIsUIPageOpen; }
namespace RPG::GameCore { class ByLevelLoseCheck; }
namespace RPG::GameCore { class ByLocalPlayerAvatarID; }
namespace RPG::GameCore { class ByLocalPlayerIsFakeAvatar; }
namespace RPG::GameCore { class ByLocalPlayerIsHero; }
namespace RPG::GameCore { class ByLocalWin; }
namespace RPG::GameCore { class ByMainMissionFinish; }
namespace RPG::GameCore { class ByMuseumProjectorThemeNum; }
namespace RPG::GameCore { class ByNPCStatus; }
namespace RPG::GameCore { class ByNot; }
namespace RPG::GameCore { class ByPamActionPhaseTalk; }
namespace RPG::GameCore { class ByPamAnchorContinous; }
namespace RPG::GameCore { class ByPamCurrentActionAnyDirection; }
namespace RPG::GameCore { class ByPamMovePhaseTalk; }
namespace RPG::GameCore { class ByPamNormalAction; }
namespace RPG::GameCore { class ByPamNormalActionSwitch; }
namespace RPG::GameCore { class ByPamOnlineFirst; }
namespace RPG::GameCore { class ByPartialFlipDeviceState; }
namespace RPG::GameCore { class ByPhotoGraphConditionSuccess; }
namespace RPG::GameCore { class ByPhotoGraphFovLevel; }
namespace RPG::GameCore { class ByPhotoGraphFovLevelRange; }
namespace RPG::GameCore { class ByPlayerGravityOppositeToCurrentSurface; }
namespace RPG::GameCore { class ByPreShowRedStanceBreak; }
namespace RPG::GameCore { class ByPreShowStanceBreak; }
namespace RPG::GameCore { class ByPropIsCreateByActiveSkill; }
namespace RPG::GameCore { class ByRandomChance; }
namespace RPG::GameCore { class ByRandomChanceClientOnly; }
namespace RPG::GameCore { class ByRankActivated; }
namespace RPG::GameCore { class ByRankActivatedFromLineup; }
namespace RPG::GameCore { class ByRegionEraState; }
namespace RPG::GameCore { class BySaveModelWhenDead; }
namespace RPG::GameCore { class BySharedSummonUnitInUse; }
namespace RPG::GameCore { class ByShowChallengeSelectPage; }
namespace RPG::GameCore { class BySimulateSpeedUp; }
namespace RPG::GameCore { class BySkillPointActivated; }
namespace RPG::GameCore { class BySkipNextTeleportEffect; }
namespace RPG::GameCore { class ByStatusCount; }
namespace RPG::GameCore { class BySwitchMascotCanShootTarget; }
namespace RPG::GameCore { class ByTargetAliveState; }
namespace RPG::GameCore { class ByTargetContainerRatioInRect; }
namespace RPG::GameCore { class ByTargetEntityType; }
namespace RPG::GameCore { class ByTargetHitBoxActive; }
namespace RPG::GameCore { class ByTargetInCameraScreenScope; }
namespace RPG::GameCore { class ByTargetIsBetweenCameraAndAnother; }
namespace RPG::GameCore { class ByTargetIsStanceWeak; }
namespace RPG::GameCore { class ByTargetIsStanceWeakForCurrentHit; }
namespace RPG::GameCore { class ByTargetIsStanceWeakForCurrentSkill; }
namespace RPG::GameCore { class ByTargetListAll; }
namespace RPG::GameCore { class ByTargetListAny; }
namespace RPG::GameCore { class ByTargetListIntersects; }
namespace RPG::GameCore { class ByTargetLockHP; }
namespace RPG::GameCore { class ByTargetLockStance; }
namespace RPG::GameCore { class ByTargetNpcExists; }
namespace RPG::GameCore { class ByTargetTeam; }
namespace RPG::GameCore { class ByTargetVisible; }
namespace RPG::GameCore { class ByTimeRewindTargetCurrentState; }
namespace RPG::GameCore { class ByTimeRewindTargetMotionPause; }
namespace RPG::GameCore { class ByTrainVisitorIsMeet; }
namespace RPG::GameCore { class ByTurnOwnerActionPhaseEnd; }
namespace RPG::GameCore { class ByTurnOwnerHasActionInTurn; }
namespace RPG::GameCore { class ByTurnOwnerHasPendingOneMore; }
namespace RPG::GameCore { class ByUsedFiveDimHoldDash; }
namespace RPG::GameCore { class ByViewModeSwitchEmptyServant; }
namespace RPG::GameCore { class ByWaitCustomString; }
namespace RPG::GameCore { class CRPVirtualCameraTargetConfig; }
namespace RPG::GameCore { class CheckFloorSavedValueConfig; }
namespace RPG::GameCore { class ChenLingFesPredicateItemCondition; }
namespace RPG::GameCore { class ConvinceByCompareHp; }
namespace RPG::GameCore { class DebugLogInPredicates; }
namespace RPG::GameCore { class DynamicBool; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class DynamicStringList; }
namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class EffectModifyData; }
namespace RPG::GameCore { class FetchAdvMonsterData; }
namespace RPG::GameCore { class FetchAdvNPCData; }
namespace RPG::GameCore { class FetchAdvNPCDataEx; }
namespace RPG::GameCore { class FetchAdvPropData; }
namespace RPG::GameCore { class FilePath; }
namespace RPG::GameCore { class FinishActionConfig; }
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace RPG::GameCore { class FloorCustomBoolConfig; }
namespace RPG::GameCore { class FloorCustomFloatConfig; }
namespace RPG::GameCore { class FloorCustomStringConfig; }
namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace RPG::GameCore { class FloorTargetAgentConfig; }
namespace RPG::GameCore { class GroupFetchLocalTarget; }
namespace RPG::GameCore { class GroupPropertyConfig; }
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class IslandStateConditionSet; }
namespace RPG::GameCore { class IslandStateConfig; }
namespace RPG::GameCore { class IslandStateSavedValueCondition; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class LittleGameFetchProxyByID; }
namespace RPG::GameCore { class MainMissionInfoConfig; }
namespace RPG::GameCore { class MainMissionPartialInfoConfig; }
namespace RPG::GameCore { class MissionCustomValue; }
namespace RPG::GameCore { class MissionCustomValueGroupConfig; }
namespace RPG::GameCore { class MissionCustomValueGroupConfigPack; }
namespace RPG::GameCore { class MissionCustomValueRewardConfig; }
namespace RPG::GameCore { class MissionCustomValueTuple; }
namespace RPG::GameCore { class MissionItemConfig; }
namespace RPG::GameCore { class MissionWaypointDataPack; }
namespace RPG::GameCore { class OfflineCullingConfig; }
namespace RPG::GameCore { class OverrideMonoEffectConfig; }
namespace RPG::GameCore { class PckFileList; }
namespace RPG::GameCore { class PckPatchConfig; }
namespace RPG::GameCore { class PckPatchPlatform; }
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class PropDestructItem; }
namespace RPG::GameCore { class PropPredicateWithEntity; }
namespace RPG::GameCore { class PropStateItem; }
namespace RPG::GameCore { class QueryHoyoTag; }
namespace RPG::GameCore { class RA_ByAIStatus; }
namespace RPG::GameCore { class RA_ByAlertLevel; }
namespace RPG::GameCore { class RA_ByCompareVariableBool; }
namespace RPG::GameCore { class RA_ByCompareVariableFloat; }
namespace RPG::GameCore { class RA_ByContainEntityTag; }
namespace RPG::GameCore { class RA_ByDistance; }
namespace RPG::GameCore { class RtArcShapeConfig; }
namespace RPG::GameCore { class RtBattleTargetCameraFocusTarget; }
namespace RPG::GameCore { class RtBattleTargetFetchGridByTag; }
namespace RPG::GameCore { class RtByCanMove; }
namespace RPG::GameCore { class RtByCompareProperty; }
namespace RPG::GameCore { class RtByComparePropertyRatio; }
namespace RPG::GameCore { class RtByCurrentSkillName; }
namespace RPG::GameCore { class RtByHasLockTarget; }
namespace RPG::GameCore { class RtByHasSelectSkill; }
namespace RPG::GameCore { class RtByHasTargetInAlertRange; }
namespace RPG::GameCore { class RtByInAlertRange; }
namespace RPG::GameCore { class RtByInSkillRange; }
namespace RPG::GameCore { class RtByIsMoving; }
namespace RPG::GameCore { class RtByIsSkillUsing; }
namespace RPG::GameCore { class RtByIsTriggeredBlockDamage; }
namespace RPG::GameCore { class RtBySkillCanUse; }
namespace RPG::GameCore { class RtCircleShapeConfig; }
namespace RPG::GameCore { class RtCollision2DShapeConfig; }
namespace RPG::GameCore { class RtDirConfig; }
namespace RPG::GameCore { class RtLifeBindingConfig; }
namespace RPG::GameCore { class RtPointShapeConfig; }
namespace RPG::GameCore { class RtRectShapeConfig; }
namespace RPG::GameCore { class RtTargetFetchGridAt; }
namespace RPG::GameCore { class RtTargetFetchModifierBindSnapshot; }
namespace RPG::GameCore { class RtTargetFetchPosWithMaxTargetCount; }
namespace RPG::GameCore { class RtTargetFetchTargetInArea; }
namespace RPG::GameCore { class RtTargetFetchTrigger; }
namespace RPG::GameCore { class RtTargetMapBelongGrid; }
namespace RPG::GameCore { class RtTargetMapBornPoint; }
namespace RPG::GameCore { class RtTargetMapEmptyGridNearby; }
namespace RPG::GameCore { class RtTargetMapEntityInGrid; }
namespace RPG::GameCore { class RtTargetMapGridNearby; }
namespace RPG::GameCore { class RtTargetMapGridOwner; }
namespace RPG::GameCore { class RtTargetMapLockTarget; }
namespace RPG::GameCore { class RtTargetMapMoveTarget; }
namespace RPG::GameCore { class RtTargetMapPosWithMaxTargetCount; }
namespace RPG::GameCore { class RtTargetMapPosWithOffset; }
namespace RPG::GameCore { class RtTargetMapSkillAbortSource; }
namespace RPG::GameCore { class RtTargetMapSkillCastPos; }
namespace RPG::GameCore { class RtTargetMapSkillTarget; }
namespace RPG::GameCore { class RtTargetMapTargetInTrigger; }
namespace RPG::GameCore { class ST_ByAIHangUp; }
namespace RPG::GameCore { class ST_ByAlertLevel; }
namespace RPG::GameCore { class ST_ByCompareVariableBool; }
namespace RPG::GameCore { class ST_ByCompareVariableFloat; }
namespace RPG::GameCore { class ST_ByCompareVariableString; }
namespace RPG::GameCore { class ST_ByContainAbnormalState; }
namespace RPG::GameCore { class ST_ByDistToGuardPosition; }
namespace RPG::GameCore { class ST_ByDistanceToEnchantTarget; }
namespace RPG::GameCore { class ST_ByDistanceToTarget; }
namespace RPG::GameCore { class ST_ByEnterCombat; }
namespace RPG::GameCore { class ST_ByExitCombat; }
namespace RPG::GameCore { class ST_ByForceExitCombat; }
namespace RPG::GameCore { class ST_ByFoundSmartObject; }
namespace RPG::GameCore { class ST_ByHasAbnormalState; }
namespace RPG::GameCore { class ST_ByHasAdvBehaviorFlag; }
namespace RPG::GameCore { class ST_ByHasBornSmartObject; }
namespace RPG::GameCore { class ST_ByHasPatrolPath; }
namespace RPG::GameCore { class ST_ByHasTarget; }
namespace RPG::GameCore { class ST_ByInAIStatus; }
namespace RPG::GameCore { class ST_ByInAttackAngle; }
namespace RPG::GameCore { class ST_ByInAttackDistance; }
namespace RPG::GameCore { class ST_ByOnHit; }
namespace RPG::GameCore { class ST_BySkillInCD; }
namespace RPG::GameCore { class ST_ElfByIsCustomerState; }
namespace RPG::GameCore { class ST_ElfByIsTakeOutState; }
namespace RPG::GameCore { class ST_ElfByIsWaiterState; }
namespace RPG::GameCore { class StageBaseConfig; }
namespace RPG::GameCore { class StageConfig; }
namespace RPG::GameCore { class StageGrassOverrideConfig; }
namespace RPG::GameCore { class StageIslandConfig; }
namespace RPG::GameCore { class StageIslandHLODConfig; }
namespace RPG::GameCore { class StageVersionData; }
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace RPG::GameCore { class StageVolumeConfig; }
namespace RPG::GameCore { class StreamingBlockVolumeComponentData; }
namespace RPG::GameCore { class StreamingForceHLODVolumeData; }
namespace RPG::GameCore { class StreamingGroupVolumeComponentData; }
namespace RPG::GameCore { class StreamingLightVolumeData; }
namespace RPG::GameCore { class StreamingRatioVolumeData; }
namespace RPG::GameCore { class StreamingSceneObjLodScaleVolumeComponentData; }
namespace RPG::GameCore { class StreamingSceneScaleData; }
namespace RPG::GameCore { class StreamingVolumeComponentData; }
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace RPG::GameCore { class SubMissionRelationConfig; }
namespace RPG::GameCore { class SubStageData; }
namespace RPG::GameCore { class SubStageMetaData; }
namespace RPG::GameCore { class TargetAlias; }
namespace RPG::GameCore { class TargetCompute; }
namespace RPG::GameCore { class TargetConcat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TargetFetchAbilityGroup; }
namespace RPG::GameCore { class TargetFetchAbilityTarget; }
namespace RPG::GameCore { class TargetFetchAbilityTargetLeader; }
namespace RPG::GameCore { class TargetFetchActionDelayExceed; }
namespace RPG::GameCore { class TargetFetchActualOwner; }
namespace RPG::GameCore { class TargetFetchAdvAITarget; }
namespace RPG::GameCore { class TargetFetchAdvAllNPCMonsters; }
namespace RPG::GameCore { class TargetFetchAdvFakeAvatar; }
namespace RPG::GameCore { class TargetFetchAdvFakeAvatarPlayerStub; }
namespace RPG::GameCore { class TargetFetchAdvLineup; }
namespace RPG::GameCore { class TargetFetchAdvLocalPlayer; }
namespace RPG::GameCore { class TargetFetchAdvLockTarget; }
namespace RPG::GameCore { class TargetFetchAdvMonster; }
namespace RPG::GameCore { class TargetFetchAdvMonsterEx; }
namespace RPG::GameCore { class TargetFetchAdvNPC; }
namespace RPG::GameCore { class TargetFetchAdvNpcEx; }
namespace RPG::GameCore { class TargetFetchAdvPillarPuzzleInteractingPillar; }
namespace RPG::GameCore { class TargetFetchAdvProp; }
namespace RPG::GameCore { class TargetFetchAdvPropEx; }
namespace RPG::GameCore { class TargetFetchAdvSkillTargetEntityList; }
namespace RPG::GameCore { class TargetFetchAdvTeamLeader; }
namespace RPG::GameCore { class TargetFetchAdvTeamMembers; }
namespace RPG::GameCore { class TargetFetchAidAttacker; }
namespace RPG::GameCore { class TargetFetchAidDefender; }
namespace RPG::GameCore { class TargetFetchAidProtector; }
namespace RPG::GameCore { class TargetFetchAimAtTargetList; }
namespace RPG::GameCore { class TargetFetchAliveSourceEntity; }
namespace RPG::GameCore { class TargetFetchAllCustomUnselectable; }
namespace RPG::GameCore { class TargetFetchAllStanceBreakEntity; }
namespace RPG::GameCore { class TargetFetchAllUnselectable; }
namespace RPG::GameCore { class TargetFetchAnchor; }
namespace RPG::GameCore { class TargetFetchAnchorByName; }
namespace RPG::GameCore { class TargetFetchAvatarAssistant; }
namespace RPG::GameCore { class TargetFetchAvatarByID; }
namespace RPG::GameCore { class TargetFetchBattleEventCaster; }
namespace RPG::GameCore { class TargetFetchBattleEventEntityList; }
namespace RPG::GameCore { class TargetFetchBloodLinkTargets; }
namespace RPG::GameCore { class TargetFetchByTauntAndAggro; }
namespace RPG::GameCore { class TargetFetchCallBackModifierCaster; }
namespace RPG::GameCore { class TargetFetchCameraAimTargetList; }
namespace RPG::GameCore { class TargetFetchCameraAnchorTargetList; }
namespace RPG::GameCore { class TargetFetchCaster; }
namespace RPG::GameCore { class TargetFetchContextDialogueTalkTrigger; }
namespace RPG::GameCore { class TargetFetchCurrentDamageAttacker; }
namespace RPG::GameCore { class TargetFetchCurrentDamageDefender; }
namespace RPG::GameCore { class TargetFetchCurrentGroupNPCMonsters; }
namespace RPG::GameCore { class TargetFetchCurrentInsertAbilityTarget; }
namespace RPG::GameCore { class TargetFetchCurrentInsertTurnSource; }
namespace RPG::GameCore { class TargetFetchCurrentPlayerMazeSkillLockTarget; }
namespace RPG::GameCore { class TargetFetchDataViewUISelectEnter; }
namespace RPG::GameCore { class TargetFetchDataViewUISelectLeave; }
namespace RPG::GameCore { class TargetFetchDialogueEntity; }
namespace RPG::GameCore { class TargetFetchElationTimeAllTargets; }
namespace RPG::GameCore { class TargetFetchElationTimeSource; }
namespace RPG::GameCore { class TargetFetchFarmElementEntity; }
namespace RPG::GameCore { class TargetFetchFateRinCardCaster; }
namespace RPG::GameCore { class TargetFetchFateRinCardSkillMainTargetList; }
namespace RPG::GameCore { class TargetFetchFateRinCardSkillSubTargetList; }
namespace RPG::GameCore { class TargetFetchFateRinCardSkillTargetList; }
namespace RPG::GameCore { class TargetFetchFightMVPEntity; }
namespace RPG::GameCore { class TargetFetchInstigator; }
namespace RPG::GameCore { class TargetFetchLastKillCaster; }
namespace RPG::GameCore { class TargetFetchLastKillTarget; }
namespace RPG::GameCore { class TargetFetchLastSearchEntity; }
namespace RPG::GameCore { class TargetFetchLastZombieEntity; }
namespace RPG::GameCore { class TargetFetchLatestEnterStageAvatar; }
namespace RPG::GameCore { class TargetFetchLevelEntity; }
namespace RPG::GameCore { class TargetFetchLockTarget; }
namespace RPG::GameCore { class TargetFetchMainMonster; }
namespace RPG::GameCore { class TargetFetchMazeBuffTargets; }
namespace RPG::GameCore { class TargetFetchModifierOwner; }
namespace RPG::GameCore { class TargetFetchMonsterByID; }
namespace RPG::GameCore { class TargetFetchNextSkillCaster; }
namespace RPG::GameCore { class TargetFetchNextTurnOwnerEntity; }
namespace RPG::GameCore { class TargetFetchNone; }
namespace RPG::GameCore { class TargetFetchNormalPam; }
namespace RPG::GameCore { class TargetFetchNpcMonsterWithMazeBuff; }
namespace RPG::GameCore { class TargetFetchOwnerEntity; }
namespace RPG::GameCore { class TargetFetchParamEntity; }
namespace RPG::GameCore { class TargetFetchParamEntityByIndex; }
namespace RPG::GameCore { class TargetFetchParamEntityList; }
namespace RPG::GameCore { class TargetFetchPartner; }
namespace RPG::GameCore { class TargetFetchPassiveEntity; }
namespace RPG::GameCore { class TargetFetchPetPartyRole; }
namespace RPG::GameCore { class TargetFetchProjectileHitEntity; }
namespace RPG::GameCore { class TargetFetchProjectileHitPos; }
namespace RPG::GameCore { class TargetFetchPropFarmElement; }
namespace RPG::GameCore { class TargetFetchPuzzleEntity; }
namespace RPG::GameCore { class TargetFetchRogueMagicScepterList; }
namespace RPG::GameCore { class TargetFetchSnapshotEntityList; }
namespace RPG::GameCore { class TargetFetchStanceBreakTargetEntity; }
namespace RPG::GameCore { class TargetFetchSummonMonsters; }
namespace RPG::GameCore { class TargetFetchSummonUnit; }
namespace RPG::GameCore { class TargetFetchTaskActionTarget; }
namespace RPG::GameCore { class TargetFetchTeamEntity; }
namespace RPG::GameCore { class TargetFetchTemplateEntityList; }
namespace RPG::GameCore { class TargetFetchTimeRewindStrikeSource; }
namespace RPG::GameCore { class TargetFetchTrailblazer; }
namespace RPG::GameCore { class TargetFetchTurnActionEntity; }
namespace RPG::GameCore { class TargetFetchTurnOwnerEntity; }
namespace RPG::GameCore { class TargetFetchUniqueNameEntity; }
namespace RPG::GameCore { class TargetFetchUnstageTarget; }
namespace RPG::GameCore { class TargetFilter; }
namespace RPG::GameCore { class TargetFilterAliveState; }
namespace RPG::GameCore { class TargetFilterTargetType; }
namespace RPG::GameCore { class TargetIndex; }
namespace RPG::GameCore { class TargetMapActionBarAdjoinEntityList; }
namespace RPG::GameCore { class TargetMapAdjoinEntity; }
namespace RPG::GameCore { class TargetMapAllOffTeamMember; }
namespace RPG::GameCore { class TargetMapAllTeamMember; }
namespace RPG::GameCore { class TargetMapAllTeamMemberFromFirstEntity; }
namespace RPG::GameCore { class TargetMapAttackTargetList; }
namespace RPG::GameCore { class TargetMapBattleEventCaster; }
namespace RPG::GameCore { class TargetMapBattleEventCreator; }
namespace RPG::GameCore { class TargetMapBetweenEntity; }
namespace RPG::GameCore { class TargetMapCharacterChangeSource; }
namespace RPG::GameCore { class TargetMapCharacterChangeTarget; }
namespace RPG::GameCore { class TargetMapCreatedBattleEvent; }
namespace RPG::GameCore { class TargetMapCreator; }
namespace RPG::GameCore { class TargetMapDamageAttacker; }
namespace RPG::GameCore { class TargetMapDamageChunkTargetList; }
namespace RPG::GameCore { class TargetMapDamageDefender; }
namespace RPG::GameCore { class TargetMapDummyEntity; }
namespace RPG::GameCore { class TargetMapDynamicEntityParam; }
namespace RPG::GameCore { class TargetMapEnemyTeamEntity; }
namespace RPG::GameCore { class TargetMapPartEntity; }
namespace RPG::GameCore { class TargetMapPartOwnerEntity; }
namespace RPG::GameCore { class TargetMapPartToOwner; }
namespace RPG::GameCore { class TargetMapSkillActualAttacker; }
namespace RPG::GameCore { class TargetMapSkillIndicatorTarget; }
namespace RPG::GameCore { class TargetMapSkillPointEntity; }
namespace RPG::GameCore { class TargetMapSkillSubTarget; }
namespace RPG::GameCore { class TargetMapSkillTarget; }
namespace RPG::GameCore { class TargetMapSnapshotEntity; }
namespace RPG::GameCore { class TargetMapSummonedMinions; }
namespace RPG::GameCore { class TargetMapSummoner; }
namespace RPG::GameCore { class TargetMapTeamEntity; }
namespace RPG::GameCore { class TargetMapTeamFormation; }
namespace RPG::GameCore { class TargetQuery; }
namespace RPG::GameCore { class TargetRemoveUnselectable; }
namespace RPG::GameCore { class TargetReverse; }
namespace RPG::GameCore { class TargetSelector; }
namespace RPG::GameCore { class TargetSeqOperation; }
namespace RPG::GameCore { class TargetSequence; }
namespace RPG::GameCore { class TargetShuffle; }
namespace RPG::GameCore { class TargetSortByAITag; }
namespace RPG::GameCore { class TargetSortByActionOrder; }
namespace RPG::GameCore { class TargetSortByCustomFormationIndexClientOnly; }
namespace RPG::GameCore { class TargetSortByDeathOrder; }
namespace RPG::GameCore { class TargetSortByDistance; }
namespace RPG::GameCore { class TargetSortByElationPriority; }
namespace RPG::GameCore { class TargetSortByFormation; }
namespace RPG::GameCore { class TargetSortByGridFightPower; }
namespace RPG::GameCore { class TargetSortByGridFightRoleTotalDamage; }
namespace RPG::GameCore { class TargetSortByModifierStatusCount; }
namespace RPG::GameCore { class TargetSortByModifierValue; }
namespace RPG::GameCore { class TargetSortByMultiModifierValueSum; }
namespace RPG::GameCore { class TargetSortByPredicate; }
namespace RPG::GameCore { class TargetSortByProperty; }
namespace RPG::GameCore { class TargetSortByPropertyRatio; }
namespace RPG::GameCore { class TargetSortByValueEvaluator; }
namespace RPG::GameCore { class TargetSortByWeaknessMatch; }
namespace RPG::GameCore { class TargetSortMonsterRank; }
namespace RPG::GameCore { class TargetSortSequence; }
namespace RPG::GameCore { class TargetTake; }
namespace RPG::GameCore { class TriggerEffect; }
namespace RPG::GameCore { class TriggerEffectForUI; }
namespace RPG::GameCore { class TriggerEffectList; }
namespace RPG::GameCore { class TriggerEffectListForUI; }
namespace RPG::GameCore { class TriggerSDFTextEffect; }
namespace RPG::GameCore { class UniversalHotFixBasePredicate; }
namespace RPG::GameCore { class UniversalHotFixPredicateA; }
namespace RPG::GameCore { class UniversalHotFixPredicateB; }
namespace RPG::GameCore { class UniversalHotFixPredicateC; }
namespace RPG::GameCore { class UniversalHotFixTaskConfig; }
namespace RPG::GameCore { class VE_CharacterID; }
namespace RPG::GameCore { class VE_Const; }
namespace RPG::GameCore { class VE_FactorGroup; }
namespace RPG::GameCore { class VE_Group; }
namespace RPG::GameCore { class VE_Predicate; }
namespace RPG::GameCore { class VE_Random; }
namespace RPG::GameCore { class VE_RtAngleBetween; }
namespace RPG::GameCore { class VE_RtBattleGridOrder; }
namespace RPG::GameCore { class VE_RtBattleLevelByCharacterID; }
namespace RPG::GameCore { class VE_RtBattleProperty; }
namespace RPG::GameCore { class VE_RtBattlePropertyRatio; }
namespace RPG::GameCore { class VE_RtBattleRankByCharacterID; }
namespace RPG::GameCore { class VE_RtBattleRankParamByCharacterID; }
namespace RPG::GameCore { class VE_RtBattleSkillParamByCharacterID; }
namespace RPG::GameCore { class VE_RtDistance; }
namespace RPG::GameCore { class VE_RtGridDistance; }
namespace RPG::GameCore { class VE_RtModifierProperty; }
namespace RPG::GameCore { class VE_RtSkillProperty; }
namespace RPG::GameCore { class VE_RtTimeStamp; }
namespace RPG::GameCore { class VE_TargetCount; }
namespace RPG::GameCore { class VE_Value; }
namespace RPG::GameCore { class VP_Abs; }
namespace RPG::GameCore { class VP_Add; }
namespace RPG::GameCore { class VP_Clamp; }
namespace RPG::GameCore { class VP_ConstMap; }
namespace RPG::GameCore { class VP_Div; }
namespace RPG::GameCore { class VP_Exp; }
namespace RPG::GameCore { class VP_Invert; }
namespace RPG::GameCore { class VP_LinearMap; }
namespace RPG::GameCore { class VP_Max; }
namespace RPG::GameCore { class VP_Min; }
namespace RPG::GameCore { class VP_Mul; }
namespace RPG::GameCore { class VP_Pow; }
namespace RPG::GameCore { class VP_Sigmoid; }
namespace RPG::GameCore { class VP_Sub; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace RPG::GameCore { class ValueEvaluatorVec3; }
namespace RPG::GameCore { class ValuePostProcessConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { class Object; }
namespace System { class String; }

#define KCFLMFJEMFJ_AADOMKNJPMA_OFFSET UNITYSDK_OFFSET(0x1D07A290)
#define KCFLMFJEMFJ_AAHJBKKLMIO_OFFSET UNITYSDK_OFFSET(0x1D0724B0)
#define KCFLMFJEMFJ_AAKMPJOLPPK_OFFSET UNITYSDK_OFFSET(0x1D06FE20)
#define KCFLMFJEMFJ_ABFMIEBEAII_OFFSET UNITYSDK_OFFSET(0x1D0761E0)
#define KCFLMFJEMFJ_ABIAOOJFAAF_OFFSET UNITYSDK_OFFSET(0x1D0768F0)
#define KCFLMFJEMFJ_ABIEPLDCNMD_OFFSET UNITYSDK_OFFSET(0x1D0757F0)
#define KCFLMFJEMFJ_ABLFDDBJJGA_OFFSET UNITYSDK_OFFSET(0x1D077370)
#define KCFLMFJEMFJ_ABLLAHEGPBB_OFFSET UNITYSDK_OFFSET(0x1D075970)
#define KCFLMFJEMFJ_ABOHAOBEGEF_OFFSET UNITYSDK_OFFSET(0x1D072A70)
#define KCFLMFJEMFJ_ACGCIJHPLLA_OFFSET UNITYSDK_OFFSET(0x1D074860)
#define KCFLMFJEMFJ_ACKHHPHEBLO_OFFSET UNITYSDK_OFFSET(0x1D06EDD0)
#define KCFLMFJEMFJ_ACODMFAJAOE_OFFSET UNITYSDK_OFFSET(0x1D074AD0)
#define KCFLMFJEMFJ_ADDLKGCAADO_OFFSET UNITYSDK_OFFSET(0x1D077FE0)
#define KCFLMFJEMFJ_ADDMMJEACGI_OFFSET UNITYSDK_OFFSET(0x1D0673B0)
#define KCFLMFJEMFJ_ADHEJFLJNOI_OFFSET UNITYSDK_OFFSET(0x1D078BB0)
#define KCFLMFJEMFJ_ADLABHJLKMI_OFFSET UNITYSDK_OFFSET(0x1D06EBC0)
#define KCFLMFJEMFJ_AEJKFIBLAIJ_OFFSET UNITYSDK_OFFSET(0x1D079420)
#define KCFLMFJEMFJ_AEJNKHIMODI_OFFSET UNITYSDK_OFFSET(0x1D071160)
#define KCFLMFJEMFJ_AEMCGLHFIBH_OFFSET UNITYSDK_OFFSET(0x1D06E410)
#define KCFLMFJEMFJ_AFBMGIEBPEC_OFFSET UNITYSDK_OFFSET(0x1D077490)
#define KCFLMFJEMFJ_AFCPENOEMIO_OFFSET UNITYSDK_OFFSET(0x1D0710E0)
#define KCFLMFJEMFJ_AFGNAHDCBPI_OFFSET UNITYSDK_OFFSET(0x1D0725D0)
#define KCFLMFJEMFJ_AFHEJEPCFNJ_OFFSET UNITYSDK_OFFSET(0x1D0766E0)
#define KCFLMFJEMFJ_AFKAMCGGKAB_OFFSET UNITYSDK_OFFSET(0x1D0728C0)
#define KCFLMFJEMFJ_AFKECOGGHHN_OFFSET UNITYSDK_OFFSET(0x1D075C20)
#define KCFLMFJEMFJ_AFLJAEJJNNN_OFFSET UNITYSDK_OFFSET(0x1D0752F0)
#define KCFLMFJEMFJ_AFONACBJLOE_OFFSET UNITYSDK_OFFSET(0x1D070D10)
#define KCFLMFJEMFJ_AFPDAIIFPHL_OFFSET UNITYSDK_OFFSET(0x1D067880)
#define KCFLMFJEMFJ_AGAKNHMEKOD_OFFSET UNITYSDK_OFFSET(0x1D067FF0)
#define KCFLMFJEMFJ_AGGHGMKFAJN_OFFSET UNITYSDK_OFFSET(0x1D067BC0)
#define KCFLMFJEMFJ_AGJEHGGEGEH_OFFSET UNITYSDK_OFFSET(0x1D07A690)
#define KCFLMFJEMFJ_AGKPNMDBCEG_OFFSET UNITYSDK_OFFSET(0x1D0772F0)
#define KCFLMFJEMFJ_AGLGOBCBAKL_OFFSET UNITYSDK_OFFSET(0x1D06E3E0)
#define KCFLMFJEMFJ_AGNJFBBPOGO_OFFSET UNITYSDK_OFFSET(0x1D078D10)
#define KCFLMFJEMFJ_AHCAELDJJNP_OFFSET UNITYSDK_OFFSET(0x1D07A570)
#define KCFLMFJEMFJ_AHHFGCMIBLN_OFFSET UNITYSDK_OFFSET(0x1D074A00)
#define KCFLMFJEMFJ_AHIMPCPGIHM_OFFSET UNITYSDK_OFFSET(0x1D075640)
#define KCFLMFJEMFJ_AHJKBOKJGJH_OFFSET UNITYSDK_OFFSET(0x1D073A10)
#define KCFLMFJEMFJ_AHMFLCKAHJP_OFFSET UNITYSDK_OFFSET(0x1D079990)
#define KCFLMFJEMFJ_AICNFONOADJ_OFFSET UNITYSDK_OFFSET(0x1D077650)
#define KCFLMFJEMFJ_AINHILHJPAO_OFFSET UNITYSDK_OFFSET(0x1D06F2F0)
#define KCFLMFJEMFJ_AINILAMDLGL_OFFSET UNITYSDK_OFFSET(0x1D067290)
#define KCFLMFJEMFJ_AIPKOALFILM_OFFSET UNITYSDK_OFFSET(0x1D077BE0)
#define KCFLMFJEMFJ_AJBOMAFGGKB_OFFSET UNITYSDK_OFFSET(0x1D070DC0)
#define KCFLMFJEMFJ_AJGANLCJMDE_OFFSET UNITYSDK_OFFSET(0x1D0734E0)
#define KCFLMFJEMFJ_AJHKMENPGDL_OFFSET UNITYSDK_OFFSET(0x1D06F320)
#define KCFLMFJEMFJ_AJONAHBPAHH_OFFSET UNITYSDK_OFFSET(0x1D0774C0)
#define KCFLMFJEMFJ_AKLENLOCCCA_OFFSET UNITYSDK_OFFSET(0x1D079010)
#define KCFLMFJEMFJ_AKPDGPBJLIA_OFFSET UNITYSDK_OFFSET(0x1D07A660)
#define KCFLMFJEMFJ_ALABCCCKAEL_OFFSET UNITYSDK_OFFSET(0x1D06F440)
#define KCFLMFJEMFJ_ALAHFNFEMAA_OFFSET UNITYSDK_OFFSET(0x1D074EB0)
#define KCFLMFJEMFJ_AMBDDOIAJFP_OFFSET UNITYSDK_OFFSET(0x1D0738C0)
#define KCFLMFJEMFJ_AMBFHENCNKN_OFFSET UNITYSDK_OFFSET(0x1D072E30)
#define KCFLMFJEMFJ_ANCAEIILOHG_OFFSET UNITYSDK_OFFSET(0x1D077000)
#define KCFLMFJEMFJ_ANCEBJHDEEK_OFFSET UNITYSDK_OFFSET(0x1D075230)
#define KCFLMFJEMFJ_ANEPBMIGILL_OFFSET UNITYSDK_OFFSET(0x1D073540)
#define KCFLMFJEMFJ_ANOBJBPHKMH_OFFSET UNITYSDK_OFFSET(0x1D073190)
#define KCFLMFJEMFJ_AOGCPGKHDFB_OFFSET UNITYSDK_OFFSET(0x1D076FE0)
#define KCFLMFJEMFJ_AOGPAMOHFBN_OFFSET UNITYSDK_OFFSET(0x1D078390)
#define KCFLMFJEMFJ_APBKLJLBLME_OFFSET UNITYSDK_OFFSET(0x1D074D10)
#define KCFLMFJEMFJ_APCCPDGLICM_OFFSET UNITYSDK_OFFSET(0x1D06E5E0)
#define KCFLMFJEMFJ_APFFFKAPCAM_OFFSET UNITYSDK_OFFSET(0x1D078D40)
#define KCFLMFJEMFJ_APFIJPGILFN_OFFSET UNITYSDK_OFFSET(0x1D06E3F0)
#define KCFLMFJEMFJ_APKGLPPMJMJ_OFFSET UNITYSDK_OFFSET(0x1D0758B0)
#define KCFLMFJEMFJ_BACOHKNDBCA_OFFSET UNITYSDK_OFFSET(0x1D0782A0)
#define KCFLMFJEMFJ_BAGIJNBNCLP_OFFSET UNITYSDK_OFFSET(0x1D0701A0)
#define KCFLMFJEMFJ_BAIPBCBAGHL_OFFSET UNITYSDK_OFFSET(0x1D06FBB0)
#define KCFLMFJEMFJ_BAJLJBDJPPE_OFFSET UNITYSDK_OFFSET(0x1D076EB0)
#define KCFLMFJEMFJ_BALHIOBCOND_OFFSET UNITYSDK_OFFSET(0x1D0713F0)
#define KCFLMFJEMFJ_BAMKGHHINMF_OFFSET UNITYSDK_OFFSET(0x1D072390)
#define KCFLMFJEMFJ_BBAPIDGGDKA_OFFSET UNITYSDK_OFFSET(0x1D078D60)
#define KCFLMFJEMFJ_BBMMJCABIAO_OFFSET UNITYSDK_OFFSET(0x1D075430)
#define KCFLMFJEMFJ_BCDLBAOOBME_OFFSET UNITYSDK_OFFSET(0x1D0727D0)
#define KCFLMFJEMFJ_BCEEEDHEKME_OFFSET UNITYSDK_OFFSET(0x1D06EF50)
#define KCFLMFJEMFJ_BCIECHGKDMD_OFFSET UNITYSDK_OFFSET(0x1D0717B0)
#define KCFLMFJEMFJ_BDBMNPAKIIJ_OFFSET UNITYSDK_OFFSET(0x1D071AC0)
#define KCFLMFJEMFJ_BDGLDLCEADF_OFFSET UNITYSDK_OFFSET(0x1D0729D0)
#define KCFLMFJEMFJ_BDJHGNGHFIG_OFFSET UNITYSDK_OFFSET(0x1D073BE0)
#define KCFLMFJEMFJ_BDKGEDFAFMF_OFFSET UNITYSDK_OFFSET(0x1D078C80)
#define KCFLMFJEMFJ_BDNBPLNLKME_OFFSET UNITYSDK_OFFSET(0x1D072D40)
#define KCFLMFJEMFJ_BDNHNCIMIMP_OFFSET UNITYSDK_OFFSET(0x1D06C2B0)
#define KCFLMFJEMFJ_BEELFKDFPCM_OFFSET UNITYSDK_OFFSET(0x1D070450)
#define KCFLMFJEMFJ_BEGKIKAHJCO_OFFSET UNITYSDK_OFFSET(0x1D06E330)
#define KCFLMFJEMFJ_BEIMIKFKKMG_OFFSET UNITYSDK_OFFSET(0x1D06F5C0)
#define KCFLMFJEMFJ_BEKOMHCEMGO_OFFSET UNITYSDK_OFFSET(0x1D079B60)
#define KCFLMFJEMFJ_BELBCFKGGHK_OFFSET UNITYSDK_OFFSET(0x1D075700)
#define KCFLMFJEMFJ_BEPJFLNNJHH_OFFSET UNITYSDK_OFFSET(0x1D078950)
#define KCFLMFJEMFJ_BFAHCKAJHMN_OFFSET UNITYSDK_OFFSET(0x1D067760)
#define KCFLMFJEMFJ_BFCGAAPAMBM_OFFSET UNITYSDK_OFFSET(0x1D078EF0)
#define KCFLMFJEMFJ_BFDCLJGBIHG_OFFSET UNITYSDK_OFFSET(0x1D06E3D0)
#define KCFLMFJEMFJ_BGEJFDINCMF_OFFSET UNITYSDK_OFFSET(0x1D073160)
#define KCFLMFJEMFJ_BGLIGCPLKFK_OFFSET UNITYSDK_OFFSET(0x1D06F940)
#define KCFLMFJEMFJ_BGMDPHMBALD_OFFSET UNITYSDK_OFFSET(0x1D078E40)
#define KCFLMFJEMFJ_BGMFODJOFNF_OFFSET UNITYSDK_OFFSET(0x1D0737D0)
#define KCFLMFJEMFJ_BGMNLNLLHAD_OFFSET UNITYSDK_OFFSET(0x1D06FAF0)
#define KCFLMFJEMFJ_BHDDOHAIMDL_OFFSET UNITYSDK_OFFSET(0x1D06E990)
#define KCFLMFJEMFJ_BHIFAKADHJJ_OFFSET UNITYSDK_OFFSET(0x1D071360)
#define KCFLMFJEMFJ_BHNBEKHBHHM_OFFSET UNITYSDK_OFFSET(0x1D073CA0)
#define KCFLMFJEMFJ_BIPJCOKNELJ_OFFSET UNITYSDK_OFFSET(0x1D070000)
#define KCFLMFJEMFJ_BJNNLLKDAHO_OFFSET UNITYSDK_OFFSET(0x1D06E6D0)
#define KCFLMFJEMFJ_BJOHLLLKELI_OFFSET UNITYSDK_OFFSET(0x1D0766B0)
#define KCFLMFJEMFJ_BKNGFIDFECM_OFFSET UNITYSDK_OFFSET(0x1D072CE0)
#define KCFLMFJEMFJ_BKNJDFMBOHB_OFFSET UNITYSDK_OFFSET(0x1D070A40)
#define KCFLMFJEMFJ_BKPALDLLHGH_OFFSET UNITYSDK_OFFSET(0x1D075170)
#define KCFLMFJEMFJ_BLALGBDNLKJ_OFFSET UNITYSDK_OFFSET(0x1D073330)
#define KCFLMFJEMFJ_BLCGGOMMMKB_OFFSET UNITYSDK_OFFSET(0x1D06E3C0)
#define KCFLMFJEMFJ_BLCINNDDDFC_OFFSET UNITYSDK_OFFSET(0x1D077A40)
#define KCFLMFJEMFJ_BLECAGHDDHI_OFFSET UNITYSDK_OFFSET(0x1D06EE60)
#define KCFLMFJEMFJ_BMCJPCCGBKA_OFFSET UNITYSDK_OFFSET(0x1D071A20)
#define KCFLMFJEMFJ_BMGHDDOMCEO_OFFSET UNITYSDK_OFFSET(0x1D071660)
#define KCFLMFJEMFJ_BMNEOFNLNIK_OFFSET UNITYSDK_OFFSET(0x1D0770D0)
#define KCFLMFJEMFJ_BNBHAEINPBE_OFFSET UNITYSDK_OFFSET(0x1D06E1F0)
#define KCFLMFJEMFJ_BNCMIGILDIE_OFFSET UNITYSDK_OFFSET(0x1D078990)
#define KCFLMFJEMFJ_BNENIKBPGLA_OFFSET UNITYSDK_OFFSET(0x1D0788D0)
#define KCFLMFJEMFJ_BNNDJCCGAJK_OFFSET UNITYSDK_OFFSET(0x1D07A4E0)
#define KCFLMFJEMFJ_BOKBEFFOCNG_OFFSET UNITYSDK_OFFSET(0x1D074E50)
#define KCFLMFJEMFJ_BONPCJICCND_OFFSET UNITYSDK_OFFSET(0x1D0730C0)
#define KCFLMFJEMFJ_BOPLOAFADJH_OFFSET UNITYSDK_OFFSET(0x1D0793F0)
#define KCFLMFJEMFJ_BPNAGJDOLFE_OFFSET UNITYSDK_OFFSET(0x1D06F970)
#define KCFLMFJEMFJ_BPNJPEOBFKC_OFFSET UNITYSDK_OFFSET(0x1D0720F0)
#define KCFLMFJEMFJ_CAJKPAFLKMI_OFFSET UNITYSDK_OFFSET(0x1D06E520)
#define KCFLMFJEMFJ_CBGEIIGJBDP_OFFSET UNITYSDK_OFFSET(0x1D072630)
#define KCFLMFJEMFJ_CBLMMNIBKFK_OFFSET UNITYSDK_OFFSET(0x1D0790A0)
#define KCFLMFJEMFJ_CBPFJPMMFIM_OFFSET UNITYSDK_OFFSET(0x1D071EB0)
#define KCFLMFJEMFJ_CBPKHKJNBMH_OFFSET UNITYSDK_OFFSET(0x1D0729A0)
#define KCFLMFJEMFJ_CCAIKELKFGA_OFFSET UNITYSDK_OFFSET(0x1D075A90)
#define KCFLMFJEMFJ_CCLHKJMFAGF_OFFSET UNITYSDK_OFFSET(0x1D06E720)
#define KCFLMFJEMFJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D07A750)
#define KCFLMFJEMFJ_CDABPJGBHMG_OFFSET UNITYSDK_OFFSET(0x1D0771D0)
#define KCFLMFJEMFJ_CDFCPEDMOFA_OFFSET UNITYSDK_OFFSET(0x1D076010)
#define KCFLMFJEMFJ_CDFMJPNKPID_OFFSET UNITYSDK_OFFSET(0x1D071330)
#define KCFLMFJEMFJ_CDHJFADBCIJ_OFFSET UNITYSDK_OFFSET(0x1D072B40)
#define KCFLMFJEMFJ_CDOFEPCENIL_OFFSET UNITYSDK_OFFSET(0x1D06F5F0)
#define KCFLMFJEMFJ_CDOHBGENAMJ_OFFSET UNITYSDK_OFFSET(0x1D06EA30)
#define KCFLMFJEMFJ_CDOJHBOBHHC_OFFSET UNITYSDK_OFFSET(0x1D06E600)
#define KCFLMFJEMFJ_CDPAIPLJKHF_OFFSET UNITYSDK_OFFSET(0x1D06E180)
#define KCFLMFJEMFJ_CDPDCONPBOE_OFFSET UNITYSDK_OFFSET(0x1D074F90)
#define KCFLMFJEMFJ_CEBFKKBGPHE_OFFSET UNITYSDK_OFFSET(0x1D070820)
#define KCFLMFJEMFJ_CEBGNCPFNBH_OFFSET UNITYSDK_OFFSET(0x1D079810)
#define KCFLMFJEMFJ_CEIKAJACKNA_OFFSET UNITYSDK_OFFSET(0x1D0716C0)
#define KCFLMFJEMFJ_CELNCMKPLNH_OFFSET UNITYSDK_OFFSET(0x1D077E60)
#define KCFLMFJEMFJ_CEMFMFNHDIE_OFFSET UNITYSDK_OFFSET(0x1D072AC0)
#define KCFLMFJEMFJ_CEMNICILGAF_OFFSET UNITYSDK_OFFSET(0x1D06C0F0)
#define KCFLMFJEMFJ_CENKKFDNNAA_OFFSET UNITYSDK_OFFSET(0x1D072DA0)
#define KCFLMFJEMFJ_CEOEIIBCMBP_OFFSET UNITYSDK_OFFSET(0x1D0704F0)
#define KCFLMFJEMFJ_CFKGBCLPECG_OFFSET UNITYSDK_OFFSET(0x1D071E60)
#define KCFLMFJEMFJ_CFNEMOLHPIE_OFFSET UNITYSDK_OFFSET(0x1D06E360)
#define KCFLMFJEMFJ_CFPECBCDDHP_OFFSET UNITYSDK_OFFSET(0x1D0776A0)
#define KCFLMFJEMFJ_CGDNHDICPKB_OFFSET UNITYSDK_OFFSET(0x1D074AA0)
#define KCFLMFJEMFJ_CGNBFDPIOHG_OFFSET UNITYSDK_OFFSET(0x1D073C10)
#define KCFLMFJEMFJ_CGPDJEJDBBF_OFFSET UNITYSDK_OFFSET(0x1D06E650)
#define KCFLMFJEMFJ_CGPHAFGHBHE_OFFSET UNITYSDK_OFFSET(0x1D070C60)
#define KCFLMFJEMFJ_CHFLOGBLFJA_OFFSET UNITYSDK_OFFSET(0x1D0788F0)
#define KCFLMFJEMFJ_CHGBIGCIIJO_OFFSET UNITYSDK_OFFSET(0x1D06E830)
#define KCFLMFJEMFJ_CHHFAMAFCID_OFFSET UNITYSDK_OFFSET(0x1D071C30)
#define KCFLMFJEMFJ_CHPGFMDFDIM_OFFSET UNITYSDK_OFFSET(0x1D077D10)
#define KCFLMFJEMFJ_CIICCDCBMMA_OFFSET UNITYSDK_OFFSET(0x1D073DB0)
#define KCFLMFJEMFJ_CIJBHOJNOHG_OFFSET UNITYSDK_OFFSET(0x1D072040)
#define KCFLMFJEMFJ_CIJDJFMHICG_OFFSET UNITYSDK_OFFSET(0x1D075220)
#define KCFLMFJEMFJ_CKBFEGOBMEP_OFFSET UNITYSDK_OFFSET(0x1D077E10)
#define KCFLMFJEMFJ_CKHFADGJMJE_OFFSET UNITYSDK_OFFSET(0x1D06EFE0)
#define KCFLMFJEMFJ_CKHHCMMCNDD_OFFSET UNITYSDK_OFFSET(0x1D076830)
#define KCFLMFJEMFJ_CLEAOKHGDAB_OFFSET UNITYSDK_OFFSET(0x1D072220)
#define KCFLMFJEMFJ_CLIHMKAOBMG_OFFSET UNITYSDK_OFFSET(0x1D06F3B0)
#define KCFLMFJEMFJ_CLPHBLLHMKK_OFFSET UNITYSDK_OFFSET(0x1D0774F0)
#define KCFLMFJEMFJ_CNAIBLMMCHA_OFFSET UNITYSDK_OFFSET(0x1D078DA0)
#define KCFLMFJEMFJ_CNDOPOCIIHK_OFFSET UNITYSDK_OFFSET(0x1D070330)
#define KCFLMFJEMFJ_CNJOBEEMIKL_OFFSET UNITYSDK_OFFSET(0x1D06E5F0)
#define KCFLMFJEMFJ_COCMCIOGJEK_OFFSET UNITYSDK_OFFSET(0x1D06E390)
#define KCFLMFJEMFJ_COLNIFOIFBB_OFFSET UNITYSDK_OFFSET(0x1D06E2C0)
#define KCFLMFJEMFJ_CPEMBFKNPCP_OFFSET UNITYSDK_OFFSET(0x1D0712D0)
#define KCFLMFJEMFJ_CPHKOIJNHOL_OFFSET UNITYSDK_OFFSET(0x1D079300)
#define KCFLMFJEMFJ_CPIGEDMJLED_OFFSET UNITYSDK_OFFSET(0x1D06C440)
#define KCFLMFJEMFJ_CPJIDGEKFID_OFFSET UNITYSDK_OFFSET(0x1D0736A0)
#define KCFLMFJEMFJ_CPKEPIFPBMG_OFFSET UNITYSDK_OFFSET(0x1D06EF80)
#define KCFLMFJEMFJ_CPNGLFLEKND_OFFSET UNITYSDK_OFFSET(0x1D06ECB0)
#define KCFLMFJEMFJ_DADLKNCEMHC_OFFSET UNITYSDK_OFFSET(0x1D079CA0)
#define KCFLMFJEMFJ_DALDPIEACAE_OFFSET UNITYSDK_OFFSET(0x1D06F7A0)
#define KCFLMFJEMFJ_DANAKBMDAME_OFFSET UNITYSDK_OFFSET(0x1D078B50)
#define KCFLMFJEMFJ_DAOHPNHPGIO_OFFSET UNITYSDK_OFFSET(0x1D072250)
#define KCFLMFJEMFJ_DAOIJAMELAN_OFFSET UNITYSDK_OFFSET(0x1D078C20)
#define KCFLMFJEMFJ_DBGMHCFLDIK_OFFSET UNITYSDK_OFFSET(0x1D072720)
#define KCFLMFJEMFJ_DBKIKLMFDNC_OFFSET UNITYSDK_OFFSET(0x1D070EC0)
#define KCFLMFJEMFJ_DDDPHCPPJOA_OFFSET UNITYSDK_OFFSET(0x1D06F710)
#define KCFLMFJEMFJ_DDGMIENKBFD_OFFSET UNITYSDK_OFFSET(0x1D06E610)
#define KCFLMFJEMFJ_DENIFCJBMMH_OFFSET UNITYSDK_OFFSET(0x1D06F200)
#define KCFLMFJEMFJ_DFAJJBACBHL_OFFSET UNITYSDK_OFFSET(0x1D072050)
#define KCFLMFJEMFJ_DFFBLLAGELJ_OFFSET UNITYSDK_OFFSET(0x1D071540)
#define KCFLMFJEMFJ_DFGIKPJIOGA_OFFSET UNITYSDK_OFFSET(0x1D06E420)
#define KCFLMFJEMFJ_DFIGPNNFBAJ_OFFSET UNITYSDK_OFFSET(0x1D076370)
#define KCFLMFJEMFJ_DFJIBPBCCCA_OFFSET UNITYSDK_OFFSET(0x1D074480)
#define KCFLMFJEMFJ_DGCAFCCBCBD_OFFSET UNITYSDK_OFFSET(0x1D06E670)
#define KCFLMFJEMFJ_DGGIHKIJCHK_OFFSET UNITYSDK_OFFSET(0x1D078150)
#define KCFLMFJEMFJ_DGJHHGIBBJJ_OFFSET UNITYSDK_OFFSET(0x1D076250)
#define KCFLMFJEMFJ_DGNGDICPDLO_OFFSET UNITYSDK_OFFSET(0x1D074770)
#define KCFLMFJEMFJ_DGNMHJGHDEL_OFFSET UNITYSDK_OFFSET(0x1D07A1A0)
#define KCFLMFJEMFJ_DGNOKBLMCNF_OFFSET UNITYSDK_OFFSET(0x1D06EA90)
#define KCFLMFJEMFJ_DGPDBNGGIPH_OFFSET UNITYSDK_OFFSET(0x1D074C80)
#define KCFLMFJEMFJ_DHGFIEFDJGH_OFFSET UNITYSDK_OFFSET(0x1D077750)
#define KCFLMFJEMFJ_DHJDCOCDNAB_OFFSET UNITYSDK_OFFSET(0x1D079C10)
#define KCFLMFJEMFJ_DIABPKENOBK_OFFSET UNITYSDK_OFFSET(0x1D071F50)
#define KCFLMFJEMFJ_DIGHGPGFLHA_OFFSET UNITYSDK_OFFSET(0x1D06FDF0)
#define KCFLMFJEMFJ_DIIFHHDDCDO_OFFSET UNITYSDK_OFFSET(0x1D0758E0)
#define KCFLMFJEMFJ_DIKCHAGINEL_OFFSET UNITYSDK_OFFSET(0x1D0791A0)
#define KCFLMFJEMFJ_DINGLAHIGFG_OFFSET UNITYSDK_OFFSET(0x1D071DC0)
#define KCFLMFJEMFJ_DJBBLMEJDMA_OFFSET UNITYSDK_OFFSET(0x1D07A2F0)
#define KCFLMFJEMFJ_DJCGANEPLNC_OFFSET UNITYSDK_OFFSET(0x1D074FC0)
#define KCFLMFJEMFJ_DJCIFKJIOJL_OFFSET UNITYSDK_OFFSET(0x1D0706C0)
#define KCFLMFJEMFJ_DJEEMAMLOKM_OFFSET UNITYSDK_OFFSET(0x1D077210)
#define KCFLMFJEMFJ_DJEMNGGJCJI_OFFSET UNITYSDK_OFFSET(0x1D076F50)
#define KCFLMFJEMFJ_DJINLJCFFJN_OFFSET UNITYSDK_OFFSET(0x1D071300)
#define KCFLMFJEMFJ_DJPMJAGBMHO_OFFSET UNITYSDK_OFFSET(0x1D079C40)
#define KCFLMFJEMFJ_DKGMHAECNFD_OFFSET UNITYSDK_OFFSET(0x1D073700)
#define KCFLMFJEMFJ_DKIPABAFNAD_OFFSET UNITYSDK_OFFSET(0x1D06FE50)
#define KCFLMFJEMFJ_DKNJKDCPHGL_OFFSET UNITYSDK_OFFSET(0x1D06F830)
#define KCFLMFJEMFJ_DLCKDNKLGMM_OFFSET UNITYSDK_OFFSET(0x1D073610)
#define KCFLMFJEMFJ_DLDNCNPNIMP_OFFSET UNITYSDK_OFFSET(0x1D06EB90)
#define KCFLMFJEMFJ_DLLKBAKOAFP_OFFSET UNITYSDK_OFFSET(0x1D078A10)
#define KCFLMFJEMFJ_DLNPAAKOKLC_OFFSET UNITYSDK_OFFSET(0x1D0773C0)
#define KCFLMFJEMFJ_DMBCDLEFFHN_OFFSET UNITYSDK_OFFSET(0x1D067440)
#define KCFLMFJEMFJ_DMJEDJAEHCE_OFFSET UNITYSDK_OFFSET(0x1D06E930)
#define KCFLMFJEMFJ_DNEIGJMNEMM_OFFSET UNITYSDK_OFFSET(0x1D079D20)
#define KCFLMFJEMFJ_DOAPJGDEMMH_OFFSET UNITYSDK_OFFSET(0x1D06E6E0)
#define KCFLMFJEMFJ_DOCBMJLEDMD_OFFSET UNITYSDK_OFFSET(0x1D072570)
#define KCFLMFJEMFJ_DOIPCGPLMLE_OFFSET UNITYSDK_OFFSET(0x1D076560)
#define KCFLMFJEMFJ_DOKBLCGCGMB_OFFSET UNITYSDK_OFFSET(0x1D0788B0)
#define KCFLMFJEMFJ_DOKCDEHICIE_OFFSET UNITYSDK_OFFSET(0x1D072480)
#define KCFLMFJEMFJ_DOMGKBBCDPB_OFFSET UNITYSDK_OFFSET(0x1D075460)
#define KCFLMFJEMFJ_DPCBJILBLGA_OFFSET UNITYSDK_OFFSET(0x1D075260)
#define KCFLMFJEMFJ_DPDJKKMEEIH_OFFSET UNITYSDK_OFFSET(0x1D072FE0)
#define KCFLMFJEMFJ_DPEOBLGDIIP_OFFSET UNITYSDK_OFFSET(0x1D076DA0)
#define KCFLMFJEMFJ_DPFBEEMIOPO_OFFSET UNITYSDK_OFFSET(0x1D075F20)
#define KCFLMFJEMFJ_EAABMHMMFGE_OFFSET UNITYSDK_OFFSET(0x1D06F410)
#define KCFLMFJEMFJ_EAANOOKPKCB_OFFSET UNITYSDK_OFFSET(0x1D0759D0)
#define KCFLMFJEMFJ_EABLJKHCNAH_OFFSET UNITYSDK_OFFSET(0x1D070B00)
#define KCFLMFJEMFJ_EACNCCEHOBL_OFFSET UNITYSDK_OFFSET(0x1D06FD60)
#define KCFLMFJEMFJ_EAGBKEFFHJP_OFFSET UNITYSDK_OFFSET(0x1D072420)
#define KCFLMFJEMFJ_EAMDFAHPBOB_OFFSET UNITYSDK_OFFSET(0x1D077620)
#define KCFLMFJEMFJ_EBGMDBLPPLD_OFFSET UNITYSDK_OFFSET(0x1D078B30)
#define KCFLMFJEMFJ_EBHCJBIABPD_OFFSET UNITYSDK_OFFSET(0x1D06C1D0)
#define KCFLMFJEMFJ_EBKHMOGBONN_OFFSET UNITYSDK_OFFSET(0x1D079A00)
#define KCFLMFJEMFJ_EBMFLAOODGH_OFFSET UNITYSDK_OFFSET(0x1D06E790)
#define KCFLMFJEMFJ_EBPDKFCLPAH_OFFSET UNITYSDK_OFFSET(0x1D079EE0)
#define KCFLMFJEMFJ_ECAGNKOAMHC_OFFSET UNITYSDK_OFFSET(0x1D071B00)
#define KCFLMFJEMFJ_ECEIDCJGOPI_OFFSET UNITYSDK_OFFSET(0x1D079150)
#define KCFLMFJEMFJ_ECFPCGHPKOF_OFFSET UNITYSDK_OFFSET(0x1D06E160)
#define KCFLMFJEMFJ_ECICPGKCMBL_OFFSET UNITYSDK_OFFSET(0x1D06F0D0)
#define KCFLMFJEMFJ_ECKCMNAOHEL_OFFSET UNITYSDK_OFFSET(0x1D079280)
#define KCFLMFJEMFJ_ECPAMEGCOCD_OFFSET UNITYSDK_OFFSET(0x1D079E90)
#define KCFLMFJEMFJ_EDCMGLHHADM_OFFSET UNITYSDK_OFFSET(0x1D0734A0)
#define KCFLMFJEMFJ_EDFEFCKMLDM_OFFSET UNITYSDK_OFFSET(0x1D0756D0)
#define KCFLMFJEMFJ_EDGEELFBFMB_OFFSET UNITYSDK_OFFSET(0x1D0707F0)
#define KCFLMFJEMFJ_EDIKLIKOOJN_OFFSET UNITYSDK_OFFSET(0x1D0744C0)
#define KCFLMFJEMFJ_EDIOJIIHCGB_OFFSET UNITYSDK_OFFSET(0x1D078A70)
#define KCFLMFJEMFJ_EEGGAIIJBLH_OFFSET UNITYSDK_OFFSET(0x1D071D70)
#define KCFLMFJEMFJ_EEOMKLAEHCA_OFFSET UNITYSDK_OFFSET(0x1D0775A0)
#define KCFLMFJEMFJ_EFJCINKDGHG_OFFSET UNITYSDK_OFFSET(0x1D06EB20)
#define KCFLMFJEMFJ_EFLFDIEKCLJ_OFFSET UNITYSDK_OFFSET(0x1D06FEB0)
#define KCFLMFJEMFJ_EGIMGLFAEJB_OFFSET UNITYSDK_OFFSET(0x1D06FFD0)
#define KCFLMFJEMFJ_EGJCMJDFHDK_OFFSET UNITYSDK_OFFSET(0x1D0732D0)
#define KCFLMFJEMFJ_EGLHPKIMLID_OFFSET UNITYSDK_OFFSET(0x1D06EC80)
#define KCFLMFJEMFJ_EGLLFMGGEFD_OFFSET UNITYSDK_OFFSET(0x1D0731C0)
#define KCFLMFJEMFJ_EHBGEEEGLBN_OFFSET UNITYSDK_OFFSET(0x1D06F3E0)
#define KCFLMFJEMFJ_EHCKEGNHBHN_OFFSET UNITYSDK_OFFSET(0x1D06C010)
#define KCFLMFJEMFJ_EHGKHIBKEJH_OFFSET UNITYSDK_OFFSET(0x1D076770)
#define KCFLMFJEMFJ_EHPCMADIOKC_OFFSET UNITYSDK_OFFSET(0x1D075880)
#define KCFLMFJEMFJ_EIBOCBBHHIN_OFFSET UNITYSDK_OFFSET(0x1D06AD60)
#define KCFLMFJEMFJ_EIDJHJLFNKF_OFFSET UNITYSDK_OFFSET(0x1D06B190)
#define KCFLMFJEMFJ_EIEBOAAIILE_OFFSET UNITYSDK_OFFSET(0x1D078EC0)
#define KCFLMFJEMFJ_EIEOLOCMAOL_OFFSET UNITYSDK_OFFSET(0x1D06ED40)
#define KCFLMFJEMFJ_EIOPCKDDGDL_OFFSET UNITYSDK_OFFSET(0x1D071A90)
#define KCFLMFJEMFJ_EJEMFEPOIFF_1_OFFSET UNITYSDK_OFFSET(0x1D068250)
#define KCFLMFJEMFJ_EJEMFEPOIFF_OFFSET UNITYSDK_OFFSET(0x1D067C60)
#define KCFLMFJEMFJ_EJJCAIJOLDM_OFFSET UNITYSDK_OFFSET(0x1D072360)
#define KCFLMFJEMFJ_EJJMHKIBHLD_OFFSET UNITYSDK_OFFSET(0x1D0748F0)
#define KCFLMFJEMFJ_EJKJMCKFIBA_OFFSET UNITYSDK_OFFSET(0x1D07A060)
#define KCFLMFJEMFJ_EJKMHLNNIAJ_OFFSET UNITYSDK_OFFSET(0x1D079070)
#define KCFLMFJEMFJ_EKBIPAILFKE_OFFSET UNITYSDK_OFFSET(0x1D06ED10)
#define KCFLMFJEMFJ_EKCLIHOOIBI_OFFSET UNITYSDK_OFFSET(0x1D076440)
#define KCFLMFJEMFJ_EKKMHMCHBBL_OFFSET UNITYSDK_OFFSET(0x1D06BE30)
#define KCFLMFJEMFJ_EKPBNBNLLLG_OFFSET UNITYSDK_OFFSET(0x1D073B30)
#define KCFLMFJEMFJ_ELBLIKPEEIE_OFFSET UNITYSDK_OFFSET(0x1D073BB0)
#define KCFLMFJEMFJ_ELFCAOMJHNP_OFFSET UNITYSDK_OFFSET(0x1D076140)
#define KCFLMFJEMFJ_ELOLHFODPAJ_OFFSET UNITYSDK_OFFSET(0x1D06E820)
#define KCFLMFJEMFJ_EMFGODOPLDN_OFFSET UNITYSDK_OFFSET(0x1D077A00)
#define KCFLMFJEMFJ_EMKCAGGMANH_OFFSET UNITYSDK_OFFSET(0x1D079100)
#define KCFLMFJEMFJ_ENBFOBMCDLE_OFFSET UNITYSDK_OFFSET(0x1D0799D0)
#define KCFLMFJEMFJ_ENBLNIICCDC_OFFSET UNITYSDK_OFFSET(0x1D0736D0)
#define KCFLMFJEMFJ_ENDPJBBEMPE_OFFSET UNITYSDK_OFFSET(0x1D075A00)
#define KCFLMFJEMFJ_ENFCGCDBHLC_OFFSET UNITYSDK_OFFSET(0x1D073670)
#define KCFLMFJEMFJ_ENNJEEPLBKO_OFFSET UNITYSDK_OFFSET(0x1D06F4A0)
#define KCFLMFJEMFJ_ENOBOLMLKEI_OFFSET UNITYSDK_OFFSET(0x1D071960)
#define KCFLMFJEMFJ_EODPOLAKOLO_OFFSET UNITYSDK_OFFSET(0x1D075BB0)
#define KCFLMFJEMFJ_EOECBMIALKD_OFFSET UNITYSDK_OFFSET(0x1D0705B0)
#define KCFLMFJEMFJ_EOGNFOMJOEE_OFFSET UNITYSDK_OFFSET(0x1D079A90)
#define KCFLMFJEMFJ_EOJMDHMBIAE_OFFSET UNITYSDK_OFFSET(0x1D074970)
#define KCFLMFJEMFJ_EONBBBEGDII_OFFSET UNITYSDK_OFFSET(0x1D06FA30)
#define KCFLMFJEMFJ_EOOMFGKIBHO_OFFSET UNITYSDK_OFFSET(0x1D078490)
#define KCFLMFJEMFJ_EPCOJHDNEOM_OFFSET UNITYSDK_OFFSET(0x1D0744F0)
#define KCFLMFJEMFJ_EPKLAPLEIEJ_OFFSET UNITYSDK_OFFSET(0x1D078DE0)
#define KCFLMFJEMFJ_EPOBCMJMPHC_OFFSET UNITYSDK_OFFSET(0x1D077DF0)
#define KCFLMFJEMFJ_EPOFDHHONFL_OFFSET UNITYSDK_OFFSET(0x1D071F00)
#define KCFLMFJEMFJ_FAEBCIKJGIG_OFFSET UNITYSDK_OFFSET(0x1D0718D0)
#define KCFLMFJEMFJ_FALAEEMJBJN_OFFSET UNITYSDK_OFFSET(0x1D077E30)
#define KCFLMFJEMFJ_FBINAJKFKJN_OFFSET UNITYSDK_OFFSET(0x1D076F20)
#define KCFLMFJEMFJ_FBLJBAONOAC_OFFSET UNITYSDK_OFFSET(0x1D079A60)
#define KCFLMFJEMFJ_FBMEMDBIGHA_OFFSET UNITYSDK_OFFSET(0x1D076410)
#define KCFLMFJEMFJ_FCBLEIEBONI_OFFSET UNITYSDK_OFFSET(0x1D071770)
#define KCFLMFJEMFJ_FCEGNNPLDJF_OFFSET UNITYSDK_OFFSET(0x1D079960)
#define KCFLMFJEMFJ_FCJHGMFCINF_OFFSET UNITYSDK_OFFSET(0x1D06E630)
#define KCFLMFJEMFJ_FCNLCGMEKEL_OFFSET UNITYSDK_OFFSET(0x1D079180)
#define KCFLMFJEMFJ_FCPIPPNFJPD_OFFSET UNITYSDK_OFFSET(0x1D0735B0)
#define KCFLMFJEMFJ_FDAJIEMKMJO_OFFSET UNITYSDK_OFFSET(0x1D077100)
#define KCFLMFJEMFJ_FDEOBHOKFPH_OFFSET UNITYSDK_OFFSET(0x1D070A80)
#define KCFLMFJEMFJ_FDIBNOEAHLN_OFFSET UNITYSDK_OFFSET(0x1D0747A0)
#define KCFLMFJEMFJ_FDKHLPJMKJG_OFFSET UNITYSDK_OFFSET(0x1D0762E0)
#define KCFLMFJEMFJ_FEHKBHACALL_OFFSET UNITYSDK_OFFSET(0x1D072160)
#define KCFLMFJEMFJ_FEHLDHANLHP_OFFSET UNITYSDK_OFFSET(0x1D072600)
#define KCFLMFJEMFJ_FEIDCFIPFAN_OFFSET UNITYSDK_OFFSET(0x1D076FB0)
#define KCFLMFJEMFJ_FEKBIKKLBLK_OFFSET UNITYSDK_OFFSET(0x1D079570)
#define KCFLMFJEMFJ_FELKOJIMNJO_OFFSET UNITYSDK_OFFSET(0x1D073E90)
#define KCFLMFJEMFJ_FEPEBGKBLMC_OFFSET UNITYSDK_OFFSET(0x1D06F290)
#define KCFLMFJEMFJ_FFPMKILOANL_OFFSET UNITYSDK_OFFSET(0x1D071630)
#define KCFLMFJEMFJ_FGOMFIPBJDL_OFFSET UNITYSDK_OFFSET(0x1D071390)
#define KCFLMFJEMFJ_FGPOPAIGHEJ_OFFSET UNITYSDK_OFFSET(0x1D0792B0)
#define KCFLMFJEMFJ_FHOCCIEHPOJ_OFFSET UNITYSDK_OFFSET(0x1D070480)
#define KCFLMFJEMFJ_FIGEDPHBCFN_OFFSET UNITYSDK_OFFSET(0x1D06BF10)
#define KCFLMFJEMFJ_FIIAIKGDOOI_OFFSET UNITYSDK_OFFSET(0x1D071FA0)
#define KCFLMFJEMFJ_FIOIINDDGBE_OFFSET UNITYSDK_OFFSET(0x1D072A00)
#define KCFLMFJEMFJ_FJLCFIMJHBO_OFFSET UNITYSDK_OFFSET(0x1D0760E0)
#define KCFLMFJEMFJ_FJMHGEKBBIA_OFFSET UNITYSDK_OFFSET(0x1D077270)
#define KCFLMFJEMFJ_FKABMCFDLFE_OFFSET UNITYSDK_OFFSET(0x1D0798A0)
#define KCFLMFJEMFJ_FKBMBKLAKJO_OFFSET UNITYSDK_OFFSET(0x1D074BC0)
#define KCFLMFJEMFJ_FKBNCMFMPGM_OFFSET UNITYSDK_OFFSET(0x1D06F010)
#define KCFLMFJEMFJ_FKIEFDCBBMA_OFFSET UNITYSDK_OFFSET(0x1D070FB0)
#define KCFLMFJEMFJ_FKMJEBAMNIK_OFFSET UNITYSDK_OFFSET(0x1D076110)
#define KCFLMFJEMFJ_FLAODGCNAFE_OFFSET UNITYSDK_OFFSET(0x1D0796E0)
#define KCFLMFJEMFJ_FLBIEJNLDIM_OFFSET UNITYSDK_OFFSET(0x1D06EAF0)
#define KCFLMFJEMFJ_FLGCDFPGDJM_OFFSET UNITYSDK_OFFSET(0x1D078F10)
#define KCFLMFJEMFJ_FLIAMIMIEIE_OFFSET UNITYSDK_OFFSET(0x1D070FE0)
#define KCFLMFJEMFJ_FLLBGBNMDCB_OFFSET UNITYSDK_OFFSET(0x1D077550)
#define KCFLMFJEMFJ_FLMAMEOFKKK_OFFSET UNITYSDK_OFFSET(0x1D078280)
#define KCFLMFJEMFJ_FLNDNGAGDMG_OFFSET UNITYSDK_OFFSET(0x1D0711A0)
#define KCFLMFJEMFJ_FLNHJKNEMEO_OFFSET UNITYSDK_OFFSET(0x1D0703F0)
#define KCFLMFJEMFJ_FMDDILBKOCF_OFFSET UNITYSDK_OFFSET(0x1D079D80)
#define KCFLMFJEMFJ_FMDNLCFBELA_OFFSET UNITYSDK_OFFSET(0x1D076310)
#define KCFLMFJEMFJ_FMEMJHJCFGL_OFFSET UNITYSDK_OFFSET(0x1D06E430)
#define KCFLMFJEMFJ_FMFEOJHOPKD_OFFSET UNITYSDK_OFFSET(0x1D073080)
#define KCFLMFJEMFJ_FMKCBANODKK_OFFSET UNITYSDK_OFFSET(0x1D072E90)
#define KCFLMFJEMFJ_FMMPLCFFBDD_OFFSET UNITYSDK_OFFSET(0x1D0778D0)
#define KCFLMFJEMFJ_FMPOHHKFCNG_OFFSET UNITYSDK_OFFSET(0x1D06EB60)
#define KCFLMFJEMFJ_FNBAHEJNGFH_OFFSET UNITYSDK_OFFSET(0x1D079540)
#define KCFLMFJEMFJ_FNMJOKLDKGN_OFFSET UNITYSDK_OFFSET(0x1D06EE00)
#define KCFLMFJEMFJ_FNMKMJDBADE_OFFSET UNITYSDK_OFFSET(0x1D070920)
#define KCFLMFJEMFJ_FOKDCBBELKP_OFFSET UNITYSDK_OFFSET(0x1D075D40)
#define KCFLMFJEMFJ_FOMGHKIGHJF_OFFSET UNITYSDK_OFFSET(0x1D077B80)
#define KCFLMFJEMFJ_FONAFJFAKPP_OFFSET UNITYSDK_OFFSET(0x1D072BA0)
#define KCFLMFJEMFJ_FONCDEKOOFE_OFFSET UNITYSDK_OFFSET(0x1D06EDA0)
#define KCFLMFJEMFJ_FOOLLKBGKMN_OFFSET UNITYSDK_OFFSET(0x1D072CB0)
#define KCFLMFJEMFJ_GABOJBCLEHJ_OFFSET UNITYSDK_OFFSET(0x1D07A630)
#define KCFLMFJEMFJ_GADNJOODBPK_OFFSET UNITYSDK_OFFSET(0x1D079BC0)
#define KCFLMFJEMFJ_GAGCBMJNJMC_OFFSET UNITYSDK_OFFSET(0x1D071E10)
#define KCFLMFJEMFJ_GALGDHENGDJ_OFFSET UNITYSDK_OFFSET(0x1D06FDC0)
#define KCFLMFJEMFJ_GAMHKHBNOBD_OFFSET UNITYSDK_OFFSET(0x1D0746A0)
#define KCFLMFJEMFJ_GBEBIHOOOMG_OFFSET UNITYSDK_OFFSET(0x1D072D10)
#define KCFLMFJEMFJ_GBJBLNCKLDD_OFFSET UNITYSDK_OFFSET(0x1D073100)
#define KCFLMFJEMFJ_GBNLCEIBKEO_OFFSET UNITYSDK_OFFSET(0x1D06E760)
#define KCFLMFJEMFJ_GBOANEJEPIB_OFFSET UNITYSDK_OFFSET(0x1D06E170)
#define KCFLMFJEMFJ_GBPHEPPGOIN_OFFSET UNITYSDK_OFFSET(0x1D06EA60)
#define KCFLMFJEMFJ_GCDMOABGOEL_OFFSET UNITYSDK_OFFSET(0x1D072330)
#define KCFLMFJEMFJ_GCGMGFKPGIN_OFFSET UNITYSDK_OFFSET(0x1D077990)
#define KCFLMFJEMFJ_GCGNGAALONM_OFFSET UNITYSDK_OFFSET(0x1D06E3B0)
#define KCFLMFJEMFJ_GCHBMCKAHPJ_OFFSET UNITYSDK_OFFSET(0x1D0779B0)
#define KCFLMFJEMFJ_GCKAOPOOJCD_OFFSET UNITYSDK_OFFSET(0x1D0726C0)
#define KCFLMFJEMFJ_GEHOFFAHIKM_OFFSET UNITYSDK_OFFSET(0x1D06F650)
#define KCFLMFJEMFJ_GFCIMNAJJCJ_OFFSET UNITYSDK_OFFSET(0x1D06F6E0)
#define KCFLMFJEMFJ_GFMJAKPEDOF_OFFSET UNITYSDK_OFFSET(0x1D0705E0)
#define KCFLMFJEMFJ_GGHHCPDMEDC_OFFSET UNITYSDK_OFFSET(0x1D070C00)
#define KCFLMFJEMFJ_GGIKHPPDFNA_OFFSET UNITYSDK_OFFSET(0x1D06E2A0)
#define KCFLMFJEMFJ_GGMHFAOKFJC_OFFSET UNITYSDK_OFFSET(0x1D072910)
#define KCFLMFJEMFJ_GGMJLIJBADJ_OFFSET UNITYSDK_OFFSET(0x1D0751F0)
#define KCFLMFJEMFJ_GHGHINFBOLO_OFFSET UNITYSDK_OFFSET(0x1D070640)
#define KCFLMFJEMFJ_GHHJLCAKCPE_OFFSET UNITYSDK_OFFSET(0x1D06F890)
#define KCFLMFJEMFJ_GHICECPKGEB_OFFSET UNITYSDK_OFFSET(0x1D078590)
#define KCFLMFJEMFJ_GICGBLNNBEK_OFFSET UNITYSDK_OFFSET(0x1D06E460)
#define KCFLMFJEMFJ_GIGIFLFOEMF_OFFSET UNITYSDK_OFFSET(0x1D077190)
#define KCFLMFJEMFJ_GIIFKIMEBDC_OFFSET UNITYSDK_OFFSET(0x1D069D10)
#define KCFLMFJEMFJ_GIKEFIBNICC_OFFSET UNITYSDK_OFFSET(0x1D0753A0)
#define KCFLMFJEMFJ_GIMBHMKDCBC_OFFSET UNITYSDK_OFFSET(0x1D0708E0)
#define KCFLMFJEMFJ_GIMGOEJFNBI_OFFSET UNITYSDK_OFFSET(0x1D078360)
#define KCFLMFJEMFJ_GJHAMGGGMLJ_OFFSET UNITYSDK_OFFSET(0x1D06F9A0)
#define KCFLMFJEMFJ_GJIDFNNBDEP_OFFSET UNITYSDK_OFFSET(0x1D070110)
#define KCFLMFJEMFJ_GJJFFPGJAIK_OFFSET UNITYSDK_OFFSET(0x1D078A50)
#define KCFLMFJEMFJ_GJMJAGNCAKC_OFFSET UNITYSDK_OFFSET(0x1D0786A0)
#define KCFLMFJEMFJ_GJNAKJGIKHI_OFFSET UNITYSDK_OFFSET(0x1D078030)
#define KCFLMFJEMFJ_GJNMILANHNO_OFFSET UNITYSDK_OFFSET(0x1D0754F0)
#define KCFLMFJEMFJ_GJPFLKEGAFM_OFFSET UNITYSDK_OFFSET(0x1D073C40)
#define KCFLMFJEMFJ_GJPJDGJPMPC_OFFSET UNITYSDK_OFFSET(0x1D072BE0)
#define KCFLMFJEMFJ_GKCLIAGAMIH_OFFSET UNITYSDK_OFFSET(0x1D078070)
#define KCFLMFJEMFJ_GKIGCBDOMBO_OFFSET UNITYSDK_OFFSET(0x1D070070)
#define KCFLMFJEMFJ_GKIPKIEDLGM_OFFSET UNITYSDK_OFFSET(0x1D079840)
#define KCFLMFJEMFJ_GKJDMKJAFDK_OFFSET UNITYSDK_OFFSET(0x1D075910)
#define KCFLMFJEMFJ_GKLBIAILECP_OFFSET UNITYSDK_OFFSET(0x1D0700A0)
#define KCFLMFJEMFJ_GLDCAALBLGL_OFFSET UNITYSDK_OFFSET(0x1D075E00)
#define KCFLMFJEMFJ_GLEPDOBLGKP_OFFSET UNITYSDK_OFFSET(0x1D070B60)
#define KCFLMFJEMFJ_GLFGJGAEDOH_OFFSET UNITYSDK_OFFSET(0x1D074410)
#define KCFLMFJEMFJ_GLHFIKBAEBJ_OFFSET UNITYSDK_OFFSET(0x1D075050)
#define KCFLMFJEMFJ_GLJEMANCKMC_OFFSET UNITYSDK_OFFSET(0x1D06E960)
#define KCFLMFJEMFJ_GLOJAFDHNJK_OFFSET UNITYSDK_OFFSET(0x1D0707C0)
#define KCFLMFJEMFJ_GMCDPFJNEAF_OFFSET UNITYSDK_OFFSET(0x1D074700)
#define KCFLMFJEMFJ_GMEJNHINCGJ_OFFSET UNITYSDK_OFFSET(0x1D079360)
#define KCFLMFJEMFJ_GMOBMKFCJHG_OFFSET UNITYSDK_OFFSET(0x1D079E00)
#define KCFLMFJEMFJ_GNABCBAGCBL_OFFSET UNITYSDK_OFFSET(0x1D073220)
#define KCFLMFJEMFJ_GNBDAHAEEMI_OFFSET UNITYSDK_OFFSET(0x1D073890)
#define KCFLMFJEMFJ_GNFBCIANHHD_OFFSET UNITYSDK_OFFSET(0x1D0789D0)
#define KCFLMFJEMFJ_GNGMCLNFHBO_OFFSET UNITYSDK_OFFSET(0x1D0749A0)
#define KCFLMFJEMFJ_GNIFKEMFHGG_OFFSET UNITYSDK_OFFSET(0x1D06F500)
#define KCFLMFJEMFJ_GNLIFPLEIIO_OFFSET UNITYSDK_OFFSET(0x1D06FCA0)
#define KCFLMFJEMFJ_GNMBGMDEEKJ_OFFSET UNITYSDK_OFFSET(0x1D07A510)
#define KCFLMFJEMFJ_GNNIPHIPPDE_OFFSET UNITYSDK_OFFSET(0x1D077F50)
#define KCFLMFJEMFJ_GNOPJIOBJKL_OFFSET UNITYSDK_OFFSET(0x1D06E590)
#define KCFLMFJEMFJ_GOGBLIICNLH_OFFSET UNITYSDK_OFFSET(0x1D0751B0)
#define KCFLMFJEMFJ_GOGNPDFLLJH_OFFSET UNITYSDK_OFFSET(0x1D073400)
#define KCFLMFJEMFJ_GPEPOMNCCNB_OFFSET UNITYSDK_OFFSET(0x1D072970)
#define KCFLMFJEMFJ_GPHAGEJFLFD_OFFSET UNITYSDK_OFFSET(0x1D077A80)
#define KCFLMFJEMFJ_GPLGNBMPILJ_OFFSET UNITYSDK_OFFSET(0x1D071690)
#define KCFLMFJEMFJ_GPPKKHPOPJB_OFFSET UNITYSDK_OFFSET(0x1D079480)
#define KCFLMFJEMFJ_HACMMNNPHCB_OFFSET UNITYSDK_OFFSET(0x1D0731F0)
#define KCFLMFJEMFJ_HAHEIHLCOFE_OFFSET UNITYSDK_OFFSET(0x1D075790)
#define KCFLMFJEMFJ_HANAMBKMMBH_OFFSET UNITYSDK_OFFSET(0x1D0739E0)
#define KCFLMFJEMFJ_HANLHODGNMF_OFFSET UNITYSDK_OFFSET(0x1D078330)
#define KCFLMFJEMFJ_HBHBHGGCCNA_OFFSET UNITYSDK_OFFSET(0x1D0762B0)
#define KCFLMFJEMFJ_HBMOENBCOOM_OFFSET UNITYSDK_OFFSET(0x1D078190)
#define KCFLMFJEMFJ_HCAKADFJKPK_OFFSET UNITYSDK_OFFSET(0x1D06B820)
#define KCFLMFJEMFJ_HCAKAMFOFIN_OFFSET UNITYSDK_OFFSET(0x1D072690)
#define KCFLMFJEMFJ_HCCCKJDNEDC_OFFSET UNITYSDK_OFFSET(0x1D0717F0)
#define KCFLMFJEMFJ_HCFPPJFPFCJ_OFFSET UNITYSDK_OFFSET(0x1D0721C0)
#define KCFLMFJEMFJ_HCGMHHHBCNJ_OFFSET UNITYSDK_OFFSET(0x1D078720)
#define KCFLMFJEMFJ_HCGOJPGMAAI_OFFSET UNITYSDK_OFFSET(0x1D075FE0)
#define KCFLMFJEMFJ_HCKICONKINF_OFFSET UNITYSDK_OFFSET(0x1D0771A0)
#define KCFLMFJEMFJ_HCNBILPGGDL_OFFSET UNITYSDK_OFFSET(0x1D079AC0)
#define KCFLMFJEMFJ_HCNEBFNKPHK_OFFSET UNITYSDK_OFFSET(0x1D0797A0)
#define KCFLMFJEMFJ_HCOJMCLGLGJ_OFFSET UNITYSDK_OFFSET(0x1D0733C0)
#define KCFLMFJEMFJ_HDCEKBOMADO_OFFSET UNITYSDK_OFFSET(0x1D075DD0)
#define KCFLMFJEMFJ_HDEAOIJDNIC_OFFSET UNITYSDK_OFFSET(0x1D076890)
#define KCFLMFJEMFJ_HDEHDIPNLAF_OFFSET UNITYSDK_OFFSET(0x1D075EC0)
#define KCFLMFJEMFJ_HDEINEDBFGH_OFFSET UNITYSDK_OFFSET(0x1D075AC0)
#define KCFLMFJEMFJ_HDNIFAFDIOJ_OFFSET UNITYSDK_OFFSET(0x1D067630)
#define KCFLMFJEMFJ_HDNMKPNKFIL_OFFSET UNITYSDK_OFFSET(0x1D071A60)
#define KCFLMFJEMFJ_HDOEMNLGENB_OFFSET UNITYSDK_OFFSET(0x1D076340)
#define KCFLMFJEMFJ_HFCCJDDPEMB_OFFSET UNITYSDK_OFFSET(0x1D075C80)
#define KCFLMFJEMFJ_HGBKBJHLDEB_OFFSET UNITYSDK_OFFSET(0x1D076220)
#define KCFLMFJEMFJ_HGFGDPEGGPO_OFFSET UNITYSDK_OFFSET(0x1D074B00)
#define KCFLMFJEMFJ_HGKJPOKMPLC_OFFSET UNITYSDK_OFFSET(0x1D062830)
#define KCFLMFJEMFJ_HHFBIGJCIKJ_OFFSET UNITYSDK_OFFSET(0x1D06F1D0)
#define KCFLMFJEMFJ_HHGMCLAIAOA_OFFSET UNITYSDK_OFFSET(0x1D075080)
#define KCFLMFJEMFJ_HJEHCGMNPPI_OFFSET UNITYSDK_OFFSET(0x1D0757C0)
#define KCFLMFJEMFJ_HJHKDKICNPP_OFFSET UNITYSDK_OFFSET(0x1D07A540)
#define KCFLMFJEMFJ_HJJAACIOOHI_OFFSET UNITYSDK_OFFSET(0x1D071070)
#define KCFLMFJEMFJ_HJNFPOKHJJO_OFFSET UNITYSDK_OFFSET(0x1D078AD0)
#define KCFLMFJEMFJ_HKFMEMPNFMM_OFFSET UNITYSDK_OFFSET(0x1D074CE0)
#define KCFLMFJEMFJ_HKOKLNFHAHE_OFFSET UNITYSDK_OFFSET(0x1D06E4F0)
#define KCFLMFJEMFJ_HLBGFIIBBGB_OFFSET UNITYSDK_OFFSET(0x1D0796A0)
#define KCFLMFJEMFJ_HLIOIIKCJND_OFFSET UNITYSDK_OFFSET(0x1D0790D0)
#define KCFLMFJEMFJ_HLLEPBGCKEN_OFFSET UNITYSDK_OFFSET(0x1D076040)
#define KCFLMFJEMFJ_HLNFJIJGBJM_OFFSET UNITYSDK_OFFSET(0x1D078890)
#define KCFLMFJEMFJ_HMBKOOCONHO_OFFSET UNITYSDK_OFFSET(0x1D074E20)
#define KCFLMFJEMFJ_HMBOOHLJICP_OFFSET UNITYSDK_OFFSET(0x1D06F6B0)
#define KCFLMFJEMFJ_HMELLHLEDPO_OFFSET UNITYSDK_OFFSET(0x1D0755B0)
#define KCFLMFJEMFJ_HMHCGNCJOGE_OFFSET UNITYSDK_OFFSET(0x1D075310)
#define KCFLMFJEMFJ_HNAAOKFDODB_OFFSET UNITYSDK_OFFSET(0x1D0778A0)
#define KCFLMFJEMFJ_HNEIKOOJNHB_OFFSET UNITYSDK_OFFSET(0x1D074F10)
#define KCFLMFJEMFJ_HNJLMDMPGLP_OFFSET UNITYSDK_OFFSET(0x1D06E620)
#define KCFLMFJEMFJ_HNNPMEPHCMJ_OFFSET UNITYSDK_OFFSET(0x1D06F230)
#define KCFLMFJEMFJ_HNOAAKOHFHE_OFFSET UNITYSDK_OFFSET(0x1D0700E0)
#define KCFLMFJEMFJ_HOFDIHJDNKH_OFFSET UNITYSDK_OFFSET(0x1D067950)
#define KCFLMFJEMFJ_HOLAFAFKLFG_OFFSET UNITYSDK_OFFSET(0x1D06E400)
#define KCFLMFJEMFJ_HOPCICLMDHE_OFFSET UNITYSDK_OFFSET(0x1D068BC0)
#define KCFLMFJEMFJ_HPBNHEIDECD_OFFSET UNITYSDK_OFFSET(0x1D074800)
#define KCFLMFJEMFJ_HPCAHOMDPJK_OFFSET UNITYSDK_OFFSET(0x1D077C10)
#define KCFLMFJEMFJ_HPFLEFMGFMM_OFFSET UNITYSDK_OFFSET(0x1D0764A0)
#define KCFLMFJEMFJ_HPGLIMAPLHO_OFFSET UNITYSDK_OFFSET(0x1D073FD0)
#define KCFLMFJEMFJ_HPIOPJJKIKC_OFFSET UNITYSDK_OFFSET(0x1D075760)
#define KCFLMFJEMFJ_HPLKFMPKICO_OFFSET UNITYSDK_OFFSET(0x1D074160)
#define KCFLMFJEMFJ_IACBKNKPOOO_OFFSET UNITYSDK_OFFSET(0x1D075CB0)
#define KCFLMFJEMFJ_IAFPMOGEKLA_OFFSET UNITYSDK_OFFSET(0x1D074A40)
#define KCFLMFJEMFJ_IAGDNHALHLA_OFFSET UNITYSDK_OFFSET(0x1D077BC0)
#define KCFLMFJEMFJ_IAJMCHBCJJI_OFFSET UNITYSDK_OFFSET(0x1D0732A0)
#define KCFLMFJEMFJ_IANBLHLFICB_OFFSET UNITYSDK_OFFSET(0x1D071C60)
#define KCFLMFJEMFJ_IBFNJBBAKJI_OFFSET UNITYSDK_OFFSET(0x1D0723C0)
#define KCFLMFJEMFJ_IBGBHBCKNBD_OFFSET UNITYSDK_OFFSET(0x1D06F560)
#define KCFLMFJEMFJ_IBHFMOMPDDL_OFFSET UNITYSDK_OFFSET(0x1D070580)
#define KCFLMFJEMFJ_IBLEJNHBDLA_OFFSET UNITYSDK_OFFSET(0x1D06E8A0)
#define KCFLMFJEMFJ_ICBGMLFCIEJ_OFFSET UNITYSDK_OFFSET(0x1D075580)
#define KCFLMFJEMFJ_ICEOBCKLLFG_OFFSET UNITYSDK_OFFSET(0x1D074060)
#define KCFLMFJEMFJ_ICJPKOGODPP_OFFSET UNITYSDK_OFFSET(0x1D079930)
#define KCFLMFJEMFJ_ICKKKCEMABN_OFFSET UNITYSDK_OFFSET(0x1D076280)
#define KCFLMFJEMFJ_ICLDJFFKOFF_OFFSET UNITYSDK_OFFSET(0x1D071990)
#define KCFLMFJEMFJ_ICOHNAHIJKM_OFFSET UNITYSDK_OFFSET(0x1D06F860)
#define KCFLMFJEMFJ_ICPALHPIIHA_OFFSET UNITYSDK_OFFSET(0x1D077520)
#define KCFLMFJEMFJ_IDBDHLHOBBG_OFFSET UNITYSDK_OFFSET(0x1D077670)
#define KCFLMFJEMFJ_IDFEEALDOGL_OFFSET UNITYSDK_OFFSET(0x1D078310)
#define KCFLMFJEMFJ_IDLJKLBGAOL_OFFSET UNITYSDK_OFFSET(0x1D0773A0)
#define KCFLMFJEMFJ_IEJICGCFLBN_OFFSET UNITYSDK_OFFSET(0x1D06E4C0)
#define KCFLMFJEMFJ_IEKCDCCELLO_OFFSET UNITYSDK_OFFSET(0x1D073A40)
#define KCFLMFJEMFJ_IENEPGKIDCD_OFFSET UNITYSDK_OFFSET(0x1D074DB0)
#define KCFLMFJEMFJ_IFDACBJMKAF_OFFSET UNITYSDK_OFFSET(0x1D0720E0)
#define KCFLMFJEMFJ_IFDMOMPAOGG_OFFSET UNITYSDK_OFFSET(0x1D073300)
#define KCFLMFJEMFJ_IGHIKPGDIKD_OFFSET UNITYSDK_OFFSET(0x1D0746D0)
#define KCFLMFJEMFJ_IGOKLNJPBIH_OFFSET UNITYSDK_OFFSET(0x1D070CA0)
#define KCFLMFJEMFJ_IHDBHEFLMEE_OFFSET UNITYSDK_OFFSET(0x1D0765E0)
#define KCFLMFJEMFJ_IHHMDJCKLCI_OFFSET UNITYSDK_OFFSET(0x1D078170)
#define KCFLMFJEMFJ_IHIEEOOPGNO_OFFSET UNITYSDK_OFFSET(0x1D07A720)
#define KCFLMFJEMFJ_IHLIJPIDOAK_OFFSET UNITYSDK_OFFSET(0x1D06FAC0)
#define KCFLMFJEMFJ_IIBDFLPBMGH_OFFSET UNITYSDK_OFFSET(0x1D071BD0)
#define KCFLMFJEMFJ_IICNLMNJCGE_OFFSET UNITYSDK_OFFSET(0x1D077910)
#define KCFLMFJEMFJ_IICPMOONIFF_OFFSET UNITYSDK_OFFSET(0x1D075E60)
#define KCFLMFJEMFJ_IIDOKONEPDH_OFFSET UNITYSDK_OFFSET(0x1D079740)
#define KCFLMFJEMFJ_IIMHJOOLIFK_OFFSET UNITYSDK_OFFSET(0x1D078B10)
#define KCFLMFJEMFJ_IIONCAMGDED_OFFSET UNITYSDK_OFFSET(0x1D0769B0)
#define KCFLMFJEMFJ_IJBFLJKAGBJ_OFFSET UNITYSDK_OFFSET(0x1D0764E0)
#define KCFLMFJEMFJ_IJBOFJEGKHE_OFFSET UNITYSDK_OFFSET(0x1D075B80)
#define KCFLMFJEMFJ_IJJIKFMPCPD_OFFSET UNITYSDK_OFFSET(0x1D070B30)
#define KCFLMFJEMFJ_IJKEOAFEBKL_OFFSET UNITYSDK_OFFSET(0x1D0756A0)
#define KCFLMFJEMFJ_IJNBOCFECGL_OFFSET UNITYSDK_OFFSET(0x1D078840)
#define KCFLMFJEMFJ_IJOOMELJAHA_OFFSET UNITYSDK_OFFSET(0x1D076470)
#define KCFLMFJEMFJ_IKDJACBEKHE_OFFSET UNITYSDK_OFFSET(0x1D072660)
#define KCFLMFJEMFJ_IKDJNGBKDPL_OFFSET UNITYSDK_OFFSET(0x1D070B90)
#define KCFLMFJEMFJ_IKMAFDNNIIL_OFFSET UNITYSDK_OFFSET(0x1D06E800)
#define KCFLMFJEMFJ_IKNEDJMOGBJ_OFFSET UNITYSDK_OFFSET(0x1D0763D0)
#define KCFLMFJEMFJ_ILBBEHCNDFA_OFFSET UNITYSDK_OFFSET(0x1D077D70)
#define KCFLMFJEMFJ_ILPEPLJKCCL_OFFSET UNITYSDK_OFFSET(0x1D0795A0)
#define KCFLMFJEMFJ_IMJLKCEDIPI_OFFSET UNITYSDK_OFFSET(0x1D071CF0)
#define KCFLMFJEMFJ_IMKJIBENEID_OFFSET UNITYSDK_OFFSET(0x1D06FC40)
#define KCFLMFJEMFJ_IMPFLNGFAHE_OFFSET UNITYSDK_OFFSET(0x1D070AC0)
#define KCFLMFJEMFJ_IMPLKOEICIJ_OFFSET UNITYSDK_OFFSET(0x1D0783E0)
#define KCFLMFJEMFJ_INBPJCBEMJC_OFFSET UNITYSDK_OFFSET(0x1D07A330)
#define KCFLMFJEMFJ_INEGFBJOGGH_OFFSET UNITYSDK_OFFSET(0x1D077450)
#define KCFLMFJEMFJ_IOADFINNANI_OFFSET UNITYSDK_OFFSET(0x1D079A30)
#define KCFLMFJEMFJ_IOBJOOMFEMK_OFFSET UNITYSDK_OFFSET(0x1D073510)
#define KCFLMFJEMFJ_IODJHFPPLBH_OFFSET UNITYSDK_OFFSET(0x1D075110)
#define KCFLMFJEMFJ_IOGOMMNAFHD_OFFSET UNITYSDK_OFFSET(0x1D077F00)
#define KCFLMFJEMFJ_IONLDJFEENC_OFFSET UNITYSDK_OFFSET(0x1D073C70)
#define KCFLMFJEMFJ_IPDEPKDLBGN_OFFSET UNITYSDK_OFFSET(0x1D067320)
#define KCFLMFJEMFJ_IPGABPDPPHI_OFFSET UNITYSDK_OFFSET(0x1D074A70)
#define KCFLMFJEMFJ_IPICFCOJHHF_OFFSET UNITYSDK_OFFSET(0x1D06BF50)
#define KCFLMFJEMFJ_IPKBGOJOEDJ_OFFSET UNITYSDK_OFFSET(0x1D073040)
#define KCFLMFJEMFJ_IPNHMNCPDBH_OFFSET UNITYSDK_OFFSET(0x1D077070)
#define KCFLMFJEMFJ_JAAHHNGFHIO_OFFSET UNITYSDK_OFFSET(0x1D0745A0)
#define KCFLMFJEMFJ_JACECEMNPBI_OFFSET UNITYSDK_OFFSET(0x1D077E90)
#define KCFLMFJEMFJ_JAEGODDOBML_OFFSET UNITYSDK_OFFSET(0x1D0741E0)
#define KCFLMFJEMFJ_JAGMOMHLEML_OFFSET UNITYSDK_OFFSET(0x1D07A260)
#define KCFLMFJEMFJ_JAIJKAJHDOC_OFFSET UNITYSDK_OFFSET(0x1D070E30)
#define KCFLMFJEMFJ_JBJDEBOHBDN_OFFSET UNITYSDK_OFFSET(0x1D06F070)
#define KCFLMFJEMFJ_JBONACLJLJO_OFFSET UNITYSDK_OFFSET(0x1D075820)
#define KCFLMFJEMFJ_JCINJJFMNEF_OFFSET UNITYSDK_OFFSET(0x1D06C080)
#define KCFLMFJEMFJ_JCNNFONFOGK_OFFSET UNITYSDK_OFFSET(0x1D06E890)
#define KCFLMFJEMFJ_JDABPEFOGMP_OFFSET UNITYSDK_OFFSET(0x1D074930)
#define KCFLMFJEMFJ_JDBOOFMOAEE_OFFSET UNITYSDK_OFFSET(0x1D0709D0)
#define KCFLMFJEMFJ_JDDDFDFOJJO_OFFSET UNITYSDK_OFFSET(0x1D077ED0)
#define KCFLMFJEMFJ_JDGMDHANGIN_OFFSET UNITYSDK_OFFSET(0x1D0701E0)
#define KCFLMFJEMFJ_JDIDOLIPBKO_OFFSET UNITYSDK_OFFSET(0x1D078110)
#define KCFLMFJEMFJ_JDOGNJEGEPJ_OFFSET UNITYSDK_OFFSET(0x1D06E660)
#define KCFLMFJEMFJ_JEIMJMEHDND_OFFSET UNITYSDK_OFFSET(0x1D076070)
#define KCFLMFJEMFJ_JFDGCJMLEOD_OFFSET UNITYSDK_OFFSET(0x1D0712A0)
#define KCFLMFJEMFJ_JFHCBLBDDDL_OFFSET UNITYSDK_OFFSET(0x1D075340)
#define KCFLMFJEMFJ_JFKDGDCCMFG_OFFSET UNITYSDK_OFFSET(0x1D071D20)
#define KCFLMFJEMFJ_JFLFMKBAFBI_OFFSET UNITYSDK_OFFSET(0x1D06AF80)
#define KCFLMFJEMFJ_JFLJKKBNBEM_OFFSET UNITYSDK_OFFSET(0x1D070F80)
#define KCFLMFJEMFJ_JGHGHACKILF_OFFSET UNITYSDK_OFFSET(0x1D075490)
#define KCFLMFJEMFJ_JHBIIHDAOLC_OFFSET UNITYSDK_OFFSET(0x1D0718A0)
#define KCFLMFJEMFJ_JHHPGAOLGAK_OFFSET UNITYSDK_OFFSET(0x1D076E30)
#define KCFLMFJEMFJ_JHMMGEPMEIF_OFFSET UNITYSDK_OFFSET(0x1D077040)
#define KCFLMFJEMFJ_JHNDCIAEPBC_OFFSET UNITYSDK_OFFSET(0x1D073360)
#define KCFLMFJEMFJ_JHOAFIGDMIJ_OFFSET UNITYSDK_OFFSET(0x1D077810)
#define KCFLMFJEMFJ_JHOHIAEGLHO_OFFSET UNITYSDK_OFFSET(0x1D0760B0)
#define KCFLMFJEMFJ_JHOINLGPNEA_OFFSET UNITYSDK_OFFSET(0x1D06F380)
#define KCFLMFJEMFJ_JIJFFGALHMF_OFFSET UNITYSDK_OFFSET(0x1D074DF0)
#define KCFLMFJEMFJ_JIJILJAJONA_OFFSET UNITYSDK_OFFSET(0x1D0759A0)
#define KCFLMFJEMFJ_JIKBNLHPGEN_OFFSET UNITYSDK_OFFSET(0x1D071240)
#define KCFLMFJEMFJ_JJHCHEPLFLO_OFFSET UNITYSDK_OFFSET(0x1D0770C0)
#define KCFLMFJEMFJ_JJHMCLPFBIO_OFFSET UNITYSDK_OFFSET(0x1D067580)
#define KCFLMFJEMFJ_JJOJLINALKF_OFFSET UNITYSDK_OFFSET(0x1D078F20)
#define KCFLMFJEMFJ_JKBCCOJJAHM_OFFSET UNITYSDK_OFFSET(0x1D0765A0)
#define KCFLMFJEMFJ_JKDGDHPJDBB_OFFSET UNITYSDK_OFFSET(0x1D07A360)
#define KCFLMFJEMFJ_JKHBPLEIGPO_OFFSET UNITYSDK_OFFSET(0x1D070010)
#define KCFLMFJEMFJ_JKNMLEPMNAA_OFFSET UNITYSDK_OFFSET(0x1D075400)
#define KCFLMFJEMFJ_JLAFIGCCAMM_OFFSET UNITYSDK_OFFSET(0x1D075F80)
#define KCFLMFJEMFJ_JLELINELGJH_OFFSET UNITYSDK_OFFSET(0x1D072C80)
#define KCFLMFJEMFJ_JLGFJBKAMHB_OFFSET UNITYSDK_OFFSET(0x1D074320)
#define KCFLMFJEMFJ_JLHFPFEBGBM_OFFSET UNITYSDK_OFFSET(0x1D071450)
#define KCFLMFJEMFJ_JLLPHJNCPGP_OFFSET UNITYSDK_OFFSET(0x1D079FA0)
#define KCFLMFJEMFJ_JLMLNCPCPCB_OFFSET UNITYSDK_OFFSET(0x1D077780)
#define KCFLMFJEMFJ_JMAIJHDCPFH_OFFSET UNITYSDK_OFFSET(0x1D070610)
#define KCFLMFJEMFJ_JMHAFBBKOEE_OFFSET UNITYSDK_OFFSET(0x1D06F040)
#define KCFLMFJEMFJ_JMNOPKOOKAJ_OFFSET UNITYSDK_OFFSET(0x1D075290)
#define KCFLMFJEMFJ_JMPPBKCJGFK_OFFSET UNITYSDK_OFFSET(0x1D072A40)
#define KCFLMFJEMFJ_JNEANLNINMM_OFFSET UNITYSDK_OFFSET(0x1D075670)
#define KCFLMFJEMFJ_JNEIHNAPBBG_OFFSET UNITYSDK_OFFSET(0x1D070A10)
#define KCFLMFJEMFJ_JNFPJCMGNPM_OFFSET UNITYSDK_OFFSET(0x1D07A300)
#define KCFLMFJEMFJ_JNGMONGKGGE_OFFSET UNITYSDK_OFFSET(0x1D078C10)
#define KCFLMFJEMFJ_JNNGAIFMNBJ_OFFSET UNITYSDK_OFFSET(0x1D06E220)
#define KCFLMFJEMFJ_JNNJMFHGKLJ_OFFSET UNITYSDK_OFFSET(0x1D072F50)
#define KCFLMFJEMFJ_JOAGPNMMJNC_OFFSET UNITYSDK_OFFSET(0x1D0727A0)
#define KCFLMFJEMFJ_JOIJMLAOMCN_OFFSET UNITYSDK_OFFSET(0x1D07A3F0)
#define KCFLMFJEMFJ_JOINDEHCNDF_OFFSET UNITYSDK_OFFSET(0x1D070F00)
#define KCFLMFJEMFJ_JOKKDIKGDID_OFFSET UNITYSDK_OFFSET(0x1D0791F0)
#define KCFLMFJEMFJ_JOPIAPPAEAH_OFFSET UNITYSDK_OFFSET(0x1D074EE0)
#define KCFLMFJEMFJ_JOPJJGHJMDI_OFFSET UNITYSDK_OFFSET(0x1D06E7D0)
#define KCFLMFJEMFJ_JOPNJCMHMED_OFFSET UNITYSDK_OFFSET(0x1D072510)
#define KCFLMFJEMFJ_JPBKHJALKFG_OFFSET UNITYSDK_OFFSET(0x1D070140)
#define KCFLMFJEMFJ_JPEHNBOKIOJ_OFFSET UNITYSDK_OFFSET(0x1D07A1D0)
#define KCFLMFJEMFJ_JPHHPBIOOOB_OFFSET UNITYSDK_OFFSET(0x1D077A20)
#define KCFLMFJEMFJ_KAHEGEGAJID_OFFSET UNITYSDK_OFFSET(0x1D06FC10)
#define KCFLMFJEMFJ_KAJOHAHFAIE_OFFSET UNITYSDK_OFFSET(0x1D078670)
#define KCFLMFJEMFJ_KBBLAKMOJLC_OFFSET UNITYSDK_OFFSET(0x1D073DE0)
#define KCFLMFJEMFJ_KBDDHHBKMIK_OFFSET UNITYSDK_OFFSET(0x1D076950)
#define KCFLMFJEMFJ_KBDNHENCJAF_OFFSET UNITYSDK_OFFSET(0x1D06E9D0)
#define KCFLMFJEMFJ_KBFKNLKHJON_OFFSET UNITYSDK_OFFSET(0x1D070300)
#define KCFLMFJEMFJ_KBKBPDJOGNL_OFFSET UNITYSDK_OFFSET(0x1D075940)
#define KCFLMFJEMFJ_KBMGGPFLOAN_OFFSET UNITYSDK_OFFSET(0x1D06F8C0)
#define KCFLMFJEMFJ_KCALLLHOLAL_OFFSET UNITYSDK_OFFSET(0x1D078F00)
#define KCFLMFJEMFJ_KCDKBPOJGJG_OFFSET UNITYSDK_OFFSET(0x1D077830)
#define KCFLMFJEMFJ_KCGJMEIPEHA_OFFSET UNITYSDK_OFFSET(0x1D075370)
#define KCFLMFJEMFJ_KCIPLGNLJOJ_OFFSET UNITYSDK_OFFSET(0x1D0726F0)
#define KCFLMFJEMFJ_KCJACLNGACG_OFFSET UNITYSDK_OFFSET(0x1D072EF0)
#define KCFLMFJEMFJ_KDAHGOMBCJF_OFFSET UNITYSDK_OFFSET(0x1D068950)
#define KCFLMFJEMFJ_KDDEODICONE_OFFSET UNITYSDK_OFFSET(0x1D071040)
#define KCFLMFJEMFJ_KDHCPDAKHAH_OFFSET UNITYSDK_OFFSET(0x1D074530)
#define KCFLMFJEMFJ_KDOCKFIACLA_OFFSET UNITYSDK_OFFSET(0x1D06F470)
#define KCFLMFJEMFJ_KEIIMGKFOOA_OFFSET UNITYSDK_OFFSET(0x1D0785D0)
#define KCFLMFJEMFJ_KENEOAALDIG_OFFSET UNITYSDK_OFFSET(0x1D0722A0)
#define KCFLMFJEMFJ_KENIGCHNPGG_OFFSET UNITYSDK_OFFSET(0x1D06F350)
#define KCFLMFJEMFJ_KFDFMMOPGAG_OFFSET UNITYSDK_OFFSET(0x1D0714B0)
#define KCFLMFJEMFJ_KFPELJKMBKJ_OFFSET UNITYSDK_OFFSET(0x1D073D80)
#define KCFLMFJEMFJ_KGJADCJGGHP_OFFSET UNITYSDK_OFFSET(0x1D0713C0)
#define KCFLMFJEMFJ_KGJDBJPCCMA_OFFSET UNITYSDK_OFFSET(0x1D073CD0)
#define KCFLMFJEMFJ_KHBMNENMCJC_OFFSET UNITYSDK_OFFSET(0x1D075140)
#define KCFLMFJEMFJ_KHGCHLPAGOH_OFFSET UNITYSDK_OFFSET(0x1D070E60)
#define KCFLMFJEMFJ_KHGIOKOJLGH_OFFSET UNITYSDK_OFFSET(0x1D073E60)
#define KCFLMFJEMFJ_KHGLAKFFNDC_OFFSET UNITYSDK_OFFSET(0x1D0753D0)
#define KCFLMFJEMFJ_KHOPFDBHNDJ_OFFSET UNITYSDK_OFFSET(0x1D077F20)
#define KCFLMFJEMFJ_KICHGPDKHNF_OFFSET UNITYSDK_OFFSET(0x1D079E40)
#define KCFLMFJEMFJ_KJGCEBIAHHN_OFFSET UNITYSDK_OFFSET(0x1D071480)
#define KCFLMFJEMFJ_KJGMIDMEFHO_OFFSET UNITYSDK_OFFSET(0x1D0711E0)
#define KCFLMFJEMFJ_KJNBGJKADHJ_OFFSET UNITYSDK_OFFSET(0x1D077CB0)
#define KCFLMFJEMFJ_KJPICINDPOO_OFFSET UNITYSDK_OFFSET(0x1D078BD0)
#define KCFLMFJEMFJ_KKFBHMMCBBN_OFFSET UNITYSDK_OFFSET(0x1D077110)
#define KCFLMFJEMFJ_KKJJLBDIIJF_OFFSET UNITYSDK_OFFSET(0x1D06E1A0)
#define KCFLMFJEMFJ_KKMPDJPPGKN_OFFSET UNITYSDK_OFFSET(0x1D075550)
#define KCFLMFJEMFJ_KKPBIICLCCD_OFFSET UNITYSDK_OFFSET(0x1D06FFC0)
#define KCFLMFJEMFJ_KLBMHOGEKNH_OFFSET UNITYSDK_OFFSET(0x1D0767D0)
#define KCFLMFJEMFJ_KLKFBGLBFFO_OFFSET UNITYSDK_OFFSET(0x1D078050)
#define KCFLMFJEMFJ_KLLLCDGEJMD_OFFSET UNITYSDK_OFFSET(0x1D077C80)
#define KCFLMFJEMFJ_KLPKOJIEJKM_OFFSET UNITYSDK_OFFSET(0x1D073EC0)
#define KCFLMFJEMFJ_KMAIHCLPGJA_OFFSET UNITYSDK_OFFSET(0x1D077AC0)
#define KCFLMFJEMFJ_KMAKGEAINAK_OFFSET UNITYSDK_OFFSET(0x1D074B30)
#define KCFLMFJEMFJ_KMCIBNDMGJN_OFFSET UNITYSDK_OFFSET(0x1D078E20)
#define KCFLMFJEMFJ_KMJDOCNILCG_OFFSET UNITYSDK_OFFSET(0x1D06E2B0)
#define KCFLMFJEMFJ_KMKCCJPPPGK_OFFSET UNITYSDK_OFFSET(0x1D06E8E0)
#define KCFLMFJEMFJ_KMMPCJKENON_OFFSET UNITYSDK_OFFSET(0x1D072C20)
#define KCFLMFJEMFJ_KNGOKFMAJLD_OFFSET UNITYSDK_OFFSET(0x1D078FE0)
#define KCFLMFJEMFJ_KNHDGIEFMLE_OFFSET UNITYSDK_OFFSET(0x1D0779E0)
#define KCFLMFJEMFJ_KOADJMEHEGK_OFFSET UNITYSDK_OFFSET(0x1D074B60)
#define KCFLMFJEMFJ_KOAJKGLDCML_OFFSET UNITYSDK_OFFSET(0x1D070040)
#define KCFLMFJEMFJ_KODNGMJNJMK_OFFSET UNITYSDK_OFFSET(0x1D070D50)
#define KCFLMFJEMFJ_KOMENDIOPGM_OFFSET UNITYSDK_OFFSET(0x1D079900)
#define KCFLMFJEMFJ_KPAOCBNOHFN_OFFSET UNITYSDK_OFFSET(0x1D073570)
#define KCFLMFJEMFJ_KPJCHCKJKLN_OFFSET UNITYSDK_OFFSET(0x1D06E5C0)
#define KCFLMFJEMFJ_KPJHAHEJLCC_OFFSET UNITYSDK_OFFSET(0x1D075520)
#define KCFLMFJEMFJ_KPLEDNFHOKD_OFFSET UNITYSDK_OFFSET(0x1D0792D0)
#define KCFLMFJEMFJ_KPMPADGDKCP_OFFSET UNITYSDK_OFFSET(0x1D078F80)
#define KCFLMFJEMFJ_LAEJHDCABCK_OFFSET UNITYSDK_OFFSET(0x1D072820)
#define KCFLMFJEMFJ_LAJFDMPLANK_OFFSET UNITYSDK_OFFSET(0x1D06FFE0)
#define KCFLMFJEMFJ_LALIIPILIFJ_OFFSET UNITYSDK_OFFSET(0x1D075AF0)
#define KCFLMFJEMFJ_LAPEGPIPKAF_OFFSET UNITYSDK_OFFSET(0x1D06F4D0)
#define KCFLMFJEMFJ_LAPODMNANDH_OFFSET UNITYSDK_OFFSET(0x1D0723F0)
#define KCFLMFJEMFJ_LBDOLOABIMO_OFFSET UNITYSDK_OFFSET(0x1D06CEA0)
#define KCFLMFJEMFJ_LBJHBDIPDJD_OFFSET UNITYSDK_OFFSET(0x1D074740)
#define KCFLMFJEMFJ_LCENPOEMOEI_OFFSET UNITYSDK_OFFSET(0x1D073A80)
#define KCFLMFJEMFJ_LCOLNOEPIAA_OFFSET UNITYSDK_OFFSET(0x1D078620)
#define KCFLMFJEMFJ_LDFHLNPLLFN_OFFSET UNITYSDK_OFFSET(0x1D073990)
#define KCFLMFJEMFJ_LDMBAECDJKE_OFFSET UNITYSDK_OFFSET(0x1D0715D0)
#define KCFLMFJEMFJ_LEEDFKMLFBJ_OFFSET UNITYSDK_OFFSET(0x1D06E840)
#define KCFLMFJEMFJ_LFLDLJDCCKI_OFFSET UNITYSDK_OFFSET(0x1D076D70)
#define KCFLMFJEMFJ_LFOHPMCFHIL_OFFSET UNITYSDK_OFFSET(0x1D075850)
#define KCFLMFJEMFJ_LFPEGKBLKGF_OFFSET UNITYSDK_OFFSET(0x1D077DB0)
#define KCFLMFJEMFJ_LFPMNAEFDDD_OFFSET UNITYSDK_OFFSET(0x1D077B20)
#define KCFLMFJEMFJ_LGAMBCMDNED_OFFSET UNITYSDK_OFFSET(0x1D070BD0)
#define KCFLMFJEMFJ_LGDIHADNCKD_OFFSET UNITYSDK_OFFSET(0x1D06E5B0)
#define KCFLMFJEMFJ_LGJJOADCONF_OFFSET UNITYSDK_OFFSET(0x1D078510)
#define KCFLMFJEMFJ_LGMCEAFPDHI_OFFSET UNITYSDK_OFFSET(0x1D074CB0)
#define KCFLMFJEMFJ_LHGDBFJIOFE_OFFSET UNITYSDK_OFFSET(0x1D074290)
#define KCFLMFJEMFJ_LHGIMIGNHMP_OFFSET UNITYSDK_OFFSET(0x1D07A0C0)
#define KCFLMFJEMFJ_LIBPDCMGMFL_OFFSET UNITYSDK_OFFSET(0x1D06E900)
#define KCFLMFJEMFJ_LICJKONFIJO_OFFSET UNITYSDK_OFFSET(0x1D077C40)
#define KCFLMFJEMFJ_LIGEKLFIMIB_OFFSET UNITYSDK_OFFSET(0x1D0674D0)
#define KCFLMFJEMFJ_LINBLJJHHKP_OFFSET UNITYSDK_OFFSET(0x1D070420)
#define KCFLMFJEMFJ_LJACLBNEEEB_10_OFFSET UNITYSDK_OFFSET(0x1D06D8F0)
#define KCFLMFJEMFJ_LJACLBNEEEB_11_OFFSET UNITYSDK_OFFSET(0x1D06D9A0)
#define KCFLMFJEMFJ_LJACLBNEEEB_12_OFFSET UNITYSDK_OFFSET(0x1D06DA50)
#define KCFLMFJEMFJ_LJACLBNEEEB_13_OFFSET UNITYSDK_OFFSET(0x1D06DB30)
#define KCFLMFJEMFJ_LJACLBNEEEB_14_OFFSET UNITYSDK_OFFSET(0x1D06DB70)
#define KCFLMFJEMFJ_LJACLBNEEEB_15_OFFSET UNITYSDK_OFFSET(0x1D06DBB0)
#define KCFLMFJEMFJ_LJACLBNEEEB_16_OFFSET UNITYSDK_OFFSET(0x1D06DBF0)
#define KCFLMFJEMFJ_LJACLBNEEEB_17_OFFSET UNITYSDK_OFFSET(0x1D06DC30)
#define KCFLMFJEMFJ_LJACLBNEEEB_18_OFFSET UNITYSDK_OFFSET(0x1D06DC70)
#define KCFLMFJEMFJ_LJACLBNEEEB_19_OFFSET UNITYSDK_OFFSET(0x1D06DCB0)
#define KCFLMFJEMFJ_LJACLBNEEEB_1_OFFSET UNITYSDK_OFFSET(0x1D06D340)
#define KCFLMFJEMFJ_LJACLBNEEEB_20_OFFSET UNITYSDK_OFFSET(0x1D06DCF0)
#define KCFLMFJEMFJ_LJACLBNEEEB_21_OFFSET UNITYSDK_OFFSET(0x1D06DD30)
#define KCFLMFJEMFJ_LJACLBNEEEB_22_OFFSET UNITYSDK_OFFSET(0x1D06DD70)
#define KCFLMFJEMFJ_LJACLBNEEEB_23_OFFSET UNITYSDK_OFFSET(0x1D06DE30)
#define KCFLMFJEMFJ_LJACLBNEEEB_24_OFFSET UNITYSDK_OFFSET(0x1D06DE90)
#define KCFLMFJEMFJ_LJACLBNEEEB_25_OFFSET UNITYSDK_OFFSET(0x1D06DF40)
#define KCFLMFJEMFJ_LJACLBNEEEB_26_OFFSET UNITYSDK_OFFSET(0x1D06DF80)
#define KCFLMFJEMFJ_LJACLBNEEEB_27_OFFSET UNITYSDK_OFFSET(0x1D06DFC0)
#define KCFLMFJEMFJ_LJACLBNEEEB_28_OFFSET UNITYSDK_OFFSET(0x1D06E000)
#define KCFLMFJEMFJ_LJACLBNEEEB_29_OFFSET UNITYSDK_OFFSET(0x1D06E040)
#define KCFLMFJEMFJ_LJACLBNEEEB_2_OFFSET UNITYSDK_OFFSET(0x1D06D3F0)
#define KCFLMFJEMFJ_LJACLBNEEEB_30_OFFSET UNITYSDK_OFFSET(0x1D06E080)
#define KCFLMFJEMFJ_LJACLBNEEEB_31_OFFSET UNITYSDK_OFFSET(0x1D06E0E0)
#define KCFLMFJEMFJ_LJACLBNEEEB_32_OFFSET UNITYSDK_OFFSET(0x1D06E120)
#define KCFLMFJEMFJ_LJACLBNEEEB_3_OFFSET UNITYSDK_OFFSET(0x1D06D4A0)
#define KCFLMFJEMFJ_LJACLBNEEEB_4_OFFSET UNITYSDK_OFFSET(0x1D06D550)
#define KCFLMFJEMFJ_LJACLBNEEEB_5_OFFSET UNITYSDK_OFFSET(0x1D06D600)
#define KCFLMFJEMFJ_LJACLBNEEEB_6_OFFSET UNITYSDK_OFFSET(0x1D06D6C0)
#define KCFLMFJEMFJ_LJACLBNEEEB_7_OFFSET UNITYSDK_OFFSET(0x1D06D780)
#define KCFLMFJEMFJ_LJACLBNEEEB_8_OFFSET UNITYSDK_OFFSET(0x1D06D830)
#define KCFLMFJEMFJ_LJACLBNEEEB_9_OFFSET UNITYSDK_OFFSET(0x1D06B770)
#define KCFLMFJEMFJ_LJLKIKINANL_OFFSET UNITYSDK_OFFSET(0x1D0743E0)
#define KCFLMFJEMFJ_LJMHPGGCCNE_OFFSET UNITYSDK_OFFSET(0x1D0782D0)
#define KCFLMFJEMFJ_LJNCFGEAMFJ_OFFSET UNITYSDK_OFFSET(0x1D071870)
#define KCFLMFJEMFJ_LJNGMGPOEFM_OFFSET UNITYSDK_OFFSET(0x1D077970)
#define KCFLMFJEMFJ_LJOBAHHPPEP_OFFSET UNITYSDK_OFFSET(0x1D06EA00)
#define KCFLMFJEMFJ_LKDJDJADIGK_OFFSET UNITYSDK_OFFSET(0x1D06FB80)
#define KCFLMFJEMFJ_LKENNKABJEE_OFFSET UNITYSDK_OFFSET(0x1D0720B0)
#define KCFLMFJEMFJ_LKHHGEKMCKC_OFFSET UNITYSDK_OFFSET(0x1D07A0B0)
#define KCFLMFJEMFJ_LKKHHDHELNO_OFFSET UNITYSDK_OFFSET(0x1D079D70)
#define KCFLMFJEMFJ_LKLKEELNHKN_OFFSET UNITYSDK_OFFSET(0x1D076170)
#define KCFLMFJEMFJ_LLAIPKEMEFF_OFFSET UNITYSDK_OFFSET(0x1D06ED70)
#define KCFLMFJEMFJ_LLBLKFPLELN_OFFSET UNITYSDK_OFFSET(0x1D074E80)
#define KCFLMFJEMFJ_LLDCNBECAAH_OFFSET UNITYSDK_OFFSET(0x1D078CC0)
#define KCFLMFJEMFJ_LLHEGKMJIOM_OFFSET UNITYSDK_OFFSET(0x1D071420)
#define KCFLMFJEMFJ_LLNOFMEIDAP_OFFSET UNITYSDK_OFFSET(0x1D0704C0)
#define KCFLMFJEMFJ_LMHJEEJOKAJ_OFFSET UNITYSDK_OFFSET(0x1D073D00)
#define KCFLMFJEMFJ_LMJGGJJGPDA_OFFSET UNITYSDK_OFFSET(0x1D0717C0)
#define KCFLMFJEMFJ_LMJNKNLGBCK_OFFSET UNITYSDK_OFFSET(0x1D074570)
#define KCFLMFJEMFJ_LMLOOMGCBFB_OFFSET UNITYSDK_OFFSET(0x1D070C30)
#define KCFLMFJEMFJ_LMPFOMACEID_OFFSET UNITYSDK_OFFSET(0x1D079040)
#define KCFLMFJEMFJ_LNHEHECLBAN_OFFSET UNITYSDK_OFFSET(0x1D079F60)
#define KCFLMFJEMFJ_LNNMGFLPPDA_OFFSET UNITYSDK_OFFSET(0x1D06E5D0)
#define KCFLMFJEMFJ_LNNOEIPOIDL_OFFSET UNITYSDK_OFFSET(0x1D079B30)
#define KCFLMFJEMFJ_LOBCFAPECBN_OFFSET UNITYSDK_OFFSET(0x1D077930)
#define KCFLMFJEMFJ_LOLFMNJMPDD_OFFSET UNITYSDK_OFFSET(0x1D072F80)
#define KCFLMFJEMFJ_LOLHJJBKAMO_OFFSET UNITYSDK_OFFSET(0x1D0769E0)
#define KCFLMFJEMFJ_LOOKLFPCLGH_OFFSET UNITYSDK_OFFSET(0x1D077DD0)
#define KCFLMFJEMFJ_LPFOBONABEA_OFFSET UNITYSDK_OFFSET(0x1D06E2D0)
#define KCFLMFJEMFJ_LPGKGGBAPAK_OFFSET UNITYSDK_OFFSET(0x1D0677F0)
#define KCFLMFJEMFJ_MACMGLHICON_OFFSET UNITYSDK_OFFSET(0x1D072190)
#define KCFLMFJEMFJ_MADBNHDAGMP_OFFSET UNITYSDK_OFFSET(0x1D079710)
#define KCFLMFJEMFJ_MBAAPGAJOKK_OFFSET UNITYSDK_OFFSET(0x1D073010)
#define KCFLMFJEMFJ_MBFEDDNLHIN_OFFSET UNITYSDK_OFFSET(0x1D077B00)
#define KCFLMFJEMFJ_MBKDAGMOFNJ_OFFSET UNITYSDK_OFFSET(0x1D06E640)
#define KCFLMFJEMFJ_MBONDADILHA_OFFSET UNITYSDK_OFFSET(0x1D071CC0)
#define KCFLMFJEMFJ_MBPPFGJDDKL_OFFSET UNITYSDK_OFFSET(0x1D078B90)
#define KCFLMFJEMFJ_MCAOHOGFJCP_OFFSET UNITYSDK_OFFSET(0x1D076980)
#define KCFLMFJEMFJ_MCCDNNHMBMJ_OFFSET UNITYSDK_OFFSET(0x1D076740)
#define KCFLMFJEMFJ_MCFDMPJAKKH_OFFSET UNITYSDK_OFFSET(0x1D071C90)
#define KCFLMFJEMFJ_MCFKBFINEPL_OFFSET UNITYSDK_OFFSET(0x1D074C50)
#define KCFLMFJEMFJ_MCGAIEEKGEB_OFFSET UNITYSDK_OFFSET(0x1D071010)
#define KCFLMFJEMFJ_MCGJMMMEKHM_OFFSET UNITYSDK_OFFSET(0x1D070520)
#define KCFLMFJEMFJ_MCIBJHAOEED_OFFSET UNITYSDK_OFFSET(0x1D076520)
#define KCFLMFJEMFJ_MDAABGKPNCM_OFFSET UNITYSDK_OFFSET(0x1D074C20)
#define KCFLMFJEMFJ_MDGEGKNAONO_OFFSET UNITYSDK_OFFSET(0x1D06E810)
#define KCFLMFJEMFJ_MDGHCHKHJLJ_OFFSET UNITYSDK_OFFSET(0x1D077CE0)
#define KCFLMFJEMFJ_MDHAECKLEGM_OFFSET UNITYSDK_OFFSET(0x1D073860)
#define KCFLMFJEMFJ_MDHNBHLFLEJ_OFFSET UNITYSDK_OFFSET(0x1D0795D0)
#define KCFLMFJEMFJ_MDMPHCBCCEL_OFFSET UNITYSDK_OFFSET(0x1D0796B0)
#define KCFLMFJEMFJ_MEANDLIONGG_OFFSET UNITYSDK_OFFSET(0x1D070850)
#define KCFLMFJEMFJ_MEEBJDEEHCI_OFFSET UNITYSDK_OFFSET(0x1D06E850)
#define KCFLMFJEMFJ_MEFHAJHKBKF_OFFSET UNITYSDK_OFFSET(0x1D0761A0)
#define KCFLMFJEMFJ_MELEDJNEDIB_OFFSET UNITYSDK_OFFSET(0x1D072940)
#define KCFLMFJEMFJ_MEODPNNFMPI_OFFSET UNITYSDK_OFFSET(0x1D071FF0)
#define KCFLMFJEMFJ_MFAFJHPJLDF_OFFSET UNITYSDK_OFFSET(0x1D070880)
#define KCFLMFJEMFJ_MFDKIKLMIHE_OFFSET UNITYSDK_OFFSET(0x1D0778F0)
#define KCFLMFJEMFJ_MFINDEPMOPG_OFFSET UNITYSDK_OFFSET(0x1D073800)
#define KCFLMFJEMFJ_MFLBEGJBLEM_OFFSET UNITYSDK_OFFSET(0x1D074440)
#define KCFLMFJEMFJ_MFNEEJCEKLD_OFFSET UNITYSDK_OFFSET(0x1D07A100)
#define KCFLMFJEMFJ_MFOGEPLLFDF_OFFSET UNITYSDK_OFFSET(0x1D078B70)
#define KCFLMFJEMFJ_MGACDAGNALO_OFFSET UNITYSDK_OFFSET(0x1D077D50)
#define KCFLMFJEMFJ_MGHAPMCKKOG_OFFSET UNITYSDK_OFFSET(0x1D0752C0)
#define KCFLMFJEMFJ_MGHKKBINBBK_OFFSET UNITYSDK_OFFSET(0x1D071B80)
#define KCFLMFJEMFJ_MGPGMIAOKFG_OFFSET UNITYSDK_OFFSET(0x1D079220)
#define KCFLMFJEMFJ_MIDHHBIBPAK_OFFSET UNITYSDK_OFFSET(0x1D079130)
#define KCFLMFJEMFJ_MIFAONLANAD_OFFSET UNITYSDK_OFFSET(0x1D06A190)
#define KCFLMFJEMFJ_MIFEOLFMPHC_OFFSET UNITYSDK_OFFSET(0x1D075DA0)
#define KCFLMFJEMFJ_MIMPHEFIALD_OFFSET UNITYSDK_OFFSET(0x1D072540)
#define KCFLMFJEMFJ_MINEELFNCFE_OFFSET UNITYSDK_OFFSET(0x1D06E6A0)
#define KCFLMFJEMFJ_MJEPMLEDNLO_OFFSET UNITYSDK_OFFSET(0x1D078FB0)
#define KCFLMFJEMFJ_MJIMEALKBEG_OFFSET UNITYSDK_OFFSET(0x1D071840)
#define KCFLMFJEMFJ_MJLDLKKPFGB_OFFSET UNITYSDK_OFFSET(0x1D06F680)
#define KCFLMFJEMFJ_MKAOHIHGDEH_OFFSET UNITYSDK_OFFSET(0x1D070360)
#define KCFLMFJEMFJ_MKBJGPNBLOO_OFFSET UNITYSDK_OFFSET(0x1D078000)
#define KCFLMFJEMFJ_MKKPMADMOKO_OFFSET UNITYSDK_OFFSET(0x1D07A5A0)
#define KCFLMFJEMFJ_MKOEAMBOJOP_OFFSET UNITYSDK_OFFSET(0x1D078460)
#define KCFLMFJEMFJ_MLAIDCNAINE_OFFSET UNITYSDK_OFFSET(0x1D071510)
#define KCFLMFJEMFJ_MLLBBIMNIPK_OFFSET UNITYSDK_OFFSET(0x1D079610)
#define KCFLMFJEMFJ_MMAFIAKOHAI_OFFSET UNITYSDK_OFFSET(0x1D06A610)
#define KCFLMFJEMFJ_MMOIHOJDNLD_OFFSET UNITYSDK_OFFSET(0x1D0716F0)
#define KCFLMFJEMFJ_MNHIOMLMNAN_OFFSET UNITYSDK_OFFSET(0x1D075F50)
#define KCFLMFJEMFJ_MNOEOOCGCAO_OFFSET UNITYSDK_OFFSET(0x1D074D80)
#define KCFLMFJEMFJ_MNPHPHHOMJO_OFFSET UNITYSDK_OFFSET(0x1D075B20)
#define KCFLMFJEMFJ_MOAENACPOCJ_OFFSET UNITYSDK_OFFSET(0x1D070990)
#define KCFLMFJEMFJ_MOJIFOLKPIJ_OFFSET UNITYSDK_OFFSET(0x1D06E190)
#define KCFLMFJEMFJ_MPAPMDADLAE_OFFSET UNITYSDK_OFFSET(0x1D0740E0)
#define KCFLMFJEMFJ_NAALGBKEKBN_OFFSET UNITYSDK_OFFSET(0x1D06E5A0)
#define KCFLMFJEMFJ_NAHAJEDDDOB_OFFSET UNITYSDK_OFFSET(0x1D072E60)
#define KCFLMFJEMFJ_NALCDCADCEI_OFFSET UNITYSDK_OFFSET(0x1D0750E0)
#define KCFLMFJEMFJ_NALCOCPOLFO_OFFSET UNITYSDK_OFFSET(0x1D07A230)
#define KCFLMFJEMFJ_NANGDNOMMDE_OFFSET UNITYSDK_OFFSET(0x1D0775D0)
#define KCFLMFJEMFJ_NBBBFJGFCBD_OFFSET UNITYSDK_OFFSET(0x1D075CE0)
#define KCFLMFJEMFJ_NBLPAAJBDMD_OFFSET UNITYSDK_OFFSET(0x1D0767A0)
#define KCFLMFJEMFJ_NBODPEMKMJF_OFFSET UNITYSDK_OFFSET(0x1D074FF0)
#define KCFLMFJEMFJ_NCGPBKBNLJJ_OFFSET UNITYSDK_OFFSET(0x1D072FB0)
#define KCFLMFJEMFJ_NCIOGLMFMAO_OFFSET UNITYSDK_OFFSET(0x1D06E300)
#define KCFLMFJEMFJ_NDCJFCBLCNO_OFFSET UNITYSDK_OFFSET(0x1D070760)
#define KCFLMFJEMFJ_NDKAJNEGNDI_OFFSET UNITYSDK_OFFSET(0x1D06AAC0)
#define KCFLMFJEMFJ_NECECEHMGAJ_OFFSET UNITYSDK_OFFSET(0x1D072D70)
#define KCFLMFJEMFJ_NEDABOAKLDP_OFFSET UNITYSDK_OFFSET(0x1D06F800)
#define KCFLMFJEMFJ_NEJKCKBOPNB_OFFSET UNITYSDK_OFFSET(0x1D077D30)
#define KCFLMFJEMFJ_NEMBNPDCDAA_OFFSET UNITYSDK_OFFSET(0x1D07A160)
#define KCFLMFJEMFJ_NEOFICBBGKE_OFFSET UNITYSDK_OFFSET(0x1D0787C0)
#define KCFLMFJEMFJ_NEOKIMJALAG_OFFSET UNITYSDK_OFFSET(0x1D074600)
#define KCFLMFJEMFJ_NEOLIOBIMGI_OFFSET UNITYSDK_OFFSET(0x1D078E60)
#define KCFLMFJEMFJ_NFBBBGDEEPJ_OFFSET UNITYSDK_OFFSET(0x1D078C40)
#define KCFLMFJEMFJ_NFCKJBKLCDI_OFFSET UNITYSDK_OFFSET(0x1D073830)
#define KCFLMFJEMFJ_NFFAJBLNPKJ_OFFSET UNITYSDK_OFFSET(0x1D073130)
#define KCFLMFJEMFJ_NFFHODMEJBI_OFFSET UNITYSDK_OFFSET(0x1D07A0A0)
#define KCFLMFJEMFJ_NFGBAEJFDIO_OFFSET UNITYSDK_OFFSET(0x1D070790)
#define KCFLMFJEMFJ_NFGPBPKIBMM_OFFSET UNITYSDK_OFFSET(0x1D0717A0)
#define KCFLMFJEMFJ_NFIPHFAAPGL_OFFSET UNITYSDK_OFFSET(0x1D071600)
#define KCFLMFJEMFJ_NFJBIHKCHHM_OFFSET UNITYSDK_OFFSET(0x1D0789F0)
#define KCFLMFJEMFJ_NFLCNJMKNNI_OFFSET UNITYSDK_OFFSET(0x1D06EEC0)
#define KCFLMFJEMFJ_NGAPOOGGGNP_OFFSET UNITYSDK_OFFSET(0x1D06CA00)
#define KCFLMFJEMFJ_NGFMLJFOBOH_OFFSET UNITYSDK_OFFSET(0x1D073960)
#define KCFLMFJEMFJ_NGMHEFELAIL_OFFSET UNITYSDK_OFFSET(0x1D074D50)
#define KCFLMFJEMFJ_NIFOONLMGEG_OFFSET UNITYSDK_OFFSET(0x1D0737A0)
#define KCFLMFJEMFJ_NINFPLDMHDP_OFFSET UNITYSDK_OFFSET(0x1D06F0A0)
#define KCFLMFJEMFJ_NINJODJAEBA_OFFSET UNITYSDK_OFFSET(0x1D075300)
#define KCFLMFJEMFJ_NJBGFPGJNAM_OFFSET UNITYSDK_OFFSET(0x1D077FA0)
#define KCFLMFJEMFJ_NJCFKJALINO_OFFSET UNITYSDK_OFFSET(0x1D070960)
#define KCFLMFJEMFJ_NJEHLBMCGMJ_OFFSET UNITYSDK_OFFSET(0x1D0798D0)
#define KCFLMFJEMFJ_NJHBEMFLJFC_OFFSET UNITYSDK_OFFSET(0x1D0781B0)
#define KCFLMFJEMFJ_NJMGPJCKKDI_OFFSET UNITYSDK_OFFSET(0x1D0738F0)
#define KCFLMFJEMFJ_NJOOLJIFJAO_OFFSET UNITYSDK_OFFSET(0x1D071900)
#define KCFLMFJEMFJ_NKCMMJCPKPE_OFFSET UNITYSDK_OFFSET(0x1D079FE0)
#define KCFLMFJEMFJ_NKEHIGLCPLM_OFFSET UNITYSDK_OFFSET(0x1D072B10)
#define KCFLMFJEMFJ_NLDFKEPCGAD_OFFSET UNITYSDK_OFFSET(0x1D0786F0)
#define KCFLMFJEMFJ_NLEJKPLPGBA_OFFSET UNITYSDK_OFFSET(0x1D079870)
#define KCFLMFJEMFJ_NLHLHIADCHB_OFFSET UNITYSDK_OFFSET(0x1D078C60)
#define KCFLMFJEMFJ_NLOGLPAADGM_OFFSET UNITYSDK_OFFSET(0x1D077020)
#define KCFLMFJEMFJ_NLPMGIKGGKD_OFFSET UNITYSDK_OFFSET(0x1D06FB50)
#define KCFLMFJEMFJ_NMDMHPFLAAE_OFFSET UNITYSDK_OFFSET(0x1D078A90)
#define KCFLMFJEMFJ_NMELDPBEMNJ_OFFSET UNITYSDK_OFFSET(0x1D073B00)
#define KCFLMFJEMFJ_NMHFGPLIFKE_OFFSET UNITYSDK_OFFSET(0x1D077730)
#define KCFLMFJEMFJ_NMHGLNGEPFM_OFFSET UNITYSDK_OFFSET(0x1D076610)
#define KCFLMFJEMFJ_NMHHCIDAPEB_OFFSET UNITYSDK_OFFSET(0x1D07A420)
#define KCFLMFJEMFJ_NMPOCJPCJIE_OFFSET UNITYSDK_OFFSET(0x1D06FA90)
#define KCFLMFJEMFJ_NNBCMLAHKFM_OFFSET UNITYSDK_OFFSET(0x1D075730)
#define KCFLMFJEMFJ_NNBGIFIKKMF_OFFSET UNITYSDK_OFFSET(0x1D0714E0)
#define KCFLMFJEMFJ_NNKKMNOHJLL_OFFSET UNITYSDK_OFFSET(0x1D075EF0)
#define KCFLMFJEMFJ_NOFLGADPPGA_OFFSET UNITYSDK_OFFSET(0x1D072450)
#define KCFLMFJEMFJ_NOJOBBLKHDK_OFFSET UNITYSDK_OFFSET(0x1D0749D0)
#define KCFLMFJEMFJ_NOLEDJNDOLF_OFFSET UNITYSDK_OFFSET(0x1D071B90)
#define KCFLMFJEMFJ_NOLKKJFNKPJ_OFFSET UNITYSDK_OFFSET(0x1D07A2C0)
#define KCFLMFJEMFJ_NOMNLIPHOAE_OFFSET UNITYSDK_OFFSET(0x1D0721F0)
#define KCFLMFJEMFJ_NONMMAKIJME_OFFSET UNITYSDK_OFFSET(0x1D073F50)
#define KCFLMFJEMFJ_NPEAOACOEKC_OFFSET UNITYSDK_OFFSET(0x1D070720)
#define KCFLMFJEMFJ_NPHNCLMMKLF_OFFSET UNITYSDK_OFFSET(0x1D06F100)
#define KCFLMFJEMFJ_NPKNBCJKGKL_OFFSET UNITYSDK_OFFSET(0x1D075D70)
#define KCFLMFJEMFJ_NPMGFCPMOJO_OFFSET UNITYSDK_OFFSET(0x1D06EF20)
#define KCFLMFJEMFJ_NPNGMEPAGDL_OFFSET UNITYSDK_OFFSET(0x1D0784E0)
#define KCFLMFJEMFJ_NPNIKFMHBDN_OFFSET UNITYSDK_OFFSET(0x1D077250)
#define KCFLMFJEMFJ_OACBPPFJEHD_OFFSET UNITYSDK_OFFSET(0x1D075C50)
#define KCFLMFJEMFJ_OALBDBBMLEJ_OFFSET UNITYSDK_OFFSET(0x1D072850)
#define KCFLMFJEMFJ_OBADNPHFEDF_OFFSET UNITYSDK_OFFSET(0x1D073460)
#define KCFLMFJEMFJ_OBDNIFKHFGE_OFFSET UNITYSDK_OFFSET(0x1D06EBF0)
#define KCFLMFJEMFJ_OBFBAAIJPME_OFFSET UNITYSDK_OFFSET(0x1D077400)
#define KCFLMFJEMFJ_OBJIBIHLLEB_OFFSET UNITYSDK_OFFSET(0x1D0782F0)
#define KCFLMFJEMFJ_OBKOCLFLLII_OFFSET UNITYSDK_OFFSET(0x1D0715C0)
#define KCFLMFJEMFJ_OCBGKIGIGOI_OFFSET UNITYSDK_OFFSET(0x1D0772C0)
#define KCFLMFJEMFJ_OCCPPKINIPN_OFFSET UNITYSDK_OFFSET(0x1D06EC50)
#define KCFLMFJEMFJ_OCHDPMAHMAK_OFFSET UNITYSDK_OFFSET(0x1D075610)
#define KCFLMFJEMFJ_OCKOCPDJKEP_OFFSET UNITYSDK_OFFSET(0x1D06E490)
#define KCFLMFJEMFJ_OCNMBHIDDNM_OFFSET UNITYSDK_OFFSET(0x1D0781E0)
#define KCFLMFJEMFJ_ODDMEEICEIN_OFFSET UNITYSDK_OFFSET(0x1D06EEF0)
#define KCFLMFJEMFJ_ODHNHLFLGOB_OFFSET UNITYSDK_OFFSET(0x1D0722D0)
#define KCFLMFJEMFJ_ODMOJELAINM_OFFSET UNITYSDK_OFFSET(0x1D072DD0)
#define KCFLMFJEMFJ_OECKDDIPHJH_OFFSET UNITYSDK_OFFSET(0x1D070290)
#define KCFLMFJEMFJ_OEHNOMHFHGJ_OFFSET UNITYSDK_OFFSET(0x1D07A600)
#define KCFLMFJEMFJ_OELHDOKPAFJ_OFFSET UNITYSDK_OFFSET(0x1D0777F0)
#define KCFLMFJEMFJ_OFJGBAANENK_OFFSET UNITYSDK_OFFSET(0x1D06FBE0)
#define KCFLMFJEMFJ_OFKKMBOKNKI_OFFSET UNITYSDK_OFFSET(0x1D078560)
#define KCFLMFJEMFJ_OFPJBAMPMJC_OFFSET UNITYSDK_OFFSET(0x1D06E7E0)
#define KCFLMFJEMFJ_OGEHDFAJBGK_OFFSET UNITYSDK_OFFSET(0x1D076E70)
#define KCFLMFJEMFJ_OGFMLKAAMGL_OFFSET UNITYSDK_OFFSET(0x1D06FB20)
#define KCFLMFJEMFJ_OGIFHKBLAEI_OFFSET UNITYSDK_OFFSET(0x1D072750)
#define KCFLMFJEMFJ_OGJKHAKNOEF_OFFSET UNITYSDK_OFFSET(0x1D078F50)
#define KCFLMFJEMFJ_OGKCHAGPODN_OFFSET UNITYSDK_OFFSET(0x1D0748C0)
#define KCFLMFJEMFJ_OGKMNKOHFCM_OFFSET UNITYSDK_OFFSET(0x1D075FB0)
#define KCFLMFJEMFJ_OGNJOGLKOLH_OFFSET UNITYSDK_OFFSET(0x1D071930)
#define KCFLMFJEMFJ_OHFKGNBMLIB_OFFSET UNITYSDK_OFFSET(0x1D07A020)
#define KCFLMFJEMFJ_OHMNBAFGILD_OFFSET UNITYSDK_OFFSET(0x1D06F7D0)
#define KCFLMFJEMFJ_OHPBDFGNMIN_OFFSET UNITYSDK_OFFSET(0x1D076DD0)
#define KCFLMFJEMFJ_OIGNBDMKOJO_OFFSET UNITYSDK_OFFSET(0x1D076EF0)
#define KCFLMFJEMFJ_OIIBNFMEMMN_OFFSET UNITYSDK_OFFSET(0x1D072080)
#define KCFLMFJEMFJ_OIIDANFINHK_OFFSET UNITYSDK_OFFSET(0x1D0710B0)
#define KCFLMFJEMFJ_OJDAJGCIPCO_OFFSET UNITYSDK_OFFSET(0x1D0719E0)
#define KCFLMFJEMFJ_OJKGFOADEOJ_OFFSET UNITYSDK_OFFSET(0x1D075E90)
#define KCFLMFJEMFJ_OJOBADCLDDL_OFFSET UNITYSDK_OFFSET(0x1D076080)
#define KCFLMFJEMFJ_OJPBCNGFLFE_OFFSET UNITYSDK_OFFSET(0x1D06E7F0)
#define KCFLMFJEMFJ_OKAFKMGEDOL_OFFSET UNITYSDK_OFFSET(0x1D072880)
#define KCFLMFJEMFJ_OKEBNCBDJHO_OFFSET UNITYSDK_OFFSET(0x1D076710)
#define KCFLMFJEMFJ_OKGCAJCAJHC_OFFSET UNITYSDK_OFFSET(0x1D0685D0)
#define KCFLMFJEMFJ_OKHEPIBHIEE_OFFSET UNITYSDK_OFFSET(0x1D071740)
#define KCFLMFJEMFJ_OKHJAKNJFFP_OFFSET UNITYSDK_OFFSET(0x1D078210)
#define KCFLMFJEMFJ_OLCMMNJPBLA_OFFSET UNITYSDK_OFFSET(0x1D07A480)
#define KCFLMFJEMFJ_OLGGCOPCDBN_OFFSET UNITYSDK_OFFSET(0x1D0708B0)
#define KCFLMFJEMFJ_OMCAJJFAOPE_OFFSET UNITYSDK_OFFSET(0x1D076D40)
#define KCFLMFJEMFJ_OMEIOIACCAC_OFFSET UNITYSDK_OFFSET(0x1D06EE90)
#define KCFLMFJEMFJ_OMGJLLBGNNC_OFFSET UNITYSDK_OFFSET(0x1D07A170)
#define KCFLMFJEMFJ_OMILLOJIBLM_OFFSET UNITYSDK_OFFSET(0x1D077F80)
#define KCFLMFJEMFJ_OMKBGKJOOCA_OFFSET UNITYSDK_OFFSET(0x1D06EFB0)
#define KCFLMFJEMFJ_OMOFLGNPPEL_OFFSET UNITYSDK_OFFSET(0x1D06EE30)
#define KCFLMFJEMFJ_OMOJPFJHNOE_OFFSET UNITYSDK_OFFSET(0x1D079C70)
#define KCFLMFJEMFJ_OMPIJPNIGEP_OFFSET UNITYSDK_OFFSET(0x1D06F590)
#define KCFLMFJEMFJ_ONDNHBGNCEN_OFFSET UNITYSDK_OFFSET(0x1D072F20)
#define KCFLMFJEMFJ_ONEHPCCMIAN_OFFSET UNITYSDK_OFFSET(0x1D070CE0)
#define KCFLMFJEMFJ_ONNGNPKHLOE_OFFSET UNITYSDK_OFFSET(0x1D074220)
#define KCFLMFJEMFJ_OOCAAEFFKAP_OFFSET UNITYSDK_OFFSET(0x1D072300)
#define KCFLMFJEMFJ_OOEEDEDJHHM_OFFSET UNITYSDK_OFFSET(0x1D0777D0)
#define KCFLMFJEMFJ_OOKCBPJNBNC_OFFSET UNITYSDK_OFFSET(0x1D07A6F0)
#define KCFLMFJEMFJ_OOOEHDINHBL_OFFSET UNITYSDK_OFFSET(0x1D079250)
#define KCFLMFJEMFJ_OPEFNCFJAEK_OFFSET UNITYSDK_OFFSET(0x1D073A70)
#define KCFLMFJEMFJ_OPHFBKNKOAJ_OFFSET UNITYSDK_OFFSET(0x1D079AF0)
#define KCFLMFJEMFJ_OPHMLHNIHCO_OFFSET UNITYSDK_OFFSET(0x1D078410)
#define KCFLMFJEMFJ_OPHNKPLDCJM_OFFSET UNITYSDK_OFFSET(0x1D06E580)
#define KCFLMFJEMFJ_OPJHPGBKCLM_OFFSET UNITYSDK_OFFSET(0x1D075A30)
#define KCFLMFJEMFJ_OPLEJDNIDHL_OFFSET UNITYSDK_OFFSET(0x1D06F770)
#define KCFLMFJEMFJ_PAAJLAGJDHA_OFFSET UNITYSDK_OFFSET(0x1D077AA0)
#define KCFLMFJEMFJ_PABKENPBFON_OFFSET UNITYSDK_OFFSET(0x1D072C50)
#define KCFLMFJEMFJ_PABLOPCJALF_OFFSET UNITYSDK_OFFSET(0x1D0703A0)
#define KCFLMFJEMFJ_PACKICGCKIH_OFFSET UNITYSDK_OFFSET(0x1D06FC70)
#define KCFLMFJEMFJ_PACLFJNNDKK_OFFSET UNITYSDK_OFFSET(0x1D06E7C0)
#define KCFLMFJEMFJ_PAGKNLNGAKF_OFFSET UNITYSDK_OFFSET(0x1D06F740)
#define KCFLMFJEMFJ_PAJOONCKIGE_OFFSET UNITYSDK_OFFSET(0x1D077160)
#define KCFLMFJEMFJ_PAMNDPNFEPF_OFFSET UNITYSDK_OFFSET(0x1D0702D0)
#define KCFLMFJEMFJ_PBCEHBLJIEA_OFFSET UNITYSDK_OFFSET(0x1D074BF0)
#define KCFLMFJEMFJ_PBNNKMEHAEH_OFFSET UNITYSDK_OFFSET(0x1D077B40)
#define KCFLMFJEMFJ_PCEEIKIELKC_OFFSET UNITYSDK_OFFSET(0x1D073770)
#define KCFLMFJEMFJ_PCGDLCBOPPK_OFFSET UNITYSDK_OFFSET(0x1D06EC20)
#define KCFLMFJEMFJ_PDABNPFIKML_OFFSET UNITYSDK_OFFSET(0x1D06F130)
#define KCFLMFJEMFJ_PDEPGJGMKEO_OFFSET UNITYSDK_OFFSET(0x1D071C00)
#define KCFLMFJEMFJ_PDGGHKPDBCC_OFFSET UNITYSDK_OFFSET(0x1D0791C0)
#define KCFLMFJEMFJ_PDGJMFKOMLM_OFFSET UNITYSDK_OFFSET(0x1D071B50)
#define KCFLMFJEMFJ_PDNKCJOPOFM_OFFSET UNITYSDK_OFFSET(0x1D078810)
#define KCFLMFJEMFJ_PDPNIPHKPAK_OFFSET UNITYSDK_OFFSET(0x1D06FFF0)
#define KCFLMFJEMFJ_PEJFIBOIEOD_OFFSET UNITYSDK_OFFSET(0x1D073F20)
#define KCFLMFJEMFJ_PEOEPLGEFJF_OFFSET UNITYSDK_OFFSET(0x1D0763A0)
#define KCFLMFJEMFJ_PEPDOEFDOLC_OFFSET UNITYSDK_OFFSET(0x1D06ECE0)
#define KCFLMFJEMFJ_PFBCKOJHENN_OFFSET UNITYSDK_OFFSET(0x1D0725A0)
#define KCFLMFJEMFJ_PFEKMPPJPBK_OFFSET UNITYSDK_OFFSET(0x1D073740)
#define KCFLMFJEMFJ_PGDBEPAAAOD_OFFSET UNITYSDK_OFFSET(0x1D0706F0)
#define KCFLMFJEMFJ_PGFMOHACLBH_OFFSET UNITYSDK_OFFSET(0x1D074380)
#define KCFLMFJEMFJ_PGKHOAILDHM_OFFSET UNITYSDK_OFFSET(0x1D079640)
#define KCFLMFJEMFJ_PHDBDEAHHCM_OFFSET UNITYSDK_OFFSET(0x1D0676C0)
#define KCFLMFJEMFJ_PHDCKHKDCEH_OFFSET UNITYSDK_OFFSET(0x1D06BED0)
#define KCFLMFJEMFJ_PHELGAGGCML_OFFSET UNITYSDK_OFFSET(0x1D06F260)
#define KCFLMFJEMFJ_PHHHHDKLAGI_OFFSET UNITYSDK_OFFSET(0x1D071270)
#define KCFLMFJEMFJ_PHKJPHNALBH_OFFSET UNITYSDK_OFFSET(0x1D0742C0)
#define KCFLMFJEMFJ_PHPFKMKKKJJ_OFFSET UNITYSDK_OFFSET(0x1D074660)
#define KCFLMFJEMFJ_PIEEJBDPAIG_OFFSET UNITYSDK_OFFSET(0x1D074B90)
#define KCFLMFJEMFJ_PIEHJLKGDJD_OFFSET UNITYSDK_OFFSET(0x1D078910)
#define KCFLMFJEMFJ_PIFACLAAFAD_OFFSET UNITYSDK_OFFSET(0x1D07A200)
#define KCFLMFJEMFJ_PILBBFLICPI_OFFSET UNITYSDK_OFFSET(0x1D070220)
#define KCFLMFJEMFJ_PINBDMHAEJC_OFFSET UNITYSDK_OFFSET(0x1D074F80)
#define KCFLMFJEMFJ_PIPFJCONOKK_OFFSET UNITYSDK_OFFSET(0x1D077870)
#define KCFLMFJEMFJ_PJFBFEBEAAD_OFFSET UNITYSDK_OFFSET(0x1D078EA0)
#define KCFLMFJEMFJ_PJHDAFDIMBJ_OFFSET UNITYSDK_OFFSET(0x1D070170)
#define KCFLMFJEMFJ_PJLJNGACDCI_OFFSET UNITYSDK_OFFSET(0x1D06FF60)
#define KCFLMFJEMFJ_PJLKPFOPOIN_OFFSET UNITYSDK_OFFSET(0x1D075BF0)
#define KCFLMFJEMFJ_PJOHHMLDFLH_OFFSET UNITYSDK_OFFSET(0x1D070260)
#define KCFLMFJEMFJ_PJONLAAEOAB_OFFSET UNITYSDK_OFFSET(0x1D076680)
#define KCFLMFJEMFJ_PKMHGKBAEKJ_OFFSET UNITYSDK_OFFSET(0x1D06FEE0)
#define KCFLMFJEMFJ_PKPBINMNBBG_OFFSET UNITYSDK_OFFSET(0x1D078770)
#define KCFLMFJEMFJ_PLCCCNLJMGA_OFFSET UNITYSDK_OFFSET(0x1D079F20)
#define KCFLMFJEMFJ_PLEJHCBLENB_OFFSET UNITYSDK_OFFSET(0x1D075020)
#define KCFLMFJEMFJ_PLHJOLDHCDH_OFFSET UNITYSDK_OFFSET(0x1D06F620)
#define KCFLMFJEMFJ_PLLJPOEEKFO_OFFSET UNITYSDK_OFFSET(0x1D077330)
#define KCFLMFJEMFJ_PLMBHBJNKDO_OFFSET UNITYSDK_OFFSET(0x1D071210)
#define KCFLMFJEMFJ_PLMCKHEKGFD_OFFSET UNITYSDK_OFFSET(0x1D0780A0)
#define KCFLMFJEMFJ_PLPNIFBGAGN_OFFSET UNITYSDK_OFFSET(0x1D0780F0)
#define KCFLMFJEMFJ_PMAHGJFDCFG_OFFSET UNITYSDK_OFFSET(0x1D0794E0)
#define KCFLMFJEMFJ_PMBGEEEHFNE_OFFSET UNITYSDK_OFFSET(0x1D070F40)
#define KCFLMFJEMFJ_PMCGGALHEMI_OFFSET UNITYSDK_OFFSET(0x1D0755E0)
#define KCFLMFJEMFJ_PMEHGECKFPG_OFFSET UNITYSDK_OFFSET(0x1D077850)
#define KCFLMFJEMFJ_PMJECPAPOHJ_OFFSET UNITYSDK_OFFSET(0x1D07A390)
#define KCFLMFJEMFJ_PMLGFBBLHAF_OFFSET UNITYSDK_OFFSET(0x1D078CF0)
#define KCFLMFJEMFJ_PMNEKDCPILG_OFFSET UNITYSDK_OFFSET(0x1D077060)
#define KCFLMFJEMFJ_PNDJDBHDMPB_OFFSET UNITYSDK_OFFSET(0x1D06F530)
#define KCFLMFJEMFJ_PNFAGCPCMLM_OFFSET UNITYSDK_OFFSET(0x1D06FD00)
#define KCFLMFJEMFJ_PNGCNGGHOAK_OFFSET UNITYSDK_OFFSET(0x1D06E3A0)
#define KCFLMFJEMFJ_PNLBCKBEHOI_OFFSET UNITYSDK_OFFSET(0x1D073EF0)
#define KCFLMFJEMFJ_POGLLHIMPNJ_OFFSET UNITYSDK_OFFSET(0x1D074F40)
#define KCFLMFJEMFJ_POHKBJELMLD_OFFSET UNITYSDK_OFFSET(0x1D06E200)
#define KCFLMFJEMFJ_POMJLOIJMIM_OFFSET UNITYSDK_OFFSET(0x1D079390)
#define KCFLMFJEMFJ_PPABOIPJFPB_OFFSET UNITYSDK_OFFSET(0x1D076F80)
#define KCFLMFJEMFJ_PPBFPLJELPF_OFFSET UNITYSDK_OFFSET(0x1D06E8F0)
#define KCFLMFJEMFJ_PPEAEBKKAPB_OFFSET UNITYSDK_OFFSET(0x1D078E80)
#define KCFLMFJEMFJ_PPJDOFGLMKD_OFFSET UNITYSDK_OFFSET(0x1D072B70)
#define KCFLMFJEMFJ_PPLHCGAHGLE_OFFSET UNITYSDK_OFFSET(0x1D07A6C0)
#define KCFLMFJEMFJ_PPOFPJDDLLM_OFFSET UNITYSDK_OFFSET(0x1D06E550)
#define KCFLMFJEMFJ_PPPAMALODNI_OFFSET UNITYSDK_OFFSET(0x1D079770)

	class KCFLMFJEMFJ : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_CFFGDEFHHEL()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAF00);
		}

		static ::System::Object** StaticGet_HPAGBAANLFL()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAF08);
		}

		static ::System::Object** StaticGet_HACMNEKMNCK()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAF10);
		}

		static ::System::Object** StaticGet_MKFLEDKIIME()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAF18);
		}

		static ::System::Object** StaticGet_NBKMMHHJIKF()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAF20);
		}

		static ::System::Object** StaticGet_ANFOFMHNIJH()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAF28);
		}

		static ::System::Object** StaticGet_AJPMMGOKKCD()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAF30);
		}

		static ::System::Object** StaticGet_NCLEFHEOBIK()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAF38);
		}

		static ::System::Object** StaticGet_KNIFODOFMFA()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAF40);
		}

		static ::System::Object** StaticGet_CKOLLKKADNA()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAF48);
		}

		static ::System::Object** StaticGet_ECJMJGJAFIJ()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAF50);
		}

		static ::System::Object** StaticGet_LDIELEOALHJ()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAF58);
		}

		static ::System::Object** StaticGet_IAELPDLPHNI()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAF60);
		}

		static ::System::Object** StaticGet_ONFBMOALNIE()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAF68);
		}

		static ::System::Object** StaticGet_NFOBHPBLDPB()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAF70);
		}

		static ::System::Object** StaticGet_FCMCBDLMMKE()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAF78);
		}

		static ::System::Object** StaticGet_AFHEJDBNNHJ()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAF80);
		}

		static ::System::Object** StaticGet_OHGPCJHMDNH()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAF88);
		}

		static ::System::Object** StaticGet_EPGPGPDDODG()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAF90);
		}

		static ::System::Object** StaticGet_CLLMNFKJLBO()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAF98);
		}

		static ::System::Object** StaticGet_HAHOKJALBFE()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAFA0);
		}

		static ::System::Object** StaticGet_KHGFDJOCEFE()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAFA8);
		}

		static ::System::Object** StaticGet_IENNKIHBMDD()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAFB0);
		}

		static ::System::Object** StaticGet_OKCOIJKBBIL()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAFB8);
		}

		static ::System::Object** StaticGet_LHNBNLLLMCE()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAFC0);
		}

		static ::System::Object** StaticGet_IKADCJMMGKI()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAFC8);
		}

		static ::System::Object** StaticGet_BFMCHAODJBB()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAFD0);
		}

		static ::System::Object** StaticGet_CKHBMOKKJNN()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAFD8);
		}

		static ::System::Object** StaticGet_AOBHJDIEFBC()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAFE0);
		}

		static ::System::Object** StaticGet_HMGCPBLJPFF()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAFE8);
		}

		static ::System::Object** StaticGet_HJDHNOFHJLL()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAFF0);
		}

		static ::System::Object** StaticGet_HCBIJENDGBL()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xAFF8);
		}

		static ::System::Object** StaticGet_PDAOCLEOMHE()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB000);
		}

		static ::System::Object** StaticGet_LOCNKDHCEKD()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB008);
		}

		static ::System::Object** StaticGet_FOJKFCOCKEM()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB010);
		}

		static ::System::Object** StaticGet_COMBPJJJLMN()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB018);
		}

		static ::System::Object** StaticGet_MECJGHDIHKN()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB020);
		}

		static ::System::Object** StaticGet_MFCGFICPPLD()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB028);
		}

		static ::System::Object** StaticGet_IAHHLJFEHGL()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB030);
		}

		static ::System::Object** StaticGet_LCFHNIDOMFE()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB038);
		}

		static ::System::Object** StaticGet_NBLFFHCINNA()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB040);
		}

		static ::System::Object** StaticGet_JGFJLBALDFI()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB048);
		}

		static ::System::Object** StaticGet_KOHIEMOPMNB()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB050);
		}

		static ::System::Object** StaticGet_OCDLBDMALOK()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB058);
		}

		static ::System::Object** StaticGet_OMNOBOIENNC()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB060);
		}

		static ::System::Object** StaticGet_EEEMJEOAIOF()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB068);
		}

		static ::System::Object** StaticGet_NCODOKAFAGI()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB070);
		}

		static ::System::Object** StaticGet_GNGDENBMGBJ()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB078);
		}

		static ::System::Object** StaticGet_JGNNFBLEJHE()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB080);
		}

		static ::System::Object** StaticGet_ADOLEKINELM()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB088);
		}

		static ::System::Object** StaticGet_JANABFINKGG()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB090);
		}

		static ::System::Object** StaticGet_ILKFCCOMNCO()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB098);
		}

		static ::System::Object** StaticGet_BAEJBAEHPAE()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB0A0);
		}

		static ::System::Object** StaticGet_ELBNCCANDCJ()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB0A8);
		}

		static ::System::Object** StaticGet_CPJOOALJJOE()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB0B0);
		}

		static ::System::Object** StaticGet_KCHDCBPOJBF()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB0B8);
		}

		static ::System::Object** StaticGet_NPDKMOCBKOP()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB0C0);
		}

		static ::System::Object** StaticGet_GENDMFDLIDL()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB0C8);
		}

		static ::System::Object** StaticGet_EMFAEMBOCIP()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB0D0);
		}

		static ::System::Object** StaticGet_KIHMCDNAPJF()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB0D8);
		}

		static ::System::Object** StaticGet_LDMDMKDPIMM()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB0E0);
		}

		static ::System::Object** StaticGet_PMKFBPCEEMB()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB0E8);
		}

		static ::System::Object** StaticGet_LDBDFOFEMNA()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB0F0);
		}

		static ::System::Object** StaticGet_AHCKAMKEHJC()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB0F8);
		}

		static ::System::Object** StaticGet_FOINJCNHBCC()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB100);
		}

		static ::System::Object** StaticGet_GIEOAHLFNHO()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB108);
		}

		static ::System::Object** StaticGet_GFCEFNHBMBN()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB110);
		}

		static ::System::Object** StaticGet_HFBDNCMDAAL()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCFLMFJEMFJ")->GetStaticField(0xB118);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CCTOR_OFFSET))();
		}

		static ::System::Void AINILAMDLGL(::SimpleJSON::JSONNode* a1, ::System::SByte a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::SByte))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AINILAMDLGL_OFFSET))(a1, a2);
		}

		static ::System::Void IPDEPKDLBGN(::SimpleJSON::JSONNode* a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Byte))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IPDEPKDLBGN_OFFSET))(a1, a2);
		}

		static ::System::Void ADDMMJEACGI(::SimpleJSON::JSONNode* a1, ::System::Int16 a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int16))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ADDMMJEACGI_OFFSET))(a1, a2);
		}

		static ::System::Void DMBCDLEFFHN(::SimpleJSON::JSONNode* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt16))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DMBCDLEFFHN_OFFSET))(a1, a2);
		}

		static ::System::Void LIGEKLFIMIB(::SimpleJSON::JSONNode* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int64))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LIGEKLFIMIB_OFFSET))(a1, a2);
		}

		static ::System::Void JJHMCLPFBIO(::SimpleJSON::JSONNode* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt64))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JJHMCLPFBIO_OFFSET))(a1, a2);
		}

		static ::System::Void HDNIFAFDIOJ(::SimpleJSON::JSONNode* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int32))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HDNIFAFDIOJ_OFFSET))(a1, a2);
		}

		static ::System::Void PHDBDEAHHCM(::SimpleJSON::JSONNode* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt32))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PHDBDEAHHCM_OFFSET))(a1, a2);
		}

		static ::System::Void HGKJPOKMPLC(::SimpleJSON::JSONNode* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HGKJPOKMPLC_OFFSET))(a1, a2);
		}

		static ::System::Void BFAHCKAJHMN(::SimpleJSON::JSONNode* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Single))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BFAHCKAJHMN_OFFSET))(a1, a2);
		}

		static ::System::Void LPGKGGBAPAK(::SimpleJSON::JSONNode* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Double))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LPGKGGBAPAK_OFFSET))(a1, a2);
		}

		static ::System::Void AFPDAIIFPHL(::SimpleJSON::JSONNode* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AFPDAIIFPHL_OFFSET))(a1, a2);
		}

		static ::System::Void HOFDIHJDNKH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HOFDIHJDNKH_OFFSET))(a1, a2);
		}

		static ::System::Void EJEMFEPOIFF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FixVec3 a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EJEMFEPOIFF_OFFSET))(a1, a2);
		}

		static ::System::Void AGAKNHMEKOD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::IVec2 a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AGAKNHMEKOD_OFFSET))(a1, a2);
		}

		static ::System::Void EJEMFEPOIFF_1(::SimpleJSON::JSONNode* a1, ::RPG::IVec3 a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::IVec3))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EJEMFEPOIFF_1_OFFSET))(a1, a2);
		}

		static ::System::Void OKGCAJCAJHC(::SimpleJSON::JSONNode* a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OKGCAJCAJHC_OFFSET))(a1, a2);
		}

		static ::System::Void KDAHGOMBCJF(::SimpleJSON::JSONNode* a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MVector2))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KDAHGOMBCJF_OFFSET))(a1, a2);
		}

		static ::System::Void HOPCICLMDHE(::SimpleJSON::JSONNode* a1, ::CNHKFCHOEHK a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HOPCICLMDHE_OFFSET))(a1, a2);
		}

		static ::System::Void GIIFKIMEBDC(::SimpleJSON::JSONNode* a1, ::BMAGJGLPIIF a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::BMAGJGLPIIF))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GIIFKIMEBDC_OFFSET))(a1, a2);
		}

		static ::System::Void MIFAONLANAD(::SimpleJSON::JSONNode* a1, ::RPG::MColor a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MColor))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MIFAONLANAD_OFFSET))(a1, a2);
		}

		static ::System::Void MMAFIAKOHAI(::SimpleJSON::JSONNode* a1, ::RPG::MRect a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MRect))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MMAFIAKOHAI_OFFSET))(a1, a2);
		}

		static ::System::Void NDKAJNEGNDI(::SimpleJSON::JSONNode* a1, ::RPG::FloatCurveFrame a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::FloatCurveFrame))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NDKAJNEGNDI_OFFSET))(a1, a2);
		}

		static ::System::Void EIBOCBBHHIN(::SimpleJSON::JSONNode* a1, ::RPG::Vector3CurveFrame a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Vector3CurveFrame))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EIBOCBBHHIN_OFFSET))(a1, a2);
		}

		static ::System::Void JFLFMKBAFBI(::SimpleJSON::JSONNode* a1, ::RPG::Vector4CurveFrame a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Vector4CurveFrame))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JFLFMKBAFBI_OFFSET))(a1, a2);
		}

		static ::System::Void EIDJHJLFNKF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicString*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EIDJHJLFNKF_OFFSET))(a1, a2);
		}

		static ::System::Void HCAKADFJKPK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicBool* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicBool*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HCAKADFJKPK_OFFSET))(a1, a2);
		}

		static ::System::Void EKKMHMCHBBL(::SimpleJSON::JSONNode* a1, ::ENEIHJJPNPI* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::ENEIHJJPNPI*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EKKMHMCHBBL_OFFSET))(a1, a2);
		}

		static ::System::Void PHDCKHKDCEH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicFloat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PHDCKHKDCEH_OFFSET))(a1, a2);
		}

		static ::System::Void FIGEDPHBCFN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::JsonEnum* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FIGEDPHBCFN_OFFSET))(a1, a2);
		}

		static ::System::Void AGGHGMKFAJN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AGGHGMKFAJN_OFFSET))(a1, a2);
		}

		static ::System::Void IPICFCOJHHF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FilePath* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FilePath*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IPICFCOJHHF_OFFSET))(a1, a2);
		}

		static ::System::Void EHCKEGNHBHN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SurfaceType a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SurfaceType))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EHCKEGNHBHN_OFFSET))(a1, a2);
		}

		static ::System::Void JCINJJFMNEF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ThreadTaskType a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ThreadTaskType))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JCINJJFMNEF_OFFSET))(a1, a2);
		}

		static ::System::Void CEMNICILGAF(::SimpleJSON::JSONNode* a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CEMNICILGAF_OFFSET))(a1, a2);
		}

		static ::System::Void EBHCJBIABPD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FormatString a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FormatString))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EBHCJBIABPD_OFFSET))(a1, a2);
		}

		static ::System::Void BDNHNCIMIMP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StringHash a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BDNHNCIMIMP_OFFSET))(a1, a2);
		}

		static ::System::Void CPIGEDMJLED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::LittleGameEvent* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::LittleGameEvent*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CPIGEDMJLED_OFFSET))(a1, a2);
		}

		static ::System::Void NGAPOOGGGNP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::LittleGameDynamicVar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::LittleGameDynamicVar*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NGAPOOGGGNP_OFFSET))(a1, a2);
		}

		static ::System::Void LBDOLOABIMO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FiveDimDynamicVar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FiveDimDynamicVar*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LBDOLOABIMO_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_1(::SimpleJSON::JSONNode* a1, ::System::SByte a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::SByte))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_1_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_2(::SimpleJSON::JSONNode* a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Byte))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_2_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_3(::SimpleJSON::JSONNode* a1, ::System::Int16 a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int16))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_3_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_4(::SimpleJSON::JSONNode* a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt16))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_4_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_5(::SimpleJSON::JSONNode* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int64))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_5_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_6(::SimpleJSON::JSONNode* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt64))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_6_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_7(::SimpleJSON::JSONNode* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Int32))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_7_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_8(::SimpleJSON::JSONNode* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::UInt32))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_8_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_9(::SimpleJSON::JSONNode* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_9_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_10(::SimpleJSON::JSONNode* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Single))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_10_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_11(::SimpleJSON::JSONNode* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Double))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_11_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_12(::SimpleJSON::JSONNode* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_12_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_13(::SimpleJSON::JSONNode* a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_13_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_14(::SimpleJSON::JSONNode* a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::MVector2))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_14_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_15(::SimpleJSON::JSONNode* a1, ::CNHKFCHOEHK a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_15_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_16(::SimpleJSON::JSONNode* a1, ::BMAGJGLPIIF a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::BMAGJGLPIIF))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_16_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_17(::SimpleJSON::JSONNode* a1, ::RPG::FloatCurveFrame a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::FloatCurveFrame))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_17_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_18(::SimpleJSON::JSONNode* a1, ::RPG::Vector3CurveFrame a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Vector3CurveFrame))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_18_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_19(::SimpleJSON::JSONNode* a1, ::RPG::Vector4CurveFrame a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Vector4CurveFrame))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_19_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_20(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicString*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_20_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_21(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicBool* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicBool*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_21_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_22(::SimpleJSON::JSONNode* a1, ::ENEIHJJPNPI* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::ENEIHJJPNPI*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_22_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_23(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicFloat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_23_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_24(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_24_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_25(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FilePath* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FilePath*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_25_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_26(::SimpleJSON::JSONNode* a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_26_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_27(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FormatString a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FormatString))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_27_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_28(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StringHash a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_28_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_29(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::LittleGameEvent* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::LittleGameEvent*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_29_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_30(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::JsonEnum* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_30_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_31(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::LittleGameDynamicVar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::LittleGameDynamicVar*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_31_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB_32(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FiveDimDynamicVar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FiveDimDynamicVar*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJACLBNEEEB_32_OFFSET))(a1, a2);
		}

		static ::System::Void ECFPCGHPKOF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PckPatchPlatform* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PckPatchPlatform*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ECFPCGHPKOF_OFFSET))(a1, a2);
		}

		static ::System::Void GBOANEJEPIB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PckFileList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PckFileList*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GBOANEJEPIB_OFFSET))(a1, a2);
		}

		static ::System::Void CDPAIPLJKHF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PckPatchConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PckPatchConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CDPAIPLJKHF_OFFSET))(a1, a2);
		}

		static ::System::Void MOJIFOLKPIJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DynamicStringList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DynamicStringList*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MOJIFOLKPIJ_OFFSET))(a1, a2);
		}

		static ::System::Void KKJJLBDIIJF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPetPartyRole* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPetPartyRole*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KKJJLBDIIJF_OFFSET))(a1, a2);
		}

		static ::System::Void BNBHAEINPBE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtCollision2DShapeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtCollision2DShapeConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BNBHAEINPBE_OFFSET))(a1, a2);
		}

		static ::System::Void POHKBJELMLD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtPointShapeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtPointShapeConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_POHKBJELMLD_OFFSET))(a1, a2);
		}

		static ::System::Void JNNGAIFMNBJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtCircleShapeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtCircleShapeConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JNNGAIFMNBJ_OFFSET))(a1, a2);
		}

		static ::System::Void GGIKHPPDFNA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtRectShapeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtRectShapeConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GGIKHPPDFNA_OFFSET))(a1, a2);
		}

		static ::System::Void KMJDOCNILCG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtArcShapeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtArcShapeConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KMJDOCNILCG_OFFSET))(a1, a2);
		}

		static ::System::Void COLNIFOIFBB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomValueConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomValueConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_COLNIFOIFBB_OFFSET))(a1, a2);
		}

		static ::System::Void LPFOBONABEA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomFloatConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomFloatConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LPFOBONABEA_OFFSET))(a1, a2);
		}

		static ::System::Void NCIOGLMFMAO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomBoolConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomBoolConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NCIOGLMFMAO_OFFSET))(a1, a2);
		}

		static ::System::Void BEGKIKAHJCO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomStringConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomStringConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BEGKIKAHJCO_OFFSET))(a1, a2);
		}

		static ::System::Void CFNEMOLHPIE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorTargetAgentConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorTargetAgentConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CFNEMOLHPIE_OFFSET))(a1, a2);
		}

		static ::System::Void COCMCIOGJEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::GroupPropertyConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::GroupPropertyConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_COCMCIOGJEK_OFFSET))(a1, a2);
		}

		static ::System::Void PNGCNGGHOAK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::HoyoTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PNGCNGGHOAK_OFFSET))(a1, a2);
		}

		static ::System::Void GCGNGAALONM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::HoyoTagContainer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GCGNGAALONM_OFFSET))(a1, a2);
		}

		static ::System::Void BLCGGOMMMKB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionItemConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionItemConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BLCGGOMMMKB_OFFSET))(a1, a2);
		}

		static ::System::Void BFDCLJGBIHG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValue*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BFDCLJGBIHG_OFFSET))(a1, a2);
		}

		static ::System::Void AGLGOBCBAKL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValueRewardConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValueRewardConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AGLGOBCBAKL_OFFSET))(a1, a2);
		}

		static ::System::Void APFIJPGILFN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValueTuple* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValueTuple*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_APFIJPGILFN_OFFSET))(a1, a2);
		}

		static ::System::Void HOLAFAFKLFG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValueGroupConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValueGroupConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HOLAFAFKLFG_OFFSET))(a1, a2);
		}

		static ::System::Void AEMCGLHFIBH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValueGroupConfigPack* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValueGroupConfigPack*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AEMCGLHFIBH_OFFSET))(a1, a2);
		}

		static ::System::Void DFGIKPJIOGA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointCondition*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DFGIKPJIOGA_OFFSET))(a1, a2);
		}

		static ::System::Void FMEMJHJCFGL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointDistanceCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointDistanceCondition*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FMEMJHJCFGL_OFFSET))(a1, a2);
		}

		static ::System::Void GICGBLNNBEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPropStateCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPropStateCondition*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GICGBLNNBEK_OFFSET))(a1, a2);
		}

		static ::System::Void OCKOCPDJKEP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointFCVCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointFCVCondition*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OCKOCPDJKEP_OFFSET))(a1, a2);
		}

		static ::System::Void IEJICGCFLBN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IEJICGCFLBN_OFFSET))(a1, a2);
		}

		static ::System::Void HKOKLNFHAHE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HKOKLNFHAHE_OFFSET))(a1, a2);
		}

		static ::System::Void CAJKPAFLKMI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointTimelineStateCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointTimelineStateCondition*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CAJKPAFLKMI_OFFSET))(a1, a2);
		}

		static ::System::Void PPOFPJDDLLM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointGroupPropertyCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointGroupPropertyCondition*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PPOFPJDDLLM_OFFSET))(a1, a2);
		}

		static ::System::Void OPHNKPLDCJM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointConditionPack* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointConditionPack*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OPHNKPLDCJM_OFFSET))(a1, a2);
		}

		static ::System::Void GNOPJIOBJKL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointConditionMain* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointConditionMain*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GNOPJIOBJKL_OFFSET))(a1, a2);
		}

		static ::System::Void NAALGBKEKBN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointFastComplete* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointFastComplete*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NAALGBKEKBN_OFFSET))(a1, a2);
		}

		static ::System::Void LGDIHADNCKD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPoint* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPoint*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LGDIHADNCKD_OFFSET))(a1, a2);
		}

		static ::System::Void KPJCHCKJKLN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointLittleGameCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointLittleGameCondition*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KPJCHCKJKLN_OFFSET))(a1, a2);
		}

		static ::System::Void LNNMGFLPPDA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPack* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPack*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LNNMGFLPPDA_OFFSET))(a1, a2);
		}

		static ::System::Void APCCPDGLICM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::CheckFloorSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::CheckFloorSavedValueConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_APCCPDGLICM_OFFSET))(a1, a2);
		}

		static ::System::Void CNJOBEEMIKL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionWaypointDataPack* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionWaypointDataPack*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CNJOBEEMIKL_OFFSET))(a1, a2);
		}

		static ::System::Void CDOJHBOBHHC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FinishActionConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FinishActionConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CDOJHBOBHHC_OFFSET))(a1, a2);
		}

		static ::System::Void DDGMIENKBFD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SubMissionInfoConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SubMissionInfoConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DDGMIENKBFD_OFFSET))(a1, a2);
		}

		static ::System::Void HNJLMDMPGLP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SubMissionRelationConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SubMissionRelationConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HNJLMDMPGLP_OFFSET))(a1, a2);
		}

		static ::System::Void FCJHGMFCINF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MainMissionInfoConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MainMissionInfoConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FCJHGMFCINF_OFFSET))(a1, a2);
		}

		static ::System::Void MBKDAGMOFNJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MainMissionPartialInfoConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MainMissionPartialInfoConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MBKDAGMOFNJ_OFFSET))(a1, a2);
		}

		static ::System::Void CGPDJEJDBBF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BlockNodeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BlockNodeConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CGPDJEJDBBF_OFFSET))(a1, a2);
		}

		static ::System::Void JDOGNJEGEPJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JDOGNJEGEPJ_OFFSET))(a1, a2);
		}

		static ::System::Void DGCAFCCBCBD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingGroupVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingGroupVolumeComponentData*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DGCAFCCBCBD_OFFSET))(a1, a2);
		}

		static ::System::Void MINEELFNCFE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingBlockVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingBlockVolumeComponentData*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MINEELFNCFE_OFFSET))(a1, a2);
		}

		static ::System::Void BJNNLLKDAHO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingVolumeComponentData*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BJNNLLKDAHO_OFFSET))(a1, a2);
		}

		static ::System::Void DOAPJGDEMMH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingRatioVolumeData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingRatioVolumeData*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DOAPJGDEMMH_OFFSET))(a1, a2);
		}

		static ::System::Void CCLHKJMFAGF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingForceHLODVolumeData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingForceHLODVolumeData*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CCLHKJMFAGF_OFFSET))(a1, a2);
		}

		static ::System::Void GBNLCEIBKEO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingLightVolumeData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingLightVolumeData*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GBNLCEIBKEO_OFFSET))(a1, a2);
		}

		static ::System::Void EBMFLAOODGH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EBMFLAOODGH_OFFSET))(a1, a2);
		}

		static ::System::Void PACLFJNNDKK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageGrassOverrideConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageGrassOverrideConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PACLFJNNDKK_OFFSET))(a1, a2);
		}

		static ::System::Void JOPJJGHJMDI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageIslandConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageIslandConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JOPJJGHJMDI_OFFSET))(a1, a2);
		}

		static ::System::Void OFPJBAMPMJC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageIslandHLODConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageIslandHLODConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OFPJBAMPMJC_OFFSET))(a1, a2);
		}

		static ::System::Void OJPBCNGFLFE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::IslandStateConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::IslandStateConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OJPBCNGFLFE_OFFSET))(a1, a2);
		}

		static ::System::Void IKMAFDNNIIL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::IslandStateConditionSet* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::IslandStateConditionSet*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IKMAFDNNIIL_OFFSET))(a1, a2);
		}

		static ::System::Void MDGEGKNAONO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::IslandStateSavedValueCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::IslandStateSavedValueCondition*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MDGEGKNAONO_OFFSET))(a1, a2);
		}

		static ::System::Void ELOLHFODPAJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVersionData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVersionData*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ELOLHFODPAJ_OFFSET))(a1, a2);
		}

		static ::System::Void CHGBIGCIIJO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageBaseConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageBaseConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CHGBIGCIIJO_OFFSET))(a1, a2);
		}

		static ::System::Void LEEDFKMLFBJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SubStageData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SubStageData*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LEEDFKMLFBJ_OFFSET))(a1, a2);
		}

		static ::System::Void MEEBJDEEHCI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MEEBJDEEHCI_OFFSET))(a1, a2);
		}

		static ::System::Void JCNNFONFOGK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SubStageMetaData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SubStageMetaData*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JCNNFONFOGK_OFFSET))(a1, a2);
		}

		static ::System::Void IBLEJNHBDLA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingSceneScaleData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingSceneScaleData*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IBLEJNHBDLA_OFFSET))(a1, a2);
		}

		static ::System::Void KMKCCJPPPGK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVolumeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVolumeConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KMKCCJPPPGK_OFFSET))(a1, a2);
		}

		static ::System::Void PPBFPLJELPF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::OfflineCullingConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::OfflineCullingConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PPBFPLJELPF_OFFSET))(a1, a2);
		}

		static ::System::Void LIBPDCMGMFL(::SimpleJSON::JSONNode* a1, ::DOHCNAGPAEM* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::DOHCNAGPAEM*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LIBPDCMGMFL_OFFSET))(a1, a2);
		}

		static ::System::Void DMJEDJAEHCE(::SimpleJSON::JSONNode* a1, ::JLCGLIDLLFL* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::JLCGLIDLLFL*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DMJEDJAEHCE_OFFSET))(a1, a2);
		}

		static ::System::Void GLJEMANCKMC(::SimpleJSON::JSONNode* a1, ::MLMOAFNJPBG* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MLMOAFNJPBG*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GLJEMANCKMC_OFFSET))(a1, a2);
		}

		static ::System::Void BHDDOHAIMDL(::SimpleJSON::JSONNode* a1, ::PEFPDGCHBCL* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::PEFPDGCHBCL*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BHDDOHAIMDL_OFFSET))(a1, a2);
		}

		static ::System::Void KBDNHENCJAF(::SimpleJSON::JSONNode* a1, ::EGAMINIBAKN* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::EGAMINIBAKN*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KBDNHENCJAF_OFFSET))(a1, a2);
		}

		static ::System::Void LJOBAHHPPEP(::SimpleJSON::JSONNode* a1, ::GFKIPGPPFOB* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::GFKIPGPPFOB*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJOBAHHPPEP_OFFSET))(a1, a2);
		}

		static ::System::Void CDOHBGENAMJ(::SimpleJSON::JSONNode* a1, ::MCAIABAKIJJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MCAIABAKIJJ*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CDOHBGENAMJ_OFFSET))(a1, a2);
		}

		static ::System::Void GBPHEPPGOIN(::SimpleJSON::JSONNode* a1, ::CFBFPOLPBIE* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::CFBFPOLPBIE*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GBPHEPPGOIN_OFFSET))(a1, a2);
		}

		static ::System::Void DGNOKBLMCNF(::SimpleJSON::JSONNode* a1, ::OOADBMLOOEI* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::OOADBMLOOEI*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DGNOKBLMCNF_OFFSET))(a1, a2);
		}

		static ::System::Void FLBIEJNLDIM(::SimpleJSON::JSONNode* a1, ::NNMNLEFGMOC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::NNMNLEFGMOC*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FLBIEJNLDIM_OFFSET))(a1, a2);
		}

		static ::System::Void EFJCINKDGHG(::SimpleJSON::JSONNode* a1, ::KBLANADAHOM* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::KBLANADAHOM*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EFJCINKDGHG_OFFSET))(a1, a2);
		}

		static ::System::Void FMPOHHKFCNG(::SimpleJSON::JSONNode* a1, ::IGDCNPMKMEB* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::IGDCNPMKMEB*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FMPOHHKFCNG_OFFSET))(a1, a2);
		}

		static ::System::Void DLDNCNPNIMP(::SimpleJSON::JSONNode* a1, ::AJBACDGLCMO* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::AJBACDGLCMO*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DLDNCNPNIMP_OFFSET))(a1, a2);
		}

		static ::System::Void ADLABHJLKMI(::SimpleJSON::JSONNode* a1, ::AOOFHMBDLPL* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::AOOFHMBDLPL*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ADLABHJLKMI_OFFSET))(a1, a2);
		}

		static ::System::Void OBDNIFKHFGE(::SimpleJSON::JSONNode* a1, ::EJHJKIIHLLE* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::EJHJKIIHLLE*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OBDNIFKHFGE_OFFSET))(a1, a2);
		}

		static ::System::Void PCGDLCBOPPK(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCompareMatchThreeV2BirdLocation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PCGDLCBOPPK_OFFSET))(a1, a2);
		}

		static ::System::Void OCCPPKINIPN(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OCCPPKINIPN_OFFSET))(a1, a2);
		}

		static ::System::Void EGLHPKIMLID(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareLapCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareLapCount*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EGLHPKIMLID_OFFSET))(a1, a2);
		}

		static ::System::Void CPNGLFLEKND(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareRank* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareRank*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CPNGLFLEKND_OFFSET))(a1, a2);
		}

		static ::System::Void PEPDOEFDOLC(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PEPDOEFDOLC_OFFSET))(a1, a2);
		}

		static ::System::Void EKBIPAILFKE(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EKBIPAILFKE_OFFSET))(a1, a2);
		}

		static ::System::Void EIEOLOCMAOL(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EIEOLOCMAOL_OFFSET))(a1, a2);
		}

		static ::System::Void LLAIPKEMEFF(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCanPlanetFesLevelUp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCanPlanetFesLevelUp*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LLAIPKEMEFF_OFFSET))(a1, a2);
		}

		static ::System::Void FONCDEKOOFE(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCanPlanetFesSkillLevelUp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCanPlanetFesSkillLevelUp*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FONCDEKOOFE_OFFSET))(a1, a2);
		}

		static ::System::Void ACKHHPHEBLO(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByComparePlanetFesEventProgressLeft* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByComparePlanetFesEventProgressLeft*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ACKHHPHEBLO_OFFSET))(a1, a2);
		}

		static ::System::Void FNMJOKLDKGN(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByIsPlanetFesBusinessDayFinished* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FNMJOKLDKGN_OFFSET))(a1, a2);
		}

		static ::System::Void OMOFLGNPPEL(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByPlantFesIsInSpineAnim* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByPlantFesIsInSpineAnim*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OMOFLGNPPEL_OFFSET))(a1, a2);
		}

		static ::System::Void BLECAGHDDHI(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByPlantFesIsInMove* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByPlantFesIsInMove*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BLECAGHDDHI_OFFSET))(a1, a2);
		}

		static ::System::Void OMEIOIACCAC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByInAnimZone* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByInAnimZone*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OMEIOIACCAC_OFFSET))(a1, a2);
		}

		static ::System::Void NFLCNJMKNNI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NFLCNJMKNNI_OFFSET))(a1, a2);
		}

		static ::System::Void ODDMEEICEIN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamOnlineFirst* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamOnlineFirst*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ODDMEEICEIN_OFFSET))(a1, a2);
		}

		static ::System::Void NPMGFCPMOJO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamMovePhaseTalk* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamMovePhaseTalk*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NPMGFCPMOJO_OFFSET))(a1, a2);
		}

		static ::System::Void BCEEEDHEKME(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamActionPhaseTalk* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamActionPhaseTalk*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BCEEEDHEKME_OFFSET))(a1, a2);
		}

		static ::System::Void CPKEPIFPBMG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamNormalAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamNormalAction*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CPKEPIFPBMG_OFFSET))(a1, a2);
		}

		static ::System::Void OMKBGKJOOCA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamNormalActionSwitch* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamNormalActionSwitch*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OMKBGKJOOCA_OFFSET))(a1, a2);
		}

		static ::System::Void CKHFADGJMJE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamCurrentActionAnyDirection* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamCurrentActionAnyDirection*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CKHFADGJMJE_OFFSET))(a1, a2);
		}

		static ::System::Void FKBNCMFMPGM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamAnchorContinous* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamAnchorContinous*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FKBNCMFMPGM_OFFSET))(a1, a2);
		}

		static ::System::Void JMHAFBBKOEE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByTriggeredTrackedSearch* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByTriggeredTrackedSearch*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JMHAFBBKOEE_OFFSET))(a1, a2);
		}

		static ::System::Void JBJDEBOHBDN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPlayerInVisionZone* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPlayerInVisionZone*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JBJDEBOHBDN_OFFSET))(a1, a2);
		}

		static ::System::Void NINFPLDMHDP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPerceiveValueReachMax* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPerceiveValueReachMax*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NINFPLDMHDP_OFFSET))(a1, a2);
		}

		static ::System::Void ECICPGKCMBL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPlayerHide* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPlayerHide*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ECICPGKCMBL_OFFSET))(a1, a2);
		}

		static ::System::Void NPHNCLMMKLF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByInCustomZone* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByInCustomZone*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NPHNCLMMKLF_OFFSET))(a1, a2);
		}

		static ::System::Void PDABNPFIKML(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInAttackRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInAttackRange*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PDABNPFIKML_OFFSET))(a1, a2);
		}

		static ::System::Void HHFBIGJCIKJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAlertValueInRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAlertValueInRange*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HHFBIGJCIKJ_OFFSET))(a1, a2);
		}

		static ::System::Void DENIFCJBMMH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveObstacle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveObstacle*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DENIFCJBMMH_OFFSET))(a1, a2);
		}

		static ::System::Void HNNPMEPHCMJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByNPCStatus* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByNPCStatus*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HNNPMEPHCMJ_OFFSET))(a1, a2);
		}

		static ::System::Void PHELGAGGCML(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMazeSkillUseCheck* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMazeSkillUseCheck*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PHELGAGGCML_OFFSET))(a1, a2);
		}

		static ::System::Void FEPEBGKBLMC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCarryMazebuff* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCarryMazebuff*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FEPEBGKBLMC_OFFSET))(a1, a2);
		}

		static ::System::Void AINHILHJPAO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAIVariableInt* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAIVariableInt*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AINHILHJPAO_OFFSET))(a1, a2);
		}

		static ::System::Void AJHKMENPGDL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByDistance*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AJHKMENPGDL_OFFSET))(a1, a2);
		}

		static ::System::Void KENIGCHNPGG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByAlertLevel* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByAlertLevel*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KENIGCHNPGG_OFFSET))(a1, a2);
		}

		static ::System::Void JHOINLGPNEA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByContainEntityTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByContainEntityTag*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JHOINLGPNEA_OFFSET))(a1, a2);
		}

		static ::System::Void CLIHMKAOBMG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByAIStatus* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByAIStatus*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CLIHMKAOBMG_OFFSET))(a1, a2);
		}

		static ::System::Void EHBGEEEGLBN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByCompareVariableBool* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByCompareVariableBool*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EHBGEEEGLBN_OFFSET))(a1, a2);
		}

		static ::System::Void EAABMHMMFGE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByCompareVariableFloat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByCompareVariableFloat*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EAABMHMMFGE_OFFSET))(a1, a2);
		}

		static ::System::Void ALABCCCKAEL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_BySkillInCD* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_BySkillInCD*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ALABCCCKAEL_OFFSET))(a1, a2);
		}

		static ::System::Void KDOCKFIACLA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KDOCKFIACLA_OFFSET))(a1, a2);
		}

		static ::System::Void ENNJEEPLBKO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistToGuardPosition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistToGuardPosition*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ENNJEEPLBKO_OFFSET))(a1, a2);
		}

		static ::System::Void LAPEGPIPKAF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByAlertLevel* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByAlertLevel*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LAPEGPIPKAF_OFFSET))(a1, a2);
		}

		static ::System::Void GNIFKEMFHGG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasPatrolPath* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasPatrolPath*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GNIFKEMFHGG_OFFSET))(a1, a2);
		}

		static ::System::Void PNDJDBHDMPB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableBool* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableBool*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PNDJDBHDMPB_OFFSET))(a1, a2);
		}

		static ::System::Void IBGBHBCKNBD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableFloat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableFloat*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IBGBHBCKNBD_OFFSET))(a1, a2);
		}

		static ::System::Void OMPIJPNIGEP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByCompareVariableString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByCompareVariableString*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OMPIJPNIGEP_OFFSET))(a1, a2);
		}

		static ::System::Void BEIMIKFKKMG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAttackDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAttackDistance*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BEIMIKFKKMG_OFFSET))(a1, a2);
		}

		static ::System::Void CDOFEPCENIL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAttackAngle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAttackAngle*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CDOFEPCENIL_OFFSET))(a1, a2);
		}

		static ::System::Void PLHJOLDHCDH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByAIHangUp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByAIHangUp*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PLHJOLDHCDH_OFFSET))(a1, a2);
		}

		static ::System::Void GEHOFFAHIKM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistanceToEnchantTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistanceToEnchantTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GEHOFFAHIKM_OFFSET))(a1, a2);
		}

		static ::System::Void MJLDLKKPFGB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistanceToTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistanceToTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MJLDLKKPFGB_OFFSET))(a1, a2);
		}

		static ::System::Void HMBOOHLJICP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasBornSmartObject* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasBornSmartObject*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HMBOOHLJICP_OFFSET))(a1, a2);
		}

		static ::System::Void GFCIMNAJJCJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasAbnormalState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasAbnormalState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GFCIMNAJJCJ_OFFSET))(a1, a2);
		}

		static ::System::Void DDDPHCPPJOA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DDDPHCPPJOA_OFFSET))(a1, a2);
		}

		static ::System::Void PAGKNLNGAKF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByContainAbnormalState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByContainAbnormalState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PAGKNLNGAKF_OFFSET))(a1, a2);
		}

		static ::System::Void OPLEJDNIDHL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAIStatus* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAIStatus*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OPLEJDNIDHL_OFFSET))(a1, a2);
		}

		static ::System::Void DALDPIEACAE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByOnHit* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByOnHit*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DALDPIEACAE_OFFSET))(a1, a2);
		}

		static ::System::Void OHMNBAFGILD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByFoundSmartObject* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByFoundSmartObject*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OHMNBAFGILD_OFFSET))(a1, a2);
		}

		static ::System::Void NEDABOAKLDP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByForceExitCombat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByForceExitCombat*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NEDABOAKLDP_OFFSET))(a1, a2);
		}

		static ::System::Void DKNJKDCPHGL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByEnterCombat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByEnterCombat*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DKNJKDCPHGL_OFFSET))(a1, a2);
		}

		static ::System::Void ICOHNAHIJKM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByExitCombat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByExitCombat*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ICOHNAHIJKM_OFFSET))(a1, a2);
		}

		static ::System::Void GHHJLCAKCPE(::SimpleJSON::JSONNode* a1, ::BDKIHEDECCJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::BDKIHEDECCJ*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GHHJLCAKCPE_OFFSET))(a1, a2);
		}

		static ::System::Void KBMGGPFLOAN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectForUI* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectForUI*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KBMGGPFLOAN_OFFSET))(a1, a2);
		}

		static ::System::Void BGLIGCPLKFK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRebuiltSummonUnit* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRebuiltSummonUnit*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BGLIGCPLKFK_OFFSET))(a1, a2);
		}

		static ::System::Void BPNAGJDOLFE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySwitchMascotCanShootTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySwitchMascotCanShootTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BPNAGJDOLFE_OFFSET))(a1, a2);
		}

		static ::System::Void GJHAMGGGMLJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAdvCharacterLogicState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAdvCharacterLogicState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GJHAMGGGMLJ_OFFSET))(a1, a2);
		}

		static ::System::Void EONBBBEGDII(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsPropLockable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsPropLockable*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EONBBBEGDII_OFFSET))(a1, a2);
		}

		static ::System::Void NMPOCJPCJIE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NMPOCJPCJIE_OFFSET))(a1, a2);
		}

		static ::System::Void IHLIJPIDOAK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetHitBoxActive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetHitBoxActive*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IHLIJPIDOAK_OFFSET))(a1, a2);
		}

		static ::System::Void BGMNLNLLHAD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BGMNLNLLHAD_OFFSET))(a1, a2);
		}

		static ::System::Void OGFMLKAAMGL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByNPCMonsterPurposeType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OGFMLKAAMGL_OFFSET))(a1, a2);
		}

		static ::System::Void NLPMGIKGGKD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByInMotionState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByInMotionState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NLPMGIKGGKD_OFFSET))(a1, a2);
		}

		static ::System::Void LKDJDJADIGK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMotionHitColliderWall* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMotionHitColliderWall*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LKDJDJADIGK_OFFSET))(a1, a2);
		}

		static ::System::Void BAIPBCBAGHL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMoveInputTowardsTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BAIPBCBAGHL_OFFSET))(a1, a2);
		}

		static ::System::Void OFJGBAANENK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCheckMoveInput* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCheckMoveInput*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OFJGBAANENK_OFFSET))(a1, a2);
		}

		static ::System::Void KAHEGEGAJID(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInAnimZone* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInAnimZone*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KAHEGEGAJID_OFFSET))(a1, a2);
		}

		static ::System::Void IMKJIBENEID(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareProjectileLifetime* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareProjectileLifetime*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IMKJIBENEID_OFFSET))(a1, a2);
		}

		static ::System::Void PACKICGCKIH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFearCharacterCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFearCharacterCount*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PACKICGCKIH_OFFSET))(a1, a2);
		}

		static ::System::Void GNLIFPLEIIO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GNLIFPLEIIO_OFFSET))(a1, a2);
		}

		static ::System::Void PNFAGCPCMLM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSummonUnitCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSummonUnitCount*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PNFAGCPCMLM_OFFSET))(a1, a2);
		}

		static ::System::Void EACNCCEHOBL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareDynamicValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareDynamicValue*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EACNCCEHOBL_OFFSET))(a1, a2);
		}

		static ::System::Void GALGDHENGDJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCharacterDamageType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCharacterDamageType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GALGDHENGDJ_OFFSET))(a1, a2);
		}

		static ::System::Void DIGHGPGFLHA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveAbilityTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveAbilityTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DIGHGPGFLHA_OFFSET))(a1, a2);
		}

		static ::System::Void AAKMPJOLPPK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAllowInstantKill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAllowInstantKill*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AAKMPJOLPPK_OFFSET))(a1, a2);
		}

		static ::System::Void DKIPABAFNAD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterSpeed* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterSpeed*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DKIPABAFNAD_OFFSET))(a1, a2);
		}

		static ::System::Void EFLFDIEKCLJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasPlayerMoveInput* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasPlayerMoveInput*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EFLFDIEKCLJ_OFFSET))(a1, a2);
		}

		static ::System::Void PKMHGKBAEKJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetInCameraScreenScope* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetInCameraScreenScope*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PKMHGKBAEKJ_OFFSET))(a1, a2);
		}

		static ::System::Void PJLJNGACDCI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareInvasionLevel* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareInvasionLevel*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PJLJNGACDCI_OFFSET))(a1, a2);
		}

		static ::System::Void KKPBIICLCCD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::EffectModifyData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::EffectModifyData*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KKPBIICLCCD_OFFSET))(a1, a2);
		}

		static ::System::Void EGIMGLFAEJB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffect*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EGIMGLFAEJB_OFFSET))(a1, a2);
		}

		static ::System::Void LAJFDMPLANK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::OverrideMonoEffectConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::OverrideMonoEffectConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LAJFDMPLANK_OFFSET))(a1, a2);
		}

		static ::System::Void PDPNIPHKPAK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::EffectConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::EffectConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PDPNIPHKPAK_OFFSET))(a1, a2);
		}

		static ::System::Void BIPJCOKNELJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectList*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BIPJCOKNELJ_OFFSET))(a1, a2);
		}

		static ::System::Void JKHBPLEIGPO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGameEntityNotCreated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGameEntityNotCreated*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JKHBPLEIGPO_OFFSET))(a1, a2);
		}

		static ::System::Void KOAJKGLDCML(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPropIsCreateByActiveSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPropIsCreateByActiveSkill*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KOAJKGLDCML_OFFSET))(a1, a2);
		}

		static ::System::Void GKIGCBDOMBO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSubMissionState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSubMissionState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GKIGCBDOMBO_OFFSET))(a1, a2);
		}

		static ::System::Void GKLBIAILECP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMainMissionState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMainMissionState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GKLBIAILECP_OFFSET))(a1, a2);
		}

		static ::System::Void HNOAAKOHFHE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePerformance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePerformance*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HNOAAKOHFHE_OFFSET))(a1, a2);
		}

		static ::System::Void GJIDFNNBDEP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GJIDFNNBDEP_OFFSET))(a1, a2);
		}

		static ::System::Void JPBKHJALKFG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JPBKHJALKFG_OFFSET))(a1, a2);
		}

		static ::System::Void PJHDAFDIMBJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveUniqueNameEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveUniqueNameEffect*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PJHDAFDIMBJ_OFFSET))(a1, a2);
		}

		static ::System::Void BAGIJNBNCLP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMissionCustomValue*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BAGIJNBNCLP_OFFSET))(a1, a2);
		}

		static ::System::Void JDGMDHANGIN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFSVwithGP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFSVwithGP*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JDGMDHANGIN_OFFSET))(a1, a2);
		}

		static ::System::Void PILBBFLICPI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGPwithGP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGPwithGP*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PILBBFLICPI_OFFSET))(a1, a2);
		}

		static ::System::Void PJOHHMLDFLH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByShowChallengeSelectPage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByShowChallengeSelectPage*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PJOHHMLDFLH_OFFSET))(a1, a2);
		}

		static ::System::Void OECKDDIPHJH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPropShowInfoId* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPropShowInfoId*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OECKDDIPHJH_OFFSET))(a1, a2);
		}

		static ::System::Void PAMNDPNFEPF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByMainMissionFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByMainMissionFinish*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PAMNDPNFEPF_OFFSET))(a1, a2);
		}

		static ::System::Void KBFKNLKHJON(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMechanismBarPhase* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMechanismBarPhase*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KBFKNLKHJON_OFFSET))(a1, a2);
		}

		static ::System::Void CNDOPOCIIHK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByMuseumProjectorThemeNum* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByMuseumProjectorThemeNum*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CNDOPOCIIHK_OFFSET))(a1, a2);
		}

		static ::System::Void MKAOHIHGDEH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareDimensionID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareDimensionID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MKAOHIHGDEH_OFFSET))(a1, a2);
		}

		static ::System::Void PABLOPCJALF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropPuzzleCreated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropPuzzleCreated*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PABLOPCJALF_OFFSET))(a1, a2);
		}

		static ::System::Void FLNHJKNEMEO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByRollShopResult* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByRollShopResult*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FLNHJKNEMEO_OFFSET))(a1, a2);
		}

		static ::System::Void LINBLJJHHKP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEnvProfilePath* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEnvProfilePath*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LINBLJJHHKP_OFFSET))(a1, a2);
		}

		static ::System::Void BEELFKDFPCM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnyNpcMonsterInRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnyNpcMonsterInRange*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BEELFKDFPCM_OFFSET))(a1, a2);
		}

		static ::System::Void FHOCCIEHPOJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInStoryMode* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInStoryMode*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FHOCCIEHPOJ_OFFSET))(a1, a2);
		}

		static ::System::Void LLNOFMEIDAP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LLNOFMEIDAP_OFFSET))(a1, a2);
		}

		static ::System::Void CEOEIIBCMBP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySkipNextTeleportEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySkipNextTeleportEffect*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CEOEIIBCMBP_OFFSET))(a1, a2);
		}

		static ::System::Void MCGJMMMEKHM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeamLeader* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeamLeader*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MCGJMMMEKHM_OFFSET))(a1, a2);
		}

		static ::System::Void IBHFMOMPDDL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerAvatarID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerAvatarID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IBHFMOMPDDL_OFFSET))(a1, a2);
		}

		static ::System::Void EOECBMIALKD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerIsHero* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerIsHero*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EOECBMIALKD_OFFSET))(a1, a2);
		}

		static ::System::Void GFMJAKPEDOF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityTimeScaleZero* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityTimeScaleZero*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GFMJAKPEDOF_OFFSET))(a1, a2);
		}

		static ::System::Void JMAIJHDCPFH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByHasMoveSinceLastTeleport*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JMAIJHDCPFH_OFFSET))(a1, a2);
		}

		static ::System::Void GHGHINFBOLO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareCharacterID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GHGHINFBOLO_OFFSET))(a1, a2);
		}

		static ::System::Void DJCIFKJIOJL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareEnhancedID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareEnhancedID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DJCIFKJIOJL_OFFSET))(a1, a2);
		}

		static ::System::Void PGDBEPAAAOD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByIsInPhantomFrozen* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByIsInPhantomFrozen*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PGDBEPAAAOD_OFFSET))(a1, a2);
		}

		static ::System::Void NPEAOACOEKC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareQuestProgress* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareQuestProgress*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NPEAOACOEKC_OFFSET))(a1, a2);
		}

		static ::System::Void NDCJFCBLCNO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInDistrict* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInDistrict*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NDCJFCBLCNO_OFFSET))(a1, a2);
		}

		static ::System::Void NFGBAEJFDIO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetVisible* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetVisible*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NFGBAEJFDIO_OFFSET))(a1, a2);
		}

		static ::System::Void GLOJAFDHNJK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSoundEventInCD* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSoundEventInCD*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GLOJAFDHNJK_OFFSET))(a1, a2);
		}

		static ::System::Void EDGEELFBFMB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTimelineEntityState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTimelineEntityState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EDGEELFBFMB_OFFSET))(a1, a2);
		}

		static ::System::Void CEBFKKBGPHE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CEBFKKBGPHE_OFFSET))(a1, a2);
		}

		static ::System::Void MEANDLIONGG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTimeRewindTargetCurrentState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTimeRewindTargetCurrentState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MEANDLIONGG_OFFSET))(a1, a2);
		}

		static ::System::Void MFAFJHPJLDF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRotatableTimeRewindTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MFAFJHPJLDF_OFFSET))(a1, a2);
		}

		static ::System::Void OLGGCOPCDBN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTimeRewindTargetMotionPause* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTimeRewindTargetMotionPause*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OLGGCOPCDBN_OFFSET))(a1, a2);
		}

		static ::System::Void GIMBHMKDCBC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomFloat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomFloat*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GIMBHMKDCBC_OFFSET))(a1, a2);
		}

		static ::System::Void FNMKMJDBADE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomString*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FNMKMJDBADE_OFFSET))(a1, a2);
		}

		static ::System::Void NJCFKJALINO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFloorCustomBool* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFloorCustomBool*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NJCFKJALINO_OFFSET))(a1, a2);
		}

		static ::System::Void MOAENACPOCJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomFloatV2* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomFloatV2*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MOAENACPOCJ_OFFSET))(a1, a2);
		}

		static ::System::Void JDBOOFMOAEE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorCustomStringV2* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorCustomStringV2*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JDBOOFMOAEE_OFFSET))(a1, a2);
		}

		static ::System::Void JNEIHNAPBBG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFloorCustomBoolV2* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFloorCustomBoolV2*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JNEIHNAPBBG_OFFSET))(a1, a2);
		}

		static ::System::Void BKNJDFMBOHB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorSavedValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorSavedValue*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BKNJDFMBOHB_OFFSET))(a1, a2);
		}

		static ::System::Void FDEOBHOKFPH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorSavedValueV2* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorSavedValueV2*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FDEOBHOKFPH_OFFSET))(a1, a2);
		}

		static ::System::Void IMPFLNGFAHE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGraphDynamicFloat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGraphDynamicFloat*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IMPFLNGFAHE_OFFSET))(a1, a2);
		}

		static ::System::Void EABLJKHCNAH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGraphDynamicString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGraphDynamicString*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EABLJKHCNAH_OFFSET))(a1, a2);
		}

		static ::System::Void IJJIKFMPCPD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePhoneMessageItem* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePhoneMessageItem*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IJJIKFMPCPD_OFFSET))(a1, a2);
		}

		static ::System::Void GLEPDOBLGKP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityCreated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityCreated*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GLEPDOBLGKP_OFFSET))(a1, a2);
		}

		static ::System::Void IKDJNGBKDPL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGroupProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGroupProperty*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IKDJNGBKDPL_OFFSET))(a1, a2);
		}

		static ::System::Void LGAMBCMDNED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::QueryHoyoTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::QueryHoyoTag*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LGAMBCMDNED_OFFSET))(a1, a2);
		}

		static ::System::Void GGHHCPDMEDC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareVersionFinalMainMission* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareVersionFinalMainMission*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GGHHCPDMEDC_OFFSET))(a1, a2);
		}

		static ::System::Void LMLOOMGCBFB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStoryLineID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStoryLineID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LMLOOMGCBFB_OFFSET))(a1, a2);
		}

		static ::System::Void CGPHAFGHBHE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDistance*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CGPHAFGHBHE_OFFSET))(a1, a2);
		}

		static ::System::Void IGOKLNJPBIH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInVision* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInVision*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IGOKLNJPBIH_OFFSET))(a1, a2);
		}

		static ::System::Void ONEHPCCMIAN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAlertValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAlertValue*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ONEHPCCMIAN_OFFSET))(a1, a2);
		}

		static ::System::Void AFONACBJLOE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAngle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAngle*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AFONACBJLOE_OFFSET))(a1, a2);
		}

		static ::System::Void KODNGMJNJMK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareHPRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareHPRatio*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KODNGMJNJMK_OFFSET))(a1, a2);
		}

		static ::System::Void AJBOMAFGGKB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareSPRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareSPRatio*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AJBOMAFGGKB_OFFSET))(a1, a2);
		}

		static ::System::Void JAIJKAJHDOC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckGameMode* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckGameMode*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JAIJKAJHDOC_OFFSET))(a1, a2);
		}

		static ::System::Void KHGCHLPAGOH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsLocateAtArea* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsLocateAtArea*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KHGCHLPAGOH_OFFSET))(a1, a2);
		}

		static ::System::Void DBKIKLMFDNC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsInPosition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsInPosition*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DBKIKLMFDNC_OFFSET))(a1, a2);
		}

		static ::System::Void JOINDEHCNDF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPropInPosition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPropInPosition*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JOINDEHCNDF_OFFSET))(a1, a2);
		}

		static ::System::Void PMBGEEEHFNE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsInRotation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsInRotation*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PMBGEEEHFNE_OFFSET))(a1, a2);
		}

		static ::System::Void JFLJKKBNBEM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveLockTargetInCamera* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveLockTargetInCamera*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JFLJKKBNBEM_OFFSET))(a1, a2);
		}

		static ::System::Void FKIEFDCBBMA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsContainAdventureModifier* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsContainAdventureModifier*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FKIEFDCBBMA_OFFSET))(a1, a2);
		}

		static ::System::Void FLIAMIMIEIE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTriggerBattleAttacker* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTriggerBattleAttacker*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FLIAMIMIEIE_OFFSET))(a1, a2);
		}

		static ::System::Void MCGAIEEKGEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsWeakTypeActive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsWeakTypeActive*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MCGAIEEKGEB_OFFSET))(a1, a2);
		}

		static ::System::Void KDDEODICONE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsNPCControlled* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsNPCControlled*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KDDEODICONE_OFFSET))(a1, a2);
		}

		static ::System::Void HJJAACIOOHI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNpcMonsterRank* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNpcMonsterRank*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HJJAACIOOHI_OFFSET))(a1, a2);
		}

		static ::System::Void OIIDANFINHK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByFuncUnlockCheck* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByFuncUnlockCheck*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OIIDANFINHK_OFFSET))(a1, a2);
		}

		static ::System::Void AFCPENOEMIO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckLineupAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckLineupAvatarBaseType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AFCPENOEMIO_OFFSET))(a1, a2);
		}

		static ::System::Void AEJNKHIMODI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemNumber* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemNumber*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AEJNKHIMODI_OFFSET))(a1, a2);
		}

		static ::System::Void FLNDNGAGDMG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLineupAvatarHpRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FLNDNGAGDMG_OFFSET))(a1, a2);
		}

		static ::System::Void KJGMIDMEFHO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnimatorParam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnimatorParam*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KJGMIDMEFHO_OFFSET))(a1, a2);
		}

		static ::System::Void PLMBHBJNKDO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasAssistAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasAssistAvatar*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PLMBHBJNKDO_OFFSET))(a1, a2);
		}

		static ::System::Void JIKBNLHPGEN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsGenderType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsGenderType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JIKBNLHPGEN_OFFSET))(a1, a2);
		}

		static ::System::Void PHHHHDKLAGI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTrackCamera* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTrackCamera*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PHHHHDKLAGI_OFFSET))(a1, a2);
		}

		static ::System::Void JFDGCJMLEOD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTrackCameraByPathID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTrackCameraByPathID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JFDGCJMLEOD_OFFSET))(a1, a2);
		}

		static ::System::Void CPEMBFKNPCP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTextJoinValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTextJoinValue*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CPEMBFKNPCP_OFFSET))(a1, a2);
		}

		static ::System::Void DJINLJCFFJN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsEntityInDialogue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsEntityInDialogue*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DJINLJCFFJN_OFFSET))(a1, a2);
		}

		static ::System::Void CDFMJPNKPID(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsBookAvailable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsBookAvailable*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CDFMJPNKPID_OFFSET))(a1, a2);
		}

		static ::System::Void BHIFAKADHJJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRotatableRegionLoadingState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRotatableRegionLoadingState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BHIFAKADHJJ_OFFSET))(a1, a2);
		}

		static ::System::Void FGOMFIPBJDL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsActivityInSchedule* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsActivityInSchedule*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FGOMFIPBJDL_OFFSET))(a1, a2);
		}

		static ::System::Void KGJADCJGGHP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchHandGestureType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchHandGestureType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KGJADCJGGHP_OFFSET))(a1, a2);
		}

		static ::System::Void BALHIOBCOND(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchHandCatchItem* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchHandCatchItem*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BALHIOBCOND_OFFSET))(a1, a2);
		}

		static ::System::Void LLHEGKMJIOM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMatchThreeBirdLocation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMatchThreeBirdLocation*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LLHEGKMJIOM_OFFSET))(a1, a2);
		}

		static ::System::Void JLHFPFEBGBM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JLHFPFEBGBM_OFFSET))(a1, a2);
		}

		static ::System::Void KJGCEBIAHHN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNPCMonsterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNPCMonsterID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KJGCEBIAHHN_OFFSET))(a1, a2);
		}

		static ::System::Void KFDFMMOPGAG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KFDFMMOPGAG_OFFSET))(a1, a2);
		}

		static ::System::Void NNBGIFIKKMF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentRogueHasMiracle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentRogueHasMiracle*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NNBGIFIKKMF_OFFSET))(a1, a2);
		}

		static ::System::Void MLAIDCNAINE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentRogueShopHasStage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentRogueShopHasStage*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MLAIDCNAINE_OFFSET))(a1, a2);
		}

		static ::System::Void DFFBLLAGELJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCanPlayIdleShow* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCanPlayIdleShow*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DFFBLLAGELJ_OFFSET))(a1, a2);
		}

		static ::System::Void OBKOCLFLLII(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemPair* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemPair*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OBKOCLFLLII_OFFSET))(a1, a2);
		}

		static ::System::Void LDMBAECDJKE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemNum* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemNum*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LDMBAECDJKE_OFFSET))(a1, a2);
		}

		static ::System::Void NFIPHFAAPGL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIfGroupIsOccupied* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIfGroupIsOccupied*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NFIPHFAAPGL_OFFSET))(a1, a2);
		}

		static ::System::Void FFPMKILOANL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSeriesID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSeriesID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FFPMKILOANL_OFFSET))(a1, a2);
		}

		static ::System::Void BMGHDDOMCEO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFirstPerformance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFirstPerformance*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BMGHDDOMCEO_OFFSET))(a1, a2);
		}

		static ::System::Void GPLGNBMPILJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamLeaderBodySize* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamLeaderBodySize*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GPLGNBMPILJ_OFFSET))(a1, a2);
		}

		static ::System::Void CEIKAJACKNA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::GroupFetchLocalTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::GroupFetchLocalTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CEIKAJACKNA_OFFSET))(a1, a2);
		}

		static ::System::Void MMOIHOJDNLD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvGroupFetchTargetByStringList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvGroupFetchTargetByStringList*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MMOIHOJDNLD_OFFSET))(a1, a2);
		}

		static ::System::Void OKHEPIBHIEE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvGroupFetchTargetByString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvGroupFetchTargetByString*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OKHEPIBHIEE_OFFSET))(a1, a2);
		}

		static ::System::Void FCBLEIEBONI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySharedSummonUnitInUse* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySharedSummonUnitInUse*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FCBLEIEBONI_OFFSET))(a1, a2);
		}

		static ::System::Void NFGPBPKIBMM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropStateItem* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropStateItem*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NFGPBPKIBMM_OFFSET))(a1, a2);
		}

		static ::System::Void BCIECHGKDMD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropDestructItem* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropDestructItem*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BCIECHGKDMD_OFFSET))(a1, a2);
		}

		static ::System::Void LMJGGJJGPDA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LMJGGJJGPDA_OFFSET))(a1, a2);
		}

		static ::System::Void HCCCKJDNEDC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByEntitiesExist* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByEntitiesExist*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HCCCKJDNEDC_OFFSET))(a1, a2);
		}

		static ::System::Void MJIMEALKBEG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasUnGottenLevelReward* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasUnGottenLevelReward*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MJIMEALKBEG_OFFSET))(a1, a2);
		}

		static ::System::Void LJNCFGEAMFJ(::SimpleJSON::JSONNode* a1, ::PMDAHIHMGFG* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::PMDAHIHMGFG*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJNCFGEAMFJ_OFFSET))(a1, a2);
		}

		static ::System::Void JHBIIHDAOLC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckWindowInSlot* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckWindowInSlot*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JHBIIHDAOLC_OFFSET))(a1, a2);
		}

		static ::System::Void FAEBCIKJGIG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckWindowPermCodes* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckWindowPermCodes*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FAEBCIKJGIG_OFFSET))(a1, a2);
		}

		static ::System::Void NJOOLJIFJAO(::SimpleJSON::JSONNode* a1, ::NPHIKPFNJJO* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::NPHIKPFNJJO*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NJOOLJIFJAO_OFFSET))(a1, a2);
		}

		static ::System::Void OGNJOGLKOLH(::SimpleJSON::JSONNode* a1, ::BDLHKCMCMGJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::BDLHKCMCMGJ*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OGNJOGLKOLH_OFFSET))(a1, a2);
		}

		static ::System::Void ENOBOLMLKEI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHipplenEnergy* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHipplenEnergy*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ENOBOLMLKEI_OFFSET))(a1, a2);
		}

		static ::System::Void ICLDJFFKOFF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::LittleGameFetchProxyByID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::LittleGameFetchProxyByID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ICLDJFFKOFF_OFFSET))(a1, a2);
		}

		static ::System::Void OJDAJGCIPCO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarShort* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OJDAJGCIPCO_OFFSET))(a1, a2);
		}

		static ::System::Void BMCJPCCGBKA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BMCJPCCGBKA_OFFSET))(a1, a2);
		}

		static ::System::Void HDNMKPNKFIL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HDNMKPNKFIL_OFFSET))(a1, a2);
		}

		static ::System::Void EIOPCKDDGDL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByUsedFiveDimHoldDash* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByUsedFiveDimHoldDash*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EIOPCKDDGDL_OFFSET))(a1, a2);
		}

		static ::System::Void BDBMNPAKIIJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BDBMNPAKIIJ_OFFSET))(a1, a2);
		}

		static ::System::Void ECAGNKOAMHC(::SimpleJSON::JSONNode* a1, ::GJJIBJDCLHM* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::GJJIBJDCLHM*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ECAGNKOAMHC_OFFSET))(a1, a2);
		}

		static ::System::Void PDGJMFKOMLM(::SimpleJSON::JSONNode* a1, ::NOLPNHJGAJG* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::NOLPNHJGAJG*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PDGJMFKOMLM_OFFSET))(a1, a2);
		}

		static ::System::Void MGHKKBINBBK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ChenLingFesPredicateItemCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ChenLingFesPredicateItemCondition*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MGHKKBINBBK_OFFSET))(a1, a2);
		}

		static ::System::Void NOLEDJNDOLF(::SimpleJSON::JSONNode* a1, ::EHPBMPFKNFP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::EHPBMPFKNFP*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NOLEDJNDOLF_OFFSET))(a1, a2);
		}

		static ::System::Void IIBDFLPBMGH(::SimpleJSON::JSONNode* a1, ::EGLGEOOKCNM* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::EGLGEOOKCNM*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IIBDFLPBMGH_OFFSET))(a1, a2);
		}

		static ::System::Void PDEPGJGMKEO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsCustomerState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsCustomerState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PDEPGJGMKEO_OFFSET))(a1, a2);
		}

		static ::System::Void CHHFAMAFCID(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsTakeOutState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsTakeOutState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CHHFAMAFCID_OFFSET))(a1, a2);
		}

		static ::System::Void IANBLHLFICB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsWaiterState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsWaiterState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IANBLHLFICB_OFFSET))(a1, a2);
		}

		static ::System::Void MCFDMPJAKKH(::SimpleJSON::JSONNode* a1, ::JFBLKOIBDEE* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::JFBLKOIBDEE*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MCFDMPJAKKH_OFFSET))(a1, a2);
		}

		static ::System::Void MBONDADILHA(::SimpleJSON::JSONNode* a1, ::HMGEOKPCKOK* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::HMGEOKPCKOK*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MBONDADILHA_OFFSET))(a1, a2);
		}

		static ::System::Void IMJLKCEDIPI(::SimpleJSON::JSONNode* a1, ::NMMMDIEGLEI* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::NMMMDIEGLEI*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IMJLKCEDIPI_OFFSET))(a1, a2);
		}

		static ::System::Void JFKDGDCCMFG(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_ByRandom* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_ByRandom*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JFKDGDCCMFG_OFFSET))(a1, a2);
		}

		static ::System::Void EEGGAIIJBLH(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EEGGAIIJBLH_OFFSET))(a1, a2);
		}

		static ::System::Void DINGLAHIGFG(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DINGLAHIGFG_OFFSET))(a1, a2);
		}

		static ::System::Void GAGCBMJNJMC(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GAGCBMJNJMC_OFFSET))(a1, a2);
		}

		static ::System::Void CFKGBCLPECG(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CFKGBCLPECG_OFFSET))(a1, a2);
		}

		static ::System::Void CBPFJPMMFIM(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CBPFJPMMFIM_OFFSET))(a1, a2);
		}

		static ::System::Void EPOFDHHONFL(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EPOFDHHONFL_OFFSET))(a1, a2);
		}

		static ::System::Void DIABPKENOBK(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DIABPKENOBK_OFFSET))(a1, a2);
		}

		static ::System::Void FIIAIKGDOOI(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareHasEffect*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FIIAIKGDOOI_OFFSET))(a1, a2);
		}

		static ::System::Void MEODPNNFMPI(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MEODPNNFMPI_OFFSET))(a1, a2);
		}

		static ::System::Void CIJBHOJNOHG(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CIJBHOJNOHG_OFFSET))(a1, a2);
		}

		static ::System::Void DFAJJBACBHL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMissionBattleWin* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMissionBattleWin*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DFAJJBACBHL_OFFSET))(a1, a2);
		}

		static ::System::Void OIIBNFMEMMN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNPCMonsterCheckState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNPCMonsterCheckState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OIIBNFMEMMN_OFFSET))(a1, a2);
		}

		static ::System::Void LKENNKABJEE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphConditionSuccess* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphConditionSuccess*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LKENNKABJEE_OFFSET))(a1, a2);
		}

		static ::System::Void IFDACBJMKAF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PhotoGraphTargetSize* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PhotoGraphTargetSize*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IFDACBJMKAF_OFFSET))(a1, a2);
		}

		static ::System::Void BPNJPEOBFKC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetContainerRatioInRect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetContainerRatioInRect*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BPNJPEOBFKC_OFFSET))(a1, a2);
		}

		static ::System::Void FEHKBHACALL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphFovLevel* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphFovLevel*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FEHKBHACALL_OFFSET))(a1, a2);
		}

		static ::System::Void MACMGLHICON(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPhotoGraphFovLevelRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPhotoGraphFovLevelRange*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MACMGLHICON_OFFSET))(a1, a2);
		}

		static ::System::Void HCFPPJFPFCJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HCFPPJFPFCJ_OFFSET))(a1, a2);
		}

		static ::System::Void NOMNLIPHOAE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetNpcExists* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetNpcExists*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NOMNLIPHOAE_OFFSET))(a1, a2);
		}

		static ::System::Void CLEAOKHGDAB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentTeammemberCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentTeammemberCount*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CLEAOKHGDAB_OFFSET))(a1, a2);
		}

		static ::System::Void DAOHPNHPGIO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTrainVisitorIsMeet* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTrainVisitorIsMeet*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DAOHPNHPGIO_OFFSET))(a1, a2);
		}

		static ::System::Void KENEOAALDIG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByWaitCustomString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByWaitCustomString*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KENEOAALDIG_OFFSET))(a1, a2);
		}

		static ::System::Void ODHNHLFLGOB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropStateNumber* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropStateNumber*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ODHNHLFLGOB_OFFSET))(a1, a2);
		}

		static ::System::Void OOCAAEFFKAP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckRogueExploreWin* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckRogueExploreWin*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OOCAAEFFKAP_OFFSET))(a1, a2);
		}

		static ::System::Void GCDMOABGOEL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GCDMOABGOEL_OFFSET))(a1, a2);
		}

		static ::System::Void EJJCAIJOLDM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EJJCAIJOLDM_OFFSET))(a1, a2);
		}

		static ::System::Void BAMKGHHINMF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckElfTodayManaged* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckElfTodayManaged*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BAMKGHHINMF_OFFSET))(a1, a2);
		}

		static ::System::Void IBFNJBBAKJI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckLastBattleSkillDrop* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckLastBattleSkillDrop*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IBFNJBBAKJI_OFFSET))(a1, a2);
		}

		static ::System::Void LAPODMNANDH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPlayerCurrentSkillType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LAPODMNANDH_OFFSET))(a1, a2);
		}

		static ::System::Void EAGBKEFFHJP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByIsEliteMonster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByIsEliteMonster*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EAGBKEFFHJP_OFFSET))(a1, a2);
		}

		static ::System::Void NOFLGADPPGA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdvModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NOFLGADPPGA_OFFSET))(a1, a2);
		}

		static ::System::Void DOKCDEHICIE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdvModifierCallBackName*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DOKCDEHICIE_OFFSET))(a1, a2);
		}

		static ::System::Void AAHJBKKLMIO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByContainBehaviorFlag*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AAHJBKKLMIO_OFFSET))(a1, a2);
		}

		static ::System::Void JOPNJCMHMED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsBattlePostureType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsBattlePostureType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JOPNJCMHMED_OFFSET))(a1, a2);
		}

		static ::System::Void MIMPHEFIALD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsBattleSkillType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsBattleSkillType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MIMPHEFIALD_OFFSET))(a1, a2);
		}

		static ::System::Void DOCBMJLEDMD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ConvinceByCompareHp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ConvinceByCompareHp*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DOCBMJLEDMD_OFFSET))(a1, a2);
		}

		static ::System::Void PFBCKOJHENN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamLeaderPath* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamLeaderPath*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PFBCKOJHENN_OFFSET))(a1, a2);
		}

		static ::System::Void AFGNAHDCBPI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckColonyTrace* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckColonyTrace*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AFGNAHDCBPI_OFFSET))(a1, a2);
		}

		static ::System::Void FEHLDHANLHP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FEHLDHANLHP_OFFSET))(a1, a2);
		}

		static ::System::Void CBGEIIGJBDP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareQuestGetReward* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareQuestGetReward*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CBGEIIGJBDP_OFFSET))(a1, a2);
		}

		static ::System::Void IKDJACBEKHE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialScriptStep* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialScriptStep*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IKDJACBEKHE_OFFSET))(a1, a2);
		}

		static ::System::Void HCAKAMFOFIN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialScriptEmo* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialScriptEmo*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HCAKAMFOFIN_OFFSET))(a1, a2);
		}

		static ::System::Void GCKAOPOOJCD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialTracingNPC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialTracingNPC*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GCKAOPOOJCD_OFFSET))(a1, a2);
		}

		static ::System::Void KCIPLGNLJOJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEnableStoryStreamingSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEnableStoryStreamingSource*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KCIPLGNLJOJ_OFFSET))(a1, a2);
		}

		static ::System::Void DBGMHCFLDIK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePerformanceResult* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePerformanceResult*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DBGMHCFLDIK_OFFSET))(a1, a2);
		}

		static ::System::Void OGIFHKBLAEI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropAnimState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropAnimState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OGIFHKBLAEI_OFFSET))(a1, a2);
		}

		static ::System::Void JOAGPNMMJNC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JOAGPNMMJNC_OFFSET))(a1, a2);
		}

		static ::System::Void BCDLBAOOBME(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDeployPuzzleBasePointIsAnswer*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BCDLBAOOBME_OFFSET))(a1, a2);
		}

		static ::System::Void LAEJHDCABCK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LAEJHDCABCK_OFFSET))(a1, a2);
		}

		static ::System::Void OALBDBBMLEJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OALBDBBMLEJ_OFFSET))(a1, a2);
		}

		static ::System::Void OKAFKMGEDOL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchMascotPickupCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchMascotPickupCount*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OKAFKMGEDOL_OFFSET))(a1, a2);
		}

		static ::System::Void AFKAMCGGKAB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropPredicateWithEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropPredicateWithEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AFKAMCGGKAB_OFFSET))(a1, a2);
		}

		static ::System::Void GGMHFAOKFJC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMusicRhythmSongID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMusicRhythmSongID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GGMHFAOKFJC_OFFSET))(a1, a2);
		}

		static ::System::Void MELEDJNEDIB(::SimpleJSON::JSONNode* a1, ::PLEFHKNEOCE* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::PLEFHKNEOCE*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MELEDJNEDIB_OFFSET))(a1, a2);
		}

		static ::System::Void GPEPOMNCCNB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournCollectionDisplayingCollection*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GPEPOMNCCNB_OFFSET))(a1, a2);
		}

		static ::System::Void CBPKHKJNBMH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournLastRoom* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournLastRoom*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CBPKHKJNBMH_OFFSET))(a1, a2);
		}

		static ::System::Void BDGLDLCEADF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournCurRoomFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BDGLDLCEADF_OFFSET))(a1, a2);
		}

		static ::System::Void FIOIINDDGBE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGroupState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGroupState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FIOIINDDGBE_OFFSET))(a1, a2);
		}

		static ::System::Void JMPPBKCJGFK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropFastDeliverCheckSimplifiedMode*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JMPPBKCJGFK_OFFSET))(a1, a2);
		}

		static ::System::Void ABOHAOBEGEF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByFastDeliverFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByFastDeliverFinish*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ABOHAOBEGEF_OFFSET))(a1, a2);
		}

		static ::System::Void CEMFMFNHDIE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByFastDeliverHasMultiRoute*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CEMFMFNHDIE_OFFSET))(a1, a2);
		}

		static ::System::Void NKEHIGLCPLM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByEntityExist* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByEntityExist*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NKEHIGLCPLM_OFFSET))(a1, a2);
		}

		static ::System::Void CDHJFADBCIJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsUIPageOpen* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsUIPageOpen*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CDHJFADBCIJ_OFFSET))(a1, a2);
		}

		static ::System::Void PPJDOFGLMKD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckFarmElementActive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckFarmElementActive*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PPJDOFGLMKD_OFFSET))(a1, a2);
		}

		static ::System::Void FONAFJFAKPP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropHPRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropHPRatio*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FONAFJFAKPP_OFFSET))(a1, a2);
		}

		static ::System::Void GJPJDGJPMPC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScreenRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScreenRatio*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GJPJDGJPMPC_OFFSET))(a1, a2);
		}

		static ::System::Void KMMPCJKENON(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KMMPCJKENON_OFFSET))(a1, a2);
		}

		static ::System::Void PABKENPBFON(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PABKENPBFON_OFFSET))(a1, a2);
		}

		static ::System::Void JLELINELGJH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEntityAuthoritySide* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEntityAuthoritySide*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JLELINELGJH_OFFSET))(a1, a2);
		}

		static ::System::Void FOOLLKBGKMN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvTriggerEffectList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvTriggerEffectList*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FOOLLKBGKMN_OFFSET))(a1, a2);
		}

		static ::System::Void BKNGFIDFECM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRegionEraState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRegionEraState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BKNGFIDFECM_OFFSET))(a1, a2);
		}

		static ::System::Void GBEBIHOOOMG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInEraFlipperSpotArea* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInEraFlipperSpotArea*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GBEBIHOOOMG_OFFSET))(a1, a2);
		}

		static ::System::Void BDNBPLNLKME(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEraFlipperEntityShow* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEraFlipperEntityShow*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BDNBPLNLKME_OFFSET))(a1, a2);
		}

		static ::System::Void NECECEHMGAJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityOriginalEraConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityOriginalEraConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NECECEHMGAJ_OFFSET))(a1, a2);
		}

		static ::System::Void CENKKFDNNAA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPartialFlipDeviceState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPartialFlipDeviceState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CENKKFDNNAA_OFFSET))(a1, a2);
		}

		static ::System::Void ODMOJELAINM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnimStateLogicType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnimStateLogicType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ODMOJELAINM_OFFSET))(a1, a2);
		}

		static ::System::Void AMBFHENCNKN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveSkillPointEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveSkillPointEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AMBFHENCNKN_OFFSET))(a1, a2);
		}

		static ::System::Void NAHAJEDDDOB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByFromBattleViewModeChange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByFromBattleViewModeChange*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NAHAJEDDDOB_OFFSET))(a1, a2);
		}

		static ::System::Void FMKCBANODKK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasBillboard* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasBillboard*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FMKCBANODKK_OFFSET))(a1, a2);
		}

		static ::System::Void KCJACLNGACG(::SimpleJSON::JSONNode* a1, ::LDNFONFKMFJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::LDNFONFKMFJ*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KCJACLNGACG_OFFSET))(a1, a2);
		}

		static ::System::Void ONDNHBGNCEN(::SimpleJSON::JSONNode* a1, ::MLJGEGPAAFF* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MLJGEGPAAFF*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ONDNHBGNCEN_OFFSET))(a1, a2);
		}

		static ::System::Void JNNJMFHGKLJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEvolveBuildGearLevel* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEvolveBuildGearLevel*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JNNJMFHGKLJ_OFFSET))(a1, a2);
		}

		static ::System::Void LOLFMNJMPDD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEvolveBuildProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEvolveBuildProperty*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LOLFMNJMPDD_OFFSET))(a1, a2);
		}

		static ::System::Void NCGPBKBNLJJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightCharacterIsPreset* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightCharacterIsPreset*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NCGPBKBNLJJ_OFFSET))(a1, a2);
		}

		static ::System::Void DPDJKKMEEIH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightTraitSelectedCharacter* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DPDJKKMEEIH_OFFSET))(a1, a2);
		}

		static ::System::Void MBAAPGAJOKK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightCompareRoleExtInfo* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MBAAPGAJOKK_OFFSET))(a1, a2);
		}

		static ::System::Void IPKBGOJOEDJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightHasTrait* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightHasTrait*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IPKBGOJOEDJ_OFFSET))(a1, a2);
		}

		static ::System::Void FMFEOJHOPKD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightHasSameTrait* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightHasSameTrait*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FMFEOJHOPKD_OFFSET))(a1, a2);
		}

		static ::System::Void BONPCJICCND(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGridFightProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGridFightProperty*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BONPCJICCND_OFFSET))(a1, a2);
		}

		static ::System::Void GBJBLNCKLDD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTurnActionEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTurnActionEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GBJBLNCKLDD_OFFSET))(a1, a2);
		}

		static ::System::Void NFFAJBLNPKJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveEnemyAlive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveEnemyAlive*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NFFAJBLNPKJ_OFFSET))(a1, a2);
		}

		static ::System::Void BGEJFDINCMF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTargetHPCanBeDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTargetHPCanBeDamage*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BGEJFDINCMF_OFFSET))(a1, a2);
		}

		static ::System::Void ANOBJBPHKMH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStance*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ANOBJBPHKMH_OFFSET))(a1, a2);
		}

		static ::System::Void EGLLFMGGEFD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCustomValueBool* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCustomValueBool*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EGLLFMGGEFD_OFFSET))(a1, a2);
		}

		static ::System::Void HACMMNNPHCB(::SimpleJSON::JSONNode* a1, ::AGAGMFCPBED* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::AGAGMFCPBED*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HACMMNNPHCB_OFFSET))(a1, a2);
		}

		static ::System::Void GNABCBAGCBL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GNABCBAGCBL_OFFSET))(a1, a2);
		}

		static ::System::Void IAJMCHBCJJI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEnhancedID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEnhancedID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IAJMCHBCJJI_OFFSET))(a1, a2);
		}

		static ::System::Void EGJCMJDFHDK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetTeam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetTeam*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EGJCMJDFHDK_OFFSET))(a1, a2);
		}

		static ::System::Void IFDMOMPAOGG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentSkillUseParam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentSkillUseParam*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IFDMOMPAOGG_OFFSET))(a1, a2);
		}

		static ::System::Void BLALGBDNLKJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSummonRelation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSummonRelation*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BLALGBDNLKJ_OFFSET))(a1, a2);
		}

		static ::System::Void JHNDCIAEPBC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasStanceWeak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasStanceWeak*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JHNDCIAEPBC_OFFSET))(a1, a2);
		}

		static ::System::Void HCOJMCLGLGJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasStanceWeakPreview* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasStanceWeakPreview*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HCOJMCLGLGJ_OFFSET))(a1, a2);
		}

		static ::System::Void GOGNPDFLLJH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsPropertyValueMinOrMax* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsPropertyValueMinOrMax*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GOGNPDFLLJH_OFFSET))(a1, a2);
		}

		static ::System::Void OBADNPHFEDF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByStatusCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByStatusCount*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OBADNPHFEDF_OFFSET))(a1, a2);
		}

		static ::System::Void EDCMGLHHADM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAvatarBaseType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAvatarBaseType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EDCMGLHHADM_OFFSET))(a1, a2);
		}

		static ::System::Void AJGANLCJMDE(::SimpleJSON::JSONNode* a1, ::HKOACDGAJNO* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::HKOACDGAJNO*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AJGANLCJMDE_OFFSET))(a1, a2);
		}

		static ::System::Void IOBJOOMFEMK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInsertAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInsertAction*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IOBJOOMFEMK_OFFSET))(a1, a2);
		}

		static ::System::Void ANEPBMIGILL(::SimpleJSON::JSONNode* a1, ::IMNNDJAAKBC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::IMNNDJAAKBC*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ANEPBMIGILL_OFFSET))(a1, a2);
		}

		static ::System::Void KPAOCBNOHFN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAutoBattle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAutoBattle*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KPAOCBNOHFN_OFFSET))(a1, a2);
		}

		static ::System::Void FCPIPPNFJPD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterPhase* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterPhase*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FCPIPPNFJPD_OFFSET))(a1, a2);
		}

		static ::System::Void DLCKDNKLGMM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertActionByTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertActionByTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DLCKDNKLGMM_OFFSET))(a1, a2);
		}

		static ::System::Void ENFCGCDBHLC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainMonsterOnWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainMonsterOnWave*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ENFCGCDBHLC_OFFSET))(a1, a2);
		}

		static ::System::Void CPJIDGEKFID(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStageID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStageID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CPJIDGEKFID_OFFSET))(a1, a2);
		}

		static ::System::Void ENBLNIICCDC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainOpInSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainOpInSkill*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ENBLNIICCDC_OFFSET))(a1, a2);
		}

		static ::System::Void DKGMHAECNFD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInfiniteMonsterWaveLeft* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DKGMHAECNFD_OFFSET))(a1, a2);
		}

		static ::System::Void PFEKMPPJPBK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBattleHasCertainResult* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBattleHasCertainResult*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PFEKMPPJPBK_OFFSET))(a1, a2);
		}

		static ::System::Void PCEEIKIELKC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFirstChallengeBattle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFirstChallengeBattle*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PCEEIKIELKC_OFFSET))(a1, a2);
		}

		static ::System::Void NIFOONLMGEG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInElationTime* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInElationTime*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NIFOONLMGEG_OFFSET))(a1, a2);
		}

		static ::System::Void BGMFODJOFNF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasPausedElationTime* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasPausedElationTime*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BGMFODJOFNF_OFFSET))(a1, a2);
		}

		static ::System::Void MFINDEPMOPG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsRedStance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsRedStance*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MFINDEPMOPG_OFFSET))(a1, a2);
		}

		static ::System::Void NFCKJBKLCDI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSpareTeamFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSpareTeamFormation*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NFCKJBKLCDI_OFFSET))(a1, a2);
		}

		static ::System::Void MDHAECKLEGM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCustomTeamFormation*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MDHAECKLEGM_OFFSET))(a1, a2);
		}

		static ::System::Void GNBDAHAEEMI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GNBDAHAEEMI_OFFSET))(a1, a2);
		}

		static ::System::Void AMBDDOIAJFP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AMBDDOIAJFP_OFFSET))(a1, a2);
		}

		static ::System::Void NJMGPJCKKDI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsCharacterState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsCharacterState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NJMGPJCKKDI_OFFSET))(a1, a2);
		}

		static ::System::Void NGFMLJFOBOH(::SimpleJSON::JSONNode* a1, ::MDCEMPKNOKN* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MDCEMPKNOKN*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NGFMLJFOBOH_OFFSET))(a1, a2);
		}

		static ::System::Void LDFHLNPLLFN(::SimpleJSON::JSONNode* a1, ::KKGGBIEDPKJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::KKGGBIEDPKJ*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LDFHLNPLLFN_OFFSET))(a1, a2);
		}

		static ::System::Void HANAMBKMMBH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDynamicSkillButtonInputSlot* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDynamicSkillButtonInputSlot*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HANAMBKMMBH_OFFSET))(a1, a2);
		}

		static ::System::Void AHJKBOKJGJH(::SimpleJSON::JSONNode* a1, ::OGCPMCECAPG* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::OGCPMCECAPG*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AHJKBOKJGJH_OFFSET))(a1, a2);
		}

		static ::System::Void IEKCDCCELLO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectListForUI* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectListForUI*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IEKCDCCELLO_OFFSET))(a1, a2);
		}

		static ::System::Void OPEFNCFJAEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::CRPVirtualCameraTargetConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::CRPVirtualCameraTargetConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OPEFNCFJAEK_OFFSET))(a1, a2);
		}

		static ::System::Void LCENPOEMOEI(::SimpleJSON::JSONNode* a1, ::ACNFHAKPMIK* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::ACNFHAKPMIK*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LCENPOEMOEI_OFFSET))(a1, a2);
		}

		static ::System::Void NMELDPBEMNJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDynamicValueDefined* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDynamicValueDefined*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NMELDPBEMNJ_OFFSET))(a1, a2);
		}

		static ::System::Void EKPBNBNLLLG(::SimpleJSON::JSONNode* a1, ::GHMHPIANEIG* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::GHMHPIANEIG*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EKPBNBNLLLG_OFFSET))(a1, a2);
		}

		static ::System::Void ELBLIKPEEIE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByViewModeSwitchEmptyServant* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByViewModeSwitchEmptyServant*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ELBLIKPEEIE_OFFSET))(a1, a2);
		}

		static ::System::Void BDJHGNGHFIG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamFormationRowIndex* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamFormationRowIndex*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BDJHGNGHFIG_OFFSET))(a1, a2);
		}

		static ::System::Void CGNBFDPIOHG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamFormationWidth* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamFormationWidth*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CGNBFDPIOHG_OFFSET))(a1, a2);
		}

		static ::System::Void GJPFLKEGAFM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsContainModifier* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsContainModifier*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GJPFLKEGAFM_OFFSET))(a1, a2);
		}

		static ::System::Void IONLDJFEENC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTurnOwnerEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IONLDJFEENC_OFFSET))(a1, a2);
		}

		static ::System::Void BHNBEKHBHHM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChangeValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChangeValue*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BHNBEKHBHHM_OFFSET))(a1, a2);
		}

		static ::System::Void KGJDBJPCCMA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAliveEnemyNumber* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAliveEnemyNumber*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KGJDBJPCCMA_OFFSET))(a1, a2);
		}

		static ::System::Void LMHJEEJOKAJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillUsageLimit* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillUsageLimit*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LMHJEEJOKAJ_OFFSET))(a1, a2);
		}

		static ::System::Void KFPELJKMBKJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRandomChance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRandomChance*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KFPELJKMBKJ_OFFSET))(a1, a2);
		}

		static ::System::Void CIICCDCBMMA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRandomChanceClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRandomChanceClientOnly*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CIICCDCBMMA_OFFSET))(a1, a2);
		}

		static ::System::Void KBBLAKMOJLC(::SimpleJSON::JSONNode* a1, ::BJMLCLKHBJN* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::BJMLCLKHBJN*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KBBLAKMOJLC_OFFSET))(a1, a2);
		}

		static ::System::Void KHGIOKOJLGH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHP*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KHGIOKOJLGH_OFFSET))(a1, a2);
		}

		static ::System::Void FELKOJIMNJO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHPRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHPRatio*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FELKOJIMNJO_OFFSET))(a1, a2);
		}

		static ::System::Void KLPKOJIEJKM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSPRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSPRatio*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KLPKOJIEJKM_OFFSET))(a1, a2);
		}

		static ::System::Void PNLBCKBEHOI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSpecialSPRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSpecialSPRatio*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PNLBCKBEHOI_OFFSET))(a1, a2);
		}

		static ::System::Void PEJFIBOIEOD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStanceRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStanceRatio*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PEJFIBOIEOD_OFFSET))(a1, a2);
		}

		static ::System::Void NONMMAKIJME(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NONMMAKIJME_OFFSET))(a1, a2);
		}

		static ::System::Void HPGLIMAPLHO(::SimpleJSON::JSONNode* a1, ::OKCCOEHNEEF* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::OKCCOEHNEEF*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HPGLIMAPLHO_OFFSET))(a1, a2);
		}

		static ::System::Void ICEOBCKLLFG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterUniqueID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterUniqueID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ICEOBCKLLFG_OFFSET))(a1, a2);
		}

		static ::System::Void MPAPMDADLAE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterTemplateID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterTemplateID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MPAPMDADLAE_OFFSET))(a1, a2);
		}

		static ::System::Void HPLKFMPKICO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBattleEventID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBattleEventID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HPLKFMPKICO_OFFSET))(a1, a2);
		}

		static ::System::Void JAEGODDOBML(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterNumber* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterNumber*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JAEGODDOBML_OFFSET))(a1, a2);
		}

		static ::System::Void ONNGNPKHLOE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierValue*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ONNGNPKHLOE_OFFSET))(a1, a2);
		}

		static ::System::Void LHGDBFJIOFE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LHGDBFJIOFE_OFFSET))(a1, a2);
		}

		static ::System::Void PHKJPHNALBH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillLevel* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillLevel*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PHKJPHNALBH_OFFSET))(a1, a2);
		}

		static ::System::Void JLGFJBKAMHB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFakeSkillByName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFakeSkillByName*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JLGFJBKAMHB_OFFSET))(a1, a2);
		}

		static ::System::Void PGFMOHACLBH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFakeSkillBySlot* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFakeSkillBySlot*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PGFMOHACLBH_OFFSET))(a1, a2);
		}

		static ::System::Void LJLKIKINANL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSplitDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSplitDamage*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJLKIKINANL_OFFSET))(a1, a2);
		}

		static ::System::Void GLFGJGAEDOH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsProjectileHitTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsProjectileHitTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GLFGJGAEDOH_OFFSET))(a1, a2);
		}

		static ::System::Void MFLBEGJBLEM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainBehaviorFlag*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MFLBEGJBLEM_OFFSET))(a1, a2);
		}

		static ::System::Void DFJIBPBCCCA(::SimpleJSON::JSONNode* a1, ::CBJMIBEHHND* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::CBJMIBEHHND*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DFJIBPBCCCA_OFFSET))(a1, a2);
		}

		static ::System::Void EDIKLIKOOJN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetNatureID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetNatureID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EDIKLIKOOJN_OFFSET))(a1, a2);
		}

		static ::System::Void EPCOJHDNEOM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EPCOJHDNEOM_OFFSET))(a1, a2);
		}

		static ::System::Void KDHCPDAKHAH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetEntityType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetEntityType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KDHCPDAKHAH_OFFSET))(a1, a2);
		}

		static ::System::Void LMJNKNLGBCK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLastKillSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLastKillSkill*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LMJNKNLGBCK_OFFSET))(a1, a2);
		}

		static ::System::Void JAAHHNGFHIO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsControlSkillDisable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsControlSkillDisable*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JAAHHNGFHIO_OFFSET))(a1, a2);
		}

		static ::System::Void NEOKIMJALAG(::SimpleJSON::JSONNode* a1, ::LKAKGGLAHGA* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::LKAKGGLAHGA*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NEOKIMJALAG_OFFSET))(a1, a2);
		}

		static ::System::Void PHPFKMKKKJJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillEffect*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PHPFKMKKKJJ_OFFSET))(a1, a2);
		}

		static ::System::Void GAMHKHBNOBD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSelectSkillEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSelectSkillEffect*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GAMHKHBNOBD_OFFSET))(a1, a2);
		}

		static ::System::Void IGHIKPGDIKD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareControlSkillEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareControlSkillEffect*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IGHIKPGDIKD_OFFSET))(a1, a2);
		}

		static ::System::Void GMCDPFJNEAF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareControlSkillEffectIsDamaging*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GMCDPFJNEAF_OFFSET))(a1, a2);
		}

		static ::System::Void LBJHBDIPDJD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentSkillEffectIsDamaging*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LBJHBDIPDJD_OFFSET))(a1, a2);
		}

		static ::System::Void DGNGDICPDLO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllLightTeamDied* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllLightTeamDied*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DGNGDICPDLO_OFFSET))(a1, a2);
		}

		static ::System::Void FDIBNOEAHLN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSecretWeak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSecretWeak*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FDIBNOEAHLN_OFFSET))(a1, a2);
		}

		static ::System::Void HPBNHEIDECD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSkillType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSkillType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HPBNHEIDECD_OFFSET))(a1, a2);
		}

		static ::System::Void ACGCIJHPLLA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSkillTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSkillTag*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ACGCIJHPLLA_OFFSET))(a1, a2);
		}

		static ::System::Void OGKCHAGPODN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBattleEventEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBattleEventEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OGKCHAGPODN_OFFSET))(a1, a2);
		}

		static ::System::Void EJJMHKIBHLD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeamLocationIndexType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeamLocationIndexType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EJJMHKIBHLD_OFFSET))(a1, a2);
		}

		static ::System::Void JDABPEFOGMP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMatchTeammateCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMatchTeammateCount*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JDABPEFOGMP_OFFSET))(a1, a2);
		}

		static ::System::Void EOJMDHMBIAE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckBloodLinkDead* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckBloodLinkDead*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EOJMDHMBIAE_OFFSET))(a1, a2);
		}

		static ::System::Void GNGMCLNFHBO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckIsLimboRevivable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckIsLimboRevivable*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GNGMCLNFHBO_OFFSET))(a1, a2);
		}

		static ::System::Void NOJOBBLKHDK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetAbleToAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetAbleToAction*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NOJOBBLKHDK_OFFSET))(a1, a2);
		}

		static ::System::Void AHHFGCMIBLN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterRank* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterRank*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AHHFGCMIBLN_OFFSET))(a1, a2);
		}

		static ::System::Void IAFPMOGEKLA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckRoleTrialNormalWaveShowDetail*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IAFPMOGEKLA_OFFSET))(a1, a2);
		}

		static ::System::Void IPGABPDPPHI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAllWaveMonsterRank* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAllWaveMonsterRank*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IPGABPDPPHI_OFFSET))(a1, a2);
		}

		static ::System::Void CGDNHDICPKB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckActionDelayChanged* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckActionDelayChanged*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CGDNHDICPKB_OFFSET))(a1, a2);
		}

		static ::System::Void ACODMFAJAOE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBattleReStart* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBattleReStart*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ACODMFAJAOE_OFFSET))(a1, a2);
		}

		static ::System::Void HGFGDPEGGPO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackIsSelf* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HGFGDPEGGPO_OFFSET))(a1, a2);
		}

		static ::System::Void KMAKGEAINAK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackName*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KMAKGEAINAK_OFFSET))(a1, a2);
		}

		static ::System::Void KOADJMEHEGK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackStatusType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackStatusType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KOADJMEHEGK_OFFSET))(a1, a2);
		}

		static ::System::Void PIEEJBDPAIG(::SimpleJSON::JSONNode* a1, ::NDFKINKPKHF* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::NDFKINKPKHF*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PIEEJBDPAIG_OFFSET))(a1, a2);
		}

		static ::System::Void FKBMBKLAKJO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackModifierValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackModifierValue*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FKBMBKLAKJO_OFFSET))(a1, a2);
		}

		static ::System::Void PBCEHBLJIEA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackIsInfected* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PBCEHBLJIEA_OFFSET))(a1, a2);
		}

		static ::System::Void MDAABGKPNCM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierCustomEvent* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierCustomEvent*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MDAABGKPNCM_OFFSET))(a1, a2);
		}

		static ::System::Void MCFKBFINEPL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierDeathSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierDeathSource*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MCFKBFINEPL_OFFSET))(a1, a2);
		}

		static ::System::Void DGPDBNGGIPH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTopActionDelayTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTopActionDelayTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DGPDBNGGIPH_OFFSET))(a1, a2);
		}

		static ::System::Void LGMCEAFPDHI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareUnusedInsertAbilityCount*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LGMCEAFPDHI_OFFSET))(a1, a2);
		}

		static ::System::Void HKFMEMPNFMM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareUnusedUltraSkillCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareUnusedUltraSkillCount*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HKFMEMPNFMM_OFFSET))(a1, a2);
		}

		static ::System::Void APBKLJLBLME(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNextUnusedInsertAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNextUnusedInsertAction*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_APBKLJLBLME_OFFSET))(a1, a2);
		}

		static ::System::Void NGMHEFELAIL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllowUseSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllowUseSkill*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NGMHEFELAIL_OFFSET))(a1, a2);
		}

		static ::System::Void MNOEOOCGCAO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDirectKillBattle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDirectKillBattle*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MNOEOOCGCAO_OFFSET))(a1, a2);
		}

		static ::System::Void IENEPGKIDCD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBP*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IENEPGKIDCD_OFFSET))(a1, a2);
		}

		static ::System::Void JIJFFGALHMF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasCharacterRevived* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasCharacterRevived*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JIJFFGALHMF_OFFSET))(a1, a2);
		}

		static ::System::Void HMBKOOCONHO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRankActivated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRankActivated*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HMBKOOCONHO_OFFSET))(a1, a2);
		}

		static ::System::Void BOKBEFFOCNG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRankActivatedFromLineup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRankActivatedFromLineup*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BOKBEFFOCNG_OFFSET))(a1, a2);
		}

		static ::System::Void LLBLKFPLELN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStageType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStageType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LLBLKFPLELN_OFFSET))(a1, a2);
		}

		static ::System::Void ALAHFNFEMAA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRogueMode* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRogueMode*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ALAHFNFEMAA_OFFSET))(a1, a2);
		}

		static ::System::Void JOPIAPPAEAH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInfiniteBattle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInfiniteBattle*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JOPIAPPAEAH_OFFSET))(a1, a2);
		}

		static ::System::Void HNEIKOOJNHB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEntityActionState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEntityActionState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HNEIKOOJNHB_OFFSET))(a1, a2);
		}

		static ::System::Void POGLLHIMPNJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveDyingEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveDyingEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_POGLLHIMPNJ_OFFSET))(a1, a2);
		}

		static ::System::Void PINBDMHAEJC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AttackDamageTypeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AttackDamageTypeConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PINBDMHAEJC_OFFSET))(a1, a2);
		}

		static ::System::Void CDPDCONPBOE(::SimpleJSON::JSONNode* a1, ::EPJLDNFONEE* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::EPJLDNFONEE*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CDPDCONPBOE_OFFSET))(a1, a2);
		}

		static ::System::Void DJCGANEPLNC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasActiveUnitOnScepter* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasActiveUnitOnScepter*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DJCGANEPLNC_OFFSET))(a1, a2);
		}

		static ::System::Void NBODPEMKMJF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScepterFuncType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScepterFuncType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NBODPEMKMJF_OFFSET))(a1, a2);
		}

		static ::System::Void PLEJHCBLENB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsScepter* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsScepter*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PLEJHCBLENB_OFFSET))(a1, a2);
		}

		static ::System::Void GLHFIKBAEBJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScepterMainUnitEffectTag*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GLHFIKBAEBJ_OFFSET))(a1, a2);
		}

		static ::System::Void HHGMCLAIAOA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySaveModelWhenDead* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySaveModelWhenDead*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HHGMCLAIAOA_OFFSET))(a1, a2);
		}

		static ::System::Void NALCDCADCEI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareInfiniteWaveSummonProgress*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NALCDCADCEI_OFFSET))(a1, a2);
		}

		static ::System::Void IODJHFPPLBH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsForbidChangeOthersActionDelay* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsForbidChangeOthersActionDelay*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IODJHFPPLBH_OFFSET))(a1, a2);
		}

		static ::System::Void KHBMNENMCJC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySimulateSpeedUp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySimulateSpeedUp*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KHBMNENMCJC_OFFSET))(a1, a2);
		}

		static ::System::Void BKPALDLLHGH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDieAnimFinished* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDieAnimFinished*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BKPALDLLHGH_OFFSET))(a1, a2);
		}

		static ::System::Void GOGBLIICNLH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTimelinePerform* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTimelinePerform*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GOGBLIICNLH_OFFSET))(a1, a2);
		}

		static ::System::Void GGMJLIJBADJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GGMJLIJBADJ_OFFSET))(a1, a2);
		}

		static ::System::Void CIJDJFMHICG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPart* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPart*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CIJDJFMHICG_OFFSET))(a1, a2);
		}

		static ::System::Void ANCEBJHDEEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPartClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPartClientOnly*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ANCEBJHDEEK_OFFSET))(a1, a2);
		}

		static ::System::Void DPCBJILBLGA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPartOwner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPartOwner*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DPCBJILBLGA_OFFSET))(a1, a2);
		}

		static ::System::Void JMNOPKOOKAJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JMNOPKOOKAJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGHAPMCKKOG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MGHAPMCKKOG_OFFSET))(a1, a2);
		}

		static ::System::Void AFLJAEJJNNN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixTaskConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixTaskConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AFLJAEJJNNN_OFFSET))(a1, a2);
		}

		static ::System::Void NINJODJAEBA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixBasePredicate* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixBasePredicate*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NINJODJAEBA_OFFSET))(a1, a2);
		}

		static ::System::Void HMHCGNCJOGE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateA* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateA*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HMHCGNCJOGE_OFFSET))(a1, a2);
		}

		static ::System::Void JFHCBLBDDDL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateB* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateB*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JFHCBLBDDDL_OFFSET))(a1, a2);
		}

		static ::System::Void KCGJMEIPEHA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateC*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KCGJMEIPEHA_OFFSET))(a1, a2);
		}

		static ::System::Void GIKEFIBNICC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCharacterIDGroup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCharacterIDGroup*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GIKEFIBNICC_OFFSET))(a1, a2);
		}

		static ::System::Void KHGLAKFFNDC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSpecialAvatarType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSpecialAvatarType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KHGLAKFFNDC_OFFSET))(a1, a2);
		}

		static ::System::Void JKNMLEPMNAA(::SimpleJSON::JSONNode* a1, ::JCBAIKOADID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::JCBAIKOADID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JKNMLEPMNAA_OFFSET))(a1, a2);
		}

		static ::System::Void BBMMJCABIAO(::SimpleJSON::JSONNode* a1, ::DNILHDGHLGL* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::DNILHDGHLGL*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BBMMJCABIAO_OFFSET))(a1, a2);
		}

		static ::System::Void DOMGKBBCDPB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertBattlePerform* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertBattlePerform*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DOMGKBBCDPB_OFFSET))(a1, a2);
		}

		static ::System::Void JGHGHACKILF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainCustomString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainCustomString*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JGHGHACKILF_OFFSET))(a1, a2);
		}

		static ::System::Void GJNMILANHNO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareWaveCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareWaveCount*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GJNMILANHNO_OFFSET))(a1, a2);
		}

		static ::System::Void KPJHAHEJLCC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLevelLoseCheck* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLevelLoseCheck*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KPJHAHEJLCC_OFFSET))(a1, a2);
		}

		static ::System::Void KKMPDJPPGKN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdditionalConditions* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdditionalConditions*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KKMPDJPPGKN_OFFSET))(a1, a2);
		}

		static ::System::Void ICBGMLFCIEJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMonsterDie* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMonsterDie*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ICBGMLFCIEJ_OFFSET))(a1, a2);
		}

		static ::System::Void HMELLHLEDPO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMonsterHurt* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMonsterHurt*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HMELLHLEDPO_OFFSET))(a1, a2);
		}

		static ::System::Void PMCGGALHEMI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCharacterDie* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCharacterDie*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PMCGGALHEMI_OFFSET))(a1, a2);
		}

		static ::System::Void OCHDPMAHMAK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTrialCharacterDie* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTrialCharacterDie*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OCHDPMAHMAK_OFFSET))(a1, a2);
		}

		static ::System::Void AHIMPCPGIHM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTurnCountMatch* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTurnCountMatch*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AHIMPCPGIHM_OFFSET))(a1, a2);
		}

		static ::System::Void JNEANLNINMM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckDarkTeamDestroy* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckDarkTeamDestroy*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JNEANLNINMM_OFFSET))(a1, a2);
		}

		static ::System::Void IJKEOAFEBKL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChallengeGroupType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChallengeGroupType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IJKEOAFEBKL_OFFSET))(a1, a2);
		}

		static ::System::Void EDFEFCKMLDM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFightFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFightFinish*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EDFEFCKMLDM_OFFSET))(a1, a2);
		}

		static ::System::Void BELBCFKGGHK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetAliveState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetAliveState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BELBCFKGGHK_OFFSET))(a1, a2);
		}

		static ::System::Void NNBCMLAHKFM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckActionDelayEffectType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckActionDelayEffectType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NNBCMLAHKFM_OFFSET))(a1, a2);
		}

		static ::System::Void HPIOPJJKIKC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerHasActionInTurn* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HPIOPJJKIKC_OFFSET))(a1, a2);
		}

		static ::System::Void HAHEIHLCOFE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HAHEIHLCOFE_OFFSET))(a1, a2);
		}

		static ::System::Void HJEHCGMNPPI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HJEHCGMNPPI_OFFSET))(a1, a2);
		}

		static ::System::Void ABIEPLDCNMD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEnemy* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEnemy*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ABIEPLDCNMD_OFFSET))(a1, a2);
		}

		static ::System::Void JBONACLJLJO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTurnActionEntityTeamType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JBONACLJLJO_OFFSET))(a1, a2);
		}

		static ::System::Void LFOHPMCFHIL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeammate* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeammate*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LFOHPMCFHIL_OFFSET))(a1, a2);
		}

		static ::System::Void EHPCMADIOKC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCasterAliveOrLimbo* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCasterAliveOrLimbo*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EHPCMADIOKC_OFFSET))(a1, a2);
		}

		static ::System::Void APKGLPPMJMJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStanceCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStanceCount*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_APKGLPPMJMJ_OFFSET))(a1, a2);
		}

		static ::System::Void DIIFHHDDCDO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRedStanceCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRedStanceCount*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DIIFHHDDCDO_OFFSET))(a1, a2);
		}

		static ::System::Void GKJDMKJAFDK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareResistChance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareResistChance*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GKJDMKJAFDK_OFFSET))(a1, a2);
		}

		static ::System::Void KBKBPDJOGNL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageCritical* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageCritical*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KBKBPDJOGNL_OFFSET))(a1, a2);
		}

		static ::System::Void ABLLAHEGPBB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsIndirectDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsIndirectDamage*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ABLLAHEGPBB_OFFSET))(a1, a2);
		}

		static ::System::Void JIJILJAJONA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsConvertDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsConvertDamage*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JIJILJAJONA_OFFSET))(a1, a2);
		}

		static ::System::Void EAANOOKPKCB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCharmAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCharmAction*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EAANOOKPKCB_OFFSET))(a1, a2);
		}

		static ::System::Void ENDPJBBEMPE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageLuckCritical* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageLuckCritical*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ENDPJBBEMPE_OFFSET))(a1, a2);
		}

		static ::System::Void OPJHPGBKCLM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OPJHPGBKCLM_OFFSET))(a1, a2);
		}

		static ::System::Void CCAIKELKFGA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsHealCallBackStack* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsHealCallBackStack*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CCAIKELKFGA_OFFSET))(a1, a2);
		}

		static ::System::Void HDEINEDBFGH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsHitAllCallBackStack* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsHitAllCallBackStack*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HDEINEDBFGH_OFFSET))(a1, a2);
		}

		static ::System::Void LALIIPILIFJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRootHitCallback* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRootHitCallback*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LALIIPILIFJ_OFFSET))(a1, a2);
		}

		static ::System::Void MNPHPHHOMJO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInModifierCallback* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInModifierCallback*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MNPHPHHOMJO_OFFSET))(a1, a2);
		}

		static ::System::Void IJBOFJEGKHE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLastKillType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLastKillType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IJBOFJEGKHE_OFFSET))(a1, a2);
		}

		static ::System::Void EODPOLAKOLO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EODPOLAKOLO_OFFSET))(a1, a2);
		}

		static ::System::Void PJLKPFOPOIN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillTargetType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillTargetType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PJLKPFOPOIN_OFFSET))(a1, a2);
		}

		static ::System::Void AFKECOGGHHN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AFKECOGGHHN_OFFSET))(a1, a2);
		}

		static ::System::Void OACBPPFJEHD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillName*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OACBPPFJEHD_OFFSET))(a1, a2);
		}

		static ::System::Void HFCCJDDPEMB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentContainAbilityTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentContainAbilityTag*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HFCCJDDPEMB_OFFSET))(a1, a2);
		}

		static ::System::Void IACBKNKPOOO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSkillBPChangePreview* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSkillBPChangePreview*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IACBKNKPOOO_OFFSET))(a1, a2);
		}

		static ::System::Void NBBBFJGFCBD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAttackType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAttackType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NBBBFJGFCBD_OFFSET))(a1, a2);
		}

		static ::System::Void FOKDCBBELKP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAttackSkillEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAttackSkillEffect*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FOKDCBBELKP_OFFSET))(a1, a2);
		}

		static ::System::Void NPKNBCJKGKL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeak*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NPKNBCJKGKL_OFFSET))(a1, a2);
		}

		static ::System::Void MIFEOLFMPHC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentSkill*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MIFEOLFMPHC_OFFSET))(a1, a2);
		}

		static ::System::Void HDCEKBOMADO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeakForCurrentHit*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HDCEKBOMADO_OFFSET))(a1, a2);
		}

		static ::System::Void GLDCAALBLGL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCharacterFly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCharacterFly*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GLDCAALBLGL_OFFSET))(a1, a2);
		}

		static ::System::Void IICPMOONIFF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IICPMOONIFF_OFFSET))(a1, a2);
		}

		static ::System::Void OJKGFOADEOJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBreakStanceDamageType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBreakStanceDamageType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OJKGFOADEOJ_OFFSET))(a1, a2);
		}

		static ::System::Void HDEHDIPNLAF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HDEHDIPNLAF_OFFSET))(a1, a2);
		}

		static ::System::Void NNKKMNOHJLL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NNKKMNOHJLL_OFFSET))(a1, a2);
		}

		static ::System::Void DPFBEEMIOPO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMazeBuffAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMazeBuffAffectCurrentWave*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DPFBEEMIOPO_OFFSET))(a1, a2);
		}

		static ::System::Void MNHIOMLMNAN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsStageFirstWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsStageFirstWave*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MNHIOMLMNAN_OFFSET))(a1, a2);
		}

		static ::System::Void JLAFIGCCAMM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChallengeLeft* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChallengeLeft*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JLAFIGCCAMM_OFFSET))(a1, a2);
		}

		static ::System::Void OGKMNKOHFCM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentModifierStatusType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentModifierStatusType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OGKMNKOHFCM_OFFSET))(a1, a2);
		}

		static ::System::Void HCGOJPGMAAI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetUnselectable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetUnselectable*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HCGOJPGMAAI_OFFSET))(a1, a2);
		}

		static ::System::Void CDFCPEDMOFA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetCustomUnselectable*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CDFCPEDMOFA_OFFSET))(a1, a2);
		}

		static ::System::Void HLLEPBGCKEN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HLLEPBGCKEN_OFFSET))(a1, a2);
		}

		static ::System::Void JEIMJMEHDND(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetCount*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JEIMJMEHDND_OFFSET))(a1, a2);
		}

		static ::System::Void OJOBADCLDDL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTargetCountClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTargetCountClientOnly*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OJOBADCLDDL_OFFSET))(a1, a2);
		}

		static ::System::Void JHOHIAEGLHO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentSkillActive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentSkillActive*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JHOHIAEGLHO_OFFSET))(a1, a2);
		}

		static ::System::Void FJLCFIMJHBO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalWin* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalWin*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FJLCFIMJHBO_OFFSET))(a1, a2);
		}

		static ::System::Void FKMJEBAMNIK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertAbilityPending* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertAbilityPending*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FKMJEBAMNIK_OFFSET))(a1, a2);
		}

		static ::System::Void ELFCAOMJHNP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertAbilityExecutingDuringGameModePause*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ELFCAOMJHNP_OFFSET))(a1, a2);
		}

		static ::System::Void LKLKEELNHKN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LKLKEELNHKN_OFFSET))(a1, a2);
		}

		static ::System::Void MEFHAJHKBKF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareParamValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareParamValue*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MEFHAJHKBKF_OFFSET))(a1, a2);
		}

		static ::System::Void ABFMIEBEAII(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareParamString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareParamString*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ABFMIEBEAII_OFFSET))(a1, a2);
		}

		static ::System::Void HGBKBJHLDEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsParamFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsParamFlag*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HGBKBJHLDEB_OFFSET))(a1, a2);
		}

		static ::System::Void DGJHHGIBBJJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPreShowStanceBreak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPreShowStanceBreak*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DGJHHGIBBJJ_OFFSET))(a1, a2);
		}

		static ::System::Void ICKKKCEMABN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPreShowRedStanceBreak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPreShowRedStanceBreak*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ICKKKCEMABN_OFFSET))(a1, a2);
		}

		static ::System::Void HBHBHGGCCNA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HBHBHGGCCNA_OFFSET))(a1, a2);
		}

		static ::System::Void FDKHLPJMKJG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentTurnState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentTurnState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FDKHLPJMKJG_OFFSET))(a1, a2);
		}

		static ::System::Void FMDNLCFBELA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterWeaknessActivated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterWeaknessActivated*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FMDNLCFBELA_OFFSET))(a1, a2);
		}

		static ::System::Void HDOEMNLGENB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAbilityProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAbilityProperty*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HDOEMNLGENB_OFFSET))(a1, a2);
		}

		static ::System::Void DFIGPNNFBAJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTurnBasedGameModeState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTurnBasedGameModeState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DFIGPNNFBAJ_OFFSET))(a1, a2);
		}

		static ::System::Void PEOEPLGEFJF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySkillPointActivated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySkillPointActivated*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PEOEPLGEFJF_OFFSET))(a1, a2);
		}

		static ::System::Void IKNEDJMOGBJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveInsertUltraWait* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveInsertUltraWait*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IKNEDJMOGBJ_OFFSET))(a1, a2);
		}

		static ::System::Void FBMEMDBIGHA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSPChangeTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSPChangeTag*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FBMEMDBIGHA_OFFSET))(a1, a2);
		}

		static ::System::Void EKCLIHOOIBI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDamageTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDamageTag*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EKCLIHOOIBI_OFFSET))(a1, a2);
		}

		static ::System::Void IJOOMELJAHA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDamageCustomName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDamageCustomName*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IJOOMELJAHA_OFFSET))(a1, a2);
		}

		static ::System::Void HPFLEFMGFMM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBaseTypeCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBaseTypeCount*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HPFLEFMGFMM_OFFSET))(a1, a2);
		}

		static ::System::Void IJBFLJKAGBJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCountOfBaseType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCountOfBaseType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IJBFLJKAGBJ_OFFSET))(a1, a2);
		}

		static ::System::Void MCIBJHAOEED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterChangeSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterChangeSource*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MCIBJHAOEED_OFFSET))(a1, a2);
		}

		static ::System::Void DOIPCGPLMLE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterChangeTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterChangeTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DOIPCGPLMLE_OFFSET))(a1, a2);
		}

		static ::System::Void JKBCCOJJAHM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetLockHP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetLockHP*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JKBCCOJJAHM_OFFSET))(a1, a2);
		}

		static ::System::Void IHDBHEFLMEE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetLockStance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetLockStance*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IHDBHEFLMEE_OFFSET))(a1, a2);
		}

		static ::System::Void NMHGLNGEPFM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerSDFTextEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerSDFTextEffect*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NMHGLNGEPFM_OFFSET))(a1, a2);
		}

		static ::System::Void PJONLAAEOAB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainResistBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainResistBehaviorFlag*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PJONLAAEOAB_OFFSET))(a1, a2);
		}

		static ::System::Void BJOHLLLKELI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTriggeredBlockDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BJOHLLLKELI_OFFSET))(a1, a2);
		}

		static ::System::Void AFHEJEPCFNJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCharacterSomatoWidthType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCharacterSomatoWidthType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AFHEJEPCFNJ_OFFSET))(a1, a2);
		}

		static ::System::Void OKEBNCBDJHO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentModifierAlive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentModifierAlive*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OKEBNCBDJHO_OFFSET))(a1, a2);
		}

		static ::System::Void MCCDNNHMBMJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEnableNegativeHP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEnableNegativeHP*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MCCDNNHMBMJ_OFFSET))(a1, a2);
		}

		static ::System::Void EHGKHIBKEJH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentVCameraConfigCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentVCameraConfigCaster*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EHGKHIBKEJH_OFFSET))(a1, a2);
		}

		static ::System::Void NBLPAAJBDMD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSomatoType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSomatoType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NBLPAAJBDMD_OFFSET))(a1, a2);
		}

		static ::System::Void KLBMHOGEKNH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PredicateConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PredicateConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KLBMHOGEKNH_OFFSET))(a1, a2);
		}

		static ::System::Void CKHHCMMCNDD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSeqOperation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSeqOperation*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CKHHCMMCNDD_OFFSET))(a1, a2);
		}

		static ::System::Void HDEAOIJDNIC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetEvaluator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HDEAOIJDNIC_OFFSET))(a1, a2);
		}

		static ::System::Void ABIAOOJFAAF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetAlias* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetAlias*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ABIAOOJFAAF_OFFSET))(a1, a2);
		}

		static ::System::Void KBDDHHBKMIK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHeroGender* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHeroGender*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KBDDHHBKMIK_OFFSET))(a1, a2);
		}

		static ::System::Void MCAOHOGFJCP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAny* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAny*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MCAOHOGFJCP_OFFSET))(a1, a2);
		}

		static ::System::Void IIONCAMGDED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnd* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnd*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IIONCAMGDED_OFFSET))(a1, a2);
		}

		static ::System::Void LOLHJJBKAMO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByNot* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByNot*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LOLHJJBKAMO_OFFSET))(a1, a2);
		}

		static ::System::Void OMCAJJFAOPE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListAny* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListAny*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OMCAJJFAOPE_OFFSET))(a1, a2);
		}

		static ::System::Void LFLDLJDCCKI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListAll* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListAll*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LFLDLJDCCKI_OFFSET))(a1, a2);
		}

		static ::System::Void DPEOBLGDIIP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCustomString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCustomString*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DPEOBLGDIIP_OFFSET))(a1, a2);
		}

		static ::System::Void OHPBDFGNMIN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDynamicValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDynamicValue*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OHPBDFGNMIN_OFFSET))(a1, a2);
		}

		static ::System::Void JHHPGAOLGAK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareValue*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JHHPGAOLGAK_OFFSET))(a1, a2);
		}

		static ::System::Void OGEHDFAJBGK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListIntersects* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListIntersects*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OGEHDFAJBGK_OFFSET))(a1, a2);
		}

		static ::System::Void BAJLJBDJPPE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DebugLogInPredicates* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DebugLogInPredicates*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BAJLJBDJPPE_OFFSET))(a1, a2);
		}

		static ::System::Void OIGNBDMKOJO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetValid* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetValid*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OIGNBDMKOJO_OFFSET))(a1, a2);
		}

		static ::System::Void FBINAJKFKJN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBattleMissionTalkFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBattleMissionTalkFinish*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FBINAJKFKJN_OFFSET))(a1, a2);
		}

		static ::System::Void DJEMNGGJCJI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentAudioLanguage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentAudioLanguage*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DJEMNGGJCJI_OFFSET))(a1, a2);
		}

		static ::System::Void PPABOIPJFPB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLocalPlayer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLocalPlayer*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PPABOIPJFPB_OFFSET))(a1, a2);
		}

		static ::System::Void FEIDCFIPFAN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvTeamLeader* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvTeamLeader*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FEIDCFIPFAN_OFFSET))(a1, a2);
		}

		static ::System::Void AOGCPGKHDFB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvTeamMembers* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvTeamMembers*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AOGCPGKHDFB_OFFSET))(a1, a2);
		}

		static ::System::Void ANCAEIILOHG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ANCAEIILOHG_OFFSET))(a1, a2);
		}

		static ::System::Void NLOGLPAADGM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NLOGLPAADGM_OFFSET))(a1, a2);
		}

		static ::System::Void JHMMGEPMEIF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JHMMGEPMEIF_OFFSET))(a1, a2);
		}

		static ::System::Void PMNEKDCPILG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvMonsterData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvMonsterData*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PMNEKDCPILG_OFFSET))(a1, a2);
		}

		static ::System::Void IPNHMNCPDBH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvMonster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvMonster*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IPNHMNCPDBH_OFFSET))(a1, a2);
		}

		static ::System::Void JJHCHEPLFLO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvPropData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvPropData*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JJHCHEPLFLO_OFFSET))(a1, a2);
		}

		static ::System::Void BMNEOFNLNIK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvProp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvProp*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BMNEOFNLNIK_OFFSET))(a1, a2);
		}

		static ::System::Void FDAJIEMKMJO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvNPCData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvNPCData*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FDAJIEMKMJO_OFFSET))(a1, a2);
		}

		static ::System::Void KKFBHMMCBBN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvNPC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvNPC*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KKFBHMMCBBN_OFFSET))(a1, a2);
		}

		static ::System::Void PAJOONCKIGE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvPropEx* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvPropEx*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PAJOONCKIGE_OFFSET))(a1, a2);
		}

		static ::System::Void GIGIFLFOEMF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvNPCDataEx* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvNPCDataEx*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GIGIFLFOEMF_OFFSET))(a1, a2);
		}

		static ::System::Void HCKICONKINF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvNpcEx* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvNpcEx*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HCKICONKINF_OFFSET))(a1, a2);
		}

		static ::System::Void CDABPJGBHMG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNormalPam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNormalPam*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CDABPJGBHMG_OFFSET))(a1, a2);
		}

		static ::System::Void DJEEMAMLOKM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DJEEMAMLOKM_OFFSET))(a1, a2);
		}

		static ::System::Void NPNIKFMHBDN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvFakeAvatar*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NPNIKFMHBDN_OFFSET))(a1, a2);
		}

		static ::System::Void FJMHGEKBBIA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAnchor* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAnchor*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FJMHGEKBBIA_OFFSET))(a1, a2);
		}

		static ::System::Void OCBGKIGIGOI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAnchorByName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAnchorByName*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OCBGKIGIGOI_OFFSET))(a1, a2);
		}

		static ::System::Void AGKPNMDBCEG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchContextDialogueTalkTrigger*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AGKPNMDBCEG_OFFSET))(a1, a2);
		}

		static ::System::Void PLLJPOEEKFO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDialogueEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDialogueEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PLLJPOEEKFO_OFFSET))(a1, a2);
		}

		static ::System::Void ABLFDDBJJGA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastSearchEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastSearchEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ABLFDDBJJGA_OFFSET))(a1, a2);
		}

		static ::System::Void IDLJKLBGAOL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentPlayerMazeSkillLockTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IDLJKLBGAOL_OFFSET))(a1, a2);
		}

		static ::System::Void DLNPAAKOKLC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DLNPAAKOKLC_OFFSET))(a1, a2);
		}

		static ::System::Void OBFBAAIJPME(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvMonsterEx* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvMonsterEx*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OBFBAAIJPME_OFFSET))(a1, a2);
		}

		static ::System::Void INEGFBJOGGH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_INEGFBJOGGH_OFFSET))(a1, a2);
		}

		static ::System::Void AFBMGIEBPEC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSummonUnit* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSummonUnit*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AFBMGIEBPEC_OFFSET))(a1, a2);
		}

		static ::System::Void AJONAHBPAHH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AJONAHBPAHH_OFFSET))(a1, a2);
		}

		static ::System::Void CLPHBLLHMKK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPuzzleEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPuzzleEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CLPHBLLHMKK_OFFSET))(a1, a2);
		}

		static ::System::Void ICPALHPIIHA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetConcat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetConcat*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ICPALHPIIHA_OFFSET))(a1, a2);
		}

		static ::System::Void FLLBGBNMDCB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetCompute* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetCompute*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FLLBGBNMDCB_OFFSET))(a1, a2);
		}

		static ::System::Void EEOMKLAEHCA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSequence* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSequence*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EEOMKLAEHCA_OFFSET))(a1, a2);
		}

		static ::System::Void NANGDNOMMDE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSelector* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSelector*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NANGDNOMMDE_OFFSET))(a1, a2);
		}

		static ::System::Void EAMDFAHPBOB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilter* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilter*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EAMDFAHPBOB_OFFSET))(a1, a2);
		}

		static ::System::Void AICNFONOADJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetShuffle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetShuffle*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AICNFONOADJ_OFFSET))(a1, a2);
		}

		static ::System::Void IDBDHLHOBBG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetTake* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetTake*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IDBDHLHOBBG_OFFSET))(a1, a2);
		}

		static ::System::Void CFPECBCDDHP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetIndex* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetIndex*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CFPECBCDDHP_OFFSET))(a1, a2);
		}

		static ::System::Void NMHFGPLIFKE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetRemoveUnselectable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetRemoveUnselectable*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NMHFGPLIFKE_OFFSET))(a1, a2);
		}

		static ::System::Void DHGFIEFDJGH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilterAliveState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilterAliveState*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DHGFIEFDJGH_OFFSET))(a1, a2);
		}

		static ::System::Void JLMLNCPCPCB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFilterTargetType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFilterTargetType*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JLMLNCPCPCB_OFFSET))(a1, a2);
		}

		static ::System::Void OOEEDEDJHHM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCaster*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OOEEDEDJHHM_OFFSET))(a1, a2);
		}

		static ::System::Void OELHDOKPAFJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchModifierOwner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchModifierOwner*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OELHDOKPAFJ_OFFSET))(a1, a2);
		}

		static ::System::Void JHOAFIGDMIJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNone* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNone*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JHOAFIGDMIJ_OFFSET))(a1, a2);
		}

		static ::System::Void KCDKBPOJGJG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KCDKBPOJGJG_OFFSET))(a1, a2);
		}

		static ::System::Void PMEHGECKFPG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityGroup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityGroup*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PMEHGECKFPG_OFFSET))(a1, a2);
		}

		static ::System::Void PIPFJCONOKK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityTargetLeader* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityTargetLeader*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PIPFJCONOKK_OFFSET))(a1, a2);
		}

		static ::System::Void HNAAOKFDODB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTeamEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTeamEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HNAAOKFDODB_OFFSET))(a1, a2);
		}

		static ::System::Void FMMPLCFFBDD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FMMPLCFFBDD_OFFSET))(a1, a2);
		}

		static ::System::Void MFDKIKLMIHE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPassiveEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPassiveEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MFDKIKLMIHE_OFFSET))(a1, a2);
		}

		static ::System::Void IICNLMNJCGE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntityList*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IICNLMNJCGE_OFFSET))(a1, a2);
		}

		static ::System::Void LOBCFAPECBN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLockTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LOBCFAPECBN_OFFSET))(a1, a2);
		}

		static ::System::Void LJNGMGPOEFM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvAITarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvAITarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJNGMGPOEFM_OFFSET))(a1, a2);
		}

		static ::System::Void GCGMGFKPGIN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCallBackModifierCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCallBackModifierCaster*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GCGMGFKPGIN_OFFSET))(a1, a2);
		}

		static ::System::Void GCHBMCKAHPJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchParamEntityByIndex* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchParamEntityByIndex*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GCHBMCKAHPJ_OFFSET))(a1, a2);
		}

		static ::System::Void KNHDGIEFMLE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchProjectileHitEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchProjectileHitEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KNHDGIEFMLE_OFFSET))(a1, a2);
		}

		static ::System::Void EMFGODOPLDN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchProjectileHitPos* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchProjectileHitPos*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EMFGODOPLDN_OFFSET))(a1, a2);
		}

		static ::System::Void JPHHPBIOOOB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTaskActionTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTaskActionTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JPHHPBIOOOB_OFFSET))(a1, a2);
		}

		static ::System::Void BLCINNDDDFC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPropFarmElement* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPropFarmElement*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BLCINNDDDFC_OFFSET))(a1, a2);
		}

		static ::System::Void GPHAGEJFLFD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLevelEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLevelEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GPHAGEJFLFD_OFFSET))(a1, a2);
		}

		static ::System::Void PAAJLAGJDHA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLineup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLineup*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PAAJLAGJDHA_OFFSET))(a1, a2);
		}

		static ::System::Void KMAIHCLPGJA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchInstigator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchInstigator*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KMAIHCLPGJA_OFFSET))(a1, a2);
		}

		static ::System::Void MBFEDDNLHIN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBattleEventCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBattleEventCaster*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MBFEDDNLHIN_OFFSET))(a1, a2);
		}

		static ::System::Void LFPMNAEFDDD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMainMonster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMainMonster*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LFPMNAEFDDD_OFFSET))(a1, a2);
		}

		static ::System::Void PBNNKMEHAEH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBattleEventCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBattleEventCaster*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PBNNKMEHAEH_OFFSET))(a1, a2);
		}

		static ::System::Void FOMGHKIGHJF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBattleEventCreator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBattleEventCreator*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FOMGHKIGHJF_OFFSET))(a1, a2);
		}

		static ::System::Void IAGDNHALHLA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCreatedBattleEvent* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCreatedBattleEvent*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IAGDNHALHLA_OFFSET))(a1, a2);
		}

		static ::System::Void AIPKOALFILM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchUniqueNameEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchUniqueNameEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AIPKOALFILM_OFFSET))(a1, a2);
		}

		static ::System::Void HPCAHOMDPJK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPartner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPartner*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HPCAHOMDPJK_OFFSET))(a1, a2);
		}

		static ::System::Void LICJKONFIJO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMazeBuffTargets* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMazeBuffTargets*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LICJKONFIJO_OFFSET))(a1, a2);
		}

		static ::System::Void KLLLCDGEJMD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBloodLinkTargets* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBloodLinkTargets*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KLLLCDGEJMD_OFFSET))(a1, a2);
		}

		static ::System::Void KJNBGJKADHJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllUnselectable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllUnselectable*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KJNBGJKADHJ_OFFSET))(a1, a2);
		}

		static ::System::Void MDGHCHKHJLJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllCustomUnselectable*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MDGHCHKHJLJ_OFFSET))(a1, a2);
		}

		static ::System::Void CHPGFMDFDIM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchActionDelayExceed* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchActionDelayExceed*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CHPGFMDFDIM_OFFSET))(a1, a2);
		}

		static ::System::Void NEJKCKBOPNB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAvatarAssistant* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAvatarAssistant*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NEJKCKBOPNB_OFFSET))(a1, a2);
		}

		static ::System::Void MGACDAGNALO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchElationTimeAllTargets* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchElationTimeAllTargets*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MGACDAGNALO_OFFSET))(a1, a2);
		}

		static ::System::Void ILBBEHCNDFA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchElationTimeSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchElationTimeSource*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ILBBEHCNDFA_OFFSET))(a1, a2);
		}

		static ::System::Void LFPEGKBLKGF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSummonMonsters* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSummonMonsters*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LFPEGKBLKGF_OFFSET))(a1, a2);
		}

		static ::System::Void LOOKLFPCLGH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTemplateEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTemplateEntityList*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LOOKLFPCLGH_OFFSET))(a1, a2);
		}

		static ::System::Void EPOBCMJMPHC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapTeamEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapTeamEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EPOBCMJMPHC_OFFSET))(a1, a2);
		}

		static ::System::Void CKBFEGOBMEP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapEnemyTeamEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapEnemyTeamEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CKBFEGOBMEP_OFFSET))(a1, a2);
		}

		static ::System::Void FALAEEMJBJN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllTeamMember* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllTeamMember*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FALAEEMJBJN_OFFSET))(a1, a2);
		}

		static ::System::Void CELNCMKPLNH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CELNCMKPLNH_OFFSET))(a1, a2);
		}

		static ::System::Void JACECEMNPBI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllOffTeamMember* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllOffTeamMember*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JACECEMNPBI_OFFSET))(a1, a2);
		}

		static ::System::Void JDDDFDFOJJO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillPointEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillPointEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JDDDFDFOJJO_OFFSET))(a1, a2);
		}

		static ::System::Void IOGOMMNAFHD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillActualAttacker* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillActualAttacker*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IOGOMMNAFHD_OFFSET))(a1, a2);
		}

		static ::System::Void KHOPFDBHNDJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSummoner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSummoner*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KHOPFDBHNDJ_OFFSET))(a1, a2);
		}

		static ::System::Void GNNIPHIPPDE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCreator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCreator*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GNNIPHIPPDE_OFFSET))(a1, a2);
		}

		static ::System::Void OMILLOJIBLM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSummonedMinions* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSummonedMinions*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OMILLOJIBLM_OFFSET))(a1, a2);
		}

		static ::System::Void NJBGFPGJNAM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapTeamFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapTeamFormation*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NJBGFPGJNAM_OFFSET))(a1, a2);
		}

		static ::System::Void ADDLKGCAADO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSnapshotEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSnapshotEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ADDLKGCAADO_OFFSET))(a1, a2);
		}

		static ::System::Void MKBJGPNBLOO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartToOwner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartToOwner*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MKBJGPNBLOO_OFFSET))(a1, a2);
		}

		static ::System::Void GJNAKJGIKHI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDataViewUISelectEnter* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GJNAKJGIKHI_OFFSET))(a1, a2);
		}

		static ::System::Void KLKFBGLBFFO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchDataViewUISelectLeave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchDataViewUISelectLeave*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KLKFBGLBFFO_OFFSET))(a1, a2);
		}

		static ::System::Void GKCLIAGAMIH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMonsterByID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMonsterByID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GKCLIAGAMIH_OFFSET))(a1, a2);
		}

		static ::System::Void PLMCKHEKGFD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAvatarByID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAvatarByID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PLMCKHEKGFD_OFFSET))(a1, a2);
		}

		static ::System::Void PLPNIFBGAGN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLockTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PLPNIFBGAGN_OFFSET))(a1, a2);
		}

		static ::System::Void JDIDOLIPBKO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFarmElementEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFarmElementEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JDIDOLIPBKO_OFFSET))(a1, a2);
		}

		static ::System::Void DGGIHKIJCHK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchActualOwner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchActualOwner*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DGGIHKIJCHK_OFFSET))(a1, a2);
		}

		static ::System::Void IHHMDJCKLCI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAliveSourceEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAliveSourceEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IHHMDJCKLCI_OFFSET))(a1, a2);
		}

		static ::System::Void HBMOENBCOOM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTrailblazer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTrailblazer*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HBMOENBCOOM_OFFSET))(a1, a2);
		}

		static ::System::Void NJHBEMFLJFC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchByTauntAndAggro* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchByTauntAndAggro*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NJHBEMFLJFC_OFFSET))(a1, a2);
		}

		static ::System::Void OCNMBHIDDNM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDynamicEntityParam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDynamicEntityParam*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OCNMBHIDDNM_OFFSET))(a1, a2);
		}

		static ::System::Void OKHJAKNJFFP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetQuery* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetQuery*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OKHJAKNJFFP_OFFSET))(a1, a2);
		}

		static ::System::Void FLMAMEOFKKK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FLMAMEOFKKK_OFFSET))(a1, a2);
		}

		static ::System::Void BACOHKNDBCA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchUnstageTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchUnstageTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BACOHKNDBCA_OFFSET))(a1, a2);
		}

		static ::System::Void LJMHPGGCCNE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LJMHPGGCCNE_OFFSET))(a1, a2);
		}

		static ::System::Void OBJIBIHLLEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNextSkillCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNextSkillCaster*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OBJIBIHLLEB_OFFSET))(a1, a2);
		}

		static ::System::Void IDFEEALDOGL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchOwnerEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchOwnerEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IDFEEALDOGL_OFFSET))(a1, a2);
		}

		static ::System::Void HANLHODGNMF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCharacterChangeSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCharacterChangeSource*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HANLHODGNMF_OFFSET))(a1, a2);
		}

		static ::System::Void GIMGOEJFNBI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCharacterChangeTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCharacterChangeTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GIMGOEJFNBI_OFFSET))(a1, a2);
		}

		static ::System::Void AOGPAMOHFBN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortSequence* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortSequence*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AOGPAMOHFBN_OFFSET))(a1, a2);
		}

		static ::System::Void IMPLKOEICIJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByValueEvaluator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByValueEvaluator*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IMPLKOEICIJ_OFFSET))(a1, a2);
		}

		static ::System::Void OPHMLHNIHCO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByPredicate* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByPredicate*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OPHMLHNIHCO_OFFSET))(a1, a2);
		}

		static ::System::Void MKOEAMBOJOP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByProperty*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MKOEAMBOJOP_OFFSET))(a1, a2);
		}

		static ::System::Void EOOMFGKIBHO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByCustomFormationIndexClientOnly*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EOOMFGKIBHO_OFFSET))(a1, a2);
		}

		static ::System::Void NPNGMEPAGDL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByFormation*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NPNGMEPAGDL_OFFSET))(a1, a2);
		}

		static ::System::Void LGJJOADCONF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByDeathOrder* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByDeathOrder*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LGJJOADCONF_OFFSET))(a1, a2);
		}

		static ::System::Void OFKKMBOKNKI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByModifierStatusCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByModifierStatusCount*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OFKKMBOKNKI_OFFSET))(a1, a2);
		}

		static ::System::Void GHICECPKGEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortMonsterRank* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortMonsterRank*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GHICECPKGEB_OFFSET))(a1, a2);
		}

		static ::System::Void KEIIMGKFOOA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByModifierValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByModifierValue*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KEIIMGKFOOA_OFFSET))(a1, a2);
		}

		static ::System::Void LCOLNOEPIAA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByMultiModifierValueSum* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByMultiModifierValueSum*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LCOLNOEPIAA_OFFSET))(a1, a2);
		}

		static ::System::Void KAJOHAHFAIE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByActionOrder* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByActionOrder*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KAJOHAHFAIE_OFFSET))(a1, a2);
		}

		static ::System::Void GJMJAGNCAKC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByAITag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByAITag*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GJMJAGNCAKC_OFFSET))(a1, a2);
		}

		static ::System::Void NLDFKEPCGAD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByDistance*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NLDFKEPCGAD_OFFSET))(a1, a2);
		}

		static ::System::Void HCGMHHHBCNJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByWeaknessMatch* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByWeaknessMatch*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HCGMHHHBCNJ_OFFSET))(a1, a2);
		}

		static ::System::Void PKPBINMNBBG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PKPBINMNBBG_OFFSET))(a1, a2);
		}

		static ::System::Void NEOFICBBGKE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByGridFightPower* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByGridFightPower*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NEOFICBBGKE_OFFSET))(a1, a2);
		}

		static ::System::Void PDNKCJOPOFM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByPropertyRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByPropertyRatio*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PDNKCJOPOFM_OFFSET))(a1, a2);
		}

		static ::System::Void IJNBOCFECGL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByElationPriority* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByElationPriority*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IJNBOCFECGL_OFFSET))(a1, a2);
		}

		static ::System::Void HLNFJIJGBJM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTurnActionEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTurnActionEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HLNFJIJGBJM_OFFSET))(a1, a2);
		}

		static ::System::Void DOKBLCGCGMB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTurnOwnerEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DOKBLCGCGMB_OFFSET))(a1, a2);
		}

		static ::System::Void BNENIKBPGLA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchStanceBreakTargetEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BNENIKBPGLA_OFFSET))(a1, a2);
		}

		static ::System::Void CHFLOGBLFJA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllStanceBreakEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CHFLOGBLFJA_OFFSET))(a1, a2);
		}

		static ::System::Void PIEHJLKGDJD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastZombieEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastZombieEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PIEHJLKGDJD_OFFSET))(a1, a2);
		}

		static ::System::Void BEPJFLNNJHH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastKillCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastKillCaster*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BEPJFLNNJHH_OFFSET))(a1, a2);
		}

		static ::System::Void BNCMIGILDIE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastKillTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastKillTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BNCMIGILDIE_OFFSET))(a1, a2);
		}

		static ::System::Void GNFBCIANHHD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFightMVPEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFightMVPEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GNFBCIANHHD_OFFSET))(a1, a2);
		}

		static ::System::Void NFJBIHKCHHM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBattleEventEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBattleEventEntityList*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NFJBIHKCHHM_OFFSET))(a1, a2);
		}

		static ::System::Void DLLKBAKOAFP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidAttacker* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidAttacker*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DLLKBAKOAFP_OFFSET))(a1, a2);
		}

		static ::System::Void GJJFFPGJAIK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidDefender* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidDefender*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GJJFFPGJAIK_OFFSET))(a1, a2);
		}

		static ::System::Void EDIOJIIHCGB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidProtector* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidProtector*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EDIOJIIHCGB_OFFSET))(a1, a2);
		}

		static ::System::Void NMDMHPFLAAE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentDamageAttacker* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NMDMHPFLAAE_OFFSET))(a1, a2);
		}

		static ::System::Void HJNFPOKHJJO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentDamageDefender* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentDamageDefender*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HJNFPOKHJJO_OFFSET))(a1, a2);
		}

		static ::System::Void IIMHJOOLIFK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSnapshotEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSnapshotEntityList*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IIMHJOOLIFK_OFFSET))(a1, a2);
		}

		static ::System::Void EBGMDBLPPLD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFateRinCardCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFateRinCardCaster*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EBGMDBLPPLD_OFFSET))(a1, a2);
		}

		static ::System::Void DANAKBMDAME(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DANAKBMDAME_OFFSET))(a1, a2);
		}

		static ::System::Void MFOGEPLLFDF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillSubTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFateRinCardSkillSubTargetList*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MFOGEPLLFDF_OFFSET))(a1, a2);
		}

		static ::System::Void MBPPFGJDDKL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFateRinCardSkillTargetList*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MBPPFGJDDKL_OFFSET))(a1, a2);
		}

		static ::System::Void ADHEJFLJNOI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchRogueMagicScepterList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchRogueMagicScepterList*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ADHEJFLJNOI_OFFSET))(a1, a2);
		}

		static ::System::Void KJPICINDPOO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAdjoinEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAdjoinEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KJPICINDPOO_OFFSET))(a1, a2);
		}

		static ::System::Void JNGMONGKGGE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapActionBarAdjoinEntityList*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JNGMONGKGGE_OFFSET))(a1, a2);
		}

		static ::System::Void DAOIJAMELAN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageAttacker* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageAttacker*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DAOIJAMELAN_OFFSET))(a1, a2);
		}

		static ::System::Void NFBBBGDEEPJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageDefender* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageDefender*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NFBBBGDEEPJ_OFFSET))(a1, a2);
		}

		static ::System::Void NLHLHIADCHB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAttackTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAttackTargetList*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NLHLHIADCHB_OFFSET))(a1, a2);
		}

		static ::System::Void BDKGEDFAFMF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageChunkTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageChunkTargetList*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BDKGEDFAFMF_OFFSET))(a1, a2);
		}

		static ::System::Void LLDCNBECAAH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LLDCNBECAAH_OFFSET))(a1, a2);
		}

		static ::System::Void PMLGFBBLHAF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartOwnerEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartOwnerEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PMLGFBBLHAF_OFFSET))(a1, a2);
		}

		static ::System::Void AGNJFBBPOGO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AGNJFBBPOGO_OFFSET))(a1, a2);
		}

		static ::System::Void APFFFKAPCAM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillSubTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillSubTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_APFFFKAPCAM_OFFSET))(a1, a2);
		}

		static ::System::Void BBAPIDGGDKA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BBAPIDGGDKA_OFFSET))(a1, a2);
		}

		static ::System::Void CNAIBLMMCHA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBetweenEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBetweenEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CNAIBLMMCHA_OFFSET))(a1, a2);
		}

		static ::System::Void EPKLAPLEIEJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAimAtTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAimAtTargetList*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EPKLAPLEIEJ_OFFSET))(a1, a2);
		}

		static ::System::Void KMCIBNDMGJN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCameraAnchorTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KMCIBNDMGJN_OFFSET))(a1, a2);
		}

		static ::System::Void BGMDPHMBALD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCameraAimTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCameraAimTargetList*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BGMDPHMBALD_OFFSET))(a1, a2);
		}

		static ::System::Void NEOLIOBIMGI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NEOLIOBIMGI_OFFSET))(a1, a2);
		}

		static ::System::Void PPEAEBKKAPB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillIndicatorTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillIndicatorTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PPEAEBKKAPB_OFFSET))(a1, a2);
		}

		static ::System::Void PJFBFEBEAAD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetReverse* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetReverse*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PJFBFEBEAAD_OFFSET))(a1, a2);
		}

		static ::System::Void EIEBOAAIILE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDummyEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDummyEntity*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EIEBOAAIILE_OFFSET))(a1, a2);
		}

		static ::System::Void BFCGAAPAMBM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValuePostProcessConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValuePostProcessConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BFCGAAPAMBM_OFFSET))(a1, a2);
		}

		static ::System::Void KCALLLHOLAL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValueEvaluatorConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValueEvaluatorConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KCALLLHOLAL_OFFSET))(a1, a2);
		}

		static ::System::Void FLGCDFPGDJM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValueEvaluatorVec3* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValueEvaluatorVec3*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FLGCDFPGDJM_OFFSET))(a1, a2);
		}

		static ::System::Void JJOJLINALKF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Const* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Const*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JJOJLINALKF_OFFSET))(a1, a2);
		}

		static ::System::Void OGJKHAKNOEF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Value* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Value*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OGJKHAKNOEF_OFFSET))(a1, a2);
		}

		static ::System::Void KPMPADGDKCP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Group* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Group*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KPMPADGDKCP_OFFSET))(a1, a2);
		}

		static ::System::Void MJEPMLEDNLO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Predicate* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Predicate*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MJEPMLEDNLO_OFFSET))(a1, a2);
		}

		static ::System::Void KNGOKFMAJLD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Random* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Random*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KNGOKFMAJLD_OFFSET))(a1, a2);
		}

		static ::System::Void AKLENLOCCCA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_TargetCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_TargetCount*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AKLENLOCCCA_OFFSET))(a1, a2);
		}

		static ::System::Void LMPFOMACEID(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_FactorGroup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_FactorGroup*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LMPFOMACEID_OFFSET))(a1, a2);
		}

		static ::System::Void EJKMHLNNIAJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Add* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Add*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EJKMHLNNIAJ_OFFSET))(a1, a2);
		}

		static ::System::Void CBLMMNIBKFK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Sub* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Sub*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CBLMMNIBKFK_OFFSET))(a1, a2);
		}

		static ::System::Void HLIOIIKCJND(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Mul* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Mul*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HLIOIIKCJND_OFFSET))(a1, a2);
		}

		static ::System::Void EMKCAGGMANH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Div* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Div*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EMKCAGGMANH_OFFSET))(a1, a2);
		}

		static ::System::Void MIDHHBIBPAK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Exp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Exp*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MIDHHBIBPAK_OFFSET))(a1, a2);
		}

		static ::System::Void ECEIDCJGOPI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Pow* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Pow*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ECEIDCJGOPI_OFFSET))(a1, a2);
		}

		static ::System::Void FCNLCGMEKEL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Abs* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Abs*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FCNLCGMEKEL_OFFSET))(a1, a2);
		}

		static ::System::Void DIKCHAGINEL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Invert* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Invert*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DIKCHAGINEL_OFFSET))(a1, a2);
		}

		static ::System::Void PDGGHKPDBCC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Clamp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Clamp*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PDGGHKPDBCC_OFFSET))(a1, a2);
		}

		static ::System::Void JOKKDIKGDID(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Max* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Max*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JOKKDIKGDID_OFFSET))(a1, a2);
		}

		static ::System::Void MGPGMIAOKFG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Min* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Min*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MGPGMIAOKFG_OFFSET))(a1, a2);
		}

		static ::System::Void OOOEHDINHBL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_ConstMap* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_ConstMap*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OOOEHDINHBL_OFFSET))(a1, a2);
		}

		static ::System::Void ECKCMNAOHEL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_LinearMap* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_LinearMap*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ECKCMNAOHEL_OFFSET))(a1, a2);
		}

		static ::System::Void FGPOPAIGHEJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Sigmoid* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Sigmoid*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FGPOPAIGHEJ_OFFSET))(a1, a2);
		}

		static ::System::Void KPLEDNFHOKD(::SimpleJSON::JSONNode* a1, ::HDOCLPDDMKK* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::HDOCLPDDMKK*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KPLEDNFHOKD_OFFSET))(a1, a2);
		}

		static ::System::Void CPHKOIJNHOL(::SimpleJSON::JSONNode* a1, ::BDPMKFANNDM* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::BDPMKFANNDM*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CPHKOIJNHOL_OFFSET))(a1, a2);
		}

		static ::System::Void GMEJNHINCGJ(::SimpleJSON::JSONNode* a1, ::LCDMLIEHLOE* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::LCDMLIEHLOE*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GMEJNHINCGJ_OFFSET))(a1, a2);
		}

		static ::System::Void POMJLOIJMIM(::SimpleJSON::JSONNode* a1, ::PDKPLHGKFOI* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::PDKPLHGKFOI*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_POMJLOIJMIM_OFFSET))(a1, a2);
		}

		static ::System::Void BOPLOAFADJH(::SimpleJSON::JSONNode* a1, ::AFFPPNMGCMF* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::AFFPPNMGCMF*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BOPLOAFADJH_OFFSET))(a1, a2);
		}

		static ::System::Void AEJKFIBLAIJ(::SimpleJSON::JSONNode* a1, ::ECADOJALGKJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::ECADOJALGKJ*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AEJKFIBLAIJ_OFFSET))(a1, a2);
		}

		static ::System::Void GPPKKHPOPJB(::SimpleJSON::JSONNode* a1, ::DFFLGKHHLLH* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::DFFLGKHHLLH*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GPPKKHPOPJB_OFFSET))(a1, a2);
		}

		static ::System::Void PMAHGJFDCFG(::SimpleJSON::JSONNode* a1, ::IANEMJNCHDN* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::IANEMJNCHDN*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PMAHGJFDCFG_OFFSET))(a1, a2);
		}

		static ::System::Void FNBAHEJNGFH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCanMove* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCanMove*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FNBAHEJNGFH_OFFSET))(a1, a2);
		}

		static ::System::Void FEKBIKKLBLK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsMoving* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsMoving*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FEKBIKKLBLK_OFFSET))(a1, a2);
		}

		static ::System::Void ILPEPLJKCCL(::SimpleJSON::JSONNode* a1, ::MDBNOPEIDAH* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MDBNOPEIDAH*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ILPEPLJKCCL_OFFSET))(a1, a2);
		}

		static ::System::Void MDHNBHLFLEJ(::SimpleJSON::JSONNode* a1, ::OOOHHEMKMFJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::OOOHHEMKMFJ*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MDHNBHLFLEJ_OFFSET))(a1, a2);
		}

		static ::System::Void MLLBBIMNIPK(::SimpleJSON::JSONNode* a1, ::LHABGIKFJLH* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::LHABGIKFJLH*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MLLBBIMNIPK_OFFSET))(a1, a2);
		}

		static ::System::Void PGKHOAILDHM(::SimpleJSON::JSONNode* a1, ::MIBNEIMGOPK* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MIBNEIMGOPK*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PGKHOAILDHM_OFFSET))(a1, a2);
		}

		static ::System::Void HLBGFIIBBGB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtLifeBindingConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtLifeBindingConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HLBGFIIBBGB_OFFSET))(a1, a2);
		}

		static ::System::Void MDMPHCBCCEL(::SimpleJSON::JSONNode* a1, ::IHLFEBHOKAP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::IHLFEBHOKAP*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MDMPHCBCCEL_OFFSET))(a1, a2);
		}

		static ::System::Void FLAODGCNAFE(::SimpleJSON::JSONNode* a1, ::DLDHCDCAEPM* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::DLDHCDCAEPM*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FLAODGCNAFE_OFFSET))(a1, a2);
		}

		static ::System::Void MADBNHDAGMP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsTriggeredBlockDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MADBNHDAGMP_OFFSET))(a1, a2);
		}

		static ::System::Void IIDOKONEPDH(::SimpleJSON::JSONNode* a1, ::JEBDGFNFEND* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::JEBDGFNFEND*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IIDOKONEPDH_OFFSET))(a1, a2);
		}

		static ::System::Void PPPAMALODNI(::SimpleJSON::JSONNode* a1, ::LNCKPENJCCC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::LNCKPENJCCC*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PPPAMALODNI_OFFSET))(a1, a2);
		}

		static ::System::Void HCNEBFNKPHK(::SimpleJSON::JSONNode* a1, ::PCAPHLBJNIA* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::PCAPHLBJNIA*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HCNEBFNKPHK_OFFSET))(a1, a2);
		}

		static ::System::Void CEBGNCPFNBH(::SimpleJSON::JSONNode* a1, ::PDHJJNFJCJF* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::PDHJJNFJCJF*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_CEBGNCPFNBH_OFFSET))(a1, a2);
		}

		static ::System::Void GKIPKIEDLGM(::SimpleJSON::JSONNode* a1, ::GPGGGPJOGID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::GPGGGPJOGID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GKIPKIEDLGM_OFFSET))(a1, a2);
		}

		static ::System::Void NLEJKPLPGBA(::SimpleJSON::JSONNode* a1, ::GLFJJMLOPMO* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::GLFJJMLOPMO*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NLEJKPLPGBA_OFFSET))(a1, a2);
		}

		static ::System::Void FKABMCFDLFE(::SimpleJSON::JSONNode* a1, ::HPCOJDJAHOG* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::HPCOJDJAHOG*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FKABMCFDLFE_OFFSET))(a1, a2);
		}

		static ::System::Void NJEHLBMCGMJ(::SimpleJSON::JSONNode* a1, ::PIPIGCPDNBO* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::PIPIGCPDNBO*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NJEHLBMCGMJ_OFFSET))(a1, a2);
		}

		static ::System::Void KOMENDIOPGM(::SimpleJSON::JSONNode* a1, ::NKGIHJEMCDA* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::NKGIHJEMCDA*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KOMENDIOPGM_OFFSET))(a1, a2);
		}

		static ::System::Void ICJPKOGODPP(::SimpleJSON::JSONNode* a1, ::MJCOCAMJABP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MJCOCAMJABP*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ICJPKOGODPP_OFFSET))(a1, a2);
		}

		static ::System::Void FCEGNNPLDJF(::SimpleJSON::JSONNode* a1, ::ELLIFHOBAEJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::ELLIFHOBAEJ*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FCEGNNPLDJF_OFFSET))(a1, a2);
		}

		static ::System::Void AHMFLCKAHJP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCompareProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCompareProperty*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AHMFLCKAHJP_OFFSET))(a1, a2);
		}

		static ::System::Void ENBFOBMCDLE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByComparePropertyRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByComparePropertyRatio*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ENBFOBMCDLE_OFFSET))(a1, a2);
		}

		static ::System::Void EBKHMOGBONN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasTargetInAlertRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasTargetInAlertRange*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EBKHMOGBONN_OFFSET))(a1, a2);
		}

		static ::System::Void IOADFINNANI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByInAlertRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByInAlertRange*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IOADFINNANI_OFFSET))(a1, a2);
		}

		static ::System::Void FBLJBAONOAC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByInSkillRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByInSkillRange*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FBLJBAONOAC_OFFSET))(a1, a2);
		}

		static ::System::Void EOGNFOMJOEE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsSkillUsing* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsSkillUsing*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EOGNFOMJOEE_OFFSET))(a1, a2);
		}

		static ::System::Void HCNBILPGGDL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasSelectSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasSelectSkill*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HCNBILPGGDL_OFFSET))(a1, a2);
		}

		static ::System::Void OPHFBKNKOAJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtBySkillCanUse* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtBySkillCanUse*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OPHFBKNKOAJ_OFFSET))(a1, a2);
		}

		static ::System::Void LNNOEIPOIDL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByHasLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByHasLockTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LNNOEIPOIDL_OFFSET))(a1, a2);
		}

		static ::System::Void BEKOMHCEMGO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByCurrentSkillName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByCurrentSkillName*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BEKOMHCEMGO_OFFSET))(a1, a2);
		}

		static ::System::Void GADNJOODBPK(::SimpleJSON::JSONNode* a1, ::OFDEKOCILAF* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::OFDEKOCILAF*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GADNJOODBPK_OFFSET))(a1, a2);
		}

		static ::System::Void DHJDCOCDNAB(::SimpleJSON::JSONNode* a1, ::OOHFEMPOOCO* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::OOHFEMPOOCO*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DHJDCOCDNAB_OFFSET))(a1, a2);
		}

		static ::System::Void DJPMJAGBMHO(::SimpleJSON::JSONNode* a1, ::MBPOHBNACLH* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MBPOHBNACLH*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DJPMJAGBMHO_OFFSET))(a1, a2);
		}

		static ::System::Void OMOJPFJHNOE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchGridAt* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchGridAt*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OMOJPFJHNOE_OFFSET))(a1, a2);
		}

		static ::System::Void DADLKNCEMHC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchTargetInArea* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchTargetInArea*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DADLKNCEMHC_OFFSET))(a1, a2);
		}

		static ::System::Void DNEIGJMNEMM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchTrigger* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchTrigger*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DNEIGJMNEMM_OFFSET))(a1, a2);
		}

		static ::System::Void LKKHHDHELNO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchPosWithMaxTargetCount*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LKKHHDHELNO_OFFSET))(a1, a2);
		}

		static ::System::Void FMDDILBKOCF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_FMDDILBKOCF_OFFSET))(a1, a2);
		}

		static ::System::Void GMOBMKFCJHG(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtBattleTargetCameraFocusTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtBattleTargetCameraFocusTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GMOBMKFCJHG_OFFSET))(a1, a2);
		}

		static ::System::Void KICHGPDKHNF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtBattleTargetFetchGridByTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtBattleTargetFetchGridByTag*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_KICHGPDKHNF_OFFSET))(a1, a2);
		}

		static ::System::Void ECPAMEGCOCD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapTargetInTrigger* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapTargetInTrigger*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_ECPAMEGCOCD_OFFSET))(a1, a2);
		}

		static ::System::Void EBPDKFCLPAH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapLockTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EBPDKFCLPAH_OFFSET))(a1, a2);
		}

		static ::System::Void PLCCCNLJMGA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PLCCCNLJMGA_OFFSET))(a1, a2);
		}

		static ::System::Void LNHEHECLBAN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillCastPos* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillCastPos*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LNHEHECLBAN_OFFSET))(a1, a2);
		}

		static ::System::Void JLLPHJNCPGP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillAbortSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillAbortSource*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JLLPHJNCPGP_OFFSET))(a1, a2);
		}

		static ::System::Void NKCMMJCPKPE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapBelongGrid* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapBelongGrid*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NKCMMJCPKPE_OFFSET))(a1, a2);
		}

		static ::System::Void OHFKGNBMLIB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapMoveTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapMoveTarget*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OHFKGNBMLIB_OFFSET))(a1, a2);
		}

		static ::System::Void EJKJMCKFIBA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapBornPoint* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapBornPoint*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_EJKJMCKFIBA_OFFSET))(a1, a2);
		}

		static ::System::Void NFFHODMEJBI(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapGridNearby* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapGridNearby*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NFFHODMEJBI_OFFSET))(a1, a2);
		}

		static ::System::Void LKHHGEKMCKC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapEmptyGridNearby* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapEmptyGridNearby*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LKHHGEKMCKC_OFFSET))(a1, a2);
		}

		static ::System::Void LHGIMIGNHMP(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapGridOwner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapGridOwner*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_LHGIMIGNHMP_OFFSET))(a1, a2);
		}

		static ::System::Void MFNEEJCEKLD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapEntityInGrid* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapEntityInGrid*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MFNEEJCEKLD_OFFSET))(a1, a2);
		}

		static ::System::Void NEMBNPDCDAA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapPosWithMaxTargetCount*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NEMBNPDCDAA_OFFSET))(a1, a2);
		}

		static ::System::Void OMGJLLBGNNC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapPosWithOffset* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapPosWithOffset*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OMGJLLBGNNC_OFFSET))(a1, a2);
		}

		static ::System::Void DGNMHJGHDEL(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtGridDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtGridDistance*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DGNMHJGHDEL_OFFSET))(a1, a2);
		}

		static ::System::Void JPEHNBOKIOJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleGridOrder* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleGridOrder*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JPEHNBOKIOJ_OFFSET))(a1, a2);
		}

		static ::System::Void PIFACLAAFAD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PIFACLAAFAD_OFFSET))(a1, a2);
		}

		static ::System::Void NALCOCPOLFO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NALCOCPOLFO_OFFSET))(a1, a2);
		}

		static ::System::Void JAGMOMHLEML(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleLevelByCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleLevelByCharacterID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JAGMOMHLEML_OFFSET))(a1, a2);
		}

		static ::System::Void AADOMKNJPMA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleRankByCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleRankByCharacterID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AADOMKNJPMA_OFFSET))(a1, a2);
		}

		static ::System::Void NOLKKJFNKPJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtDistance*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NOLKKJFNKPJ_OFFSET))(a1, a2);
		}

		static ::System::Void DJBBLMEJDMA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtDirConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtDirConfig*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_DJBBLMEJDMA_OFFSET))(a1, a2);
		}

		static ::System::Void JNFPJCMGNPM(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtAngleBetween* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtAngleBetween*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JNFPJCMGNPM_OFFSET))(a1, a2);
		}

		static ::System::Void INBPJCBEMJC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleProperty*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_INBPJCBEMJC_OFFSET))(a1, a2);
		}

		static ::System::Void JKDGDHPJDBB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattlePropertyRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattlePropertyRatio*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JKDGDHPJDBB_OFFSET))(a1, a2);
		}

		static ::System::Void PMJECPAPOHJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtModifierProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtModifierProperty*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PMJECPAPOHJ_OFFSET))(a1, a2);
		}

		static ::System::Void JOIJMLAOMCN(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtSkillProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtSkillProperty*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_JOIJMLAOMCN_OFFSET))(a1, a2);
		}

		static ::System::Void NMHHCIDAPEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_CharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_CharacterID*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_NMHHCIDAPEB_OFFSET))(a1, a2);
		}

		static ::System::Void OLCMMNJPBLA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtTimeStamp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtTimeStamp*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OLCMMNJPBLA_OFFSET))(a1, a2);
		}

		static ::System::Void BNNDJCCGAJK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareMP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareMP*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_BNNDJCCGAJK_OFFSET))(a1, a2);
		}

		static ::System::Void GNMBGMDEEKJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByChimeraDuelIsMasterSelected* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GNMBGMDEEKJ_OFFSET))(a1, a2);
		}

		static ::System::Void HJHKDKICNPP(::SimpleJSON::JSONNode* a1, ::GAKCNIMEPPO* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::GAKCNIMEPPO*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_HJHKDKICNPP_OFFSET))(a1, a2);
		}

		static ::System::Void AHCAELDJJNP(::SimpleJSON::JSONNode* a1, ::JCDELEMIIME* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::JCDELEMIIME*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AHCAELDJJNP_OFFSET))(a1, a2);
		}

		static ::System::Void MKKPMADMOKO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSkillTypeDisable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSkillTypeDisable*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_MKKPMADMOKO_OFFSET))(a1, a2);
		}

		static ::System::Void OEHNOMHFHGJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTutorialFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTutorialFinish*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OEHNOMHFHGJ_OFFSET))(a1, a2);
		}

		static ::System::Void GABOJBCLEHJ(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_GABOJBCLEHJ_OFFSET))(a1, a2);
		}

		static ::System::Void AKPDGPBJLIA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsShowInActionBar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsShowInActionBar*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AKPDGPBJLIA_OFFSET))(a1, a2);
		}

		static ::System::Void AGJEHGGEGEH(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_AGJEHGGEGEH_OFFSET))(a1, a2);
		}

		static ::System::Void PPLHCGAHGLE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_PPLHCGAHGLE_OFFSET))(a1, a2);
		}

		static ::System::Void OOKCBPJNBNC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantHasFarmer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_OOKCBPJNBNC_OFFSET))(a1, a2);
		}

		static ::System::Void IHIEEOOPGNO(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantFarmPlantFull*))((::PBYTE)hIl2Cpp + KCFLMFJEMFJ_IHIEEOOPGNO_OFFSET))(a1, a2);
		}

	};
