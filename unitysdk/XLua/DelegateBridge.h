#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/AkMonitorErrorCode.h"
#include "unitysdk/AkMonitorErrorLevel.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/HNOHHOEPFHC.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MiniGameEventReason.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/Match3GameState.h"
#include "unitysdk/RPG/Client/ActivityModule_ActivityType.h"
#include "unitysdk/RPG/Client/AlleyTransportRouteState.h"
#include "unitysdk/RPG/Client/ClockParkAttributeType.h"
#include "unitysdk/RPG/Client/PayProductResult.h"
#include "unitysdk/RPG/Client/TextmapDownloadManager_TextmapApplyChangeErrorCode.h"
#include "unitysdk/RPG/Client/TextmapDownloadManager_TextmapSizeErrorCode.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/RPG/GameCore/HudType.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"
#include "unitysdk/UnityEngine/LogType.h"
#include "unitysdk/XLua/DelegateBridgeBase.h"
#include "unitysdk/GMEFBLGIECD.h"
#include "unitysdk/IAJPMNLEFLJ.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/ChapterRecordUiData.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/InGameTeamSlotUiData.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimMoveInputData.h"
#include "unitysdk/RPG/Client/AlleyEventInfo.h"
#include "unitysdk/RPG/Client/FightActivityGroupInfo.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/TrainPartyBuildUtils_PhotoRarityData.h"
#include "unitysdk/RPG/Client/TrainPartyBuildUtils_PhotoWorldData.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Spine/Unity/MeshGeneratorBuffers.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorTransitionInfo.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AGBDHJMJFHD;
class APNHLNMDIIE_HNBIIAGFOHF;
class AkCallbackInfo;
class BIDDFDEAEGB;
class BOFJHGFAJBN;
class CCGFCHPPIDH;
class CDABDPPPHBN;
class CDNAABEAPDI;
class COMJKPOMILA;
class DODJIGDAJFE;
class DOIPOJANKGI;
class DPFBIPPLJAP;
class ENGBNDIPDJL;
class ENHCOHMNNOD;
class EOABGMGNKGA;
class EPOFJMLCFPI;
class FKEPGDPBEHH;
class GFHCKBHCNDF;
class HIOAMIPNLIN;
class HPIFMHPHMGB;
class HPKACEPPPCA;
class IBAAHKDOHDB;
class IFEABBJBIGK;
class IFLICGOLBIG;
class IPDJEKLHILE;
class KJHIAECCGBD;
class KLEFGGIHGMI;
class LLADGGNOJPG;
class LPNPMKNMMOK;
class MBDOBECHOJA;
class NJCHNLINLMK;
class NMGLDNNFHFB;
class NMNGHKMHDOK;
class NOPBGGCGFMM;
class OBJANKHLNGO;
class OIJOKMHJKLJ;
class OMFLOBEGHNM;
class PNFBJNFDAFC;
namespace Google::Protobuf { class ByteString; }
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace InControl { class InputDevice; }
namespace Proto { class BuyGoodsScRsp; }
namespace Proto { class ItemCost; }
namespace Proto { class StrongChallengeAvatar; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::AvatarSystem { class AvatarPath; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ActivityHotCoreRewardData; }
namespace RPG::Client { class ActivityHotData; }
namespace RPG::Client { class ActivityPanelData; }
namespace RPG::Client { class ActivitySummonStage; }
namespace RPG::Client { class AetherDivideGymDataItem; }
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class AssistData; }
namespace RPG::Client { class AvatarEnhancedHint; }
namespace RPG::Client { class AvatarGlobalBuffDisplayData; }
namespace RPG::Client { class AvatarOutfitUnit; }
namespace RPG::Client { class BaseGachaGroupData; }
namespace RPG::Client { class BaseGachaPoolData; }
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroup; }
namespace RPG::Client { class BookContentData; }
namespace RPG::Client { class BookletLuaPanelParam; }
namespace RPG::Client { class CakeCatchCatData; }
namespace RPG::Client { class CakeRaceBattleItemDataItem; }
namespace RPG::Client { class CakeRaceHandbookCatItem; }
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client { class ChatReportReason; }
namespace RPG::Client { class ChenLingBattleDeckData; }
namespace RPG::Client { class ChenLingPrivilege; }
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace RPG::Client { class ChessRogueSubMissionReplayDataItem; }
namespace RPG::Client { class ChimeraDuelMasterData; }
namespace RPG::Client { class ClockParkCardItem; }
namespace RPG::Client { class CompanionMissionActivityBannerData; }
namespace RPG::Client { class DiceCombatDiceConfigData; }
namespace RPG::Client { class DrinkMakerCheersBartendDrinkDataExtend; }
namespace RPG::Client { class DrinkMakerCheersGroupData; }
namespace RPG::Client { class DrinkMakerCheersGuestCommentData; }
namespace RPG::Client { class ElfRestaurantRecipeData; }
namespace RPG::Client { class ElfShopItemData; }
namespace RPG::Client { class EquipmentItemData; }
namespace RPG::Client { class EvolveBuildCard; }
namespace RPG::Client { class EvolveBuildMixData; }
namespace RPG::Client { class EvolveBuildScMixData; }
namespace RPG::Client { class FantasticStoryChapterData; }
namespace RPG::Client { class FantasticStoryParagraphData; }
namespace RPG::Client { class FateHandbookHouguItem; }
namespace RPG::Client { class FateHandbookReijuItem; }
namespace RPG::Client { class FightFestCoachSkill; }
namespace RPG::Client { class FightFestPhase; }
namespace RPG::Client { class FriendRankingInfo; }
namespace RPG::Client { class FuncEntranceData; }
namespace RPG::Client { class GachaGroupData; }
namespace RPG::Client { class GachaItemData; }
namespace RPG::Client { class GlobalDispatchData_ServerData; }
namespace RPG::Client { class GridFightAhaUnlockCondition; }
namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightBonusConsumableItemData; }
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemConfig; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightDivisionConfig; }
namespace RPG::Client { class GridFightDivisionLevelConfig; }
namespace RPG::Client { class GridFightDivisionLevelReward; }
namespace RPG::Client { class GridFightDivisionStageConfig; }
namespace RPG::Client { class GridFightEnemyDifficultyLvConfig; }
namespace RPG::Client { class GridFightEquipCategoryInfoConfig; }
namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightForgeConfig; }
namespace RPG::Client { class GridFightGameFormationEditor_EditEvent; }
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightHandBookEquipItemConfig; }
namespace RPG::Client { class GridFightHandBookPetPal; }
namespace RPG::Client { class GridFightHandbookRole; }
namespace RPG::Client { class GridFightItemConfig; }
namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace RPG::Client { class GridFightMonsterCampConfig; }
namespace RPG::Client { class GridFightMonsterData; }
namespace RPG::Client { class GridFightNPCConfig; }
namespace RPG::Client { class GridFightOrbData; }
namespace RPG::Client { class GridFightOrbEntityData; }
namespace RPG::Client { class GridFightPortalData; }
namespace RPG::Client { class GridFightPresentEntity; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleProperty; }
namespace RPG::Client { class GridFightRolePropertyConfig; }
namespace RPG::Client { class GridFightRoleSkillStyleRemarkItem; }
namespace RPG::Client { class GridFightSpotLightConfig; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitAstropolisTier; }
namespace RPG::Client { class GridFightTraitDisplayData; }
namespace RPG::Client { class GridFightTraitSubTraitConfig; }
namespace RPG::Client { class GridFightTutorialStageConfig; }
namespace RPG::Client { class HeadIconDisplayData; }
namespace RPG::Client { class IActivityHotData; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class IFateGameRoundSettleDmgSourceItem; }
namespace RPG::Client { class IGridFightEquipCraftRecipeEntry; }
namespace RPG::Client { class IPlanetFesBuff; }
namespace RPG::Client { class IResidentActivityPanelData; }
namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace RPG::Client { class IRogueTournPersonaRoomCard; }
namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class LightConeRecommendData; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapProp; }
namespace RPG::Client { class MatchPlayRecord; }
namespace RPG::Client { class MatchThreeBirdData; }
namespace RPG::Client { class MessageItemData; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoRogueHexChessBoardItem; }
namespace RPG::Client { class MonoSceneObjClickHint; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class MultipleDropData; }
namespace RPG::Client { class NPCWarningTipConfig; }
namespace RPG::Client { class NewsTickerItem; }
namespace RPG::Client { class PCResolution; }
namespace RPG::Client { class ParkourRank; }
namespace RPG::Client { class PenaconyEndmostChronicleEvent; }
namespace RPG::Client { class PlanetFesCardData; }
namespace RPG::Client { class PlanetFesMiniGameBingoRewardLevel; }
namespace RPG::Client { class PlanetFesSkillPhase; }
namespace RPG::Client { class PlanetFesThemeData; }
namespace RPG::Client { class PlanetFesToastItem; }
namespace RPG::Client { class PlanetFesTradingCardApplyItem; }
namespace RPG::Client { class PlanetFesTradingCardExchangeHistoryItem; }
namespace RPG::Client { class PlanetFesTradingCardOfferItem; }
namespace RPG::Client { class PlayerBoardInfo; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client { class PunkLordData; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class RechargeGiftData; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueMagicAreaDataItem; }
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::Client { class RogueNousDiceBranchDataItem; }
namespace RPG::Client { class RogueNousDiceSlotDataItem; }
namespace RPG::Client { class RogueNousDiceSurfaceDataItem; }
namespace RPG::Client { class RogueTournArchiveData; }
namespace RPG::Client { class RogueTournAreaDataItem; }
namespace RPG::Client { class RogueTournHexData; }
namespace RPG::Client { class RoleTrialActivityData; }
namespace RPG::Client { class RuntimeGroupManager_HoYoGroupUnit; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::Client { class SettledPunkLordData; }
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client { class SuitRecommendAvatarData; }
namespace RPG::Client { class SuperDropDown; }
namespace RPG::Client { class SwitchHandCoinData; }
namespace RPG::Client { class SwordTrainingEndingDataItem; }
namespace RPG::Client { class SwordTrainingSkillData; }
namespace RPG::Client { class TarotBookCard; }
namespace RPG::Client { class TarotBookCharacter; }
namespace RPG::Client { class TarotBookClue; }
namespace RPG::Client { class TarotBookDeleteData; }
namespace RPG::Client { class TarotBookInteraction; }
namespace RPG::Client { class TarotBookReadReward; }
namespace RPG::Client { class TarotBookStory; }
namespace RPG::Client { class TeamBuild; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::Client { class UIBubbleItem; }
namespace RPG::Client { class UIBubbleManager; }
namespace RPG::Client { class UIController; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::Client { class VirtualRankChimeraTeam; }
namespace RPG::Client { class VoracityInvasionFightEntranceData; }
namespace RPG::Client { class WheelItem; }
namespace RPG::Client { class World3DMapEntranceConfig; }
namespace RPG::Client { template <typename T1, typename T2> class PrefDictionary_2; }
namespace RPG::Client { template <typename T> class GridFightGameRefHttpRspBody_1; }
namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGiftData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenInteractPropData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenTraitData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }
namespace RPG::Client::ActivityIdleLive { class AmphoreusTarotData; }
namespace RPG::Client::ActivityIdleLive { class CaptainData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAdvTechTree; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveGachaPoolConfig; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotData; }
namespace RPG::Client::ActivityIdleLive { class SpSlotUiData; }
namespace RPG::Client::ActivityMarble { class MarbleSealData; }
namespace RPG::Client::ActivityRealityShow { class RealityShowFriendRankTabViewModel; }
namespace RPG::Client::Challenge { class IChallengeEnvironmentHintViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceMazeProgressHintViewModel; }
namespace RPG::Client::DiceCombat { class DiceCombatCollectionCardInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatCollectionDiceInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatCommunicateData; }
namespace RPG::Client::DiceCombat { class DiceCombatForceRefreshEvent; }
namespace RPG::Client::DiceCombat { class DiceCombatGlossaryTermData; }
namespace RPG::Client::DiceCombat { class DiceCombatPerformanceBattleEvent; }
namespace RPG::Client::DiceCombat { class DiceCombatRankLevelData; }
namespace RPG::Client::DiceCombat { class DiceCombatSpecialRuleGroupData; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace RPG::Client::FateRin::Battle { class CardAnimationEventArgs; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardMoveToGrailParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardMoveToTeamParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardSetupScaleParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardShowGrailParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardShowLineParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardShowRewardParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardShowTeamParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardSimpleTalkParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardTrackTeamParams; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanStateRefreshMessage; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostSubmitViewModel; }
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertCoinBubbleViewModel; }
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertEmojiBubbleViewModel; }
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertEmotionBubbleViewModel; }
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertOrderBubbleViewModel; }
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertTalkBubbleViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftDiyViewEvent; }
namespace RPG::Client::NavMap { class MappingInfoNode; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::Promises { class ExceptionEventArgs; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Prop { class JigsawItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::SocialPlay { class SocialPlayMapInfo; }
namespace RPG::Client::SocialPlay { class SocialPlayMapUIBridge; }
namespace RPG::Client::SwordTraining { class SwordTrainingCandidatePartnerAbilityData; }
namespace RPG::Client::TeamTowers { class TeamTowersPlayerSkillViewModel; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingRankInfo; }
namespace RPG::Client::TrainParty { class TrainPartyRecordGroup; }
namespace RPG::GameCore { class ActivityFightGroupRow; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventurePlayerRow; }
namespace RPG::GameCore { class AdventurePlayerRow_AdventurePlayerCommonRowWrap; }
namespace RPG::GameCore { class AvatarPromotionRow; }
namespace RPG::GameCore { class AvatarServantSkillRow; }
namespace RPG::GameCore { class AvatarSkillRow; }
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { class BuffConfig; }
namespace RPG::GameCore { class CEBattlePresetConfig; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class DialogueGroupRow; }
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightManager_GridFightCustomValue; }
namespace RPG::GameCore { class IAdventurePlayerCommonRowWrap; }
namespace RPG::GameCore { class ItemComefromRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class ItemRow; }
namespace RPG::GameCore { class LevelMinimapSection; }
namespace RPG::GameCore { class MainMissionRow; }
namespace RPG::GameCore { class MainMissionSortedItem; }
namespace RPG::GameCore { class MapEntryRow; }
namespace RPG::GameCore { class MarblePVPRankConfigRow; }
namespace RPG::GameCore { class MazeBuffData; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class MessageItemRow; }
namespace RPG::GameCore { class MissionCondition; }
namespace RPG::GameCore { class MonsterGuideTagConfigRow; }
namespace RPG::GameCore { class MonsterRow; }
namespace RPG::GameCore { class MonsterSkillRow; }
namespace RPG::GameCore { class PerformanceERow; }
namespace RPG::GameCore { class PerformanceIDPair; }
namespace RPG::GameCore { class PerformanceSkipOverrideRow; }
namespace RPG::GameCore { class PlaneEventRow; }
namespace RPG::GameCore { class PropRow; }
namespace RPG::GameCore { class RewardRow; }
namespace RPG::GameCore { class RogueBuffRow; }
namespace RPG::GameCore { class RogueDLCAeonCrossRow; }
namespace RPG::GameCore { class RogueDLCMainStoryRewardRow; }
namespace RPG::GameCore { class RogueImageRow; }
namespace RPG::GameCore { class RogueNousAeonCrossRow; }
namespace RPG::GameCore { class RogueNousAeonRow; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace RPG::GameCore { class StageMonsterRewardItem; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class StatusRow; }
namespace RPG::GameCore { class SubMissionRow; }
namespace RPG::GameCore { class TalkSentenceConfigRow; }
namespace RPG::GameCore { class TextmapRow; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace RPG::GameCore { class VoiceConfigRow; }
namespace Spine { class Event; }
namespace Spine { class TrackEntry; }
namespace Spine::Unity { class ISkeletonAnimation; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace SuperScrollView { class LoopFlexibleGridView; }
namespace SuperScrollView { class LoopFlexibleGridViewItem; }
namespace SuperScrollView { class LoopGridView; }
namespace SuperScrollView { class LoopGridViewItem; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace SuperScrollView { class LoopStaggeredGridView; }
namespace SuperScrollView { class LoopStaggeredGridViewItem; }
namespace System { class Action; }
namespace System { class Delegate; }
namespace System { class Exception; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection { class MemberInfo; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_SpriteAsset; }
namespace TMPro { class TMP_TextInfo; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class EventTrigger_Entry; }
namespace UnityEngine::EventSystems { class IBeginDragHandler; }
namespace UnityEngine::EventSystems { class ICancelHandler; }
namespace UnityEngine::EventSystems { class IDeselectHandler; }
namespace UnityEngine::EventSystems { class IDragHandler; }
namespace UnityEngine::EventSystems { class IDropHandler; }
namespace UnityEngine::EventSystems { class IEndDragHandler; }
namespace UnityEngine::EventSystems { class IIgnoreHandler; }
namespace UnityEngine::EventSystems { class IInitializePotentialDragHandler; }
namespace UnityEngine::EventSystems { class IMoveHandler; }
namespace UnityEngine::EventSystems { class IPointerClickHandler; }
namespace UnityEngine::EventSystems { class IPointerDownHandler; }
namespace UnityEngine::EventSystems { class IPointerEnterHandler; }
namespace UnityEngine::EventSystems { class IPointerExitHandler; }
namespace UnityEngine::EventSystems { class IPointerUpHandler; }
namespace UnityEngine::EventSystems { class IScrollHandler; }
namespace UnityEngine::EventSystems { class ISelectHandler; }
namespace UnityEngine::EventSystems { class ISubmitHandler; }
namespace UnityEngine::EventSystems { class IUpdateSelectedHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Dropdown_DropdownItem; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class ILayoutElement; }
namespace UnityEngine::UI { class Selectable; }
namespace UnityEngine::UI { class Toggle; }
namespace XLua { class DelegateBridge; }
namespace XLua { class LuaBase; }
namespace XLua { class LuaEnv; }
namespace XLua { class LuaTable; }

#define XLUA_DELEGATEBRIDGE_ACTION_OFFSET UNITYSDK_OFFSET(0x15C619F0)
#define XLUA_DELEGATEBRIDGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x15C461C0)
#define XLUA_DELEGATEBRIDGE_CTOR_OFFSET UNITYSDK_OFFSET(0x15C61990)
#define XLUA_DELEGATEBRIDGE_GETDELEGATEBYTYPE_OFFSET UNITYSDK_OFFSET(0x15C4B2C0)
#define XLUA_DELEGATEBRIDGE_PCALL_OFFSET UNITYSDK_OFFSET(0x15BCE8B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP0_OFFSET UNITYSDK_OFFSET(0x15B90020)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1000_OFFSET UNITYSDK_OFFSET(0x15C3CD70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1001_OFFSET UNITYSDK_OFFSET(0x15C3CFA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1002_OFFSET UNITYSDK_OFFSET(0x15C3D2C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1003_OFFSET UNITYSDK_OFFSET(0x15C3D4F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1004_OFFSET UNITYSDK_OFFSET(0x15C3D830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1005_OFFSET UNITYSDK_OFFSET(0x15C3DB60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1006_OFFSET UNITYSDK_OFFSET(0x15C3DEC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1007_OFFSET UNITYSDK_OFFSET(0x15C3E1A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1008_OFFSET UNITYSDK_OFFSET(0x15C3E3D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1009_OFFSET UNITYSDK_OFFSET(0x15C3E6F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP100_OFFSET UNITYSDK_OFFSET(0x15BA1810)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1010_OFFSET UNITYSDK_OFFSET(0x15C3E9D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1011_OFFSET UNITYSDK_OFFSET(0x15C3EC00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1012_OFFSET UNITYSDK_OFFSET(0x15C3EF20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1013_OFFSET UNITYSDK_OFFSET(0x15C3F350)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1014_OFFSET UNITYSDK_OFFSET(0x15C3F6A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1015_OFFSET UNITYSDK_OFFSET(0x15C3F8D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1016_OFFSET UNITYSDK_OFFSET(0x15C3FBB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1017_OFFSET UNITYSDK_OFFSET(0x15C3FDE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1018_OFFSET UNITYSDK_OFFSET(0x15C40060)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1019_OFFSET UNITYSDK_OFFSET(0x15C402E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP101_OFFSET UNITYSDK_OFFSET(0x15BA1AC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1020_OFFSET UNITYSDK_OFFSET(0x15C40510)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1021_OFFSET UNITYSDK_OFFSET(0x15C40740)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1022_OFFSET UNITYSDK_OFFSET(0x15C40A20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1023_OFFSET UNITYSDK_OFFSET(0x15C40C50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1024_OFFSET UNITYSDK_OFFSET(0x15C40F30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1025_OFFSET UNITYSDK_OFFSET(0x15C41160)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1026_OFFSET UNITYSDK_OFFSET(0x15C41390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1027_OFFSET UNITYSDK_OFFSET(0x15C41670)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1028_OFFSET UNITYSDK_OFFSET(0x15C41950)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1029_OFFSET UNITYSDK_OFFSET(0x15C41B80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP102_OFFSET UNITYSDK_OFFSET(0x15BA1E80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1030_OFFSET UNITYSDK_OFFSET(0x15C41E40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1031_OFFSET UNITYSDK_OFFSET(0x15C42090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1032_OFFSET UNITYSDK_OFFSET(0x15C422C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1033_OFFSET UNITYSDK_OFFSET(0x15C42600)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1034_OFFSET UNITYSDK_OFFSET(0x15C42830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1035_OFFSET UNITYSDK_OFFSET(0x15C42B60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1036_OFFSET UNITYSDK_OFFSET(0x15C42D90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1037_OFFSET UNITYSDK_OFFSET(0x15C42FC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1038_OFFSET UNITYSDK_OFFSET(0x15C431F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1039_OFFSET UNITYSDK_OFFSET(0x15C43420)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP103_OFFSET UNITYSDK_OFFSET(0x15BA2240)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1040_OFFSET UNITYSDK_OFFSET(0x15C43650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1041_OFFSET UNITYSDK_OFFSET(0x15C43880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1042_OFFSET UNITYSDK_OFFSET(0x15C43AB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1043_OFFSET UNITYSDK_OFFSET(0x15C43CE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1044_OFFSET UNITYSDK_OFFSET(0x15C43F10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1045_OFFSET UNITYSDK_OFFSET(0x15C44140)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1046_OFFSET UNITYSDK_OFFSET(0x15C44370)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1047_OFFSET UNITYSDK_OFFSET(0x15C445A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1048_OFFSET UNITYSDK_OFFSET(0x15C447D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1049_OFFSET UNITYSDK_OFFSET(0x15C44A00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP104_OFFSET UNITYSDK_OFFSET(0x15BA2670)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1050_OFFSET UNITYSDK_OFFSET(0x15C44C30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1051_OFFSET UNITYSDK_OFFSET(0x15C44E60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1052_OFFSET UNITYSDK_OFFSET(0x15C45090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1053_OFFSET UNITYSDK_OFFSET(0x15C452C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1054_OFFSET UNITYSDK_OFFSET(0x15C45560)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1055_OFFSET UNITYSDK_OFFSET(0x15C45790)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1056_OFFSET UNITYSDK_OFFSET(0x15C459C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1057_OFFSET UNITYSDK_OFFSET(0x15C45C10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1058_OFFSET UNITYSDK_OFFSET(0x15C45EB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP105_OFFSET UNITYSDK_OFFSET(0x15BA28B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP106_OFFSET UNITYSDK_OFFSET(0x15BA2B60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP107_OFFSET UNITYSDK_OFFSET(0x15BA2F90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP108_OFFSET UNITYSDK_OFFSET(0x15BA31D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP109_OFFSET UNITYSDK_OFFSET(0x15BA3590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP10_OFFSET UNITYSDK_OFFSET(0x15B91A90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP110_OFFSET UNITYSDK_OFFSET(0x15BA3950)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP111_OFFSET UNITYSDK_OFFSET(0x15BA3BA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP112_OFFSET UNITYSDK_OFFSET(0x15BA3DE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP113_OFFSET UNITYSDK_OFFSET(0x15BA4140)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP114_OFFSET UNITYSDK_OFFSET(0x15BA4500)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP115_OFFSET UNITYSDK_OFFSET(0x15BA4740)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP116_OFFSET UNITYSDK_OFFSET(0x15BA4AF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP117_OFFSET UNITYSDK_OFFSET(0x15BA4D30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP118_OFFSET UNITYSDK_OFFSET(0x15BA5010)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP119_OFFSET UNITYSDK_OFFSET(0x15BA5250)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP11_OFFSET UNITYSDK_OFFSET(0x15B91CD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP120_OFFSET UNITYSDK_OFFSET(0x15BA5570)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP121_OFFSET UNITYSDK_OFFSET(0x15BA5850)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP122_OFFSET UNITYSDK_OFFSET(0x15BA5A90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP123_OFFSET UNITYSDK_OFFSET(0x15BA5DB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP124_OFFSET UNITYSDK_OFFSET(0x15BA6090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP125_OFFSET UNITYSDK_OFFSET(0x15BA62D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP126_OFFSET UNITYSDK_OFFSET(0x15BA65F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP127_OFFSET UNITYSDK_OFFSET(0x15BA6830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP128_OFFSET UNITYSDK_OFFSET(0x15BA6B10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP129_OFFSET UNITYSDK_OFFSET(0x15BA6D50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP12_OFFSET UNITYSDK_OFFSET(0x15B91F10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP130_OFFSET UNITYSDK_OFFSET(0x15BA7070)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP131_OFFSET UNITYSDK_OFFSET(0x15BA7350)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP132_OFFSET UNITYSDK_OFFSET(0x15BA7590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP133_OFFSET UNITYSDK_OFFSET(0x15BA78B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP134_OFFSET UNITYSDK_OFFSET(0x15BA7AF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP135_OFFSET UNITYSDK_OFFSET(0x15BA7DA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP136_OFFSET UNITYSDK_OFFSET(0x15BA80D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP137_OFFSET UNITYSDK_OFFSET(0x15BA8490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP138_OFFSET UNITYSDK_OFFSET(0x15BA8790)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP139_OFFSET UNITYSDK_OFFSET(0x15BA89D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP13_OFFSET UNITYSDK_OFFSET(0x15B92180)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP140_OFFSET UNITYSDK_OFFSET(0x15BA8C80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP141_OFFSET UNITYSDK_OFFSET(0x15BA9030)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP142_OFFSET UNITYSDK_OFFSET(0x15BA9270)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP143_OFFSET UNITYSDK_OFFSET(0x15BA9570)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP144_OFFSET UNITYSDK_OFFSET(0x15BA9850)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP145_OFFSET UNITYSDK_OFFSET(0x15BA9A90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP146_OFFSET UNITYSDK_OFFSET(0x15BA9DB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP147_OFFSET UNITYSDK_OFFSET(0x15BAA2C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP148_OFFSET UNITYSDK_OFFSET(0x15BAA5A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP149_OFFSET UNITYSDK_OFFSET(0x15BAA7E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP14_OFFSET UNITYSDK_OFFSET(0x15B923C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP150_OFFSET UNITYSDK_OFFSET(0x15BAAA20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP151_OFFSET UNITYSDK_OFFSET(0x15BAAD30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP152_OFFSET UNITYSDK_OFFSET(0x15BAB010)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP153_OFFSET UNITYSDK_OFFSET(0x15BAB250)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP154_OFFSET UNITYSDK_OFFSET(0x15BAB490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP155_OFFSET UNITYSDK_OFFSET(0x15BAB720)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP156_OFFSET UNITYSDK_OFFSET(0x15BABAA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP157_OFFSET UNITYSDK_OFFSET(0x15BABDE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP158_OFFSET UNITYSDK_OFFSET(0x15BAC020)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP159_OFFSET UNITYSDK_OFFSET(0x15BAC260)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP15_OFFSET UNITYSDK_OFFSET(0x15B926A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP160_OFFSET UNITYSDK_OFFSET(0x15BAC510)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP161_OFFSET UNITYSDK_OFFSET(0x15BAC7E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP162_OFFSET UNITYSDK_OFFSET(0x15BACC00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP163_OFFSET UNITYSDK_OFFSET(0x15BAD020)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP164_OFFSET UNITYSDK_OFFSET(0x15BAD260)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP165_OFFSET UNITYSDK_OFFSET(0x15BAD500)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP166_OFFSET UNITYSDK_OFFSET(0x15BAD740)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP167_OFFSET UNITYSDK_OFFSET(0x15BADAE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP168_OFFSET UNITYSDK_OFFSET(0x15BADD50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP169_OFFSET UNITYSDK_OFFSET(0x15BAE030)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP16_OFFSET UNITYSDK_OFFSET(0x15B92910)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP170_OFFSET UNITYSDK_OFFSET(0x15BAE270)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP171_OFFSET UNITYSDK_OFFSET(0x15BAE590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP172_OFFSET UNITYSDK_OFFSET(0x15BAE7D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP173_OFFSET UNITYSDK_OFFSET(0x15BAEA90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP174_OFFSET UNITYSDK_OFFSET(0x15BAECD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP175_OFFSET UNITYSDK_OFFSET(0x15BAEFB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP176_OFFSET UNITYSDK_OFFSET(0x15BAF1F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP177_OFFSET UNITYSDK_OFFSET(0x15BAF440)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP178_OFFSET UNITYSDK_OFFSET(0x15BAF6B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP179_OFFSET UNITYSDK_OFFSET(0x15BAF980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP17_OFFSET UNITYSDK_OFFSET(0x15B92B90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP180_OFFSET UNITYSDK_OFFSET(0x15BAFC30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP181_OFFSET UNITYSDK_OFFSET(0x15BAFE70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP182_OFFSET UNITYSDK_OFFSET(0x15BB00B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP183_OFFSET UNITYSDK_OFFSET(0x15BB03D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP184_OFFSET UNITYSDK_OFFSET(0x15BB0710)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP185_OFFSET UNITYSDK_OFFSET(0x15BB09F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP186_OFFSET UNITYSDK_OFFSET(0x15BB0C30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP187_OFFSET UNITYSDK_OFFSET(0x15BB0F50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP188_OFFSET UNITYSDK_OFFSET(0x15BB1190)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP189_OFFSET UNITYSDK_OFFSET(0x15BB1470)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP18_OFFSET UNITYSDK_OFFSET(0x15B92E10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP190_OFFSET UNITYSDK_OFFSET(0x15BB16B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP191_OFFSET UNITYSDK_OFFSET(0x15BB19D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP192_OFFSET UNITYSDK_OFFSET(0x15BB1C10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP193_OFFSET UNITYSDK_OFFSET(0x15BB1EC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP194_OFFSET UNITYSDK_OFFSET(0x15BB21A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP195_OFFSET UNITYSDK_OFFSET(0x15BB23E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP196_OFFSET UNITYSDK_OFFSET(0x15BB2700)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP197_OFFSET UNITYSDK_OFFSET(0x15BB29E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP198_OFFSET UNITYSDK_OFFSET(0x15BB2C20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP199_OFFSET UNITYSDK_OFFSET(0x15BB2F40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP19_OFFSET UNITYSDK_OFFSET(0x15B930A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1_OFFSET UNITYSDK_OFFSET(0x15B902E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP200_OFFSET UNITYSDK_OFFSET(0x15BB3220)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP201_OFFSET UNITYSDK_OFFSET(0x15BB3460)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP202_OFFSET UNITYSDK_OFFSET(0x15BB3780)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP203_OFFSET UNITYSDK_OFFSET(0x15BB39C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP204_OFFSET UNITYSDK_OFFSET(0x15BB3C70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP205_OFFSET UNITYSDK_OFFSET(0x15BB3EB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP206_OFFSET UNITYSDK_OFFSET(0x15BB41D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP207_OFFSET UNITYSDK_OFFSET(0x15BB4410)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP208_OFFSET UNITYSDK_OFFSET(0x15BB4650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP209_OFFSET UNITYSDK_OFFSET(0x15BB4900)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP20_OFFSET UNITYSDK_OFFSET(0x15B93330)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP210_OFFSET UNITYSDK_OFFSET(0x15BB4BE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP211_OFFSET UNITYSDK_OFFSET(0x15BB4E20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP212_OFFSET UNITYSDK_OFFSET(0x15BB5100)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP213_OFFSET UNITYSDK_OFFSET(0x15BB5340)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP214_OFFSET UNITYSDK_OFFSET(0x15BB5660)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP215_OFFSET UNITYSDK_OFFSET(0x15BB5940)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP216_OFFSET UNITYSDK_OFFSET(0x15BB5B80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP217_OFFSET UNITYSDK_OFFSET(0x15BB5EA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP218_OFFSET UNITYSDK_OFFSET(0x15BB6180)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP219_OFFSET UNITYSDK_OFFSET(0x15BB63C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP21_OFFSET UNITYSDK_OFFSET(0x15B935D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP220_OFFSET UNITYSDK_OFFSET(0x15BB66E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP221_OFFSET UNITYSDK_OFFSET(0x15BB6920)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP222_OFFSET UNITYSDK_OFFSET(0x15BB6C90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP223_OFFSET UNITYSDK_OFFSET(0x15BB6F70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP224_OFFSET UNITYSDK_OFFSET(0x15BB71B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP225_OFFSET UNITYSDK_OFFSET(0x15BB74D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP226_OFFSET UNITYSDK_OFFSET(0x15BB77B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP227_OFFSET UNITYSDK_OFFSET(0x15BB79F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP228_OFFSET UNITYSDK_OFFSET(0x15BB7D10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP229_OFFSET UNITYSDK_OFFSET(0x15BB7FF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP22_OFFSET UNITYSDK_OFFSET(0x15B93820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP230_OFFSET UNITYSDK_OFFSET(0x15BB8230)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP231_OFFSET UNITYSDK_OFFSET(0x15BB8550)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP232_OFFSET UNITYSDK_OFFSET(0x15BB8790)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP233_OFFSET UNITYSDK_OFFSET(0x15BB8A10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP234_OFFSET UNITYSDK_OFFSET(0x15BB8CA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP235_OFFSET UNITYSDK_OFFSET(0x15BB8EE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP236_OFFSET UNITYSDK_OFFSET(0x15BB9120)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP237_OFFSET UNITYSDK_OFFSET(0x15BB94D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP238_OFFSET UNITYSDK_OFFSET(0x15BB9800)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP239_OFFSET UNITYSDK_OFFSET(0x15BB9AE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP23_OFFSET UNITYSDK_OFFSET(0x15B93A60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP240_OFFSET UNITYSDK_OFFSET(0x15BB9DC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP241_OFFSET UNITYSDK_OFFSET(0x15BBA000)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP242_OFFSET UNITYSDK_OFFSET(0x15BBA240)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP243_OFFSET UNITYSDK_OFFSET(0x15BBA520)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP244_OFFSET UNITYSDK_OFFSET(0x15BBA760)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP245_OFFSET UNITYSDK_OFFSET(0x15BBAA80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP246_OFFSET UNITYSDK_OFFSET(0x15BBAE10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP247_OFFSET UNITYSDK_OFFSET(0x15BBB050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP248_OFFSET UNITYSDK_OFFSET(0x15BBB290)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP249_OFFSET UNITYSDK_OFFSET(0x15BBB630)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP24_OFFSET UNITYSDK_OFFSET(0x15B93D00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP250_OFFSET UNITYSDK_OFFSET(0x15BBB9D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP251_OFFSET UNITYSDK_OFFSET(0x15BBBC10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP252_OFFSET UNITYSDK_OFFSET(0x15BBBF40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP253_OFFSET UNITYSDK_OFFSET(0x15BBC180)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP254_OFFSET UNITYSDK_OFFSET(0x15BBC480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP255_OFFSET UNITYSDK_OFFSET(0x15BBC6C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP256_OFFSET UNITYSDK_OFFSET(0x15BBC9A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP257_OFFSET UNITYSDK_OFFSET(0x15BBCC80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP258_OFFSET UNITYSDK_OFFSET(0x15BBCEC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP259_OFFSET UNITYSDK_OFFSET(0x15BBD1E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP25_OFFSET UNITYSDK_OFFSET(0x15B93FB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP260_OFFSET UNITYSDK_OFFSET(0x15BBD4C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP261_OFFSET UNITYSDK_OFFSET(0x15BBD700)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP262_OFFSET UNITYSDK_OFFSET(0x15BBDA20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP263_OFFSET UNITYSDK_OFFSET(0x15BBDC90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP264_OFFSET UNITYSDK_OFFSET(0x15BBDF70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP265_OFFSET UNITYSDK_OFFSET(0x15BBE250)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP266_OFFSET UNITYSDK_OFFSET(0x15BBE490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP267_OFFSET UNITYSDK_OFFSET(0x15BBE7B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP268_OFFSET UNITYSDK_OFFSET(0x15BBEA90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP269_OFFSET UNITYSDK_OFFSET(0x15BBECD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP26_OFFSET UNITYSDK_OFFSET(0x15B942D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP270_OFFSET UNITYSDK_OFFSET(0x15BBEFF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP271_OFFSET UNITYSDK_OFFSET(0x15BBF230)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP272_OFFSET UNITYSDK_OFFSET(0x15BBF4B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP273_OFFSET UNITYSDK_OFFSET(0x15BBF790)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP274_OFFSET UNITYSDK_OFFSET(0x15BBF9D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP275_OFFSET UNITYSDK_OFFSET(0x15BBFCF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP276_OFFSET UNITYSDK_OFFSET(0x15BBFFD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP277_OFFSET UNITYSDK_OFFSET(0x15BC0210)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP278_OFFSET UNITYSDK_OFFSET(0x15BC0530)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP279_OFFSET UNITYSDK_OFFSET(0x15BC0860)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP27_OFFSET UNITYSDK_OFFSET(0x15B94590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP280_OFFSET UNITYSDK_OFFSET(0x15BC0AF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP281_OFFSET UNITYSDK_OFFSET(0x15BC0E80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP282_OFFSET UNITYSDK_OFFSET(0x15BC1160)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP283_OFFSET UNITYSDK_OFFSET(0x15BC13A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP284_OFFSET UNITYSDK_OFFSET(0x15BC16C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP285_OFFSET UNITYSDK_OFFSET(0x15BC1B20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP286_OFFSET UNITYSDK_OFFSET(0x15BC1DC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP287_OFFSET UNITYSDK_OFFSET(0x15BC20A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP288_OFFSET UNITYSDK_OFFSET(0x15BC22E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP289_OFFSET UNITYSDK_OFFSET(0x15BC2600)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP28_OFFSET UNITYSDK_OFFSET(0x15B948B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP290_OFFSET UNITYSDK_OFFSET(0x15BC2840)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP291_OFFSET UNITYSDK_OFFSET(0x15BC2AF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP292_OFFSET UNITYSDK_OFFSET(0x15BC2D30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP293_OFFSET UNITYSDK_OFFSET(0x15BC3040)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP294_OFFSET UNITYSDK_OFFSET(0x15BC3280)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP295_OFFSET UNITYSDK_OFFSET(0x15BC3560)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP296_OFFSET UNITYSDK_OFFSET(0x15BC37A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP297_OFFSET UNITYSDK_OFFSET(0x15BC3AC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP298_OFFSET UNITYSDK_OFFSET(0x15BC3D20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP299_OFFSET UNITYSDK_OFFSET(0x15BC3F60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP29_OFFSET UNITYSDK_OFFSET(0x15B94B80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP2_OFFSET UNITYSDK_OFFSET(0x15B90590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP300_OFFSET UNITYSDK_OFFSET(0x15BC4220)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP301_OFFSET UNITYSDK_OFFSET(0x15BC4500)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP302_OFFSET UNITYSDK_OFFSET(0x15BC4740)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP303_OFFSET UNITYSDK_OFFSET(0x15BC4A60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP304_OFFSET UNITYSDK_OFFSET(0x15BC4CA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP305_OFFSET UNITYSDK_OFFSET(0x15BC4EE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP306_OFFSET UNITYSDK_OFFSET(0x15BC5120)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP307_OFFSET UNITYSDK_OFFSET(0x15BC5360)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP308_OFFSET UNITYSDK_OFFSET(0x15BC55A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP309_OFFSET UNITYSDK_OFFSET(0x15BC58D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP30_OFFSET UNITYSDK_OFFSET(0x15B94E50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP310_OFFSET UNITYSDK_OFFSET(0x15BC5B60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP311_OFFSET UNITYSDK_OFFSET(0x15BC5EF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP312_OFFSET UNITYSDK_OFFSET(0x15BC61D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP313_OFFSET UNITYSDK_OFFSET(0x15BC6410)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP314_OFFSET UNITYSDK_OFFSET(0x15BC6730)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP315_OFFSET UNITYSDK_OFFSET(0x15BC6A00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP316_OFFSET UNITYSDK_OFFSET(0x15BC6C40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP317_OFFSET UNITYSDK_OFFSET(0x15BC6F20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP318_OFFSET UNITYSDK_OFFSET(0x15BC7160)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP319_OFFSET UNITYSDK_OFFSET(0x15BC7480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP31_OFFSET UNITYSDK_OFFSET(0x15B95120)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP320_OFFSET UNITYSDK_OFFSET(0x15BC7830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP321_OFFSET UNITYSDK_OFFSET(0x15BC7B00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP322_OFFSET UNITYSDK_OFFSET(0x15BC7DB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP323_OFFSET UNITYSDK_OFFSET(0x15BC7FF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP324_OFFSET UNITYSDK_OFFSET(0x15BC8230)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP325_OFFSET UNITYSDK_OFFSET(0x15BC84D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP326_OFFSET UNITYSDK_OFFSET(0x15BC87B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP327_OFFSET UNITYSDK_OFFSET(0x15BC89F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP328_OFFSET UNITYSDK_OFFSET(0x15BC8D10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP329_OFFSET UNITYSDK_OFFSET(0x15BC8F90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP32_OFFSET UNITYSDK_OFFSET(0x15B953B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP330_OFFSET UNITYSDK_OFFSET(0x15BC9270)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP331_OFFSET UNITYSDK_OFFSET(0x15BC94B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP332_OFFSET UNITYSDK_OFFSET(0x15BC97D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP333_OFFSET UNITYSDK_OFFSET(0x15BC9B20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP334_OFFSET UNITYSDK_OFFSET(0x15BC9DD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP335_OFFSET UNITYSDK_OFFSET(0x15BCA1F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP336_OFFSET UNITYSDK_OFFSET(0x15BCA4D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP337_OFFSET UNITYSDK_OFFSET(0x15BCA710)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP338_OFFSET UNITYSDK_OFFSET(0x15BCAA30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP339_OFFSET UNITYSDK_OFFSET(0x15BCAD10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP33_OFFSET UNITYSDK_OFFSET(0x15B95630)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP340_OFFSET UNITYSDK_OFFSET(0x15BCAF50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP341_OFFSET UNITYSDK_OFFSET(0x15BCB270)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP342_OFFSET UNITYSDK_OFFSET(0x15BCB550)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP343_OFFSET UNITYSDK_OFFSET(0x15BCB790)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP344_OFFSET UNITYSDK_OFFSET(0x15BCBAB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP345_OFFSET UNITYSDK_OFFSET(0x15BCBD90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP346_OFFSET UNITYSDK_OFFSET(0x15BCBFD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP347_OFFSET UNITYSDK_OFFSET(0x15BCC2F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP348_OFFSET UNITYSDK_OFFSET(0x15BCC530)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP349_OFFSET UNITYSDK_OFFSET(0x15BCC830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP34_OFFSET UNITYSDK_OFFSET(0x15B958D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP350_OFFSET UNITYSDK_OFFSET(0x15BCCB10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP351_OFFSET UNITYSDK_OFFSET(0x15BCCD50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP352_OFFSET UNITYSDK_OFFSET(0x15BCD070)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP353_OFFSET UNITYSDK_OFFSET(0x15BCD2B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP354_OFFSET UNITYSDK_OFFSET(0x15BCD550)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP355_OFFSET UNITYSDK_OFFSET(0x15BCD830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP356_OFFSET UNITYSDK_OFFSET(0x15BCDA70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP357_OFFSET UNITYSDK_OFFSET(0x15BCDD90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP358_OFFSET UNITYSDK_OFFSET(0x15BCE070)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP359_OFFSET UNITYSDK_OFFSET(0x15BCE2B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP35_OFFSET UNITYSDK_OFFSET(0x15B95C00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP360_OFFSET UNITYSDK_OFFSET(0x15BCE5D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP361_OFFSET UNITYSDK_OFFSET(0x15BCE970)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP362_OFFSET UNITYSDK_OFFSET(0x15BCEBA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP363_OFFSET UNITYSDK_OFFSET(0x15BCEEC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP364_OFFSET UNITYSDK_OFFSET(0x15BCF1A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP365_OFFSET UNITYSDK_OFFSET(0x15BCF3D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP366_OFFSET UNITYSDK_OFFSET(0x15BCF6F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP367_OFFSET UNITYSDK_OFFSET(0x15BCF9D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP368_OFFSET UNITYSDK_OFFSET(0x15BCFC00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP369_OFFSET UNITYSDK_OFFSET(0x15BCFF20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP36_OFFSET UNITYSDK_OFFSET(0x15B95EC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP370_OFFSET UNITYSDK_OFFSET(0x15BD0200)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP371_OFFSET UNITYSDK_OFFSET(0x15BD0430)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP372_OFFSET UNITYSDK_OFFSET(0x15BD0750)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP373_OFFSET UNITYSDK_OFFSET(0x15BD0A10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP374_OFFSET UNITYSDK_OFFSET(0x15BD0CC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP375_OFFSET UNITYSDK_OFFSET(0x15BD0EF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP376_OFFSET UNITYSDK_OFFSET(0x15BD1150)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP377_OFFSET UNITYSDK_OFFSET(0x15BD1430)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP378_OFFSET UNITYSDK_OFFSET(0x15BD1660)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP379_OFFSET UNITYSDK_OFFSET(0x15BD1980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP37_OFFSET UNITYSDK_OFFSET(0x15B96170)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP380_OFFSET UNITYSDK_OFFSET(0x15BD1C60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP381_OFFSET UNITYSDK_OFFSET(0x15BD1E90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP382_OFFSET UNITYSDK_OFFSET(0x15BD21B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP383_OFFSET UNITYSDK_OFFSET(0x15BD2490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP384_OFFSET UNITYSDK_OFFSET(0x15BD26C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP385_OFFSET UNITYSDK_OFFSET(0x15BD29E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP386_OFFSET UNITYSDK_OFFSET(0x15BD2C30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP387_OFFSET UNITYSDK_OFFSET(0x15BD2E80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP388_OFFSET UNITYSDK_OFFSET(0x15BD3160)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP389_OFFSET UNITYSDK_OFFSET(0x15BD3390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP38_OFFSET UNITYSDK_OFFSET(0x15B963E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP390_OFFSET UNITYSDK_OFFSET(0x15BD36B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP391_OFFSET UNITYSDK_OFFSET(0x15BD3990)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP392_OFFSET UNITYSDK_OFFSET(0x15BD3BC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP393_OFFSET UNITYSDK_OFFSET(0x15BD3EE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP394_OFFSET UNITYSDK_OFFSET(0x15BD4230)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP395_OFFSET UNITYSDK_OFFSET(0x15BD44D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP396_OFFSET UNITYSDK_OFFSET(0x15BD48F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP397_OFFSET UNITYSDK_OFFSET(0x15BD4BE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP398_OFFSET UNITYSDK_OFFSET(0x15BD4E20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP399_OFFSET UNITYSDK_OFFSET(0x15BD5150)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP39_OFFSET UNITYSDK_OFFSET(0x15B96650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP3_OFFSET UNITYSDK_OFFSET(0x15B90830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP400_OFFSET UNITYSDK_OFFSET(0x15BD5460)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP401_OFFSET UNITYSDK_OFFSET(0x15BD5800)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP402_OFFSET UNITYSDK_OFFSET(0x15BD5AE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP403_OFFSET UNITYSDK_OFFSET(0x15BD5D10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP404_OFFSET UNITYSDK_OFFSET(0x15BD6030)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP405_OFFSET UNITYSDK_OFFSET(0x15BD6310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP406_OFFSET UNITYSDK_OFFSET(0x15BD6540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP407_OFFSET UNITYSDK_OFFSET(0x15BD6860)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP408_OFFSET UNITYSDK_OFFSET(0x15BD6B40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP409_OFFSET UNITYSDK_OFFSET(0x15BD6D70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP40_OFFSET UNITYSDK_OFFSET(0x15B96A90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP410_OFFSET UNITYSDK_OFFSET(0x15BD7090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP411_OFFSET UNITYSDK_OFFSET(0x15BD7370)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP412_OFFSET UNITYSDK_OFFSET(0x15BD75A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP413_OFFSET UNITYSDK_OFFSET(0x15BD78C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP414_OFFSET UNITYSDK_OFFSET(0x15BD7BA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP415_OFFSET UNITYSDK_OFFSET(0x15BD7DD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP416_OFFSET UNITYSDK_OFFSET(0x15BD80F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP417_OFFSET UNITYSDK_OFFSET(0x15BD8400)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP418_OFFSET UNITYSDK_OFFSET(0x15BD8680)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP419_OFFSET UNITYSDK_OFFSET(0x15BD88B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP41_OFFSET UNITYSDK_OFFSET(0x15B96FB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP420_OFFSET UNITYSDK_OFFSET(0x15BD8B00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP421_OFFSET UNITYSDK_OFFSET(0x15BD8DC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP422_OFFSET UNITYSDK_OFFSET(0x15BD90A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP423_OFFSET UNITYSDK_OFFSET(0x15BD92D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP424_OFFSET UNITYSDK_OFFSET(0x15BD95F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP425_OFFSET UNITYSDK_OFFSET(0x15BD98D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP426_OFFSET UNITYSDK_OFFSET(0x15BD9B00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP427_OFFSET UNITYSDK_OFFSET(0x15BD9E20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP428_OFFSET UNITYSDK_OFFSET(0x15BDA0A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP429_OFFSET UNITYSDK_OFFSET(0x15BDA380)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP42_OFFSET UNITYSDK_OFFSET(0x15B973F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP430_OFFSET UNITYSDK_OFFSET(0x15BDA5B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP431_OFFSET UNITYSDK_OFFSET(0x15BDA8D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP432_OFFSET UNITYSDK_OFFSET(0x15BDABB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP433_OFFSET UNITYSDK_OFFSET(0x15BDADE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP434_OFFSET UNITYSDK_OFFSET(0x15BDB100)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP435_OFFSET UNITYSDK_OFFSET(0x15BDB3E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP436_OFFSET UNITYSDK_OFFSET(0x15BDB610)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP437_OFFSET UNITYSDK_OFFSET(0x15BDB930)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP438_OFFSET UNITYSDK_OFFSET(0x15BDBC10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP439_OFFSET UNITYSDK_OFFSET(0x15BDBE40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP43_OFFSET UNITYSDK_OFFSET(0x15B97820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP440_OFFSET UNITYSDK_OFFSET(0x15BDC160)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP441_OFFSET UNITYSDK_OFFSET(0x15BDC390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP442_OFFSET UNITYSDK_OFFSET(0x15BDC670)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP443_OFFSET UNITYSDK_OFFSET(0x15BDC8A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP444_OFFSET UNITYSDK_OFFSET(0x15BDCBC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP445_OFFSET UNITYSDK_OFFSET(0x15BDCEA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP446_OFFSET UNITYSDK_OFFSET(0x15BDD0D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP447_OFFSET UNITYSDK_OFFSET(0x15BDD3F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP448_OFFSET UNITYSDK_OFFSET(0x15BDD6D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP449_OFFSET UNITYSDK_OFFSET(0x15BDD900)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP44_OFFSET UNITYSDK_OFFSET(0x15B97C90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP450_OFFSET UNITYSDK_OFFSET(0x15BDDC20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP451_OFFSET UNITYSDK_OFFSET(0x15BDDF00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP452_OFFSET UNITYSDK_OFFSET(0x15BDE130)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP453_OFFSET UNITYSDK_OFFSET(0x15BDE450)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP454_OFFSET UNITYSDK_OFFSET(0x15BDE680)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP455_OFFSET UNITYSDK_OFFSET(0x15BDE8D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP456_OFFSET UNITYSDK_OFFSET(0x15BDEBB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP457_OFFSET UNITYSDK_OFFSET(0x15BDEDE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP458_OFFSET UNITYSDK_OFFSET(0x15BDF100)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP459_OFFSET UNITYSDK_OFFSET(0x15BDF400)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP45_OFFSET UNITYSDK_OFFSET(0x15B97FE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP460_OFFSET UNITYSDK_OFFSET(0x15BDF650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP461_OFFSET UNITYSDK_OFFSET(0x15BDF9B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP462_OFFSET UNITYSDK_OFFSET(0x15BDFC90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP463_OFFSET UNITYSDK_OFFSET(0x15BDFEC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP464_OFFSET UNITYSDK_OFFSET(0x15BE01E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP465_OFFSET UNITYSDK_OFFSET(0x15BE04C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP466_OFFSET UNITYSDK_OFFSET(0x15BE06F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP467_OFFSET UNITYSDK_OFFSET(0x15BE0A10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP468_OFFSET UNITYSDK_OFFSET(0x15BE0CF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP469_OFFSET UNITYSDK_OFFSET(0x15BE0F20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP46_OFFSET UNITYSDK_OFFSET(0x15B98370)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP470_OFFSET UNITYSDK_OFFSET(0x15BE1240)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP471_OFFSET UNITYSDK_OFFSET(0x15BE1520)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP472_OFFSET UNITYSDK_OFFSET(0x15BE1750)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP473_OFFSET UNITYSDK_OFFSET(0x15BE1A70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP474_OFFSET UNITYSDK_OFFSET(0x15BE1D50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP475_OFFSET UNITYSDK_OFFSET(0x15BE1F80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP476_OFFSET UNITYSDK_OFFSET(0x15BE22A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP477_OFFSET UNITYSDK_OFFSET(0x15BE2580)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP478_OFFSET UNITYSDK_OFFSET(0x15BE27B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP479_OFFSET UNITYSDK_OFFSET(0x15BE2AD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP47_OFFSET UNITYSDK_OFFSET(0x15B98690)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP480_OFFSET UNITYSDK_OFFSET(0x15BE2D00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP481_OFFSET UNITYSDK_OFFSET(0x15BE2F30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP482_OFFSET UNITYSDK_OFFSET(0x15BE3210)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP483_OFFSET UNITYSDK_OFFSET(0x15BE3440)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP484_OFFSET UNITYSDK_OFFSET(0x15BE3760)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP485_OFFSET UNITYSDK_OFFSET(0x15BE3A40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP486_OFFSET UNITYSDK_OFFSET(0x15BE3C70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP487_OFFSET UNITYSDK_OFFSET(0x15BE3F90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP488_OFFSET UNITYSDK_OFFSET(0x15BE4270)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP489_OFFSET UNITYSDK_OFFSET(0x15BE44A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP48_OFFSET UNITYSDK_OFFSET(0x15B98950)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP490_OFFSET UNITYSDK_OFFSET(0x15BE47C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP491_OFFSET UNITYSDK_OFFSET(0x15BE4AA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP492_OFFSET UNITYSDK_OFFSET(0x15BE4CD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP493_OFFSET UNITYSDK_OFFSET(0x15BE4FF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP494_OFFSET UNITYSDK_OFFSET(0x15BE5290)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP495_OFFSET UNITYSDK_OFFSET(0x15BE54F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP496_OFFSET UNITYSDK_OFFSET(0x15BE58A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP497_OFFSET UNITYSDK_OFFSET(0x15BE5BC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP498_OFFSET UNITYSDK_OFFSET(0x15BE5EA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP499_OFFSET UNITYSDK_OFFSET(0x15BE60D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP49_OFFSET UNITYSDK_OFFSET(0x15B98C50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP4_OFFSET UNITYSDK_OFFSET(0x15B90B30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP500_OFFSET UNITYSDK_OFFSET(0x15BE63F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP501_OFFSET UNITYSDK_OFFSET(0x15BE66D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP502_OFFSET UNITYSDK_OFFSET(0x15BE6900)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP503_OFFSET UNITYSDK_OFFSET(0x15BE6C20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP504_OFFSET UNITYSDK_OFFSET(0x15BE6F00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP505_OFFSET UNITYSDK_OFFSET(0x15BE7130)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP506_OFFSET UNITYSDK_OFFSET(0x15BE7450)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP507_OFFSET UNITYSDK_OFFSET(0x15BE77C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP508_OFFSET UNITYSDK_OFFSET(0x15BE7A10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP509_OFFSET UNITYSDK_OFFSET(0x15BE7C40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP50_OFFSET UNITYSDK_OFFSET(0x15B98E90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP510_OFFSET UNITYSDK_OFFSET(0x15BE7F10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP511_OFFSET UNITYSDK_OFFSET(0x15BE81D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP512_OFFSET UNITYSDK_OFFSET(0x15BE84B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP513_OFFSET UNITYSDK_OFFSET(0x15BE86E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP514_OFFSET UNITYSDK_OFFSET(0x15BE8A00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP515_OFFSET UNITYSDK_OFFSET(0x15BE8CE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP516_OFFSET UNITYSDK_OFFSET(0x15BE8F10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP517_OFFSET UNITYSDK_OFFSET(0x15BE9230)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP518_OFFSET UNITYSDK_OFFSET(0x15BE94D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP519_OFFSET UNITYSDK_OFFSET(0x15BE97B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP51_OFFSET UNITYSDK_OFFSET(0x15B990B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP520_OFFSET UNITYSDK_OFFSET(0x15BE99E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP521_OFFSET UNITYSDK_OFFSET(0x15BE9D00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP522_OFFSET UNITYSDK_OFFSET(0x15BEA090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP523_OFFSET UNITYSDK_OFFSET(0x15BEA370)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP524_OFFSET UNITYSDK_OFFSET(0x15BEA5A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP525_OFFSET UNITYSDK_OFFSET(0x15BEA8C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP526_OFFSET UNITYSDK_OFFSET(0x15BEABA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP527_OFFSET UNITYSDK_OFFSET(0x15BEADD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP528_OFFSET UNITYSDK_OFFSET(0x15BEB0F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP529_OFFSET UNITYSDK_OFFSET(0x15BEB3D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP52_OFFSET UNITYSDK_OFFSET(0x15B992F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP530_OFFSET UNITYSDK_OFFSET(0x15BEB600)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP531_OFFSET UNITYSDK_OFFSET(0x15BEB920)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP532_OFFSET UNITYSDK_OFFSET(0x15BEBC00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP533_OFFSET UNITYSDK_OFFSET(0x15BEBE30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP534_OFFSET UNITYSDK_OFFSET(0x15BEC150)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP535_OFFSET UNITYSDK_OFFSET(0x15BEC3A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP536_OFFSET UNITYSDK_OFFSET(0x15BEC5F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP537_OFFSET UNITYSDK_OFFSET(0x15BEC840)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP538_OFFSET UNITYSDK_OFFSET(0x15BECA90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP539_OFFSET UNITYSDK_OFFSET(0x15BECCE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP53_OFFSET UNITYSDK_OFFSET(0x15B99630)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP540_OFFSET UNITYSDK_OFFSET(0x15BECF30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP541_OFFSET UNITYSDK_OFFSET(0x15BED180)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP542_OFFSET UNITYSDK_OFFSET(0x15BED3D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP543_OFFSET UNITYSDK_OFFSET(0x15BED620)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP544_OFFSET UNITYSDK_OFFSET(0x15BED870)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP545_OFFSET UNITYSDK_OFFSET(0x15BEDAC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP546_OFFSET UNITYSDK_OFFSET(0x15BEDD10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP547_OFFSET UNITYSDK_OFFSET(0x15BEDF60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP548_OFFSET UNITYSDK_OFFSET(0x15BEE1B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP549_OFFSET UNITYSDK_OFFSET(0x15BEE400)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP54_OFFSET UNITYSDK_OFFSET(0x15B998E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP550_OFFSET UNITYSDK_OFFSET(0x15BEE650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP551_OFFSET UNITYSDK_OFFSET(0x15BEE8A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP552_OFFSET UNITYSDK_OFFSET(0x15BEEAF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP553_OFFSET UNITYSDK_OFFSET(0x15BEEDD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP554_OFFSET UNITYSDK_OFFSET(0x15BEF000)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP555_OFFSET UNITYSDK_OFFSET(0x15BEF320)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP556_OFFSET UNITYSDK_OFFSET(0x15BEF600)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP557_OFFSET UNITYSDK_OFFSET(0x15BEF830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP558_OFFSET UNITYSDK_OFFSET(0x15BEFB50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP559_OFFSET UNITYSDK_OFFSET(0x15BEFE30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP55_OFFSET UNITYSDK_OFFSET(0x15B99B90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP560_OFFSET UNITYSDK_OFFSET(0x15BF0060)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP561_OFFSET UNITYSDK_OFFSET(0x15BF0340)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP562_OFFSET UNITYSDK_OFFSET(0x15BF0570)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP563_OFFSET UNITYSDK_OFFSET(0x15BF0890)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP564_OFFSET UNITYSDK_OFFSET(0x15BF0B70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP565_OFFSET UNITYSDK_OFFSET(0x15BF0DA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP566_OFFSET UNITYSDK_OFFSET(0x15BF10C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP567_OFFSET UNITYSDK_OFFSET(0x15BF13A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP568_OFFSET UNITYSDK_OFFSET(0x15BF15D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP569_OFFSET UNITYSDK_OFFSET(0x15BF18F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP56_OFFSET UNITYSDK_OFFSET(0x15B99EB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP570_OFFSET UNITYSDK_OFFSET(0x15BF1B40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP571_OFFSET UNITYSDK_OFFSET(0x15BF1D70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP572_OFFSET UNITYSDK_OFFSET(0x15BF2090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP573_OFFSET UNITYSDK_OFFSET(0x15BF2370)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP574_OFFSET UNITYSDK_OFFSET(0x15BF25A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP575_OFFSET UNITYSDK_OFFSET(0x15BF28C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP576_OFFSET UNITYSDK_OFFSET(0x15BF2BA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP577_OFFSET UNITYSDK_OFFSET(0x15BF2DD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP578_OFFSET UNITYSDK_OFFSET(0x15BF30F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP579_OFFSET UNITYSDK_OFFSET(0x15BF33D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP57_OFFSET UNITYSDK_OFFSET(0x15B9A130)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP580_OFFSET UNITYSDK_OFFSET(0x15BF3600)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP581_OFFSET UNITYSDK_OFFSET(0x15BF3920)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP582_OFFSET UNITYSDK_OFFSET(0x15BF3C00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP583_OFFSET UNITYSDK_OFFSET(0x15BF3E30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP584_OFFSET UNITYSDK_OFFSET(0x15BF4150)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP585_OFFSET UNITYSDK_OFFSET(0x15BF4430)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP586_OFFSET UNITYSDK_OFFSET(0x15BF4660)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP587_OFFSET UNITYSDK_OFFSET(0x15BF4980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP588_OFFSET UNITYSDK_OFFSET(0x15BF4C60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP589_OFFSET UNITYSDK_OFFSET(0x15BF4E90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP58_OFFSET UNITYSDK_OFFSET(0x15B9A380)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP590_OFFSET UNITYSDK_OFFSET(0x15BF51B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP591_OFFSET UNITYSDK_OFFSET(0x15BF54C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP592_OFFSET UNITYSDK_OFFSET(0x15BF5720)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP593_OFFSET UNITYSDK_OFFSET(0x15BF5AC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP594_OFFSET UNITYSDK_OFFSET(0x15BF5DA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP595_OFFSET UNITYSDK_OFFSET(0x15BF5FD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP596_OFFSET UNITYSDK_OFFSET(0x15BF62F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP597_OFFSET UNITYSDK_OFFSET(0x15BF65D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP598_OFFSET UNITYSDK_OFFSET(0x15BF6800)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP599_OFFSET UNITYSDK_OFFSET(0x15BF6B20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP59_OFFSET UNITYSDK_OFFSET(0x15B9A5B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP5_OFFSET UNITYSDK_OFFSET(0x15B90D30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP600_OFFSET UNITYSDK_OFFSET(0x15BF6DC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP601_OFFSET UNITYSDK_OFFSET(0x15BF70A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP602_OFFSET UNITYSDK_OFFSET(0x15BF72D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP603_OFFSET UNITYSDK_OFFSET(0x15BF75F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP604_OFFSET UNITYSDK_OFFSET(0x15BF78D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP605_OFFSET UNITYSDK_OFFSET(0x15BF7B00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP606_OFFSET UNITYSDK_OFFSET(0x15BF7E20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP607_OFFSET UNITYSDK_OFFSET(0x15BF8100)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP608_OFFSET UNITYSDK_OFFSET(0x15BF8330)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP609_OFFSET UNITYSDK_OFFSET(0x15BF8650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP60_OFFSET UNITYSDK_OFFSET(0x15B9A8C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP610_OFFSET UNITYSDK_OFFSET(0x15BF8890)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP611_OFFSET UNITYSDK_OFFSET(0x15BF8B70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP612_OFFSET UNITYSDK_OFFSET(0x15BF8DA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP613_OFFSET UNITYSDK_OFFSET(0x15BF90C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP614_OFFSET UNITYSDK_OFFSET(0x15BF93A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP615_OFFSET UNITYSDK_OFFSET(0x15BF95D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP616_OFFSET UNITYSDK_OFFSET(0x15BF98F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP617_OFFSET UNITYSDK_OFFSET(0x15BF9BD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP618_OFFSET UNITYSDK_OFFSET(0x15BF9E00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP619_OFFSET UNITYSDK_OFFSET(0x15BFA120)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP61_OFFSET UNITYSDK_OFFSET(0x15B9AB70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP620_OFFSET UNITYSDK_OFFSET(0x15BFA400)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP621_OFFSET UNITYSDK_OFFSET(0x15BFA630)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP622_OFFSET UNITYSDK_OFFSET(0x15BFA950)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP623_OFFSET UNITYSDK_OFFSET(0x15BFAC30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP624_OFFSET UNITYSDK_OFFSET(0x15BFAE60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP625_OFFSET UNITYSDK_OFFSET(0x15BFB180)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP626_OFFSET UNITYSDK_OFFSET(0x15BFB460)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP627_OFFSET UNITYSDK_OFFSET(0x15BFB690)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP628_OFFSET UNITYSDK_OFFSET(0x15BFB9B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP629_OFFSET UNITYSDK_OFFSET(0x15BFBC90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP62_OFFSET UNITYSDK_OFFSET(0x15B9AEB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP630_OFFSET UNITYSDK_OFFSET(0x15BFBEC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP631_OFFSET UNITYSDK_OFFSET(0x15BFC1E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP632_OFFSET UNITYSDK_OFFSET(0x15BFC4C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP633_OFFSET UNITYSDK_OFFSET(0x15BFC6F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP634_OFFSET UNITYSDK_OFFSET(0x15BFCA10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP635_OFFSET UNITYSDK_OFFSET(0x15BFCCF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP636_OFFSET UNITYSDK_OFFSET(0x15BFCF20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP637_OFFSET UNITYSDK_OFFSET(0x15BFD240)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP638_OFFSET UNITYSDK_OFFSET(0x15BFD470)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP639_OFFSET UNITYSDK_OFFSET(0x15BFD6A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP63_OFFSET UNITYSDK_OFFSET(0x15B9B250)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP640_OFFSET UNITYSDK_OFFSET(0x15BFD980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP641_OFFSET UNITYSDK_OFFSET(0x15BFDC60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP642_OFFSET UNITYSDK_OFFSET(0x15BFDEB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP643_OFFSET UNITYSDK_OFFSET(0x15BFE100)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP644_OFFSET UNITYSDK_OFFSET(0x15BFE3E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP645_OFFSET UNITYSDK_OFFSET(0x15BFE610)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP646_OFFSET UNITYSDK_OFFSET(0x15BFE930)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP647_OFFSET UNITYSDK_OFFSET(0x15BFEC50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP648_OFFSET UNITYSDK_OFFSET(0x15BFEF30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP649_OFFSET UNITYSDK_OFFSET(0x15BFF160)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP64_OFFSET UNITYSDK_OFFSET(0x15B9B590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP650_OFFSET UNITYSDK_OFFSET(0x15BFF480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP651_OFFSET UNITYSDK_OFFSET(0x15BFF760)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP652_OFFSET UNITYSDK_OFFSET(0x15BFF990)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP653_OFFSET UNITYSDK_OFFSET(0x15BFFCB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP654_OFFSET UNITYSDK_OFFSET(0x15BFFF90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP655_OFFSET UNITYSDK_OFFSET(0x15C001C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP656_OFFSET UNITYSDK_OFFSET(0x15C004E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP657_OFFSET UNITYSDK_OFFSET(0x15C007C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP658_OFFSET UNITYSDK_OFFSET(0x15C009F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP659_OFFSET UNITYSDK_OFFSET(0x15C00D10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP65_OFFSET UNITYSDK_OFFSET(0x15B9B840)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP660_OFFSET UNITYSDK_OFFSET(0x15C00FF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP661_OFFSET UNITYSDK_OFFSET(0x15C01220)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP662_OFFSET UNITYSDK_OFFSET(0x15C01540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP663_OFFSET UNITYSDK_OFFSET(0x15C01860)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP664_OFFSET UNITYSDK_OFFSET(0x15C01B40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP665_OFFSET UNITYSDK_OFFSET(0x15C01D70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP666_OFFSET UNITYSDK_OFFSET(0x15C02090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP667_OFFSET UNITYSDK_OFFSET(0x15C022C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP668_OFFSET UNITYSDK_OFFSET(0x15C025A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP669_OFFSET UNITYSDK_OFFSET(0x15C027D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP66_OFFSET UNITYSDK_OFFSET(0x15B9BA80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP670_OFFSET UNITYSDK_OFFSET(0x15C02AF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP671_OFFSET UNITYSDK_OFFSET(0x15C02F60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP672_OFFSET UNITYSDK_OFFSET(0x15C03240)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP673_OFFSET UNITYSDK_OFFSET(0x15C03470)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP674_OFFSET UNITYSDK_OFFSET(0x15C03790)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP675_OFFSET UNITYSDK_OFFSET(0x15C03A70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP676_OFFSET UNITYSDK_OFFSET(0x15C03CA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP677_OFFSET UNITYSDK_OFFSET(0x15C03FC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP678_OFFSET UNITYSDK_OFFSET(0x15C041F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP679_OFFSET UNITYSDK_OFFSET(0x15C04510)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP67_OFFSET UNITYSDK_OFFSET(0x15B9BCC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP680_OFFSET UNITYSDK_OFFSET(0x15C047F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP681_OFFSET UNITYSDK_OFFSET(0x15C04A20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP682_OFFSET UNITYSDK_OFFSET(0x15C04D40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP683_OFFSET UNITYSDK_OFFSET(0x15C05020)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP684_OFFSET UNITYSDK_OFFSET(0x15C05250)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP685_OFFSET UNITYSDK_OFFSET(0x15C05570)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP686_OFFSET UNITYSDK_OFFSET(0x15C05880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP687_OFFSET UNITYSDK_OFFSET(0x15C05C20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP688_OFFSET UNITYSDK_OFFSET(0x15C05F00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP689_OFFSET UNITYSDK_OFFSET(0x15C06130)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP68_OFFSET UNITYSDK_OFFSET(0x15B9BF60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP690_OFFSET UNITYSDK_OFFSET(0x15C06450)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP691_OFFSET UNITYSDK_OFFSET(0x15C067A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP692_OFFSET UNITYSDK_OFFSET(0x15C06A40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP693_OFFSET UNITYSDK_OFFSET(0x15C06E20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP694_OFFSET UNITYSDK_OFFSET(0x15C07100)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP695_OFFSET UNITYSDK_OFFSET(0x15C07330)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP696_OFFSET UNITYSDK_OFFSET(0x15C07650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP697_OFFSET UNITYSDK_OFFSET(0x15C07880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP698_OFFSET UNITYSDK_OFFSET(0x15C07AB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP699_OFFSET UNITYSDK_OFFSET(0x15C07CE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP69_OFFSET UNITYSDK_OFFSET(0x15B9C1A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP6_OFFSET UNITYSDK_OFFSET(0x15B91010)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP700_OFFSET UNITYSDK_OFFSET(0x15C07F10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP701_OFFSET UNITYSDK_OFFSET(0x15C081F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP702_OFFSET UNITYSDK_OFFSET(0x15C08420)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP703_OFFSET UNITYSDK_OFFSET(0x15C08740)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP704_OFFSET UNITYSDK_OFFSET(0x15C08B40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP705_OFFSET UNITYSDK_OFFSET(0x15C08E20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP706_OFFSET UNITYSDK_OFFSET(0x15C09050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP707_OFFSET UNITYSDK_OFFSET(0x15C09370)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP708_OFFSET UNITYSDK_OFFSET(0x15C09650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP709_OFFSET UNITYSDK_OFFSET(0x15C09880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP70_OFFSET UNITYSDK_OFFSET(0x15B9C450)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP710_OFFSET UNITYSDK_OFFSET(0x15C09BA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP711_OFFSET UNITYSDK_OFFSET(0x15C09E80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP712_OFFSET UNITYSDK_OFFSET(0x15C0A0B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP713_OFFSET UNITYSDK_OFFSET(0x15C0A3D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP714_OFFSET UNITYSDK_OFFSET(0x15C0A600)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP715_OFFSET UNITYSDK_OFFSET(0x15C0A8E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP716_OFFSET UNITYSDK_OFFSET(0x15C0AB10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP717_OFFSET UNITYSDK_OFFSET(0x15C0AE30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP718_OFFSET UNITYSDK_OFFSET(0x15C0B110)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP719_OFFSET UNITYSDK_OFFSET(0x15C0B340)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP71_OFFSET UNITYSDK_OFFSET(0x15B9C710)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP720_OFFSET UNITYSDK_OFFSET(0x15C0B660)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP721_OFFSET UNITYSDK_OFFSET(0x15C0B940)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP722_OFFSET UNITYSDK_OFFSET(0x15C0BB70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP723_OFFSET UNITYSDK_OFFSET(0x15C0BE90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP724_OFFSET UNITYSDK_OFFSET(0x15C0C170)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP725_OFFSET UNITYSDK_OFFSET(0x15C0C3A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP726_OFFSET UNITYSDK_OFFSET(0x15C0C6C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP727_OFFSET UNITYSDK_OFFSET(0x15C0C9A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP728_OFFSET UNITYSDK_OFFSET(0x15C0CBD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP729_OFFSET UNITYSDK_OFFSET(0x15C0CEF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP72_OFFSET UNITYSDK_OFFSET(0x15B9C980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP730_OFFSET UNITYSDK_OFFSET(0x15C0D1D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP731_OFFSET UNITYSDK_OFFSET(0x15C0D400)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP732_OFFSET UNITYSDK_OFFSET(0x15C0D720)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP733_OFFSET UNITYSDK_OFFSET(0x15C0DA00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP734_OFFSET UNITYSDK_OFFSET(0x15C0DC30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP735_OFFSET UNITYSDK_OFFSET(0x15C0DF50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP736_OFFSET UNITYSDK_OFFSET(0x15C0E230)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP737_OFFSET UNITYSDK_OFFSET(0x15C0E460)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP738_OFFSET UNITYSDK_OFFSET(0x15C0E780)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP739_OFFSET UNITYSDK_OFFSET(0x15C0E9D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP73_OFFSET UNITYSDK_OFFSET(0x15B9CBC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP740_OFFSET UNITYSDK_OFFSET(0x15C0ECB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP741_OFFSET UNITYSDK_OFFSET(0x15C0EEE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP742_OFFSET UNITYSDK_OFFSET(0x15C0F200)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP743_OFFSET UNITYSDK_OFFSET(0x15C0F4E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP744_OFFSET UNITYSDK_OFFSET(0x15C0F710)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP745_OFFSET UNITYSDK_OFFSET(0x15C0FA30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP746_OFFSET UNITYSDK_OFFSET(0x15C0FD10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP747_OFFSET UNITYSDK_OFFSET(0x15C0FF40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP748_OFFSET UNITYSDK_OFFSET(0x15C10260)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP749_OFFSET UNITYSDK_OFFSET(0x15C10540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP74_OFFSET UNITYSDK_OFFSET(0x15B9CEA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP750_OFFSET UNITYSDK_OFFSET(0x15C10770)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP751_OFFSET UNITYSDK_OFFSET(0x15C10A90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP752_OFFSET UNITYSDK_OFFSET(0x15C10D70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP753_OFFSET UNITYSDK_OFFSET(0x15C10FA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP754_OFFSET UNITYSDK_OFFSET(0x15C112C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP755_OFFSET UNITYSDK_OFFSET(0x15C115A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP756_OFFSET UNITYSDK_OFFSET(0x15C117D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP757_OFFSET UNITYSDK_OFFSET(0x15C11AF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP758_OFFSET UNITYSDK_OFFSET(0x15C11D90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP759_OFFSET UNITYSDK_OFFSET(0x15C120A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP75_OFFSET UNITYSDK_OFFSET(0x15B9D120)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP760_OFFSET UNITYSDK_OFFSET(0x15C12380)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP761_OFFSET UNITYSDK_OFFSET(0x15C125B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP762_OFFSET UNITYSDK_OFFSET(0x15C128D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP763_OFFSET UNITYSDK_OFFSET(0x15C12BB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP764_OFFSET UNITYSDK_OFFSET(0x15C12DE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP765_OFFSET UNITYSDK_OFFSET(0x15C13100)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP766_OFFSET UNITYSDK_OFFSET(0x15C133E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP767_OFFSET UNITYSDK_OFFSET(0x15C13610)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP768_OFFSET UNITYSDK_OFFSET(0x15C13930)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP769_OFFSET UNITYSDK_OFFSET(0x15C13C70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP76_OFFSET UNITYSDK_OFFSET(0x15B9D390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP770_OFFSET UNITYSDK_OFFSET(0x15C13F00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP771_OFFSET UNITYSDK_OFFSET(0x15C142B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP772_OFFSET UNITYSDK_OFFSET(0x15C14590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP773_OFFSET UNITYSDK_OFFSET(0x15C147C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP774_OFFSET UNITYSDK_OFFSET(0x15C14AE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP775_OFFSET UNITYSDK_OFFSET(0x15C14DC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP776_OFFSET UNITYSDK_OFFSET(0x15C14FF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP777_OFFSET UNITYSDK_OFFSET(0x15C15310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP778_OFFSET UNITYSDK_OFFSET(0x15C155F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP779_OFFSET UNITYSDK_OFFSET(0x15C15820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP77_OFFSET UNITYSDK_OFFSET(0x15B9D610)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP780_OFFSET UNITYSDK_OFFSET(0x15C15B40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP781_OFFSET UNITYSDK_OFFSET(0x15C15E20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP782_OFFSET UNITYSDK_OFFSET(0x15C16050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP783_OFFSET UNITYSDK_OFFSET(0x15C16370)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP784_OFFSET UNITYSDK_OFFSET(0x15C16650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP785_OFFSET UNITYSDK_OFFSET(0x15C16880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP786_OFFSET UNITYSDK_OFFSET(0x15C16BA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP787_OFFSET UNITYSDK_OFFSET(0x15C16E80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP788_OFFSET UNITYSDK_OFFSET(0x15C170B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP789_OFFSET UNITYSDK_OFFSET(0x15C173D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP78_OFFSET UNITYSDK_OFFSET(0x15B9D8E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP790_OFFSET UNITYSDK_OFFSET(0x15C176B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP791_OFFSET UNITYSDK_OFFSET(0x15C178E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP792_OFFSET UNITYSDK_OFFSET(0x15C17C00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP793_OFFSET UNITYSDK_OFFSET(0x15C17EE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP794_OFFSET UNITYSDK_OFFSET(0x15C18110)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP795_OFFSET UNITYSDK_OFFSET(0x15C18430)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP796_OFFSET UNITYSDK_OFFSET(0x15C18710)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP797_OFFSET UNITYSDK_OFFSET(0x15C18940)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP798_OFFSET UNITYSDK_OFFSET(0x15C18C60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP799_OFFSET UNITYSDK_OFFSET(0x15C18F40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP79_OFFSET UNITYSDK_OFFSET(0x15B9DBB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP7_OFFSET UNITYSDK_OFFSET(0x15B91300)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP800_OFFSET UNITYSDK_OFFSET(0x15C19170)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP801_OFFSET UNITYSDK_OFFSET(0x15C19490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP802_OFFSET UNITYSDK_OFFSET(0x15C19780)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP803_OFFSET UNITYSDK_OFFSET(0x15C19A60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP804_OFFSET UNITYSDK_OFFSET(0x15C19C90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP805_OFFSET UNITYSDK_OFFSET(0x15C19FB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP806_OFFSET UNITYSDK_OFFSET(0x15C1A2F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP807_OFFSET UNITYSDK_OFFSET(0x15C1A580)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP808_OFFSET UNITYSDK_OFFSET(0x15C1A930)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP809_OFFSET UNITYSDK_OFFSET(0x15C1AB80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP80_OFFSET UNITYSDK_OFFSET(0x15B9DEF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP810_OFFSET UNITYSDK_OFFSET(0x15C1ADD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP811_OFFSET UNITYSDK_OFFSET(0x15C1B0B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP812_OFFSET UNITYSDK_OFFSET(0x15C1B2E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP813_OFFSET UNITYSDK_OFFSET(0x15C1B600)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP814_OFFSET UNITYSDK_OFFSET(0x15C1B830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP815_OFFSET UNITYSDK_OFFSET(0x15C1BB10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP816_OFFSET UNITYSDK_OFFSET(0x15C1BD40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP817_OFFSET UNITYSDK_OFFSET(0x15C1C060)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP818_OFFSET UNITYSDK_OFFSET(0x15C1C360)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP819_OFFSET UNITYSDK_OFFSET(0x15C1C5B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP81_OFFSET UNITYSDK_OFFSET(0x15B9E260)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP820_OFFSET UNITYSDK_OFFSET(0x15C1C900)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP821_OFFSET UNITYSDK_OFFSET(0x15C1CBE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP822_OFFSET UNITYSDK_OFFSET(0x15C1CE10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP823_OFFSET UNITYSDK_OFFSET(0x15C1D130)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP824_OFFSET UNITYSDK_OFFSET(0x15C1D380)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP825_OFFSET UNITYSDK_OFFSET(0x15C1D660)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP826_OFFSET UNITYSDK_OFFSET(0x15C1D890)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP827_OFFSET UNITYSDK_OFFSET(0x15C1DBB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP828_OFFSET UNITYSDK_OFFSET(0x15C1DDE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP829_OFFSET UNITYSDK_OFFSET(0x15C1E100)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP82_OFFSET UNITYSDK_OFFSET(0x15B9E4D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP830_OFFSET UNITYSDK_OFFSET(0x15C1E420)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP831_OFFSET UNITYSDK_OFFSET(0x15C1E700)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP832_OFFSET UNITYSDK_OFFSET(0x15C1E930)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP833_OFFSET UNITYSDK_OFFSET(0x15C1EC50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP834_OFFSET UNITYSDK_OFFSET(0x15C1EF30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP835_OFFSET UNITYSDK_OFFSET(0x15C1F160)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP836_OFFSET UNITYSDK_OFFSET(0x15C1F480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP837_OFFSET UNITYSDK_OFFSET(0x15C1F760)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP838_OFFSET UNITYSDK_OFFSET(0x15C1F990)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP839_OFFSET UNITYSDK_OFFSET(0x15C1FCB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP83_OFFSET UNITYSDK_OFFSET(0x15B9E710)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP840_OFFSET UNITYSDK_OFFSET(0x15C1FFB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP841_OFFSET UNITYSDK_OFFSET(0x15C20200)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP842_OFFSET UNITYSDK_OFFSET(0x15C20550)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP843_OFFSET UNITYSDK_OFFSET(0x15C20830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP844_OFFSET UNITYSDK_OFFSET(0x15C20A60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP845_OFFSET UNITYSDK_OFFSET(0x15C20DB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP846_OFFSET UNITYSDK_OFFSET(0x15C21050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP847_OFFSET UNITYSDK_OFFSET(0x15C21470)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP848_OFFSET UNITYSDK_OFFSET(0x15C21750)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP849_OFFSET UNITYSDK_OFFSET(0x15C21980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP84_OFFSET UNITYSDK_OFFSET(0x15B9E9C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP850_OFFSET UNITYSDK_OFFSET(0x15C21CA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP851_OFFSET UNITYSDK_OFFSET(0x15C21FB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP852_OFFSET UNITYSDK_OFFSET(0x15C22210)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP853_OFFSET UNITYSDK_OFFSET(0x15C22580)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP854_OFFSET UNITYSDK_OFFSET(0x15C227D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP855_OFFSET UNITYSDK_OFFSET(0x15C22A00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP856_OFFSET UNITYSDK_OFFSET(0x15C22D30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP857_OFFSET UNITYSDK_OFFSET(0x15C23060)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP858_OFFSET UNITYSDK_OFFSET(0x15C23340)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP859_OFFSET UNITYSDK_OFFSET(0x15C236D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP85_OFFSET UNITYSDK_OFFSET(0x15B9ECF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP860_OFFSET UNITYSDK_OFFSET(0x15C23A90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP861_OFFSET UNITYSDK_OFFSET(0x15C23CC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP862_OFFSET UNITYSDK_OFFSET(0x15C24030)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP863_OFFSET UNITYSDK_OFFSET(0x15C24360)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP864_OFFSET UNITYSDK_OFFSET(0x15C246C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP865_OFFSET UNITYSDK_OFFSET(0x15C248F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP866_OFFSET UNITYSDK_OFFSET(0x15C24C30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP867_OFFSET UNITYSDK_OFFSET(0x15C24F60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP868_OFFSET UNITYSDK_OFFSET(0x15C252C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP869_OFFSET UNITYSDK_OFFSET(0x15C254F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP86_OFFSET UNITYSDK_OFFSET(0x15B9EF90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP870_OFFSET UNITYSDK_OFFSET(0x15C25860)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP871_OFFSET UNITYSDK_OFFSET(0x15C25B90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP872_OFFSET UNITYSDK_OFFSET(0x15C25EF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP873_OFFSET UNITYSDK_OFFSET(0x15C26170)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP874_OFFSET UNITYSDK_OFFSET(0x15C26480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP875_OFFSET UNITYSDK_OFFSET(0x15C26800)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP876_OFFSET UNITYSDK_OFFSET(0x15C26B80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP877_OFFSET UNITYSDK_OFFSET(0x15C26DB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP878_OFFSET UNITYSDK_OFFSET(0x15C270F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP879_OFFSET UNITYSDK_OFFSET(0x15C27420)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP87_OFFSET UNITYSDK_OFFSET(0x15B9F1D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP880_OFFSET UNITYSDK_OFFSET(0x15C27780)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP881_OFFSET UNITYSDK_OFFSET(0x15C27AC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP882_OFFSET UNITYSDK_OFFSET(0x15C27DF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP883_OFFSET UNITYSDK_OFFSET(0x15C28150)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP884_OFFSET UNITYSDK_OFFSET(0x15C28380)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP885_OFFSET UNITYSDK_OFFSET(0x15C286C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP886_OFFSET UNITYSDK_OFFSET(0x15C289F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP887_OFFSET UNITYSDK_OFFSET(0x15C28D50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP888_OFFSET UNITYSDK_OFFSET(0x15C28F80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP889_OFFSET UNITYSDK_OFFSET(0x15C292F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP88_OFFSET UNITYSDK_OFFSET(0x15B9F480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP890_OFFSET UNITYSDK_OFFSET(0x15C29620)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP891_OFFSET UNITYSDK_OFFSET(0x15C29980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP892_OFFSET UNITYSDK_OFFSET(0x15C29BB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP893_OFFSET UNITYSDK_OFFSET(0x15C29F20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP894_OFFSET UNITYSDK_OFFSET(0x15C2A250)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP895_OFFSET UNITYSDK_OFFSET(0x15C2A5B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP896_OFFSET UNITYSDK_OFFSET(0x15C2A8F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP897_OFFSET UNITYSDK_OFFSET(0x15C2AC20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP898_OFFSET UNITYSDK_OFFSET(0x15C2AF80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP899_OFFSET UNITYSDK_OFFSET(0x15C2B1B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP89_OFFSET UNITYSDK_OFFSET(0x15B9F730)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP8_OFFSET UNITYSDK_OFFSET(0x15B915F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP900_OFFSET UNITYSDK_OFFSET(0x15C2B4F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP901_OFFSET UNITYSDK_OFFSET(0x15C2B820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP902_OFFSET UNITYSDK_OFFSET(0x15C2BB80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP903_OFFSET UNITYSDK_OFFSET(0x15C2BDB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP904_OFFSET UNITYSDK_OFFSET(0x15C2C120)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP905_OFFSET UNITYSDK_OFFSET(0x15C2C450)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP906_OFFSET UNITYSDK_OFFSET(0x15C2C7B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP907_OFFSET UNITYSDK_OFFSET(0x15C2C9E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP908_OFFSET UNITYSDK_OFFSET(0x15C2CD20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP909_OFFSET UNITYSDK_OFFSET(0x15C2D050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP90_OFFSET UNITYSDK_OFFSET(0x15B9FA40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP910_OFFSET UNITYSDK_OFFSET(0x15C2D3B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP911_OFFSET UNITYSDK_OFFSET(0x15C2D5E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP912_OFFSET UNITYSDK_OFFSET(0x15C2D920)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP913_OFFSET UNITYSDK_OFFSET(0x15C2DC50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP914_OFFSET UNITYSDK_OFFSET(0x15C2DFB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP915_OFFSET UNITYSDK_OFFSET(0x15C2E2F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP916_OFFSET UNITYSDK_OFFSET(0x15C2E620)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP917_OFFSET UNITYSDK_OFFSET(0x15C2E980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP918_OFFSET UNITYSDK_OFFSET(0x15C2EC20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP919_OFFSET UNITYSDK_OFFSET(0x15C2EF60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP91_OFFSET UNITYSDK_OFFSET(0x15B9FDC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP920_OFFSET UNITYSDK_OFFSET(0x15C2F310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP921_OFFSET UNITYSDK_OFFSET(0x15C2F6F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP922_OFFSET UNITYSDK_OFFSET(0x15C2F920)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP923_OFFSET UNITYSDK_OFFSET(0x15C2FC90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP924_OFFSET UNITYSDK_OFFSET(0x15C2FFC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP925_OFFSET UNITYSDK_OFFSET(0x15C30320)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP926_OFFSET UNITYSDK_OFFSET(0x15C305C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP927_OFFSET UNITYSDK_OFFSET(0x15C30900)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP928_OFFSET UNITYSDK_OFFSET(0x15C30CB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP929_OFFSET UNITYSDK_OFFSET(0x15C31090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP92_OFFSET UNITYSDK_OFFSET(0x15BA0060)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP930_OFFSET UNITYSDK_OFFSET(0x15C312C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP931_OFFSET UNITYSDK_OFFSET(0x15C315A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP932_OFFSET UNITYSDK_OFFSET(0x15C317D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP933_OFFSET UNITYSDK_OFFSET(0x15C31AF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP934_OFFSET UNITYSDK_OFFSET(0x15C31D20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP935_OFFSET UNITYSDK_OFFSET(0x15C32000)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP936_OFFSET UNITYSDK_OFFSET(0x15C32230)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP937_OFFSET UNITYSDK_OFFSET(0x15C32550)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP938_OFFSET UNITYSDK_OFFSET(0x15C32830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP939_OFFSET UNITYSDK_OFFSET(0x15C32A60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP93_OFFSET UNITYSDK_OFFSET(0x15BA02A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP940_OFFSET UNITYSDK_OFFSET(0x15C32D80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP941_OFFSET UNITYSDK_OFFSET(0x15C33060)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP942_OFFSET UNITYSDK_OFFSET(0x15C33290)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP943_OFFSET UNITYSDK_OFFSET(0x15C335B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP944_OFFSET UNITYSDK_OFFSET(0x15C337E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP945_OFFSET UNITYSDK_OFFSET(0x15C33A10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP946_OFFSET UNITYSDK_OFFSET(0x15C33C40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP947_OFFSET UNITYSDK_OFFSET(0x15C33E70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP948_OFFSET UNITYSDK_OFFSET(0x15C340A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP949_OFFSET UNITYSDK_OFFSET(0x15C34360)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP94_OFFSET UNITYSDK_OFFSET(0x15BA04E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP950_OFFSET UNITYSDK_OFFSET(0x15C345B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP951_OFFSET UNITYSDK_OFFSET(0x15C34890)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP952_OFFSET UNITYSDK_OFFSET(0x15C34AC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP953_OFFSET UNITYSDK_OFFSET(0x15C34CF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP954_OFFSET UNITYSDK_OFFSET(0x15C35060)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP955_OFFSET UNITYSDK_OFFSET(0x15C35340)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP956_OFFSET UNITYSDK_OFFSET(0x15C35570)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP957_OFFSET UNITYSDK_OFFSET(0x15C35890)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP958_OFFSET UNITYSDK_OFFSET(0x15C35B70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP959_OFFSET UNITYSDK_OFFSET(0x15C35DA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP95_OFFSET UNITYSDK_OFFSET(0x15BA0720)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP960_OFFSET UNITYSDK_OFFSET(0x15C360C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP961_OFFSET UNITYSDK_OFFSET(0x15C363A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP962_OFFSET UNITYSDK_OFFSET(0x15C365D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP963_OFFSET UNITYSDK_OFFSET(0x15C368F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP964_OFFSET UNITYSDK_OFFSET(0x15C36BD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP965_OFFSET UNITYSDK_OFFSET(0x15C36EF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP966_OFFSET UNITYSDK_OFFSET(0x15C371D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP967_OFFSET UNITYSDK_OFFSET(0x15C37400)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP968_OFFSET UNITYSDK_OFFSET(0x15C37720)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP969_OFFSET UNITYSDK_OFFSET(0x15C37950)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP96_OFFSET UNITYSDK_OFFSET(0x15BA0AE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP970_OFFSET UNITYSDK_OFFSET(0x15C37B80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP971_OFFSET UNITYSDK_OFFSET(0x15C37E60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP972_OFFSET UNITYSDK_OFFSET(0x15C38140)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP973_OFFSET UNITYSDK_OFFSET(0x15C38370)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP974_OFFSET UNITYSDK_OFFSET(0x15C38690)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP975_OFFSET UNITYSDK_OFFSET(0x15C38970)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP976_OFFSET UNITYSDK_OFFSET(0x15C38BA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP977_OFFSET UNITYSDK_OFFSET(0x15C38EC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP978_OFFSET UNITYSDK_OFFSET(0x15C391A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP979_OFFSET UNITYSDK_OFFSET(0x15C393D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP97_OFFSET UNITYSDK_OFFSET(0x15BA0EA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP980_OFFSET UNITYSDK_OFFSET(0x15C396F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP981_OFFSET UNITYSDK_OFFSET(0x15C39970)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP982_OFFSET UNITYSDK_OFFSET(0x15C39C50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP983_OFFSET UNITYSDK_OFFSET(0x15C39E80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP984_OFFSET UNITYSDK_OFFSET(0x15C3A1A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP985_OFFSET UNITYSDK_OFFSET(0x15C3A480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP986_OFFSET UNITYSDK_OFFSET(0x15C3A6B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP987_OFFSET UNITYSDK_OFFSET(0x15C3A9D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP988_OFFSET UNITYSDK_OFFSET(0x15C3ACB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP989_OFFSET UNITYSDK_OFFSET(0x15C3AEE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP98_OFFSET UNITYSDK_OFFSET(0x15BA10F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP990_OFFSET UNITYSDK_OFFSET(0x15C3B200)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP991_OFFSET UNITYSDK_OFFSET(0x15C3B4E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP992_OFFSET UNITYSDK_OFFSET(0x15C3B710)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP993_OFFSET UNITYSDK_OFFSET(0x15C3BA30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP994_OFFSET UNITYSDK_OFFSET(0x15C3BD10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP995_OFFSET UNITYSDK_OFFSET(0x15C3BF40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP996_OFFSET UNITYSDK_OFFSET(0x15C3C260)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP997_OFFSET UNITYSDK_OFFSET(0x15C3C540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP998_OFFSET UNITYSDK_OFFSET(0x15C3C770)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP999_OFFSET UNITYSDK_OFFSET(0x15C3CA90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP99_OFFSET UNITYSDK_OFFSET(0x15BA1450)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP9_OFFSET UNITYSDK_OFFSET(0x15B91840)

namespace XLua
{
	inline static constexpr unsigned int DelegateBridge_TypeDefinitionIndex = 51139;

	class DelegateBridge : public ::XLua::DelegateBridgeBase
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LuaSystemMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x5AB10);
		}

		static ::Il2CppArray<::XLua::DelegateBridge*>** StaticGet_DelegateBridgeList()
		{
			return (::Il2CppArray<::XLua::DelegateBridge*>**)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x5AB18);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_XLua_LuaTable_RPG_Client_UILayer()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x112A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_uint_System_Collections_Generic_List_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x112A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightAhaUnlockCondition()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x112B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookCard()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x112B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_VirtualRankChimeraTeam_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x112C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x112C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_RPG_Client_UIBubbleManager_RPG_Client_UIBubbleItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x112D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_int_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x112D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_WheelItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x112E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopFlexibleGridView_int_SuperScrollView_LoopFlexibleGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x112E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_EventTriggerListener_VoidBaseEventDataDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x112F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_Client_ChessRogueSubMissionReplayDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x112F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_LevelMinimapSection()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11300);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_AkCallbackManager_EventCallback()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11308);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_SkeletonGraphic_MeshAssignmentDelegateMultiple()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11310);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_BaseGameFlow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11318);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_EventSystems_EventTrigger_Entry()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11320);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueTournArchiveData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11328);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_GridFightEquipCategory_RPG_Client_GridFightEquipCategoryInfoConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11330);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueNousAeonRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11338);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightHandBookPetPal()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11340);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_GameEntity_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11348);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PCResolution()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11350);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ClockParkAttributeType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11358);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RoleTrialActivityData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11360);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MazeBuffExcelTable_IndexKey_RPG_GameCore_MazeBuffRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11368);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_IModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11370);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_EvolveBuildMixData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11378);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_InControl_InputDevice()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11380);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_AdventurePlayerRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11388);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Animator_ThreadDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11390);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_StageMonsterRewardItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11398);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RelicItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x113A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LittleGame_ComicDessert_ComicDessertOrderBubbleServeAreaQuery()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x113A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatRankLevelData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x113B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragStart2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x113B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesTradingCardApplyItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x113C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_GameEntity_RPG_GameCore_AliveState()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x113C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x113D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesTradingCardApplyItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x113D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MonsterExcelTable_IndexKey_RPG_GameCore_MonsterRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x113E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FuncEntranceData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x113E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightEquipCraftRecipe()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x113F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatCommunicateData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x113F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesTradingCardExchangeHistoryItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11400);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_NPCWarningTipConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11408);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_AvatarSystem_IAvatar_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11410);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_long_long()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11418);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FuncEntranceData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11420);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ElfShopItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11428);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11430);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeStartHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11438);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_PerformanceEExcelTable_IndexKey_RPG_GameCore_PerformanceERow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11440);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BaseGameFlow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11448);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_AvatarSkillTreeExcelTable_IndexKey_RPG_GameCore_AvatarSkillTreeRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11450);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightGameFormationEditor_EditEvent()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11458);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopStaggeredGridView_int_SuperScrollView_LoopStaggeredGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11460);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapStart2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11468);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_Vector3_UnityEngine_Vector3()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11470);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11478);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TextmapDownloadManager_TextmapApplyChangeErrorCode()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11480);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11488);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_GameEntity()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11490);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChenLingBattleDeckData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11498);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_Dictionary_RPG_GameCore_AttackDamageType_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x114A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_GridFightGameRefData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x114A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_NewsTickerItem_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x114B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_InControl_BindingSourceType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x114B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityModule_ActivityType_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x114C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_WheelItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x114C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ElfRestaurantRecipeData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x114D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_RPG_Client_FateRin_CaseBoard_CaseBoardSimpleTalkParams()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x114D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_AmphoreusTarotData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x114E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SwordTrainingEndingDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x114E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightMonsterCampConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x114F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x114F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11500);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_Sofa_Core_Messaging_StrongReferenceMessenger_RPG_Client_LimaoNews_LimaoNewsPostSubmitViewModel()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11508);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Animator()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11510);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_XLua_LuaEnv_CustomLoader()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11518);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopFlexibleGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11520);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_IdleLiveGachaPoolConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11528);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11530);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChallengeData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11538);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlayerBriefDisplayData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11540);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_CakeCatchCatData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11548);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightHandBookEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11550);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_PlanetFesToastItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11558);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_RectTransform_ReapplyDrivenProperties()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11560);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ItemDisplayData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11568);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DrinkMakerCheersGroupData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11570);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IRogueTournPersonaRoomCard()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11578);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_HudType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11580);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ElfShopItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11588);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_World3DMapEntranceConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11590);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FantasticStoryChapterData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11598);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_CustomRP_CaptureCb()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x115A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_B51Racing_LuaBindBtnAction()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x115A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_AvatarSystem_IAvatar_bool_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x115B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_BaseGameFlow_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x115B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_ChapterRecordUiData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x115C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueNousAeonRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x115C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_AmphoreusTarotData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x115D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_Challenge_Tierce_ChallengeTierceMazeProgressHintViewModel()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x115D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DrinkMakerCheersBartendDrinkDataExtend()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x115E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IPlanetFesBuff()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x115E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_int()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x115F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightSpotLightConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x115F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_Proto_MultiPathAvatarType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11600);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_ValueTuple_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11608);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_FightMarbleChoosePetSync()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11610);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FateHandbookHouguItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11618);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHipplen_ActivityHipplenTraitData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11620);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_Texture_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11628);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ClockParkAttributeType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11630);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_int()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11638);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_ActivityFightGroupRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11640);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightConsumableItemData_RPG_Client_GridFightConsumableInfo_GridFightConsumableItemUseParam()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11648);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RoleTrialActivityData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11650);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_Dictionary_string_RPG_Client_GridFightGameRefInterectData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11658);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeEnd2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11660);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11668);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_MeshGeneratorDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11670);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_PSPlayGoReceiveParamBase()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11678);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SocialPlay_SocialPlayMapInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11680);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MatchThreeBirdData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11688);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_PinchInHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11690);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MonsterData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11698);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopListViewItem2()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x116A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_UI_InputField_OnValidateInput()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x116A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_ItemCost()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x116B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_EventSystems_PointerEventData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x116B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_EvolveBuildMixData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x116C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AvatarEnhancedHint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x116C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_BattleResultState_System_Collections_IEnumerator()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x116D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightPortalData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x116D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlayerBoardInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x116E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_TalkSentenceConfigExcelTable_IndexKey_RPG_GameCore_TalkSentenceConfigRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x116E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x116F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_BaseLobby_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x116F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_AnimationState_TrackEntryDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11700);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookReadReward()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11708);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Editor_MainMissionChain()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11710);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChallengeGroupData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11718);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_FightGeneralScNotify()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11720);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_StaticListView_int_RPG_Client_StaticListViewItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11728);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_object_RPG_Client_AlleyTransportRouteState()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11730);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_PSPlayGo_EstimatedTimeParam()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11738);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_UIController()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11740);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_MapEntryRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11748);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MatchThreeBirdData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11750);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11758);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_IPSPlayGo_StartParam()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11760);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopStaggeredGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11768);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FightFestPhase()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11770);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHipplen_ActivityHipplenTraitData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11778);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_SuperScrollView_FlexibleGridItemPool_OnNewPrefabIns()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11780);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MazeBuffData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11788);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MapProp()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11790);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatCollectionDiceInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11798);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_ComponentModel_PropertyChangedEventHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x117A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_ChessRogueBoardCellDataItem_RPG_Client_MonoRogueHexChessBoardItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x117A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesTradingCardExchangeHistoryItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x117B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueMagicUnitDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x117B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_CEBattlePresetConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x117C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_InGameTeamSlotUiData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x117C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_UIFollow3DTarget()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x117D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapEndHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x117D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TeamBuild()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x117E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopListViewItem2_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x117E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightAugment()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x117F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_RPG_GameCore_GameEntity_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x117F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_Swipe2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11800);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueBuffRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11808);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_BaseGachaPoolData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11810);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LimaoNews_LimaoNewsPlanStateRefreshMessage()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11818);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11820);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_CaptainData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11828);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GlobalDispatchData_ServerData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11830);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_StageMonsterRewardItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11838);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_HandleResult()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11840);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefHashSet_RPG_Client_ActivityModule_ActivityType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11848);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_GridFightRoleProperty()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11850);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_EventTriggerListener_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11858);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11860);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightOrbEntityData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11868);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AvatarOutfitUnit()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11870);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_string_TMPro_TMP_FontAsset()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11878);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_AkCallbackManager_BGMCallback()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11880);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_EvolveBuildGearEquipInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11888);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightRoleSkillStyleRemarkItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11890);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Application_LowMemoryCallback()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11898);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueDLCMainStoryRewardRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x118A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopGridView_SuperScrollView_LoopGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x118A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueMagicAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x118B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SwordTraining_SwordTrainingCandidatePartnerAbilityData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x118B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_Prop_JigsawItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x118C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightItemConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x118C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_uint_RPG_Client_GridFightDivisionLevelConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x118D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookClue()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x118D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_UnityEngine_EventSystems_EventTrigger_Entry()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x118E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IRogueTournPersonaRoomCardInGame()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x118E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_uint_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x118F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_string_UnityEngine_Sprite()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x118F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightTutorialStageConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11900);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_ItemComefromRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11908);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChatReportReason()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11910);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_UI_Graphic_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11918);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_Client_GridFightMonsterData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11920);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ElfShopItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11928);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MonoSceneObjClickHint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11930);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchStart2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11938);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_UIFollow3DTarget_PostProcessDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11940);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueNousDiceSurfaceDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11948);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_DiceCombat_OnGeneralNotifyDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11950);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PCResolution()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11958);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueImageRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11960);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11968);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChenLingBattleDeckData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11970);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet2_string_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11978);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11980);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_ValueTuple_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11988);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_FriendRankingInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11990);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_MainMissionData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11998);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x119A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_AmphoreusTarotData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x119A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DrinkMakerCheersBartendDrinkDataExtend()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x119B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_VoracityInvasionFightEntranceData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x119B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GlobalDispatchData_ServerData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x119C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GachaItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x119C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_AvatarServantSkillExcelTable_IndexKey_RPG_GameCore_AvatarServantSkillRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x119D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_ulong()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x119D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x119E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_ISelectHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x119E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Mesh_TMPro_TMP_TextInfo_int()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x119F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesThemeData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x119F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet1_float()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11A00);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_MainMissionSortedItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11A08);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueDLCAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11A10);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_ParseUrlCallBack()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11A18);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11A20);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_string()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11A28);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatGlossaryTermData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11A30);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TrainPartyBuildUtils_PhotoWorldData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11A38);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_SuperDropDown_int()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11A40);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_ICancelHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11A48);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IBeginDragHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11A50);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_DialogueGroupExcelTable_IndexKey_RPG_GameCore_DialogueGroupRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11A58);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Animator_GraphEventDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11A60);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_Motions_MonoEffectMotion_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11A68);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_StageExcelTable_IndexKey_RPG_GameCore_StageRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11A70);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_B51Racing_LuaBindBtnHoldAction()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11A78);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_UnityEngine_EventSystems_EventTrigger_Entry()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11A80);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_Proto_FightActivityGroup()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11A88);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightDivisionLevelReward()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11A90);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11A98);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightTrait()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11AA0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookInteraction()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11AA8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueNousDiceSurfaceDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11AB0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_IdleLiveAvatarPropertyType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11AB8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefHashSet_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11AC0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHotCoreRewardData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11AC8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IResidentActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11AD0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightPortalData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11AD8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_VoiceConfigExcelTable_IndexKey_RPG_GameCore_VoiceConfigRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11AE0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueNousAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11AE8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_UI_ILayoutElement_float()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11AF0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_OnBackPressedCallback()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11AF8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MonsterData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11B00);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SuitRecommendAvatarData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11B08);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PunkLordData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11B10);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_RPG_Client_FateRin_CaseBoard_CaseBoardShowGrailParams()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11B18);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHotCoreRewardData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11B20);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTap2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11B28);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightTrait()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11B30);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TrainParty_TrainPartyRecordGroup()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11B38);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_OverUIElementHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11B40);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FightFestCoachSkill()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11B48);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_SuperScrollView_LoopStaggeredGridView_int_SuperScrollView_LoopStaggeredGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11B50);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_RPG_Client_ActivityModule_ActivityType_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11B58);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_AdventurePlayerRow_AdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11B60);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_Proto_FightActivityGroup()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11B68);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueBuffData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11B70);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11B78);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_WheelItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11B80);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MongoObjectId()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11B88);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_string_int()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11B90);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TriggerEffectParams()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11B98);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightEquipCraftRecipe()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11BA0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_MissionCondition_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11BA8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesSkillPhase()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11BB0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_DiceCombat_DiceCombatForceRefreshEvent()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11BB8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RechargeGiftData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11BC0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueImageRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11BC8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_EvolveBuildScMixData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11BD0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueDLCAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11BD8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IMapObject()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11BE0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_ValueTuple_bool_Proto_FightGameMode_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11BE8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombatDiceConfigData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11BF0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightRoleSkillStyleRemarkItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11BF8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FantasticStoryParagraphData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11C00);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AetherDivideGymDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11C08);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_LightConeRecommendData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11C10);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_long()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11C18);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragEnd2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11C20);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IScrollHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11C28);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11C30);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11C38);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_MarblePVPRankConfigRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11C40);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesTradingCardExchangeHistoryItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11C48);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RelicType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11C50);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TrainParty_TrainPartyMeetingRankInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11C58);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ElfRestaurantRecipeData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11C60);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DoubleTap2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11C68);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueDLCMainStoryRewardRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11C70);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MultipleDropData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11C78);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesCardData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11C80);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueNousDiceBranchDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11C88);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GachaItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11C90);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_CakeCatchCatData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11C98);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightMonsterCampConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11CA0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_MainMissionSortedItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11CA8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SettledPunkLordData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11CB0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_RPG_Client_FateRin_CaseBoard_CaseBoardMoveToGrailParams()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11CB8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopGridView()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11CC0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_NPCWarningTipConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11CC8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightSpotLightConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11CD0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueMagicScepterDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11CD8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_ValueTuple_bool_Proto_FightGameMode_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11CE0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MongoObjectId()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11CE8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwitchHandSaveData_RPG_Client_SwitchHandCustomData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11CF0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_InGameTeamSlotUiData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11CF8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11D00);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_PerformanceIDPair()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11D08);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightHandBookEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11D10);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_RPG_Client_FateRin_CaseBoard_CaseBoardTrackTeamParams()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11D18);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_FightActivityGroup()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11D20);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MatchThreeBirdData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11D28);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FightActivityGroupInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11D30);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11D38);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightDivisionLevelReward()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11D40);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FantasticStoryParagraphData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11D48);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ItemDisplayData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11D50);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_FiveDimGameTransferScRsp()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11D58);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_CustomRP_CaptureSetupCb()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11D60);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_HeadIconDisplayData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11D68);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TwistEndHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11D70);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_PlanetFesToastItem_object()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11D78);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11D80);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_RPG_Client_FateRin_Battle_CardAnimationEventArgs()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11D88);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_B51Racing_LuaBindCustomFadeAnimNameAction()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11D90);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_DiceCombat_OnServerConnectedDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11D98);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IRogueTournBuildRefTeamMemberData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11DA0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GridFightManager_GridFightCustomValue()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11DA8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_int_int_int()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11DB0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_ConditionParam()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11DB8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_ParticleSystem_OnParticleEmissionBeginEvent()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11DC0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_TeamType_RPG_GameCore_TeamType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11DC8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DoubleTapHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11DD0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_AdventurePlayerRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11DD8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SwordTrainingEndingDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11DE0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragEndHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11DE8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SettledPunkLordData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11DF0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightHandBookPetPal()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11DF8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_XLua_LuaTable_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11E00);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MapEntryRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11E08);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_PinchHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11E10);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChallengeData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11E18);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11E20);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_SubMissionExcelTable_IndexKey_RPG_GameCore_SubMissionRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11E28);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_LevelMinimapSection()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11E30);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RoleTrialActivityData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11E38);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_World3DMapEntranceConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11E40);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LittleGame_ComicDessert_ComicDessertCoinBubbleViewModel()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11E48);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatRankLevelData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11E50);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Application_AdvertisingIdentifierCallback()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11E58);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_UpdateBonesDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11E60);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightTraitDisplayData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11E68);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueTournAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11E70);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_SpSlotUiData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11E78);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SocialPlay_SocialPlayMapInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11E80);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_GachaType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11E88);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_IdleLiveAvatarData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11E90);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_PropExcelTable_IndexKey_RPG_GameCore_PropRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11E98);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MessageItemExcelTable_IndexKey_RPG_GameCore_MessageItemRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11EA0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MessageItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11EA8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_RelicRecommendData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11EB0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AvatarOutfitUnit()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11EB8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_LevelMinimapSection()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11EC0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11EC8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_ActivityHotData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11ED0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_PlayerBoardInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11ED8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FightFestCoachSkill()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11EE0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_RPG_Client_FateRin_CaseBoard_CaseBoardShowLineParams()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11EE8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesTradingCardOfferItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11EF0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_UINavigation_UINavigationArea_FirstSelectableDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11EF8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_CustomButton_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11F00);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11F08);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MonsterSkillExcelTable_IndexKey_RPG_GameCore_MonsterSkillRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11F10);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_MazeBuffData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11F18);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightPresentEntity()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11F20);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueMagicUnitDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11F28);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IRogueTournBuildRefDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11F30);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_Transform_UnityEngine_GameObject()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11F38);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string_string_string()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11F40);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_BattleEventExcelTable_IndexKey_RPG_GameCore_BattleEventRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11F48);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_XLua_LuaEnv_XLua_LuaBase()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11F50);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_IDiceCombatAvatarInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11F58);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_GameObject_UnityEngine_GameObject_RPG_Client_OpenWorld_StreamingItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11F60);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DrinkMakerCheersGuestCommentData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11F68);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_ICommand()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11F70);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_Client_GridFightRoleProperty()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11F78);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string_UnityEngine_SkinnedMeshRenderer_UnityEngine_Mesh()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11F80);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookCard()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11F88);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatCommunicateData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11F90);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ClockParkAttributeType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11F98);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_EvolveBuildMixData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11FA0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueBuffRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11FA8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_IDiceCombatAvatarInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11FB0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwordTrainingEndingDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11FB8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_FightMarbleInitInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11FC0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MissionCondition()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11FC8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LittleGame_ComicDessert_ComicDessertOrderBubbleViewModel()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11FD0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SuitRecommendAvatarData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11FD8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AlleyEventInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11FE0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_AliveState_RPG_GameCore_EntityReviveParamBase()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11FE8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_IdleLiveGachaPoolConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11FF0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_AvatarSystem_AvatarPath()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x11FF8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_LeaveFiveDimGameScRsp()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12000);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BaseLobby()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12008);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_CakeRaceBattleItemDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12010);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_EvolveBuildGearEquipInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12018);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueMagicUnitDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12020);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_IdleLiveTeamSlotData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12028);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Playables_PlayableDirector()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12030);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesTradingCardOfferItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12038);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookDeleteData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12040);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ClockParkCardItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12048);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatCollectionDiceInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12050);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_Proto_ItemCost()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12058);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_GameEntity()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12060);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerDownHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12068);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_RPG_Client_StaticListView_int_RPG_Client_StaticListViewItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12070);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_GameCore_BuffConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12078);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PCResolution()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12080);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FateHandbookHouguItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12088);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChallengeData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12090);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_IdleLiveDungeonData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12098);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LightConeRecommendData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x120A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_Google_Protobuf_ByteString()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x120A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Reflection_MemberFilter()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x120B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TrainParty_TrainPartyRecordGroup()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x120B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet3_XLua_LuaTable_int_float()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x120C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_MVector3()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x120C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_uint_RPG_PoolList_UnityEngine_Vector2Int()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x120D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHipplen_ActivityHipplenWorkData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x120D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_SubMissionData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x120E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_EquipmentItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x120E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_RelicRecommendData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x120F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_IntPtr()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x120F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IPlanetFesBuff()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12100);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityMarble_MarbleSealData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12108);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_ItemComefromRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12110);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesSkillPhase()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12118);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FateHandbookReijuItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12120);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_TurnBasedModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12128);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BookContentData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12130);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_LuaUIController()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12138);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_IActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12140);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RelicSmartSuit_RelicSmartSuitCalculationResultData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12148);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ElfRestaurantRecipeData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12150);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MatchPlayRecord()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12158);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IUpdateSelectedHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12160);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_SuperScrollView_LoopListView2_int_SuperScrollView_LoopListViewItem2()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12168);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_BaseLobby_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12170);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_PerformanceIDPair()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12178);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_RPG_GameCore_SubMissionState_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12180);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12188);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_ShopBuyGoodsFailAction()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12190);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_IPSPlayGo_AllChunkDownloadComplete()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12198);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MonsterData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x121A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_Drag2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x121A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TriggerEffectParams_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x121B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IRogueTournBuildRefDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x121B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_PlayerBriefDisplayData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x121C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_float()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x121C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_TurnInsertAbilityInstance()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x121D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_string_int()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x121D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AssistData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x121E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHipplen_ActivityHipplenInteractPropData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x121E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MechCraft_ViewModel_MechCraftDiyViewEvent()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x121F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_string_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x121F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_GridFightMonsterData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12200);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_BaseGameFlow_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12208);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_RewardExcelTable_IndexKey_RPG_GameCore_RewardRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12210);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IInitializePotentialDragHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12218);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_EventHandler_RPG_Client_Promises_ExceptionEventArgs()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12220);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombatDice()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12228);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12230);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_IdleLiveAvatarData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12238);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_object_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12240);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_PerformanceIDPair()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12248);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_object()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12250);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12258);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_ValueTuple_bool_Proto_FightGameMode()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12260);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DrinkMakerCheersGroupData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12268);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TrainPartyBuildUtils_PhotoWorldData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12270);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesTradingCardOfferItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12278);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12280);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookInteraction()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12288);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_VoracityInvasionFightEntranceData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12290);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_ValueTuple_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12298);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x122A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueNousDiceSlotDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x122A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MapEntityDef()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x122B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MapSummonUnitDef()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x122B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_UnityEngine_RenderTexture()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x122C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightEquipItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x122C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_IdleLiveTeamAvatarData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x122D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightHandbookRole()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x122D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_ChessRogueSubMissionReplayDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x122E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_MainMissionData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x122E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_int_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x122F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_TurnBasedModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x122F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SocialPlay_SocialPlayMapUIBridge()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12300);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IDeselectHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12308);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_Proto_ItemCost()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12310);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TrainPartyBuildUtils_PhotoWorldData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12318);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_TriggerPerformanceEndParam()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12320);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MarblePVPRankConfigRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12328);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwitchHandCoinData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12330);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12338);
		}

		static ::System::Boolean* StaticGet_Gen_Flag()
		{
			return (::System::Boolean*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12340);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_AsyncOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12348);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightRole()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12350);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightPresentEntity()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12358);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueMagicScepterDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12360);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MessageItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12368);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_AvatarSystem_AvatarPath()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12370);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RelicSmartSuit_RelicSmartSuitCalculationResultData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12378);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightTraitAstropolisTier()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12380);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_string_string()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12388);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_string()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12390);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TeamBuild()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12398);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FuncEntranceData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x123A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RelicType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x123A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_EvolveBuildGearEquipInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x123B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_EvolveBuildCard()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x123B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChimeraDuelMasterData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x123C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_string()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x123C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_CakeRaceBattleItemDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x123D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SuitRecommendAvatarData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x123D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerExitHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x123E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AvatarEnhancedHint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x123E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_ItemDisplayData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x123F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombatDiceConfigData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x123F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PunkLordData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12400);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_IdleLiveAdvTechTree()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12408);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_SkeletonGraphic_InstructionDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12410);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AlleyEventInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12418);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_IdleLiveGachaPoolConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12420);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_BaseGachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12428);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_SuperDropDown_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12430);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_AkCallbackType_AkCallbackInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12438);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IDropHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12440);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_System_Collections_Generic_List_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12448);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightAugment()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12450);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_GridFightRole_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12458);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PunkLordData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12460);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IRogueTournPersonaRoomCard()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12468);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12470);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PSSessionData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12478);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FightFestPhase()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12480);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BookletLuaPanelParam()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12488);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12490);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_TextID()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12498);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_string()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x124A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightEquipCraftRecipe()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x124A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_int()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x124B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightHandBookPetPal()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x124B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BaseGachaPoolData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x124C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_OnAssetOperationDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x124C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_SpSlotUiData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x124D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightDivisionConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x124D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AlleyEventInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x124E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_Dictionary_RPG_GameCore_AttackDamageType_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x124E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IMoveHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x124F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_HeadIconDisplayData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x124F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_ItemConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12500);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightHandbookRole()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12508);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_float()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12510);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_QuestData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12518);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TwistHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12520);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_BookContentData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12528);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_Proto_FightMarbleSnapShot_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12530);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12538);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightAhaUnlockCondition()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12540);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_AvatarSystem_IAvatar()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12548);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_ValueTuple_bool_Proto_FightGameMode()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12550);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightGameRefData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12558);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_RelicRecommendData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12560);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_TurnBasedModifierInstance_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12568);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_SkeletonGraphic_MeshAssignmentDelegateSingle()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12570);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_uint_float()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12578);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_Dictionary_RPG_GameCore_AttackDamageType_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12580);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_CakeRaceHandbookCatItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12588);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHipplen_ActivityHipplenWorkData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12590);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12598);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x125A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MonsterGuideTagConfigRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x125A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueNousDiceBranchDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x125B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x125B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightAhaUnlockCondition()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x125C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SettledPunkLordData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x125C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatGlossaryTermData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x125D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_UnityEngine_Animator()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x125D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AssistData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x125E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_float()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x125E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_Cancel2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x125F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Action()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x125F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_BaseLobby()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12600);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightBonusConsumableItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12608);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_AliveState()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12610);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AetherDivideGymDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12618);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChatReportReason()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12620);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_Proto_StrongChallengeAvatar()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12628);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_ulong()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12630);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlayerBriefDisplayData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12638);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LittleGame_Match3_Match3GameState()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12640);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatCommunicateData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12648);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_FriendRankingInfo_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12650);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_MultiPathAvatarType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12658);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_RenderTexture_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12660);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_UnityEngine_Transform()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12668);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PayProductResult()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12670);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DrinkMakerCheersBartendDrinkDataExtend()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12678);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MainMissionExcelTable_IndexKey_RPG_GameCore_MainMissionRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12680);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LightConeZoom_UpdateFunc()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12688);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_UIController()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12690);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_UI_Toggle_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12698);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookClue()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x126A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AetherDivideGymDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x126A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_CharacterInputData_UnityEngine_Vector3_UnityEngine_Vector3()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x126B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_MissionCondition_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x126B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightTraitSubTraitConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x126C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChenLingBattleDeckData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x126C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Transform_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x126D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_NavMap_MappingInfoNode()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x126D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_GameCore_MissionCondition()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x126E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueNousDiceSurfaceDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x126E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TrainParty_TrainPartyRecordGroup()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x126F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightHandBookEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x126F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BaseGachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12700);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IResidentActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12708);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Camera_CameraCallback()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12710);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_HedgehogTeam_EasyTouch_Gesture()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12718);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueBuffRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12720);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Editor_MainMissionChain()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12728);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_CEBattlePresetConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12730);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_EquipmentItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12738);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerClickHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12740);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RelicType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12748);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_TurnBasedModifierInstance_RPG_GameCore_GameCoreParamData_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12750);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_HudType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12758);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_ConditionParam()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12760);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_PlayerBriefDisplayData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12768);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_ConditionParam()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12770);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_HeadIconDisplayData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12778);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwordTraining_SwordTrainingCandidatePartnerAbilityData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12780);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GachaItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12788);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightRole()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12790);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_RspHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12798);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_UnityEngine_EventSystems_RaycastResult()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x127A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityRealityShow_RealityShowFriendRankTabViewModel()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x127A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_PinchOutHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x127B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_IdleLiveAdvTechTree()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x127B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_uint_RPG_Client_GridFightEnemyDifficultyLvConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x127C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_NavMap_MappingInfoNode()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x127C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatCollectionCardInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x127D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_int_SuperScrollView_LoopStaggeredGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x127D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlayerBriefDisplayData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x127E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GachaType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x127E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MonoEffect_RPG_Client_TriggerEffectCallbackParams()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x127F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DrinkMakerCheersGroupData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x127F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_MainMissionData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12800);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Nullable_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12808);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AvatarGlobalBuffDisplayData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12810);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_SuperScrollView_LoopGridView_int_int_int_SuperScrollView_LoopGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12818);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightTraitSubTraitConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12820);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_AdventureCharacterController_string_RPG_GameCore_GameEntity()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12828);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BattleAssetPreload_AssetPreloadGroup()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12830);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AssistData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12838);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TextID()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12840);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AvatarGlobalBuffDisplayData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12848);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightOrbData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12850);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Canvas_WillRenderCanvases()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12858);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_CakeCatchCatData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12860);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DrinkMakerCheersGuestCommentData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12868);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_UnityEngine_EventSystems_RaycastResult()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12870);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightDivisionLevelReward()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12878);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IRogueTournPersonaRoomCardInGame()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12880);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LoadingManager_WorkDefCounter()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12888);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChatReportReason()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12890);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_IAdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12898);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_XLua_LuaTable_string()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x128A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AvatarGlobalBuffDisplayData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x128A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_GameEntity_RPG_GameCore_FixPoint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x128B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightMonsterCampConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x128B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_string()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x128C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_GameCore_BuffConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x128C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerUpHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x128D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_CompanionMissionActivityBannerData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x128D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TrainPartyBuildUtils_PhotoRarityData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x128E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TextID()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x128E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_XLua_LuaDLL_lua_CSFunction()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x128F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookStory()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x128F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_B51Racing_LuaBindRedDotAction()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12900);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RelicSmartSuit_RelicSmartSuitCalculationResultData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12908);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_HipplenGameWaitEventTask_HipplenGameEventInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12910);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_LightConeRecommendData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12918);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_AdventurePlayerRow_AdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12920);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GlobalDispatchData_ServerData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12928);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatSpecialRuleGroupData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12930);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LittleGame_ComicDessert_ComicDessertEmotionBubbleViewModel()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12938);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_HipplenGameGradeType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12940);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookStory()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12948);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SocialPlay_SocialPlayMapUIBridge()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12950);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LittleGame_ComicDessert_ViewModelEventHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12958);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_EvolveBuildCard()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12960);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_IDiceCombatAvatarInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12968);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookCharacter()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12970);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_IdleLiveAdvTechTree()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12978);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ParkourRank()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12980);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_TextmapExcelTable_IndexKey_RPG_GameCore_TextmapRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12988);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_RuntimeGroupManager_HoYoGroupUnit_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12990);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_HudType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12998);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_EvolveBuildScMixData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x129A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_CakeRaceHandbookCatItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x129A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_MazeBuffData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x129B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_ISkeletonAnimationDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x129B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IIgnoreHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x129C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_ActivityFightGroupRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x129C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FightActivityGroupInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x129D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChimeraDuelMasterData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x129D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x129E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_System_Action()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x129E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_UI_Graphic()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x129F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookDeleteData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x129F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_RPG_GameCore_FixPoint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12A00);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_RenderTexture_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12A08);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_object()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12A10);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Reflection_Assembly_string_bool_System_Type()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12A18);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightForgeConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12A20);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatCollectionDiceInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12A28);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_ItemComefromRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12A30);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TextmapDownloadManager_TextmapSizeErrorCode()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12A38);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefHashSet_string()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12A40);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivitySummonStage()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12A48);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueTournHexData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12A50);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12A58);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TeamBuild()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12A60);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_AvatarSystem_AvatarPath()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12A68);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightConsumableItemConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12A70);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchDownHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12A78);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IGridFightEquipCraftRecipeEntry()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12A80);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_SubMissionData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12A88);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchUpHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12A90);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_int_int()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12A98);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_EventSystems_BaseEventData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12AA0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ParkourRank()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12AA8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_XLua_LuaTable_int()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12AB0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MessageItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12AB8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightPresentEntity()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12AC0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_EventSystems_RaycastResult()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12AC8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_IdleLiveDungeonData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12AD0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_Client_GridFightRoleProperty()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12AD8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityMarble_MarbleSealData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12AE0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_SuperScrollView_LoopListViewItem2_float()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12AE8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_IdleLiveTeamAvatarData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12AF0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_FriendRankingInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12AF8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_ISubmitHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12B00);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12B08);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookStory()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12B10);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_ChenLingPrivilege()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12B18);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwordTrainingSkillData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12B20);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IRogueTournBuildRefDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12B28);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SwordTrainingSkillData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12B30);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_AdventureCharacterController()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12B38);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_AvatarPropertyType_RPG_Client_GridFightRolePropertyConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12B40);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RelicItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12B48);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_Client_ChenLingPrivilege()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12B50);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_IActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12B58);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopListView2_SuperScrollView_LoopListViewItem2()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12B60);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12B68);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesSkillPhase()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12B70);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHipplen_ActivityHipplenGiftData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12B78);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueMagicAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12B80);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_SubMissionData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12B88);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookCharacter()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12B90);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IFateGameRoundSettleDmgSourceItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12B98);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_PlayerBoardInfo_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12BA0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ScheduleData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12BA8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_NPCWarningTipConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12BB0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivitySummonStage()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12BB8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IResidentActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12BC0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IPlanetFesBuff()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12BC8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_CompanionMissionActivityBannerData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12BD0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ItemDisplayData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12BD8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12BE0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_AvatarSystem_IAvatar()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12BE8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_GameCore_BuffConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12BF0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_CakeRaceBattleItemDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12BF8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeEndHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12C00);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_Challenge_IChallengeEnvironmentHintViewModel()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12C08);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12C10);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_AkCallbackManager_MonitoringCallback()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12C18);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IRogueTournPersonaRoomCard()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12C20);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_int()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12C28);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_B51Racing_LuaAddOnBackPressedCallbackAction()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12C30);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueDLCMainStoryRewardRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12C38);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SwordTrainingSkillData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12C40);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueTournAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12C48);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet2_XLua_LuaTable_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12C50);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_RPG_Client_SuperDropDown_UnityEngine_UI_Dropdown_DropdownItem_int()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12C58);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_Proto_MultiPathAvatarType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12C60);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_UIController_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12C68);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_RPGAnimationEvent_AnimationEventCallBack()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12C70);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_SuperScrollView_GridItemPool_OnNewPrefabIns()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12C78);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_LuaUIController_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12C80);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_IdleLiveAvatarData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12C88);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopListViewItem2_object()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12C90);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12C98);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FantasticStoryParagraphData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12CA0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_RPG_Client_FateRin_CaseBoard_CaseBoardShowTeamParams()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12CA8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12CB0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_BookContentData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12CB8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_DiceCombat_OnOnGeneralRspDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12CC0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_EnviromentSystem_EnviromentClip_OnEnvironmentClipLoadDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12CC8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_NotifyHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12CD0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_Prop_JigsawItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12CD8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_bool_string()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12CE0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityIdleLive_ChapterRecordUiData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12CE8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12CF0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_RPG_Client_FateRin_CaseBoard_CaseBoardSetupScaleParams()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12CF8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_MapEntryRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12D00);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHipplen_ActivityHipplenWorkData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12D08);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHipplen_ActivityHipplenGiftData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12D10);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Vector2Int_UnityEngine_Vector2Int()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12D18);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_CEBattlePresetConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12D20);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet2_XLua_LuaTable_int()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12D28);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FateHandbookReijuItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12D30);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchStartHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12D38);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueTournArchiveData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12D40);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SwitchHandCoinData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12D48);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12D50);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookClue()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12D58);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_SpSlotUiData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12D60);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_string_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12D68);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_BaseGachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12D70);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightSpotLightConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12D78);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_EnterFiveDimGameScRsp()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12D80);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightPortalData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12D88);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityMarble_MarbleSealData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12D90);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AnimatorButton()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12D98);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction0_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12DA0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatCollectionCardInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12DA8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChallengeGroupData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12DB0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_GridFightGameModifier_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12DB8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_string_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12DC0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RechargeGiftData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12DC8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_ChapterRecordUiData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12DD0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesMiniGameBingoRewardLevel()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12DD8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_VoracityInvasionFightEntranceData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12DE0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_TurnBasedModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12DE8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12DF0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MonoEffect()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12DF8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchUp2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12E00);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LittleGame_ComicDessert_ComicDessertTalkBubbleViewModel()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12E08);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatSpecialRuleGroupData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12E10);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IGridFightEquipCraftRecipeEntry()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12E18);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueTournAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12E20);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueMagicScepterDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12E28);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightGameModifier()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12E30);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueNousDiceBranchDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12E38);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesMiniGameBingoRewardLevel()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12E40);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_SubMissionData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12E48);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_SpecialAvatarExcelTable_IndexKey_RPG_GameCore_SpecialAvatarRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12E50);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12E58);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_ItemConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12E60);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_ParticleSystem_OnNewParticleEmissionEvent()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12E68);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightRole()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12E70);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_Texture_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12E78);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightTraitAstropolisTier()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12E80);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueNousAeonRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12E88);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_ulong()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12E90);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FateHandbookReijuItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12E98);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefHashSet_int()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12EA0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatRankLevelData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12EA8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_IdleLiveAvatarPropertyType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12EB0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12EB8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_bool_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12EC0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IRogueTournPersonaRoomCardInGame()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12EC8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IFateGameRoundSettleDmgSourceItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12ED0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHipplen_ActivityHipplenInteractPropData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12ED8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12EE0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_IdleLiveTeamSlotData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12EE8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_ChimeraGameInstance_ActionReplayHook()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12EF0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_GameObject_UnityEngine_EventSystems_PointerEventData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12EF8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_int()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12F00);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_IdleLiveTeamAvatarData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12F08);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightOrbEntityData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12F10);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_System_Collections_Generic_List_RPG_Client_PopupMenuProxy_Option()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12F18);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightTraitDisplayData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12F20);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IDragHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12F28);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_Client_ChenLingPrivilege()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12F30);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightAugment()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12F38);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_UIController_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12F40);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_EvolveBuildCard()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12F48);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IEndDragHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12F50);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_PenaconyEndmostChronicleEvent()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12F58);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookReadReward()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12F60);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightOrbData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12F68);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightTraitSubTraitConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12F70);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MonoSceneObjClickHint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12F78);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_OpenWorld_StreamingItemInstance_RPG_Client_OpenWorld_StreamingItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12F80);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_IdleLiveDungeonData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12F88);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_ItemConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12F90);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightOrbData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12F98);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_int_object()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12FA0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12FA8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MainMissionSortedItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12FB0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_InControl_InputDeviceClass()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12FB8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightGameRefHttpRspBody_RPG_Client_GridFightGameRefShareCodeRspBody()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12FC0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueNousDiceSlotDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12FC8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_SuperScrollView_OnRecycleChanged()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12FD0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12FD8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_GameEntity()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12FE0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerEnterHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12FE8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_MainMissionData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12FF0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IRogueTournBuildRefTeamMemberData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x12FF8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_float()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13000);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopGridView_int_int_int_SuperScrollView_LoopGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13008);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_ActivityAlley_AlleyPackComponent()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13010);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13018);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightTraitAstropolisTier()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13020);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LightCone3D_UpdateFunc()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13028);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_FriendRankingInfo_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13030);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightHandbookRole()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13038);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_string_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13040);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChimeraDuelMasterData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13048);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_SuperDropDown_UnityEngine_UI_Dropdown_DropdownItem_int()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13050);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_PlayerBoardInfo_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13058);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13060);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MongoObjectId()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13068);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_int()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13070);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13078);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesTradingCardApplyItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13080);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LittleGame_FiveDim_MiniGameEventReason()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13088);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_StageMonsterRewardItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13090);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragStartHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13098);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x130A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Exception()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x130A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_IComparer_RPG_AvatarSystem_IAvatar()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x130B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_OnSceneOperationDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x130B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookReadReward()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x130C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RelicRecommendData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x130C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightMonsterAffixConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x130D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_IEnumerable_System_Func_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x130D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AvatarEnhancedHint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x130E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MapGroupDef_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x130E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueNousAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x130F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_QuestData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x130F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_AkCallbackManager_BankCallback()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13100);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TextID()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13108);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHipplen_ActivityHipplenGiftData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13110);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_AvatarPromotionExcelTable_IndexKey_RPG_GameCore_AvatarPromotionRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13118);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_RPG_Client_FateRin_CaseBoard_CaseBoardMoveToTeamParams()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13120);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet2_XLua_LuaTable_float()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13128);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_World3DMapEntranceConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13130);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_EventSystems_AxisEventData_UnityEngine_UI_Selectable_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13138);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TrainPartyBuildUtils_PhotoRarityData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13140);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_string_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13148);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_IAdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13150);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_LuaUIController_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13158);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction3_string_string_string_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13160);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_IAdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13168);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_AdventurePlayerRow_AdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13170);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightTraitDisplayData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13178);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IRogueTournBuildRefTeamMemberData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13180);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_GridFightEquipItemData_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13188);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightMonsterAffixConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13190);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_EventHandler_RPG_Client_ActivityIdleLive_IdleLiveProtocolEventArgs()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13198);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IFateGameRoundSettleDmgSourceItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x131A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_RenderTexture()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x131A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x131B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueNousAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x131B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SwordTraining_SwordTrainingCandidatePartnerAbilityData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x131C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueDLCAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x131C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatCollectionCardInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x131D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookInteraction()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x131D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueImageRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x131E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MultipleDropData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x131E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_RPG_GameCore_ScreenTransferReason_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x131F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_FateRin_ViewModelEventHandler_RPG_Client_FateRin_CaseBoard_CaseBoardShowRewardParams()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x131F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueTournArchiveData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13200);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_QuestData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13208);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TeamTowers_TeamTowersPlayerSkillViewModel()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13210);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LittleGame_ComicDessert_ComicDessertEmojiBubbleViewModel()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13218);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHipplen_ActivityHipplenInteractPropData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13220);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesThemeData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13228);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_ItemExcelTable_IndexKey_RPG_GameCore_ItemRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13230);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueBuffData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13238);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_PlayerBriefDisplayData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13240);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ScheduleTask()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13248);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookCharacter()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13250);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_BaseGachaPoolData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13258);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHipplen_ActivityHipplenTraitData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13260);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string_string()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13268);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_bool_string()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13270);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FateHandbookHouguItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13278);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_IRIBuildingRendererList_object()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13280);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_UIElementTouchUpHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13288);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_EasyTouchIsReadyHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13290);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DrinkMakerCheersGuestCommentData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13298);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_OpenWorld_StreamingBlock()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x132A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x132A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SocialPlay_SocialPlayMapUIBridge()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x132B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_string_TMPro_TMP_SpriteAsset()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x132B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Animator_OnAnimatorDispatchMovementJobFinishDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x132C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_SkeletonGraphic_SkeletonRendererDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x132C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_EquipmentItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x132D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_PinchEndHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x132D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IGridFightEquipCraftRecipeEntry()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x132E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_GameObject()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x132E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_StatusExcelTable_IndexKey_RPG_GameCore_StatusRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x132F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x132F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Reflection_TypeFilter()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13300);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_NewsTickerItem_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13308);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_GridFightGridData_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13310);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueNousDiceSlotDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13318);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightRoleSkillStyleRemarkItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13320);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesThemeData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13328);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_bool_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13330);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RechargeGiftData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13338);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SwitchHandCoinData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13340);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_OpenWorld_StreamingItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13348);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_UnityEngine_Animator()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13350);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Collections_Specialized_NotifyCollectionChangedEventHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13358);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LittleGame_FiveDim_FiveDimMoveInputData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13360);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_NavMap_MappingInfoNode()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13368);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeStart2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13370);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_IdleLiveTeamSlotData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13378);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesMiniGameBingoRewardLevel()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13380);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Application_LogCallback()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13388);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatSpecialRuleGroupData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13390);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13398);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_EventSystems_PointerEventData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x133A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FightFestPhase()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x133A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_UIEventHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x133B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FightActivityGroupInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x133B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_AdventurePlayerRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x133C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LittleGame_ComicDessert_ComicDessertCoinFlyTargetQuery()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x133C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_LightConeRecommendData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x133D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityIdleLive_CaptainData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x133D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SimpleTap2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x133E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_TMPro_TMP_TextInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x133E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_CharacterInputData_float()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x133F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_DiceCombat_DiceCombatPerformanceBattleEvent()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x133F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueBuffData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13400);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_AnimationState_TrackEntryEventDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13408);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13410);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombatDiceConfigData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13418);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatGlossaryTermData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13420);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_StrongChallengeAvatar()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13428);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_EvolveBuildScMixData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13430);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchDown2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13438);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_ActivityFightGroupRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13440);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_UnityEngine_Texture()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13448);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_IModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13450);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_GameObject_RPG_Client_OpenWorld_StreamingItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13458);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Texture()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13460);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Editor_MainMissionChain()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13468);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_Prop_JigsawItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13470);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookCard()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13478);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivitySummonStage()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13480);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_uint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13488);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapStartHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13490);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightNPCConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13498);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_GachaType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x134A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LittleGame_ComicDessert_ViewModelEventHandler_RPG_Client_TextID()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x134A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHotCoreRewardData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x134B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_PlaneEventExcelTable_IndexKey_RPG_GameCore_PlaneEventRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x134B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_PerformanceSkipOverrideExcelTable_IndexKey_RPG_GameCore_PerformanceSkipOverrideRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x134C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MultipleDropData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x134C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookDeleteData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x134D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_EventSystems_MoveDirection()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x134D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_AvatarSkillExcelTable_IndexKey_RPG_GameCore_AvatarSkillRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x134E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x134E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_AvatarSystem_IAvatar()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x134F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_IPSPlayGo_ProgressParam()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x134F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FantasticStoryChapterData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13500);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_ActivityHotData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13508);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_string_string()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13510);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FightFestCoachSkill()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13518);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopListViewItem2_int()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13520);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_ulong_float()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13528);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_MarblePVPRankConfigRow()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13530);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_Client_GridFightMonsterData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13538);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueMagicAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13540);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FantasticStoryChapterData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13548);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_CakeRaceHandbookCatItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13550);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_bool()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13558);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_StaticListViewItem_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13560);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapEnd2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13568);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TrainPartyBuildUtils_PhotoRarityData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13570);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightMonsterAffixConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13578);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesCardData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13580);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_object_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13588);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_UnityEngine_Transform()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13590);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchCancelHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13598);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_InGameTeamSlotUiData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x135A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MapGroupDef()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x135A8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_CompanionMissionActivityBannerData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x135B0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityIdleLive_CaptainData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x135B8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_IdleLiveAvatarPropertyType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x135C0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LuaUIController()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x135C8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_AsyncCallback()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x135D0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_Client_ChessRogueSubMissionReplayDataItem()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x135D8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_IActivityHotData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x135E0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Reflection_AssemblyName_System_Reflection_Assembly()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x135E8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SimpleTapHandler()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x135F0);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopListView2_int_SuperScrollView_LoopListViewItem2()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x135F8);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChallengeGroupData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13600);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AvatarOutfitUnit()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13608);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesCardData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13610);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Transform()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13618);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightTrait()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13620);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ParkourRank()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13628);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_IActivityHotData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13630);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RelicItemData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13638);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightDivisionStageConfig()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13640);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_Proto_StrongChallengeAvatar()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13648);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_ShopBuyGoodsRspAction()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13650);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MonoSceneObjClickHint()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13658);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightOrbEntityData()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13660);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LocalizedInputField_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13668);
		}

		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SocialPlay_SocialPlayMapInfo()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("XLua", "DelegateBridge")->GetStaticField(0x13670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE_CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Int32 a1, ::XLua::LuaEnv* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp0(::XLua::LuaTable* a1, ::System::UInt32 a2, ::Proto::BuyGoodsScRsp* a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::UInt32, ::Proto::BuyGoodsScRsp*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp1(::XLua::LuaTable* a1, ::System::UInt32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2 __Gen_Delegate_Imp2()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP2_OFFSET))(this);
		}

		::System::Int32 __Gen_Delegate_Imp3(::UnityEngine::Vector2 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP3_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP4_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp5(::XLua::LuaTable* a1, ::UnityEngine::UI::Button* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::UnityEngine::UI::Button*, ::System::Action*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp6(::XLua::LuaTable* a1, ::UnityEngine::GameObject* a2, ::System::Action* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::UnityEngine::GameObject*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP6_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void __Gen_Delegate_Imp7(::XLua::LuaTable* a1, ::System::String* a2, ::System::Object* a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::String*, ::System::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP7_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void __Gen_Delegate_Imp8(::XLua::LuaTable* a1, ::System::Func_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP8_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp9(::XLua::LuaTable* a1, ::System::Func_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Func_1<::System::String*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP9_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp10(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP10_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp11(::UnityEngine::EventSystems::MoveDirection a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP11_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp12(::System::Object* a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP12_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp13(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP13_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp14(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP14_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp15(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP15_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp16(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP16_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp17(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP17_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp18(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP18_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp19(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP19_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp20(::XLua::LuaTable* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP20_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp21(::XLua::LuaTable* a1, ::RPG::Client::UILayer a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP21_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp22(::XLua::LuaTable* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP22_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp23(::XLua::LuaTable* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP23_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp24(::System::String* a1, ::XLua::LuaTable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP24_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp25(::System::String* a1, ::System::Int32 a2, ::XLua::LuaTable* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP25_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp26(::System::String* a1, ::System::String* a2, ::XLua::LuaTable* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP26_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp27(::System::String* a1, ::System::UInt32 a2, ::XLua::LuaTable* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP27_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp28(::System::String* a1, ::System::Object* a2, ::XLua::LuaTable* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP28_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp29(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::XLua::LuaTable* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP29_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp30(::System::String* a1, ::System::String* a2, ::System::String* a3, ::XLua::LuaTable* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP30_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void __Gen_Delegate_Imp31(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP31_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp32(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP32_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp33(::XLua::LuaTable* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP33_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp34(::XLua::LuaTable* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP34_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp35(::XLua::LuaTable* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP35_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp36(::XLua::LuaTable* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP36_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp37(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP37_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp38(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP38_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopListViewItem2* __Gen_Delegate_Imp39(::XLua::LuaTable* a1, ::SuperScrollView::LoopListView2* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP39_OFFSET))(this, a1, a2, a3);
		}

		::SuperScrollView::LoopGridViewItem* __Gen_Delegate_Imp40(::XLua::LuaTable* a1, ::SuperScrollView::LoopGridView* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP40_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::StaticListViewItem* __Gen_Delegate_Imp41(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP41_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 __Gen_Delegate_Imp42(::XLua::LuaTable* a1, ::RPG::Client::SuperDropDown* a2, ::UnityEngine::UI::Dropdown_DropdownItem* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::UnityEngine::UI::Dropdown_DropdownItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP42_OFFSET))(this, a1, a2, a3);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* __Gen_Delegate_Imp43(::XLua::LuaTable* a1, ::SuperScrollView::LoopStaggeredGridView* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopStaggeredGridView*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP43_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean __Gen_Delegate_Imp44(::XLua::LuaTable* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP44_OFFSET))(this, a1, a2);
		}

		::System::Int32 __Gen_Delegate_Imp45(::XLua::LuaTable* a1, ::SuperScrollView::LoopListViewItem2* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP45_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp46(::UnityEngine::UI::Toggle* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP46_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp47(::XLua::LuaTable* a1, ::RPG::Client::NewsTickerItem* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::NewsTickerItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP47_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean __Gen_Delegate_Imp48(::System::Reflection::MemberInfo* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP48_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp49(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP49_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp50(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP50_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp51(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP51_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp52(::SuperScrollView::LoopGridView* a1, ::SuperScrollView::LoopGridViewItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridView*, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP52_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp53(::SuperScrollView::LoopGridView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridView*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP53_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp54(::SuperScrollView::LoopGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP54_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp55(::System::UInt32 a1, ::RPG::GameCore::SubMissionState a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::SubMissionState, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP55_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp56(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP56_OFFSET))(this, a1, a2);
		}

		::System::String* __Gen_Delegate_Imp57()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP57_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp58(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP58_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Sprite* __Gen_Delegate_Imp59(::System::String* a1)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP59_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp60(::SuperScrollView::LoopListViewItem2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP60_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp61(::SuperScrollView::LoopListView2* a1, ::SuperScrollView::LoopListViewItem2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListView2*, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP61_OFFSET))(this, a1, a2);
		}

		::System::Single __Gen_Delegate_Imp62(::SuperScrollView::LoopListViewItem2* a1)
		{
			return ((::System::Single(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP62_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 __Gen_Delegate_Imp63(::RPG::Client::StaticListViewItem* a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::StaticListViewItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP63_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp64(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP64_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp65(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP65_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp66(::LLADGGNOJPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLADGGNOJPG*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP66_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp67(::BIDDFDEAEGB* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::BIDDFDEAEGB*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP67_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp68(::BIDDFDEAEGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIDDFDEAEGB*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP68_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp69(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP69_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp70(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP70_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp71(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TeamType a2, ::RPG::GameCore::TeamType a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP71_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp72(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP72_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp73(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP73_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp74(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AliveState a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP74_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp75(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP75_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp76(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2, ::NMNGHKMHDOK* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState, ::NMNGHKMHDOK*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP76_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp77(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP77_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp78(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP78_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp79(::System::UInt32 a1, ::System::IntPtr a2, ::AKRESULT a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP79_OFFSET))(this, a1, a2, a3, a4);
		}

		::AKRESULT __Gen_Delegate_Imp80(::System::Boolean a1, ::System::Object* a2)
		{
			return ((::AKRESULT(*)(::PVOID, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP80_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp81(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP81_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp82(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP82_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp83(::SuperScrollView::LoopStaggeredGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridViewItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP83_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp84(::UnityEngine::EventSystems::AxisEventData* a1, ::UnityEngine::UI::Selectable* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*, ::UnityEngine::UI::Selectable*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP84_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean __Gen_Delegate_Imp85()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP85_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp86(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP86_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp87(::RPG::Client::TriggerEffectParams* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP87_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp88(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP88_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp89(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP89_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* __Gen_Delegate_Imp90(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP90_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 __Gen_Delegate_Imp91(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP91_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp92(::IBAAHKDOHDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBAAHKDOHDB*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP92_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp93(::AGBDHJMJFHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGBDHJMJFHD*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP93_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp94(::OMFLOBEGHNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMFLOBEGHNM*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP94_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemConfig* __Gen_Delegate_Imp95(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP95_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightItemConfig* __Gen_Delegate_Imp96(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP96_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp97(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP97_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightRolePropertyConfig* __Gen_Delegate_Imp98(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::Client::GridFightRolePropertyConfig*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP98_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightConsumableItemConfig* __Gen_Delegate_Imp99(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP99_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp100(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP100_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightDivisionStageConfig* __Gen_Delegate_Imp101(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightDivisionStageConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP101_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightDivisionConfig* __Gen_Delegate_Imp102(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightDivisionConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP102_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEnemyDifficultyLvConfig* __Gen_Delegate_Imp103(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightEnemyDifficultyLvConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP103_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp104(::RPG::GameCore::GridFightManager_GridFightCustomValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightManager_GridFightCustomValue*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP104_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp105(::SuperScrollView::LoopFlexibleGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopFlexibleGridViewItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP105_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightDivisionLevelConfig* __Gen_Delegate_Imp106(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightDivisionLevelConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP106_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp107(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP107_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTutorialStageConfig* __Gen_Delegate_Imp108(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTutorialStageConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP108_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightNPCConfig* __Gen_Delegate_Imp109(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightNPCConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP109_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp110(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP110_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp111(::RPG::Client::ClockParkCardItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP111_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipCategoryInfoConfig* __Gen_Delegate_Imp112(::RPG::GameCore::GridFightEquipCategory a1)
		{
			return ((::RPG::Client::GridFightEquipCategoryInfoConfig*(*)(::PVOID, ::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP112_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightForgeConfig* __Gen_Delegate_Imp113(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightForgeConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP113_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp114(::RPG::Client::ScheduleTask* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleTask*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP114_OFFSET))(this, a1);
		}

		::IFEABBJBIGK* __Gen_Delegate_Imp115(::System::UInt32 a1)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP115_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp116(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP116_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp117(::RPG::GameCore::HudType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::HudType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP117_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp118(::RPG::GameCore::HudType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HudType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP118_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp119(::RPG::GameCore::HudType a1, ::RPG::GameCore::HudType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::HudType, ::RPG::GameCore::HudType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP119_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp120(::RPG::Client::MessageItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP120_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp121(::RPG::Client::MessageItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP121_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp122(::RPG::Client::MessageItemData* a1, ::RPG::Client::MessageItemData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MessageItemData*, ::RPG::Client::MessageItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP122_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp123(::RPG::Client::NPCWarningTipConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NPCWarningTipConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP123_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp124(::RPG::Client::NPCWarningTipConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NPCWarningTipConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP124_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp125(::RPG::Client::NPCWarningTipConfig* a1, ::RPG::Client::NPCWarningTipConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::NPCWarningTipConfig*, ::RPG::Client::NPCWarningTipConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP125_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp126(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP126_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp127(::UnityEngine::EventSystems::EventTrigger_Entry* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::EventTrigger_Entry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP127_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp128(::UnityEngine::EventSystems::EventTrigger_Entry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventTrigger_Entry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP128_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp129(::UnityEngine::EventSystems::EventTrigger_Entry* a1, ::UnityEngine::EventSystems::EventTrigger_Entry* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::EventSystems::EventTrigger_Entry*, ::UnityEngine::EventSystems::EventTrigger_Entry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP129_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp130(::RPG::GameCore::GachaType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP130_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp131(::RPG::GameCore::GachaType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP131_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp132(::RPG::GameCore::GachaType a1, ::RPG::GameCore::GachaType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GachaType, ::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP132_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp133(::NJCHNLINLMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJCHNLINLMK*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP133_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp134(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP134_OFFSET))(this, a1, a2);
		}

		::System::Reflection::Assembly* __Gen_Delegate_Imp135(::System::Reflection::AssemblyName* a1)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::Reflection::AssemblyName*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP135_OFFSET))(this, a1);
		}

		::System::Type* __Gen_Delegate_Imp136(::System::Reflection::Assembly* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::Assembly*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP136_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean __Gen_Delegate_Imp137(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP137_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp138(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP138_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp139(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP139_OFFSET))(this, a1);
		}

		::System::Char __Gen_Delegate_Imp140(::System::String* a1, ::System::Int32 a2, ::System::Char a3)
		{
			return ((::System::Char(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP140_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp141(::NMGLDNNFHFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMGLDNNFHFB*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP141_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp142(::XLua::LuaTable* a1, ::RPG::GameCore::ScreenTransferReason a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaTable*, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP142_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp143(::RPG::Client::GlobalDispatchData_ServerData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP143_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp144(::RPG::Client::GlobalDispatchData_ServerData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP144_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp145(::RPG::Client::GlobalDispatchData_ServerData* a1, ::RPG::Client::GlobalDispatchData_ServerData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP145_OFFSET))(this, a1, a2);
		}

		::SuperScrollView::LoopGridViewItem* __Gen_Delegate_Imp146(::SuperScrollView::LoopGridView* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP146_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean __Gen_Delegate_Imp147(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP147_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp148(::RPG::GameCore::RewardRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RewardRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP148_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp149(::RPG::GameCore::TextmapRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextmapRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP149_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp150(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP150_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp151(::RPG::Client::EquipmentItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP151_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp152(::RPG::GameCore::ItemRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP152_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp153(::RPG::GameCore::MainMissionRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MainMissionRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP153_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* __Gen_Delegate_Imp154(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP154_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp155(::UnityEngine::AnimatorStateInfo a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP155_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void __Gen_Delegate_Imp156(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP156_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp157(::RPG::GameCore::AvatarPromotionRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPromotionRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP157_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp158(::RPG::GameCore::StageRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP158_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp159(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP159_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp160(::SuperScrollView::LoopListViewItem2* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP160_OFFSET))(this, a1, a2);
		}

		::SuperScrollView::LoopListViewItem2* __Gen_Delegate_Imp161(::SuperScrollView::LoopListView2* a1, ::System::Int32 a2)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP161_OFFSET))(this, a1, a2);
		}

		::RPG::Client::StaticListViewItem* __Gen_Delegate_Imp162(::RPG::Client::StaticListView* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP162_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp163(::RPG::GameCore::AvatarSkillRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP163_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp164(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP164_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp165(::RPG::GameCore::SubMissionRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP165_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp166(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP166_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp167(::IAJPMNLEFLJ a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IAJPMNLEFLJ, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP167_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp168(::Proto::ItemCost* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP168_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp169(::Proto::ItemCost* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP169_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp170(::Proto::ItemCost* a1, ::Proto::ItemCost* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Proto::ItemCost*, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP170_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp171(::RPG::GameCore::AvatarSkillTreeRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP171_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp172(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP172_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp173(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP173_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp174(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP174_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp175(::RPG::GameCore::StatusRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP175_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp176(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP176_OFFSET))(this, a1, a2);
		}

		::System::String* __Gen_Delegate_Imp177(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP177_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint __Gen_Delegate_Imp178(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP178_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp179(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP179_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp180(::RPG::GameCore::MonsterRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP180_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp181(::RPG::GameCore::MonsterSkillRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterSkillRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP181_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp182(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP182_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp183(::System::String* a1, ::UnityEngine::SkinnedMeshRenderer* a2, ::UnityEngine::Mesh* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP183_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean __Gen_Delegate_Imp184(::RPG::Client::BookContentData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BookContentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP184_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp185(::RPG::Client::BookContentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookContentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP185_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp186(::RPG::Client::BookContentData* a1, ::RPG::Client::BookContentData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BookContentData*, ::RPG::Client::BookContentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP186_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp187(::RPG::GameCore::MazeBuffRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazeBuffRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP187_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp188(::RPG::Client::ChallengeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP188_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp189(::RPG::Client::ChallengeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP189_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp190(::RPG::Client::ChallengeData* a1, ::RPG::Client::ChallengeData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChallengeData*, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP190_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp191(::RPG::GameCore::PropRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP191_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp192(::RPG::Client::UIFollow3DTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFollow3DTarget*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP192_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp193(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP193_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp194(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP194_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp195(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP195_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp196(::RPG::Client::PCResolution* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP196_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp197(::RPG::Client::PCResolution* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP197_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp198(::RPG::Client::PCResolution* a1, ::RPG::Client::PCResolution* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PCResolution*, ::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP198_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp199(::RPG::GameCore::StageMonsterRewardItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StageMonsterRewardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP199_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp200(::RPG::GameCore::StageMonsterRewardItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageMonsterRewardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP200_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp201(::RPG::GameCore::StageMonsterRewardItem* a1, ::RPG::GameCore::StageMonsterRewardItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::StageMonsterRewardItem*, ::RPG::GameCore::StageMonsterRewardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP201_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp202(::RPG::GameCore::VoiceConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VoiceConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP202_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp203(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP203_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp204(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP204_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp205(::RPG::Client::MainMissionData* a1, ::RPG::Client::MainMissionData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MainMissionData*, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP205_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp206(::RPG::GameCore::DialogueGroupRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DialogueGroupRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP206_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp207(::RPG::GameCore::PlaneEventRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlaneEventRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP207_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp208(::RPG::Client::AnimatorButton* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP208_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp209(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP209_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp210(::RPG::Client::PrefHashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP210_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp211(::RPG::Client::BaseGachaPoolData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP211_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp212(::RPG::Client::BaseGachaPoolData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP212_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp213(::RPG::Client::BaseGachaPoolData* a1, ::RPG::Client::BaseGachaPoolData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP213_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp214(::RPG::Client::ItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP214_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp215(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP215_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp216(::RPG::Client::ItemData* a1, ::RPG::Client::ItemData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemData*, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP216_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp217(::RPG::Client::GachaItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP217_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp218(::RPG::Client::GachaItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP218_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp219(::RPG::Client::GachaItemData* a1, ::RPG::Client::GachaItemData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GachaItemData*, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP219_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp220(::RPG::GameCore::SpecialAvatarRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP220_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp221(::XLua::LuaTable* a1, ::SuperScrollView::LoopListViewItem2* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP221_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp222(::RPG::GameCore::AdventurePlayerRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP222_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp223(::RPG::GameCore::AdventurePlayerRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP223_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp224(::RPG::GameCore::AdventurePlayerRow* a1, ::RPG::GameCore::AdventurePlayerRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow*, ::RPG::GameCore::AdventurePlayerRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP224_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp225(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP225_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp226(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP226_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp227(::RPG::Client::ChallengeGroupData* a1, ::RPG::Client::ChallengeGroupData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChallengeGroupData*, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP227_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp228(::RPG::Client::RogueBuffData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP228_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp229(::RPG::Client::RogueBuffData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP229_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp230(::RPG::Client::RogueBuffData* a1, ::RPG::Client::RogueBuffData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueBuffData*, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP230_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp231(::RPG::Client::PrefHashSet_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP231_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp232(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP232_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp233(::System::String* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP233_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp234(::RPG::Client::PayProductResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PayProductResult))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP234_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp235(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP235_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp236(::XLua::LuaTable* a1, ::RPG::Client::SuperDropDown* a2, ::UnityEngine::UI::Dropdown_DropdownItem* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::UnityEngine::UI::Dropdown_DropdownItem*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP236_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void __Gen_Delegate_Imp237(::XLua::LuaTable* a1, ::RPG::Client::SuperDropDown* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP237_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean __Gen_Delegate_Imp238(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP238_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp239(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP239_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp240(::RPG::GameCore::TalkSentenceConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TalkSentenceConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP240_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp241(::RPG::GameCore::BattleEventRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP241_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp242(::RPG::Client::ItemDisplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP242_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp243(::RPG::Client::ItemDisplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP243_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp244(::RPG::Client::ItemDisplayData* a1, ::RPG::Client::ItemDisplayData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemDisplayData*, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP244_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp245(::AkMonitorErrorCode a1, ::AkMonitorErrorLevel a2, ::System::UInt32 a3, ::System::UInt64 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::AkMonitorErrorCode, ::AkMonitorErrorLevel, ::System::UInt32, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP245_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void __Gen_Delegate_Imp246(::RPG::GameCore::MessageItemRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MessageItemRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP246_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp247(::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP247_OFFSET))(this, a1);
		}

		::TMPro::TMP_FontAsset* __Gen_Delegate_Imp248(::System::Int32 a1, ::System::String* a2)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP248_OFFSET))(this, a1, a2);
		}

		::TMPro::TMP_SpriteAsset* __Gen_Delegate_Imp249(::System::Int32 a1, ::System::String* a2)
		{
			return ((::TMPro::TMP_SpriteAsset*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP249_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp250(::TMPro::TMP_TextInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_TextInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP250_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp251(::UnityEngine::Mesh* a1, ::TMPro::TMP_TextInfo* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::TMPro::TMP_TextInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP251_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp252(::UnityEngine::AsyncOperation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP252_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp253(::RPG::GameCore::TurnBasedModifierInstance* a1, ::LPNPMKNMMOK* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::LPNPMKNMMOK*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP253_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp254(::RPG::GameCore::PerformanceERow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceERow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP254_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp255(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP255_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp256(::RPG::Client::PunkLordData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP256_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp257(::RPG::Client::PunkLordData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP257_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp258(::RPG::Client::PunkLordData* a1, ::RPG::Client::PunkLordData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PunkLordData*, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP258_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp259(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP259_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp260(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP260_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp261(::RPG::Client::SubMissionData* a1, ::RPG::Client::SubMissionData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SubMissionData*, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP261_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp262(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP262_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp263(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP263_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp264(::RPG::GameCore::MapEntryRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MapEntryRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP264_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp265(::RPG::GameCore::MapEntryRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapEntryRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP265_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp266(::RPG::GameCore::MapEntryRow* a1, ::RPG::GameCore::MapEntryRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MapEntryRow*, ::RPG::GameCore::MapEntryRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP266_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp267(::RPG::GameCore::LevelMinimapSection* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelMinimapSection*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP267_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp268(::RPG::GameCore::LevelMinimapSection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelMinimapSection*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP268_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp269(::RPG::GameCore::LevelMinimapSection* a1, ::RPG::GameCore::LevelMinimapSection* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LevelMinimapSection*, ::RPG::GameCore::LevelMinimapSection*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP269_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp270(::RPG::Client::PrefDictionary_2<::System::String*, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::String*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP270_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp271(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP271_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp272(::RPG::Client::SettledPunkLordData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SettledPunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP272_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp273(::RPG::Client::SettledPunkLordData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SettledPunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP273_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp274(::RPG::Client::SettledPunkLordData* a1, ::RPG::Client::SettledPunkLordData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SettledPunkLordData*, ::RPG::Client::SettledPunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP274_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp275(::RPG::GameCore::ActivityFightGroupRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActivityFightGroupRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP275_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp276(::RPG::GameCore::ActivityFightGroupRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityFightGroupRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP276_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp277(::RPG::GameCore::ActivityFightGroupRow* a1, ::RPG::GameCore::ActivityFightGroupRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ActivityFightGroupRow*, ::RPG::GameCore::ActivityFightGroupRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP277_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp278(::RPG::Client::FightActivityGroupInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightActivityGroupInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP278_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp279(::RPG::Client::FightActivityGroupInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightActivityGroupInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP279_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp280(::RPG::Client::FightActivityGroupInfo a1, ::RPG::Client::FightActivityGroupInfo a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FightActivityGroupInfo, ::RPG::Client::FightActivityGroupInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP280_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp281(::CDABDPPPHBN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDABDPPPHBN*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP281_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp282(::CDABDPPPHBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDABDPPPHBN*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP282_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp283(::CDABDPPPHBN* a1, ::CDABDPPPHBN* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::CDABDPPPHBN*, ::CDABDPPPHBN*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP283_OFFSET))(this, a1, a2);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* __Gen_Delegate_Imp284(::SuperScrollView::LoopStaggeredGridView* a1, ::System::Int32 a2)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridView*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP284_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp285(::XLua::LuaTable* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP285_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp286(::CDNAABEAPDI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDNAABEAPDI*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP286_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp287(::CDNAABEAPDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDNAABEAPDI*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP287_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp288(::CDNAABEAPDI* a1, ::CDNAABEAPDI* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::CDNAABEAPDI*, ::CDNAABEAPDI*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP288_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp289(::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP289_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp290(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP290_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp291(::RPG::Client::LuaUIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP291_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::OIJOKMHJKLJ*>* __Gen_Delegate_Imp292()
		{
			return ((::System::Collections::Generic::List_1<::OIJOKMHJKLJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP292_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp293(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP293_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp294(::RPG::Client::AetherDivideGymDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AetherDivideGymDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP294_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp295(::RPG::Client::AetherDivideGymDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherDivideGymDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP295_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp296(::RPG::Client::AetherDivideGymDataItem* a1, ::RPG::Client::AetherDivideGymDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AetherDivideGymDataItem*, ::RPG::Client::AetherDivideGymDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP296_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp297(::System::Object* a1, ::RPG::Client::AlleyTransportRouteState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::RPG::Client::AlleyTransportRouteState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP297_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp298(::RPG::Client::PrefHashSet_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::System::Object*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP298_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp299(::XLua::LuaTable* a1, ::RPG::Client::ActivityAlley::AlleyPackComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP299_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp300(::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP300_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp301(::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP301_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp302(::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP302_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp303(::BOFJHGFAJBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOFJHGFAJBN*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP303_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp304(::FKEPGDPBEHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKEPGDPBEHH*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP304_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp305(::DODJIGDAJFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DODJIGDAJFE*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP305_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp306(::HPIFMHPHMGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPIFMHPHMGB*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP306_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp307(::ENHCOHMNNOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENHCOHMNNOD*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP307_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp308(::RPG::Client::AlleyEventInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AlleyEventInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP308_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp309(::RPG::Client::AlleyEventInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AlleyEventInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP309_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp310(::RPG::Client::AlleyEventInfo a1, ::RPG::Client::AlleyEventInfo a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AlleyEventInfo, ::RPG::Client::AlleyEventInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP310_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp311(::RPG::Client::FantasticStoryParagraphData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FantasticStoryParagraphData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP311_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp312(::RPG::Client::FantasticStoryParagraphData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FantasticStoryParagraphData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP312_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp313(::RPG::Client::FantasticStoryParagraphData* a1, ::RPG::Client::FantasticStoryParagraphData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FantasticStoryParagraphData*, ::RPG::Client::FantasticStoryParagraphData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP313_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp314(::XLua::LuaTable* a1, ::RPG::Client::ChessRogueBoardCellDataItem* a2, ::RPG::Client::MonoRogueHexChessBoardItem* a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::ChessRogueBoardCellDataItem*, ::RPG::Client::MonoRogueHexChessBoardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP314_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp315(::KJHIAECCGBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJHIAECCGBD*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP315_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp316(::RPG::Client::FuncEntranceData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FuncEntranceData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP316_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp317(::RPG::Client::FuncEntranceData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FuncEntranceData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP317_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp318(::RPG::Client::FuncEntranceData* a1, ::RPG::Client::FuncEntranceData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FuncEntranceData*, ::RPG::Client::FuncEntranceData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP318_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp319(::UnityEngine::Mesh* a1, ::UnityEngine::Material* a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Material*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP319_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp320(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Mesh*>* a2, ::Il2CppArray<::UnityEngine::Material*>* a3, ::Il2CppArray<::UnityEngine::Texture*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Mesh*>*, ::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Texture*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP320_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void __Gen_Delegate_Imp321(::Spine::Unity::SkeletonGraphic* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP321_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp322(::Spine::Unity::SkeletonRendererInstruction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP322_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp323(::Spine::Unity::ISkeletonAnimation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimation*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP323_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp324(::Spine::Unity::MeshGeneratorBuffers a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::MeshGeneratorBuffers))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP324_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp325(::RPG::Client::Prop::JigsawItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP325_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp326(::RPG::Client::Prop::JigsawItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP326_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp327(::RPG::Client::Prop::JigsawItemData* a1, ::RPG::Client::Prop::JigsawItemData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP327_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp328(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP328_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp329(::RPG::Client::FantasticStoryChapterData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FantasticStoryChapterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP329_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp330(::RPG::Client::FantasticStoryChapterData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FantasticStoryChapterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP330_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp331(::RPG::Client::FantasticStoryChapterData* a1, ::RPG::Client::FantasticStoryChapterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FantasticStoryChapterData*, ::RPG::Client::FantasticStoryChapterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP331_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp332(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP332_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp333(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP333_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp334(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP334_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp335(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP335_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp336(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP336_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp337(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP337_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp338(::RPG::GameCore::RogueImageRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueImageRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP338_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp339(::RPG::GameCore::RogueImageRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueImageRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP339_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp340(::RPG::GameCore::RogueImageRow* a1, ::RPG::GameCore::RogueImageRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueImageRow*, ::RPG::GameCore::RogueImageRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP340_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp341(::RPG::GameCore::RogueDLCMainStoryRewardRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueDLCMainStoryRewardRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP341_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp342(::RPG::GameCore::RogueDLCMainStoryRewardRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueDLCMainStoryRewardRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP342_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp343(::RPG::GameCore::RogueDLCMainStoryRewardRow* a1, ::RPG::GameCore::RogueDLCMainStoryRewardRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueDLCMainStoryRewardRow*, ::RPG::GameCore::RogueDLCMainStoryRewardRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP343_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp344(::RPG::GameCore::CEBattlePresetConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CEBattlePresetConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP344_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp345(::RPG::GameCore::CEBattlePresetConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CEBattlePresetConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP345_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp346(::RPG::GameCore::CEBattlePresetConfig* a1, ::RPG::GameCore::CEBattlePresetConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CEBattlePresetConfig*, ::RPG::GameCore::CEBattlePresetConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP346_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp347(::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::Single>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP347_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp348(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP348_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp349(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP349_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp350(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP350_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp351(::RPG::GameCore::ItemConfig* a1, ::RPG::GameCore::ItemConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ItemConfig*, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP351_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp352(::RPG::Client::PrefDictionary_2<::System::Object*, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::Object*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP352_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp353(::RPG::Client::ActivityModule_ActivityType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityModule_ActivityType, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP353_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp354(::RPG::GameCore::RogueDLCAeonCrossRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueDLCAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP354_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp355(::RPG::GameCore::RogueDLCAeonCrossRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueDLCAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP355_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp356(::RPG::GameCore::RogueDLCAeonCrossRow* a1, ::RPG::GameCore::RogueDLCAeonCrossRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueDLCAeonCrossRow*, ::RPG::GameCore::RogueDLCAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP356_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp357(::RPG::GameCore::RogueBuffRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP357_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp358(::RPG::GameCore::RogueBuffRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP358_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp359(::RPG::GameCore::RogueBuffRow* a1, ::RPG::GameCore::RogueBuffRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueBuffRow*, ::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP359_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp360(::RPG::GameCore::RogueNousAeonCrossRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueNousAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP360_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp361(::RPG::GameCore::RogueNousAeonCrossRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueNousAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP361_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp362(::RPG::GameCore::RogueNousAeonCrossRow* a1, ::RPG::GameCore::RogueNousAeonCrossRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueNousAeonCrossRow*, ::RPG::GameCore::RogueNousAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP362_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp363(::RPG::GameCore::RogueNousAeonRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP363_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp364(::RPG::GameCore::RogueNousAeonRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP364_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp365(::RPG::GameCore::RogueNousAeonRow* a1, ::RPG::GameCore::RogueNousAeonRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueNousAeonRow*, ::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP365_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp366(::RPG::Client::RogueNousDiceSlotDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueNousDiceSlotDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP366_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp367(::RPG::Client::RogueNousDiceSlotDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueNousDiceSlotDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP367_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp368(::RPG::Client::RogueNousDiceSlotDataItem* a1, ::RPG::Client::RogueNousDiceSlotDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueNousDiceSlotDataItem*, ::RPG::Client::RogueNousDiceSlotDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP368_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp369(::Proto::StrongChallengeAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP369_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp370(::Proto::StrongChallengeAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP370_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp371(::Proto::StrongChallengeAvatar* a1, ::Proto::StrongChallengeAvatar* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Proto::StrongChallengeAvatar*, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP371_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 __Gen_Delegate_Imp372(::RPG::GameCore::CharacterInputData* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP372_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp373(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP373_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp374(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP374_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp375(::RPG::GameCore::AdventureCharacterController* a1, ::System::String* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP375_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean __Gen_Delegate_Imp376(::RPG::GameCore::ConditionParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP376_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp377(::RPG::GameCore::ConditionParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP377_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp378(::RPG::GameCore::ConditionParam* a1, ::RPG::GameCore::ConditionParam* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ConditionParam*, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP378_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp379(::RPG::GameCore::ItemComefromRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemComefromRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP379_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp380(::RPG::GameCore::ItemComefromRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemComefromRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP380_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp381(::RPG::GameCore::ItemComefromRow* a1, ::RPG::GameCore::ItemComefromRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ItemComefromRow*, ::RPG::GameCore::ItemComefromRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP381_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp382(::RPG::Client::MonsterData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP382_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp383(::RPG::Client::MonsterData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP383_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp384(::RPG::Client::MonsterData* a1, ::RPG::Client::MonsterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP384_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp385(::XLua::LuaTable* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP385_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp386(::XLua::LuaTable* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP386_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp387(::RPG::Client::RogueNousDiceSurfaceDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueNousDiceSurfaceDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP387_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp388(::RPG::Client::RogueNousDiceSurfaceDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueNousDiceSurfaceDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP388_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp389(::RPG::Client::RogueNousDiceSurfaceDataItem* a1, ::RPG::Client::RogueNousDiceSurfaceDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueNousDiceSurfaceDataItem*, ::RPG::Client::RogueNousDiceSurfaceDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP389_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp390(::RPG::Client::RogueNousDiceBranchDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueNousDiceBranchDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP390_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp391(::RPG::Client::RogueNousDiceBranchDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueNousDiceBranchDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP391_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp392(::RPG::Client::RogueNousDiceBranchDataItem* a1, ::RPG::Client::RogueNousDiceBranchDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueNousDiceBranchDataItem*, ::RPG::Client::RogueNousDiceBranchDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP392_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp393(::RPG::Client::MonoSceneObjClickHint* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoSceneObjClickHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP393_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp394(::RPG::Client::MonoSceneObjClickHint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoSceneObjClickHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP394_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp395(::RPG::Client::MonoSceneObjClickHint* a1, ::RPG::Client::MonoSceneObjClickHint* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonoSceneObjClickHint*, ::RPG::Client::MonoSceneObjClickHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP395_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp396(::RPG::Client::TextID a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP396_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp397(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP397_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp398(::RPG::Client::TextID a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP398_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp399(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP399_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp400(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP400_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp401(::RPG::Client::CompanionMissionActivityBannerData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CompanionMissionActivityBannerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP401_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp402(::RPG::Client::CompanionMissionActivityBannerData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CompanionMissionActivityBannerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP402_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp403(::RPG::Client::CompanionMissionActivityBannerData* a1, ::RPG::Client::CompanionMissionActivityBannerData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CompanionMissionActivityBannerData*, ::RPG::Client::CompanionMissionActivityBannerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP403_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp404(::RPG::Client::RogueTournAreaDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP404_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp405(::RPG::Client::RogueTournAreaDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP405_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp406(::RPG::Client::RogueTournAreaDataItem* a1, ::RPG::Client::RogueTournAreaDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournAreaDataItem*, ::RPG::Client::RogueTournAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP406_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp407(::RPG::GameCore::EvolveBuildGearEquipInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP407_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp408(::RPG::GameCore::EvolveBuildGearEquipInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP408_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp409(::RPG::GameCore::EvolveBuildGearEquipInfo* a1, ::RPG::GameCore::EvolveBuildGearEquipInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP409_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp410(::RPG::Client::EvolveBuildMixData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP410_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp411(::RPG::Client::EvolveBuildMixData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP411_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp412(::RPG::Client::EvolveBuildMixData* a1, ::RPG::Client::EvolveBuildMixData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildMixData*, ::RPG::Client::EvolveBuildMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP412_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp413(::RPG::Client::ClockParkAttributeType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ClockParkAttributeType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP413_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp414(::RPG::Client::ClockParkAttributeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkAttributeType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP414_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp415(::RPG::Client::ClockParkAttributeType a1, ::RPG::Client::ClockParkAttributeType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ClockParkAttributeType, ::RPG::Client::ClockParkAttributeType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP415_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp416(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::PoolList_1<::UnityEngine::Vector2Int>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::PoolList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP416_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp417(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP417_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp418(::RPG::Client::LittleGame::Match3::Match3GameState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::Match3GameState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP418_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp419(::XLua::LuaTable* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP419_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp420(::UnityEngine::Transform* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP420_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp421(::RPG::Client::SwordTrainingSkillData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingSkillData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP421_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp422(::RPG::Client::SwordTrainingSkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingSkillData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP422_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp423(::RPG::Client::SwordTrainingSkillData* a1, ::RPG::Client::SwordTrainingSkillData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwordTrainingSkillData*, ::RPG::Client::SwordTrainingSkillData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP423_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp424(::RPG::GameCore::PerformanceIDPair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PerformanceIDPair*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP424_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp425(::RPG::GameCore::PerformanceIDPair* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceIDPair*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP425_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp426(::RPG::GameCore::PerformanceIDPair* a1, ::RPG::GameCore::PerformanceIDPair* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::PerformanceIDPair*, ::RPG::GameCore::PerformanceIDPair*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP426_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp427(::InControl::BindingSourceType a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSourceType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP427_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp428(::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP428_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp429(::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP429_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp430(::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* a1, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP430_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp431(::RPG::Client::MultipleDropData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP431_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp432(::RPG::Client::MultipleDropData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP432_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp433(::RPG::Client::MultipleDropData* a1, ::RPG::Client::MultipleDropData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MultipleDropData*, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP433_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp434(::RPG::Client::TrainParty::TrainPartyRecordGroup* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordGroup*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP434_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp435(::RPG::Client::TrainParty::TrainPartyRecordGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordGroup*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP435_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp436(::RPG::Client::TrainParty::TrainPartyRecordGroup* a1, ::RPG::Client::TrainParty::TrainPartyRecordGroup* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordGroup*, ::RPG::Client::TrainParty::TrainPartyRecordGroup*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP436_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp437(::RPG::Client::ActivitySummonStage* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivitySummonStage*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP437_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp438(::RPG::Client::ActivitySummonStage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivitySummonStage*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP438_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp439(::RPG::Client::ActivitySummonStage* a1, ::RPG::Client::ActivitySummonStage* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivitySummonStage*, ::RPG::Client::ActivitySummonStage*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP439_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp440(::RPG::Client::PrefHashSet_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP440_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp441(::RPG::Client::SwordTrainingEndingDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingEndingDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP441_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp442(::RPG::Client::SwordTrainingEndingDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingEndingDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP442_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp443(::RPG::Client::SwordTrainingEndingDataItem* a1, ::RPG::Client::SwordTrainingEndingDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwordTrainingEndingDataItem*, ::RPG::Client::SwordTrainingEndingDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP443_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp444(::RPG::Client::RogueMagicAreaDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP444_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp445(::RPG::Client::RogueMagicAreaDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP445_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp446(::RPG::Client::RogueMagicAreaDataItem* a1, ::RPG::Client::RogueMagicAreaDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicAreaDataItem*, ::RPG::Client::RogueMagicAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP446_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp447(::RPG::Client::RogueMagicUnitDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP447_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp448(::RPG::Client::RogueMagicUnitDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP448_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp449(::RPG::Client::RogueMagicUnitDataItem* a1, ::RPG::Client::RogueMagicUnitDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP449_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp450(::RPG::Client::SuitRecommendAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SuitRecommendAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP450_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp451(::RPG::Client::SuitRecommendAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SuitRecommendAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP451_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp452(::RPG::Client::SuitRecommendAvatarData* a1, ::RPG::Client::SuitRecommendAvatarData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SuitRecommendAvatarData*, ::RPG::Client::SuitRecommendAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP452_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp453(::RPG::Client::PrefDictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP453_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp454(::IPDJEKLHILE* a1, ::NOPBGGCGFMM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IPDJEKLHILE*, ::NOPBGGCGFMM*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP454_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp455(::RPG::Client::SwitchHandCoinData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwitchHandCoinData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP455_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp456(::RPG::Client::SwitchHandCoinData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwitchHandCoinData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP456_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp457(::RPG::Client::SwitchHandCoinData* a1, ::RPG::Client::SwitchHandCoinData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwitchHandCoinData*, ::RPG::Client::SwitchHandCoinData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP457_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp458(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP458_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp459(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP459_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp460(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP460_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp461(::RPG::Client::RogueMagicScepterDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP461_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp462(::RPG::Client::RogueMagicScepterDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP462_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp463(::RPG::Client::RogueMagicScepterDataItem* a1, ::RPG::Client::RogueMagicScepterDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP463_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp464(::RPG::Client::ActivityPanelData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP464_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp465(::RPG::Client::ActivityPanelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP465_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp466(::RPG::Client::ActivityPanelData* a1, ::RPG::Client::ActivityPanelData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityPanelData*, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP466_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp467(::RPG::Client::TarotBookCharacter* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookCharacter*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP467_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp468(::RPG::Client::TarotBookCharacter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookCharacter*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP468_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp469(::RPG::Client::TarotBookCharacter* a1, ::RPG::Client::TarotBookCharacter* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookCharacter*, ::RPG::Client::TarotBookCharacter*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP469_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp470(::RPG::Client::TarotBookCard* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP470_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp471(::RPG::Client::TarotBookCard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP471_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp472(::RPG::Client::TarotBookCard* a1, ::RPG::Client::TarotBookCard* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookCard*, ::RPG::Client::TarotBookCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP472_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp473(::RPG::Client::TarotBookClue* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookClue*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP473_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp474(::RPG::Client::TarotBookClue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookClue*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP474_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp475(::RPG::Client::TarotBookClue* a1, ::RPG::Client::TarotBookClue* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookClue*, ::RPG::Client::TarotBookClue*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP475_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp476(::RPG::Client::TarotBookStory* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookStory*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP476_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp477(::RPG::Client::TarotBookStory* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookStory*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP477_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp478(::RPG::Client::TarotBookStory* a1, ::RPG::Client::TarotBookStory* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookStory*, ::RPG::Client::TarotBookStory*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP478_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp479(::RPG::Client::BookletLuaPanelParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookletLuaPanelParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP479_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp480(::RPG::Client::TrainParty::TrainPartyMeetingRankInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingRankInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP480_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp481(::RPG::Client::IRogueTournBuildRefTeamMemberData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP481_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp482(::RPG::Client::IRogueTournBuildRefTeamMemberData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP482_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp483(::RPG::Client::IRogueTournBuildRefTeamMemberData* a1, ::RPG::Client::IRogueTournBuildRefTeamMemberData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP483_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp484(::RPG::Client::NavMap::MappingInfoNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP484_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp485(::RPG::Client::NavMap::MappingInfoNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP485_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp486(::RPG::Client::NavMap::MappingInfoNode* a1, ::RPG::Client::NavMap::MappingInfoNode* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP486_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp487(::RPG::Client::GachaGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP487_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp488(::RPG::Client::GachaGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP488_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp489(::RPG::Client::GachaGroupData* a1, ::RPG::Client::GachaGroupData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GachaGroupData*, ::RPG::Client::GachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP489_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp490(::RPG::Client::TarotBookReadReward* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookReadReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP490_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp491(::RPG::Client::TarotBookReadReward* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookReadReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP491_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp492(::RPG::Client::TarotBookReadReward* a1, ::RPG::Client::TarotBookReadReward* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookReadReward*, ::RPG::Client::TarotBookReadReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP492_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp493(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP493_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp494(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP494_OFFSET))(this, a1);
		}

		::XLua::LuaBase* __Gen_Delegate_Imp495(::System::Int32 a1, ::XLua::LuaEnv* a2)
		{
			return ((::XLua::LuaBase*(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP495_OFFSET))(this, a1, a2);
		}

		::System::Int32 __Gen_Delegate_Imp496(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP496_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp497(::RPG::GameCore::RelicType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP497_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp498(::RPG::GameCore::RelicType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP498_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp499(::RPG::GameCore::RelicType a1, ::RPG::GameCore::RelicType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RelicType, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP499_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp500(::RPG::Client::TarotBookInteraction* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP500_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp501(::RPG::Client::TarotBookInteraction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP501_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp502(::RPG::Client::TarotBookInteraction* a1, ::RPG::Client::TarotBookInteraction* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookInteraction*, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP502_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp503(::RPG::Client::ActivityMarble::MarbleSealData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP503_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp504(::RPG::Client::ActivityMarble::MarbleSealData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP504_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp505(::RPG::Client::ActivityMarble::MarbleSealData* a1, ::RPG::Client::ActivityMarble::MarbleSealData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP505_OFFSET))(this, a1, a2);
		}

		::System::UInt32 __Gen_Delegate_Imp506(::XLua::LuaTable* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::XLua::LuaTable*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP506_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp507(::PNFBJNFDAFC* a1, ::PNFBJNFDAFC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PNFBJNFDAFC*, ::PNFBJNFDAFC*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP507_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp508(::RPG::GameCore::AvatarServantSkillRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarServantSkillRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP508_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp509(::XLua::LuaTable* a1, ::RPG::Client::PlanetFesToastItem* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP509_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp510(::XLua::LuaTable* a1, ::RPG::Client::PlanetFesToastItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP510_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp511(::RPG::Client::PlanetFesThemeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesThemeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP511_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp512(::RPG::Client::PlanetFesThemeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesThemeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP512_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp513(::RPG::Client::PlanetFesThemeData* a1, ::RPG::Client::PlanetFesThemeData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesThemeData*, ::RPG::Client::PlanetFesThemeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP513_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp514(::RPG::Client::PlanetFesCardData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesCardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP514_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp515(::RPG::Client::PlanetFesCardData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesCardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP515_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp516(::RPG::Client::PlanetFesCardData* a1, ::RPG::Client::PlanetFesCardData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesCardData*, ::RPG::Client::PlanetFesCardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP516_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp517(::RPG::Client::VirtualRankChimeraTeam* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualRankChimeraTeam*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP517_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp518(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP518_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp519(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP519_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp520(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP520_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* __Gen_Delegate_Imp521(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP521_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp522(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP522_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp523(::RPG::Client::QuestData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP523_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp524(::RPG::Client::QuestData* a1, ::RPG::Client::QuestData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::QuestData*, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP524_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp525(::RPG::Client::FightFestPhase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightFestPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP525_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp526(::RPG::Client::FightFestPhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP526_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp527(::RPG::Client::FightFestPhase* a1, ::RPG::Client::FightFestPhase* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FightFestPhase*, ::RPG::Client::FightFestPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP527_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp528(::RPG::Client::FightFestCoachSkill* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightFestCoachSkill*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP528_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp529(::RPG::Client::FightFestCoachSkill* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestCoachSkill*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP529_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp530(::RPG::Client::FightFestCoachSkill* a1, ::RPG::Client::FightFestCoachSkill* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FightFestCoachSkill*, ::RPG::Client::FightFestCoachSkill*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP530_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp531(::RPG::Client::MatchThreeBirdData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeBirdData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP531_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp532(::RPG::Client::MatchThreeBirdData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBirdData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP532_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp533(::RPG::Client::MatchThreeBirdData* a1, ::RPG::Client::MatchThreeBirdData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MatchThreeBirdData*, ::RPG::Client::MatchThreeBirdData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP533_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp534(::UnityEngine::EventSystems::IPointerEnterHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerEnterHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP534_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp535(::UnityEngine::EventSystems::IPointerExitHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerExitHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP535_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp536(::UnityEngine::EventSystems::IPointerDownHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerDownHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP536_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp537(::UnityEngine::EventSystems::IPointerUpHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerUpHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP537_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp538(::UnityEngine::EventSystems::IPointerClickHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerClickHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP538_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp539(::UnityEngine::EventSystems::IInitializePotentialDragHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IInitializePotentialDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP539_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp540(::UnityEngine::EventSystems::IBeginDragHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IBeginDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP540_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp541(::UnityEngine::EventSystems::IDragHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP541_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp542(::UnityEngine::EventSystems::IEndDragHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IEndDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP542_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp543(::UnityEngine::EventSystems::IDropHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IDropHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP543_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp544(::UnityEngine::EventSystems::IScrollHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IScrollHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP544_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp545(::UnityEngine::EventSystems::IUpdateSelectedHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IUpdateSelectedHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP545_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp546(::UnityEngine::EventSystems::ISelectHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::ISelectHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP546_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp547(::UnityEngine::EventSystems::IDeselectHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IDeselectHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP547_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp548(::UnityEngine::EventSystems::IMoveHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IMoveHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP548_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp549(::UnityEngine::EventSystems::ISubmitHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::ISubmitHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP549_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp550(::UnityEngine::EventSystems::ICancelHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::ICancelHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP550_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp551(::UnityEngine::EventSystems::IIgnoreHandler* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IIgnoreHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP551_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp552(::RPG::Client::PlanetFesMiniGameBingoRewardLevel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP552_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp553(::RPG::Client::PlanetFesMiniGameBingoRewardLevel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP553_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp554(::RPG::Client::PlanetFesMiniGameBingoRewardLevel* a1, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel*, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP554_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp555(::RPG::Client::IPlanetFesBuff* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP555_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp556(::RPG::Client::IPlanetFesBuff* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP556_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp557(::RPG::Client::IPlanetFesBuff* a1, ::RPG::Client::IPlanetFesBuff* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP557_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp558(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP558_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp559(::InControl::InputDevice* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP559_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp560(::RPG::Client::WheelItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::WheelItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP560_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp561(::RPG::Client::WheelItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WheelItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP561_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp562(::RPG::Client::WheelItem* a1, ::RPG::Client::WheelItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::WheelItem*, ::RPG::Client::WheelItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP562_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp563(::RPG::Client::EvolveBuildCard* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP563_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp564(::RPG::Client::EvolveBuildCard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP564_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp565(::RPG::Client::EvolveBuildCard* a1, ::RPG::Client::EvolveBuildCard* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildCard*, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP565_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp566(::RPG::Client::EvolveBuildScMixData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildScMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP566_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp567(::RPG::Client::EvolveBuildScMixData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildScMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP567_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp568(::RPG::Client::EvolveBuildScMixData* a1, ::RPG::Client::EvolveBuildScMixData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildScMixData*, ::RPG::Client::EvolveBuildScMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP568_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp569(::XLua::LuaTable* a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP569_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp570(::RPG::Client::EquipmentItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP570_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp571(::RPG::Client::EquipmentItemData* a1, ::RPG::Client::EquipmentItemData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EquipmentItemData*, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP571_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp572(::HNOHHOEPFHC a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HNOHHOEPFHC))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP572_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp573(::HNOHHOEPFHC a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNOHHOEPFHC))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP573_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp574(::HNOHHOEPFHC a1, ::HNOHHOEPFHC a2)
		{
			return ((::System::Int32(*)(::PVOID, ::HNOHHOEPFHC, ::HNOHHOEPFHC))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP574_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp575(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP575_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp576(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP576_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp577(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicItemData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP577_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp578(::RPG::GameCore::MarblePVPRankConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MarblePVPRankConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP578_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp579(::RPG::GameCore::MarblePVPRankConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarblePVPRankConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP579_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp580(::RPG::GameCore::MarblePVPRankConfigRow* a1, ::RPG::GameCore::MarblePVPRankConfigRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MarblePVPRankConfigRow*, ::RPG::GameCore::MarblePVPRankConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP580_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp581(::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP581_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp582(::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP582_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp583(::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* a1, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP583_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp584(::RPG::Client::PlanetFesTradingCardOfferItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardOfferItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP584_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp585(::RPG::Client::PlanetFesTradingCardOfferItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardOfferItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP585_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp586(::RPG::Client::PlanetFesTradingCardOfferItem* a1, ::RPG::Client::PlanetFesTradingCardOfferItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardOfferItem*, ::RPG::Client::PlanetFesTradingCardOfferItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP586_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp587(::RPG::Client::ElfRestaurantRecipeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP587_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp588(::RPG::Client::ElfRestaurantRecipeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP588_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp589(::RPG::Client::ElfRestaurantRecipeData* a1, ::RPG::Client::ElfRestaurantRecipeData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP589_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp590(::System::UInt64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP590_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp591(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP591_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp592(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP592_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp593(::RPG::Client::ElfShopItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ElfShopItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP593_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp594(::RPG::Client::ElfShopItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfShopItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP594_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp595(::RPG::Client::ElfShopItemData* a1, ::RPG::Client::ElfShopItemData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ElfShopItemData*, ::RPG::Client::ElfShopItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP595_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp596(::RPG::GameCore::MazeBuffData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP596_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp597(::RPG::GameCore::MazeBuffData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP597_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp598(::RPG::GameCore::MazeBuffData* a1, ::RPG::GameCore::MazeBuffData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MazeBuffData*, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP598_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp599(::RPG::Client::NewsTickerItem* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NewsTickerItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP599_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp600(::RPG::Client::PlanetFesTradingCardApplyItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardApplyItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP600_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp601(::RPG::Client::PlanetFesTradingCardApplyItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardApplyItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP601_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp602(::RPG::Client::PlanetFesTradingCardApplyItem* a1, ::RPG::Client::PlanetFesTradingCardApplyItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardApplyItem*, ::RPG::Client::PlanetFesTradingCardApplyItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP602_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp603(::RPG::Client::PlanetFesSkillPhase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesSkillPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP603_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp604(::RPG::Client::PlanetFesSkillPhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesSkillPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP604_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp605(::RPG::Client::PlanetFesSkillPhase* a1, ::RPG::Client::PlanetFesSkillPhase* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesSkillPhase*, ::RPG::Client::PlanetFesSkillPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP605_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp606(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP606_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp607(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP607_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp608(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::RPG::Client::IRogueTournBuildRefDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP608_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp609(::RPG::Client::LittleGame::FiveDim::FiveDimMoveInputData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimMoveInputData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP609_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp610(::RPG::Client::ParkourRank* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourRank*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP610_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp611(::RPG::Client::ParkourRank* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourRank*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP611_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp612(::RPG::Client::ParkourRank* a1, ::RPG::Client::ParkourRank* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ParkourRank*, ::RPG::Client::ParkourRank*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP612_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp613(::RPG::Client::IFateGameRoundSettleDmgSourceItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IFateGameRoundSettleDmgSourceItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP613_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp614(::RPG::Client::IFateGameRoundSettleDmgSourceItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IFateGameRoundSettleDmgSourceItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP614_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp615(::RPG::Client::IFateGameRoundSettleDmgSourceItem* a1, ::RPG::Client::IFateGameRoundSettleDmgSourceItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IFateGameRoundSettleDmgSourceItem*, ::RPG::Client::IFateGameRoundSettleDmgSourceItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP615_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp616(::RPG::Client::AvatarEnhancedHint* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarEnhancedHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP616_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp617(::RPG::Client::AvatarEnhancedHint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarEnhancedHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP617_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp618(::RPG::Client::AvatarEnhancedHint* a1, ::RPG::Client::AvatarEnhancedHint* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarEnhancedHint*, ::RPG::Client::AvatarEnhancedHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP618_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp619(::RPG::Client::FateHandbookHouguItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateHandbookHouguItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP619_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp620(::RPG::Client::FateHandbookHouguItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateHandbookHouguItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP620_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp621(::RPG::Client::FateHandbookHouguItem* a1, ::RPG::Client::FateHandbookHouguItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateHandbookHouguItem*, ::RPG::Client::FateHandbookHouguItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP621_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp622(::RPG::Client::FateHandbookReijuItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateHandbookReijuItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP622_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp623(::RPG::Client::FateHandbookReijuItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateHandbookReijuItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP623_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp624(::RPG::Client::FateHandbookReijuItem* a1, ::RPG::Client::FateHandbookReijuItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateHandbookReijuItem*, ::RPG::Client::FateHandbookReijuItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP624_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp625(::RPG::Client::GridFightOrbData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightOrbData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP625_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp626(::RPG::Client::GridFightOrbData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightOrbData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP626_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp627(::RPG::Client::GridFightOrbData* a1, ::RPG::Client::GridFightOrbData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightOrbData*, ::RPG::Client::GridFightOrbData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP627_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp628(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP628_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp629(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP629_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp630(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP630_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp631(::RPG::Client::BaseGachaGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BaseGachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP631_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp632(::RPG::Client::BaseGachaGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP632_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp633(::RPG::Client::BaseGachaGroupData* a1, ::RPG::Client::BaseGachaGroupData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseGachaGroupData*, ::RPG::Client::BaseGachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP633_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp634(::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP634_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp635(::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP635_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp636(::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* a1, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP636_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp637(::RPG::GameCore::HipplenGameGradeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenGameGradeType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP637_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp638(::APNHLNMDIIE_HNBIIAGFOHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APNHLNMDIIE_HNBIIAGFOHF*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP638_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp639(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP639_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp640(::RPG::Client::GridFightGridData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP640_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp641(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP641_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp642(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP642_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp643(::RPG::Client::GridFightMonsterAffixConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP643_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp644(::RPG::Client::GridFightMonsterAffixConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP644_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp645(::RPG::Client::GridFightMonsterAffixConfig* a1, ::RPG::Client::GridFightMonsterAffixConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP645_OFFSET))(this, a1, a2);
		}

		::System::Single __Gen_Delegate_Imp646(::UnityEngine::UI::ILayoutElement* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP646_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp647(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP647_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp648(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP648_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp649(::RPG::Client::GridFightTrait* a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightTrait*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP649_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp650(::RPG::Client::DrinkMakerCheersGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP650_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp651(::RPG::Client::DrinkMakerCheersGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP651_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp652(::RPG::Client::DrinkMakerCheersGroupData* a1, ::RPG::Client::DrinkMakerCheersGroupData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGroupData*, ::RPG::Client::DrinkMakerCheersGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP652_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp653(::RPG::Client::DrinkMakerCheersGuestCommentData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestCommentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP653_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp654(::RPG::Client::DrinkMakerCheersGuestCommentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestCommentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP654_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp655(::RPG::Client::DrinkMakerCheersGuestCommentData* a1, ::RPG::Client::DrinkMakerCheersGuestCommentData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestCommentData*, ::RPG::Client::DrinkMakerCheersGuestCommentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP655_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp656(::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP656_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp657(::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP657_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp658(::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP658_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp659(::RPG::Client::RoleTrialActivityData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RoleTrialActivityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP659_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp660(::RPG::Client::RoleTrialActivityData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RoleTrialActivityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP660_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp661(::RPG::Client::RoleTrialActivityData* a1, ::RPG::Client::RoleTrialActivityData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RoleTrialActivityData*, ::RPG::Client::RoleTrialActivityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP661_OFFSET))(this, a1, a2);
		}

		::System::Int32 __Gen_Delegate_Imp662(::RPG::Client::HeadIconDisplayData* a1, ::RPG::Client::HeadIconDisplayData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::HeadIconDisplayData*, ::RPG::Client::HeadIconDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP662_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp663(::RPG::GameCore::MainMissionSortedItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MainMissionSortedItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP663_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp664(::RPG::GameCore::MainMissionSortedItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MainMissionSortedItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP664_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp665(::RPG::GameCore::MainMissionSortedItem* a1, ::RPG::GameCore::MainMissionSortedItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MainMissionSortedItem*, ::RPG::GameCore::MainMissionSortedItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP665_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp666(::RPG::GameCore::PerformanceSkipOverrideRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceSkipOverrideRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP666_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp667(::RPG::Client::GridFightMonsterCampConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP667_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp668(::RPG::Client::GridFightMonsterCampConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP668_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp669(::RPG::Client::GridFightMonsterCampConfig* a1, ::RPG::Client::GridFightMonsterCampConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP669_OFFSET))(this, a1, a2);
		}

		::SuperScrollView::LoopFlexibleGridViewItem* __Gen_Delegate_Imp670(::XLua::LuaTable* a1, ::SuperScrollView::LoopFlexibleGridView* a2, ::System::Int32 a3)
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopFlexibleGridView*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP670_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean __Gen_Delegate_Imp671(::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP671_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp672(::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP672_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp673(::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP673_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp674(::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP674_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp675(::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP675_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp676(::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP676_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp677(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP677_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp678(::RPG::Client::GridFightRole* a1, ::RPG::Client::GridFightRole* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRole*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP678_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp679(::RPG::Client::GridFightAugment* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP679_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp680(::RPG::Client::GridFightAugment* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP680_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp681(::RPG::Client::GridFightAugment* a1, ::RPG::Client::GridFightAugment* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightAugment*, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP681_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp682(::RPG::Client::GridFightHandBookEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP682_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp683(::RPG::Client::GridFightHandBookEquipItemConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP683_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp684(::RPG::Client::GridFightHandBookEquipItemConfig* a1, ::RPG::Client::GridFightHandBookEquipItemConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP684_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp685(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP685_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp686(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP686_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp687(::RPG::Client::CakeRaceBattleItemDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP687_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp688(::RPG::Client::CakeRaceBattleItemDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP688_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp689(::RPG::Client::CakeRaceBattleItemDataItem* a1, ::RPG::Client::CakeRaceBattleItemDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemDataItem*, ::RPG::Client::CakeRaceBattleItemDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP689_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp690(::UnityEngine::EventSystems::RaycastResult a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP690_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp691(::UnityEngine::EventSystems::RaycastResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP691_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp692(::UnityEngine::EventSystems::RaycastResult a1, ::UnityEngine::EventSystems::RaycastResult a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP692_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp693(::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP693_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp694(::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP694_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp695(::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP695_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp696(::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP696_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp697(::RPG::Client::GridFightGameRefData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP697_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp698(::System::Collections::Generic::Dictionary_2<::System::String*, ::CCGFCHPPIDH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::CCGFCHPPIDH*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP698_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp699(::RPG::Client::GridFightGameRefHttpRspBody_1<::DPFBIPPLJAP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefHttpRspBody_1<::DPFBIPPLJAP*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP699_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp700(::RPG::Client::TeamBuild* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamBuild*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP700_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp701(::RPG::Client::TeamBuild* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamBuild*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP701_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp702(::RPG::Client::TeamBuild* a1, ::RPG::Client::TeamBuild* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TeamBuild*, ::RPG::Client::TeamBuild*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP702_OFFSET))(this, a1, a2);
		}

		::RPG::Client::UIBubbleItem* __Gen_Delegate_Imp703(::XLua::LuaTable* a1, ::RPG::Client::UIBubbleManager* a2)
		{
			return ((::RPG::Client::UIBubbleItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::UIBubbleManager*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP703_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp704(::RPG::Client::GridFightOrbEntityData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP704_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp705(::RPG::Client::GridFightOrbEntityData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP705_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp706(::RPG::Client::GridFightOrbEntityData* a1, ::RPG::Client::GridFightOrbEntityData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP706_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp707(::RPG::Client::ActivityHotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP707_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp708(::RPG::Client::ActivityHotData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP708_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp709(::RPG::Client::ActivityHotData* a1, ::RPG::Client::ActivityHotData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHotData*, ::RPG::Client::ActivityHotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP709_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp710(::RPG::Client::ActivityHotCoreRewardData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHotCoreRewardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP710_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp711(::RPG::Client::ActivityHotCoreRewardData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHotCoreRewardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP711_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp712(::RPG::Client::ActivityHotCoreRewardData* a1, ::RPG::Client::ActivityHotCoreRewardData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHotCoreRewardData*, ::RPG::Client::ActivityHotCoreRewardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP712_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp713(::RPG::Client::MatchPlayRecord* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchPlayRecord*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP713_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp714(::RPG::Client::GridFightDivisionLevelReward* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightDivisionLevelReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP714_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp715(::RPG::Client::GridFightDivisionLevelReward* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionLevelReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP715_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp716(::RPG::Client::GridFightDivisionLevelReward* a1, ::RPG::Client::GridFightDivisionLevelReward* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightDivisionLevelReward*, ::RPG::Client::GridFightDivisionLevelReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP716_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp717(::RPG::Client::IResidentActivityPanelData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP717_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp718(::RPG::Client::IResidentActivityPanelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP718_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp719(::RPG::Client::IResidentActivityPanelData* a1, ::RPG::Client::IResidentActivityPanelData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IResidentActivityPanelData*, ::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP719_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp720(::RPG::Client::GridFightHandbookRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP720_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp721(::RPG::Client::GridFightHandbookRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP721_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp722(::RPG::Client::GridFightHandbookRole* a1, ::RPG::Client::GridFightHandbookRole* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP722_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp723(::RPG::Client::GridFightPortalData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP723_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp724(::RPG::Client::GridFightPortalData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP724_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp725(::RPG::Client::GridFightPortalData* a1, ::RPG::Client::GridFightPortalData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightPortalData*, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP725_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp726(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP726_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp727(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP727_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp728(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP728_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp729(::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP729_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp730(::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP730_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp731(::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP731_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp732(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP732_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp733(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP733_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp734(::RPG::Client::GridFightEquipItemConfig* a1, ::RPG::Client::GridFightEquipItemConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP734_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp735(::RPG::Client::TarotBookDeleteData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookDeleteData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP735_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp736(::RPG::Client::TarotBookDeleteData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookDeleteData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP736_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp737(::RPG::Client::TarotBookDeleteData* a1, ::RPG::Client::TarotBookDeleteData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookDeleteData*, ::RPG::Client::TarotBookDeleteData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP737_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp738(::XLua::LuaTable* a1, ::RPG::Client::PenaconyEndmostChronicleEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::PenaconyEndmostChronicleEvent*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP738_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp739(::RPG::Client::DiceCombat::DiceCombatRankLevelData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP739_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp740(::RPG::Client::DiceCombat::DiceCombatRankLevelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP740_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp741(::RPG::Client::DiceCombat::DiceCombatRankLevelData* a1, ::RPG::Client::DiceCombat::DiceCombatRankLevelData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP741_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp742(::RPG::Client::CakeRaceHandbookCatItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceHandbookCatItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP742_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp743(::RPG::Client::CakeRaceHandbookCatItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceHandbookCatItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP743_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp744(::RPG::Client::CakeRaceHandbookCatItem* a1, ::RPG::Client::CakeRaceHandbookCatItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeRaceHandbookCatItem*, ::RPG::Client::CakeRaceHandbookCatItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP744_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp745(::RPG::Client::DiceCombat::DiceCombatCommunicateData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP745_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp746(::RPG::Client::DiceCombat::DiceCombatCommunicateData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP746_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp747(::RPG::Client::DiceCombat::DiceCombatCommunicateData* a1, ::RPG::Client::DiceCombat::DiceCombatCommunicateData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP747_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp748(::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP748_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp749(::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP749_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp750(::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* a1, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP750_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp751(::RPG::Client::ChimeraDuelMasterData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP751_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp752(::RPG::Client::ChimeraDuelMasterData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP752_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp753(::RPG::Client::ChimeraDuelMasterData* a1, ::RPG::Client::ChimeraDuelMasterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*, ::RPG::Client::ChimeraDuelMasterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP753_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp754(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP754_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp755(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP755_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp756(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* a1, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP756_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp757(::System::UInt32 a1, ::Google::Protobuf::ByteString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP757_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp758()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP758_OFFSET))(this);
		}

		::System::Boolean __Gen_Delegate_Imp759(::RPG::Client::ChenLingBattleDeckData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattleDeckData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP759_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp760(::RPG::Client::ChenLingBattleDeckData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleDeckData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP760_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp761(::RPG::Client::ChenLingBattleDeckData* a1, ::RPG::Client::ChenLingBattleDeckData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChenLingBattleDeckData*, ::RPG::Client::ChenLingBattleDeckData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP761_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp762(::RPG::Client::ActivityIdleLive::IdleLiveAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP762_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp763(::RPG::Client::ActivityIdleLive::IdleLiveAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP763_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp764(::RPG::Client::ActivityIdleLive::IdleLiveAvatarData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP764_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp765(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP765_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp766(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP766_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp767(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP767_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp768(::RPG::Client::ActivityIdleLive::ChapterRecordUiData a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::ChapterRecordUiData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP768_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp769(::RPG::Client::ActivityIdleLive::ChapterRecordUiData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::ChapterRecordUiData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP769_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp770(::RPG::Client::ActivityIdleLive::ChapterRecordUiData a1, ::RPG::Client::ActivityIdleLive::ChapterRecordUiData a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::ChapterRecordUiData, ::RPG::Client::ActivityIdleLive::ChapterRecordUiData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP770_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp771(::RPG::Client::ActivityIdleLive::CaptainData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::CaptainData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP771_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp772(::RPG::Client::ActivityIdleLive::CaptainData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::CaptainData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP772_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp773(::RPG::Client::ActivityIdleLive::CaptainData* a1, ::RPG::Client::ActivityIdleLive::CaptainData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::CaptainData*, ::RPG::Client::ActivityIdleLive::CaptainData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP773_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp774(::RPG::Client::DiceCombatDiceConfigData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombatDiceConfigData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP774_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp775(::RPG::Client::DiceCombatDiceConfigData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombatDiceConfigData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP775_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp776(::RPG::Client::DiceCombatDiceConfigData* a1, ::RPG::Client::DiceCombatDiceConfigData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombatDiceConfigData*, ::RPG::Client::DiceCombatDiceConfigData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP776_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp777(::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP777_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp778(::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP778_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp779(::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* a1, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP779_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp780(::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP780_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp781(::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP781_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp782(::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* a1, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP782_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp783(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP783_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp784(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP784_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp785(::RPG::GameCore::IdleLiveAvatarPropertyType a1, ::RPG::GameCore::IdleLiveAvatarPropertyType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP785_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp786(::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP786_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp787(::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP787_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp788(::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree* a1, ::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*, ::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP788_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp789(::RPG::Client::AssistData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP789_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp790(::RPG::Client::AssistData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP790_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp791(::RPG::Client::AssistData* a1, ::RPG::Client::AssistData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AssistData*, ::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP791_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp792(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP792_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp793(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP793_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp794(::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*, ::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP794_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp795(::RPG::Client::GridFightPresentEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPresentEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP795_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp796(::RPG::Client::GridFightPresentEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPresentEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP796_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp797(::RPG::Client::GridFightPresentEntity* a1, ::RPG::Client::GridFightPresentEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightPresentEntity*, ::RPG::Client::GridFightPresentEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP797_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp798(::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP798_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp799(::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP799_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp800(::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP800_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* __Gen_Delegate_Imp801()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP801_OFFSET))(this);
		}

		::System::Boolean __Gen_Delegate_Imp802(::RPG::Client::AvatarOutfitUnit* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP802_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp803(::RPG::Client::AvatarOutfitUnit* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP803_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp804(::RPG::Client::AvatarOutfitUnit* a1, ::RPG::Client::AvatarOutfitUnit* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP804_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp805(::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP805_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp806(::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP806_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp807(::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData a1, ::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData, ::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP807_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp808(::XLua::LuaTable* a1, ::RPG::Client::DiceCombat::DiceCombatPerformanceBattleEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::DiceCombat::DiceCombatPerformanceBattleEvent*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP808_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp809(::XLua::LuaTable* a1, ::RPG::Client::DiceCombat::DiceCombatForceRefreshEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::DiceCombat::DiceCombatForceRefreshEvent*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP809_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp810(::RPG::Client::RogueTournArchiveData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournArchiveData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP810_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp811(::RPG::Client::RogueTournArchiveData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournArchiveData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP811_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp812(::RPG::Client::RogueTournArchiveData* a1, ::RPG::Client::RogueTournArchiveData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournArchiveData*, ::RPG::Client::RogueTournArchiveData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP812_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp813(::System::Collections::Generic::IComparer_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IComparer_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP813_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp814(::RPG::Client::ActivityIdleLive::SpSlotUiData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpSlotUiData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP814_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp815(::RPG::Client::ActivityIdleLive::SpSlotUiData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpSlotUiData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP815_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp816(::RPG::Client::ActivityIdleLive::SpSlotUiData* a1, ::RPG::Client::ActivityIdleLive::SpSlotUiData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpSlotUiData*, ::RPG::Client::ActivityIdleLive::SpSlotUiData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP816_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp817(::RPG::Client::TrainPartyBuildUtils_PhotoWorldData a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP817_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp818(::RPG::Client::TrainPartyBuildUtils_PhotoWorldData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP818_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp819(::RPG::Client::TrainPartyBuildUtils_PhotoWorldData a1, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP819_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp820(::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP820_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp821(::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP821_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp822(::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig* a1, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*, ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP822_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp823(::System::Object* a1, ::EPOFJMLCFPI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::EPOFJMLCFPI*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP823_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp824(::RPG::Client::ChatReportReason* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatReportReason*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP824_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp825(::RPG::Client::ChatReportReason* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatReportReason*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP825_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp826(::RPG::Client::ChatReportReason* a1, ::RPG::Client::ChatReportReason* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChatReportReason*, ::RPG::Client::ChatReportReason*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP826_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp827(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP827_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp828(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP828_OFFSET))(this, a1, a2);
		}

		::System::Int32 __Gen_Delegate_Imp829(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP829_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp830(::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP830_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp831(::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP831_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp832(::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>*, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingPrivilege*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP832_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp833(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP833_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp834(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP834_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp835(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1, ::RPG::Client::IRogueTournPersonaRoomCardInGame* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP835_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp836(::RPG::Client::CakeCatchCatData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeCatchCatData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP836_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp837(::RPG::Client::CakeCatchCatData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeCatchCatData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP837_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp838(::RPG::Client::CakeCatchCatData* a1, ::RPG::Client::CakeCatchCatData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeCatchCatData*, ::RPG::Client::CakeCatchCatData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP838_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp839(::RPG::Client::TrainPartyBuildUtils_PhotoRarityData a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP839_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp840(::RPG::Client::TrainPartyBuildUtils_PhotoRarityData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP840_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp841(::RPG::Client::TrainPartyBuildUtils_PhotoRarityData a1, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP841_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp842(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP842_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp843(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP843_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp844(::UnityEngine::Animator* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP844_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp845(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP845_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp846(::UnityEngine::Animator* a1, ::UnityEngine::Animator* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP846_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp847(::RPG::Client::IRogueTournPersonaRoomCard* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP847_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp848(::RPG::Client::IRogueTournPersonaRoomCard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP848_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp849(::RPG::Client::IRogueTournPersonaRoomCard* a1, ::RPG::Client::IRogueTournPersonaRoomCard* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCard*, ::RPG::Client::IRogueTournPersonaRoomCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP849_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp850(::RPG::Client::MongoObjectId a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP850_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp851(::RPG::Client::MongoObjectId a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP851_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp852(::RPG::Client::MongoObjectId a1, ::RPG::Client::MongoObjectId a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MongoObjectId, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP852_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp853(::System::Object* a1, ::RPG::Client::Promises::ExceptionEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::RPG::Client::Promises::ExceptionEventArgs*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP853_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp854(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP854_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp855()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP855_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RPG::Client::Promises::IPromise*>*>* __Gen_Delegate_Imp856()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RPG::Client::Promises::IPromise*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP856_OFFSET))(this);
		}

		::System::Boolean __Gen_Delegate_Imp857(::System::Exception* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP857_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp858(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP858_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp859(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP859_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp860(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP860_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* __Gen_Delegate_Imp861(::System::Exception* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP861_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp862(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP862_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp863(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP863_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp864(::RPG::GameCore::MissionCondition* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MissionCondition*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP864_OFFSET))(this, a1);
		}

		::RPG::GameCore::MissionCondition* __Gen_Delegate_Imp865(::System::Exception* a1)
		{
			return ((::RPG::GameCore::MissionCondition*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP865_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp866(::RPG::GameCore::MissionCondition* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::GameCore::MissionCondition*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP866_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp867(::RPG::GameCore::MissionCondition* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::GameCore::MissionCondition*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP867_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp868(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP868_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerBriefDisplayData* __Gen_Delegate_Imp869(::System::Exception* a1)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP869_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp870(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP870_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp871(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP871_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp872(::System::ValueTuple_2<::System::Boolean, ::FJPMJPEKLJL> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::FJPMJPEKLJL>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP872_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::Boolean, ::FJPMJPEKLJL> __Gen_Delegate_Imp873(::System::Exception* a1)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::FJPMJPEKLJL>(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP873_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp874(::System::ValueTuple_2<::System::Boolean, ::FJPMJPEKLJL> a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::FJPMJPEKLJL>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP874_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp875(::System::ValueTuple_2<::System::Boolean, ::FJPMJPEKLJL> a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::FJPMJPEKLJL>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP875_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp876(::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP876_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* __Gen_Delegate_Imp877(::System::Exception* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP877_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp878(::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP878_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp879(::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP879_OFFSET))(this, a1);
		}

		::RPG::Client::SubMissionData* __Gen_Delegate_Imp880(::System::Exception* a1)
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP880_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp881(::RPG::Client::SubMissionData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP881_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp882(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP882_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp883(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP883_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* __Gen_Delegate_Imp884(::System::Exception* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP884_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp885(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP885_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp886(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP886_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp887(::RPG::Client::LightConeRecommendData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LightConeRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP887_OFFSET))(this, a1);
		}

		::RPG::Client::LightConeRecommendData* __Gen_Delegate_Imp888(::System::Exception* a1)
		{
			return ((::RPG::Client::LightConeRecommendData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP888_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp889(::RPG::Client::LightConeRecommendData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::LightConeRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP889_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp890(::RPG::Client::LightConeRecommendData* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::LightConeRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP890_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp891(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP891_OFFSET))(this, a1);
		}

		::RPG::Client::BaseGameFlow* __Gen_Delegate_Imp892(::System::Exception* a1)
		{
			return ((::RPG::Client::BaseGameFlow*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP892_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp893(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP893_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp894(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP894_OFFSET))(this, a1);
		}

		::RPG::Client::MainMissionData* __Gen_Delegate_Imp895(::System::Exception* a1)
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP895_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp896(::RPG::Client::MainMissionData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP896_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp897(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP897_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp898(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP898_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* __Gen_Delegate_Imp899(::System::Exception* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP899_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp900(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP900_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp901(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP901_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp902(::RPG::Client::BaseLobby* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP902_OFFSET))(this, a1);
		}

		::RPG::Client::BaseLobby* __Gen_Delegate_Imp903(::System::Exception* a1)
		{
			return ((::RPG::Client::BaseLobby*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP903_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp904(::RPG::Client::BaseLobby* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP904_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp905(::RPG::Client::BaseLobby* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP905_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp906(::RPG::Client::RelicRecommendData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP906_OFFSET))(this, a1);
		}

		::RPG::Client::RelicRecommendData* __Gen_Delegate_Imp907(::System::Exception* a1)
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP907_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp908(::RPG::Client::RelicRecommendData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP908_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp909(::RPG::Client::RelicRecommendData* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP909_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp910(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP910_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* __Gen_Delegate_Imp911(::System::Exception* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP911_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp912(::RPG::Client::UIController* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP912_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp913(::RPG::Client::UIController* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP913_OFFSET))(this, a1);
		}

		::RPG::Client::LuaUIController* __Gen_Delegate_Imp914(::System::Exception* a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP914_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp915(::RPG::Client::LuaUIController* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP915_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp916(::RPG::Client::LuaUIController* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP916_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp917(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP917_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* __Gen_Delegate_Imp918(::System::Exception* a1)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP918_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp919(::UnityEngine::Texture* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP919_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp920(::UnityEngine::Texture* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP920_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp921(::RPG::Client::PlayerBoardInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerBoardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP921_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerBoardInfo* __Gen_Delegate_Imp922(::System::Exception* a1)
		{
			return ((::RPG::Client::PlayerBoardInfo*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP922_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp923(::RPG::Client::PlayerBoardInfo* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::PlayerBoardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP923_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp924(::RPG::Client::PlayerBoardInfo* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::PlayerBoardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP924_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp925(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP925_OFFSET))(this, a1);
		}

		::UnityEngine::RenderTexture* __Gen_Delegate_Imp926(::System::Exception* a1)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP926_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp927(::UnityEngine::RenderTexture* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP927_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp928(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP928_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp929(::COMJKPOMILA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COMJKPOMILA*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP929_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp930(::RPG::Client::ActivityIdleLive::AmphoreusTarotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::AmphoreusTarotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP930_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp931(::RPG::Client::ActivityIdleLive::AmphoreusTarotData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::AmphoreusTarotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP931_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp932(::RPG::Client::ActivityIdleLive::AmphoreusTarotData* a1, ::RPG::Client::ActivityIdleLive::AmphoreusTarotData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::AmphoreusTarotData*, ::RPG::Client::ActivityIdleLive::AmphoreusTarotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP932_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp933(::RPG::Client::GridFightGameFormationEditor_EditEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormationEditor_EditEvent*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP933_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp934(::RPG::Client::RechargeGiftData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RechargeGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP934_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp935(::RPG::Client::RechargeGiftData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RechargeGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP935_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp936(::RPG::Client::RechargeGiftData* a1, ::RPG::Client::RechargeGiftData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RechargeGiftData*, ::RPG::Client::RechargeGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP936_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp937(::RPG::GameCore::IAdventurePlayerCommonRowWrap* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IAdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP937_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp938(::RPG::GameCore::IAdventurePlayerCommonRowWrap* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IAdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP938_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp939(::RPG::GameCore::IAdventurePlayerCommonRowWrap* a1, ::RPG::GameCore::IAdventurePlayerCommonRowWrap* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::IAdventurePlayerCommonRowWrap*, ::RPG::GameCore::IAdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP939_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp940(::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP940_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp941(::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP941_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp942(::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap* a1, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap*, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP942_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp943(::RPG::GameCore::MonsterGuideTagConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterGuideTagConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP943_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp944(::RPG::Client::Challenge::Tierce::ChallengeTierceMazeProgressHintViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceMazeProgressHintViewModel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP944_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp945(::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP945_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp946(::RPG::Client::TextmapDownloadManager_TextmapSizeErrorCode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextmapDownloadManager_TextmapSizeErrorCode))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP946_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp947(::RPG::Client::TextmapDownloadManager_TextmapApplyChangeErrorCode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextmapDownloadManager_TextmapApplyChangeErrorCode))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP947_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp948(::XLua::LuaTable* a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP948_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp949(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP949_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp950(::RPG::Client::HeadIconDisplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::HeadIconDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP950_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp951(::RPG::Client::HeadIconDisplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HeadIconDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP951_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp952(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP952_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel* __Gen_Delegate_Imp953(::OBJANKHLNGO* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel*(*)(::PVOID, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP953_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp954(::RPG::Client::World3DMapEntranceConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::World3DMapEntranceConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP954_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp955(::RPG::Client::World3DMapEntranceConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::World3DMapEntranceConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP955_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp956(::RPG::Client::World3DMapEntranceConfig* a1, ::RPG::Client::World3DMapEntranceConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::World3DMapEntranceConfig*, ::RPG::Client::World3DMapEntranceConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP956_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp957(::RPG::Client::GridFightTraitAstropolisTier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitAstropolisTier*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP957_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp958(::RPG::Client::GridFightTraitAstropolisTier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitAstropolisTier*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP958_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp959(::RPG::Client::GridFightTraitAstropolisTier* a1, ::RPG::Client::GridFightTraitAstropolisTier* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightTraitAstropolisTier*, ::RPG::Client::GridFightTraitAstropolisTier*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP959_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp960(::RPG::Client::SocialPlay::SocialPlayMapInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SocialPlay::SocialPlayMapInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP960_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp961(::RPG::Client::SocialPlay::SocialPlayMapInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SocialPlay::SocialPlayMapInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP961_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp962(::RPG::Client::SocialPlay::SocialPlayMapInfo* a1, ::RPG::Client::SocialPlay::SocialPlayMapInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SocialPlay::SocialPlayMapInfo*, ::RPG::Client::SocialPlay::SocialPlayMapInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP962_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp963(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP963_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp964(::RPG::Client::PlayerBriefDisplayData* a1, ::RPG::Client::PlayerBriefDisplayData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP964_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp965(::RPG::Client::SocialPlay::SocialPlayMapUIBridge* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SocialPlay::SocialPlayMapUIBridge*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP965_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp966(::RPG::Client::SocialPlay::SocialPlayMapUIBridge* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SocialPlay::SocialPlayMapUIBridge*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP966_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp967(::RPG::Client::SocialPlay::SocialPlayMapUIBridge* a1, ::RPG::Client::SocialPlay::SocialPlayMapUIBridge* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SocialPlay::SocialPlayMapUIBridge*, ::RPG::Client::SocialPlay::SocialPlayMapUIBridge*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP967_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp968(::DOIPOJANKGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOIPOJANKGI*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP968_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp969(::GFHCKBHCNDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP969_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp970(::MBDOBECHOJA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MBDOBECHOJA*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP970_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp971(::RPG::Client::GridFightEquipCraftRecipe* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipCraftRecipe*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP971_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp972(::RPG::Client::GridFightEquipCraftRecipe* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipCraftRecipe*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP972_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp973(::RPG::Client::GridFightEquipCraftRecipe* a1, ::RPG::Client::GridFightEquipCraftRecipe* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightEquipCraftRecipe*, ::RPG::Client::GridFightEquipCraftRecipe*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP973_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp974(::RPG::Client::GridFightTraitSubTraitConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitSubTraitConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP974_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp975(::RPG::Client::GridFightTraitSubTraitConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitSubTraitConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP975_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp976(::RPG::Client::GridFightTraitSubTraitConfig* a1, ::RPG::Client::GridFightTraitSubTraitConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightTraitSubTraitConfig*, ::RPG::Client::GridFightTraitSubTraitConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP976_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp977(::RPG::AvatarSystem::AvatarPath* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::AvatarPath*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP977_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp978(::RPG::AvatarSystem::AvatarPath* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarPath*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP978_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp979(::RPG::AvatarSystem::AvatarPath* a1, ::RPG::AvatarSystem::AvatarPath* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::AvatarPath*, ::RPG::AvatarSystem::AvatarPath*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP979_OFFSET))(this, a1, a2);
		}

		::System::Nullable_1<::UnityEngine::Vector2> __Gen_Delegate_Imp980()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector2>(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP980_OFFSET))(this);
		}

		::System::Boolean __Gen_Delegate_Imp981(::RPG::Client::GridFightSpotLightConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSpotLightConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP981_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp982(::RPG::Client::GridFightSpotLightConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightSpotLightConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP982_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp983(::RPG::Client::GridFightSpotLightConfig* a1, ::RPG::Client::GridFightSpotLightConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightSpotLightConfig*, ::RPG::Client::GridFightSpotLightConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP983_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp984(::RPG::Client::AvatarGlobalBuffDisplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarGlobalBuffDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP984_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp985(::RPG::Client::AvatarGlobalBuffDisplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarGlobalBuffDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP985_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp986(::RPG::Client::AvatarGlobalBuffDisplayData* a1, ::RPG::Client::AvatarGlobalBuffDisplayData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarGlobalBuffDisplayData*, ::RPG::Client::AvatarGlobalBuffDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP986_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp987(::RPG::Client::GridFightRoleSkillStyleRemarkItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRoleSkillStyleRemarkItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP987_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp988(::RPG::Client::GridFightRoleSkillStyleRemarkItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleSkillStyleRemarkItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP988_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp989(::RPG::Client::GridFightRoleSkillStyleRemarkItem* a1, ::RPG::Client::GridFightRoleSkillStyleRemarkItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRoleSkillStyleRemarkItem*, ::RPG::Client::GridFightRoleSkillStyleRemarkItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP989_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp990(::RPG::Client::VoracityInvasionFightEntranceData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::VoracityInvasionFightEntranceData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP990_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp991(::RPG::Client::VoracityInvasionFightEntranceData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VoracityInvasionFightEntranceData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP991_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp992(::RPG::Client::VoracityInvasionFightEntranceData* a1, ::RPG::Client::VoracityInvasionFightEntranceData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::VoracityInvasionFightEntranceData*, ::RPG::Client::VoracityInvasionFightEntranceData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP992_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp993(::RPG::Client::GridFightHandBookPetPal* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightHandBookPetPal*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP993_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp994(::RPG::Client::GridFightHandBookPetPal* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightHandBookPetPal*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP994_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp995(::RPG::Client::GridFightHandBookPetPal* a1, ::RPG::Client::GridFightHandBookPetPal* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightHandBookPetPal*, ::RPG::Client::GridFightHandBookPetPal*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP995_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp996(::RPG::Client::GridFightAhaUnlockCondition* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightAhaUnlockCondition*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP996_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp997(::RPG::Client::GridFightAhaUnlockCondition* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightAhaUnlockCondition*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP997_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp998(::RPG::Client::GridFightAhaUnlockCondition* a1, ::RPG::Client::GridFightAhaUnlockCondition* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightAhaUnlockCondition*, ::RPG::Client::GridFightAhaUnlockCondition*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP998_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp999(::RPG::Client::IActivityHotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IActivityHotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP999_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1000(::RPG::Client::IActivityHotData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IActivityHotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1000_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp1001(::RPG::Client::IActivityHotData* a1, ::RPG::Client::IActivityHotData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IActivityHotData*, ::RPG::Client::IActivityHotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1001_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp1002(::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1002_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>* __Gen_Delegate_Imp1003(::System::Exception* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1003_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp1004(::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1004_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp1005(::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1005_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp1006(::RPG::Client::GridFightTraitDisplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1006_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1007(::RPG::Client::GridFightTraitDisplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1007_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp1008(::RPG::Client::GridFightTraitDisplayData* a1, ::RPG::Client::GridFightTraitDisplayData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightTraitDisplayData*, ::RPG::Client::GridFightTraitDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1008_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp1009(::RPG::Client::IGridFightEquipCraftRecipeEntry* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IGridFightEquipCraftRecipeEntry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1009_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1010(::RPG::Client::IGridFightEquipCraftRecipeEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGridFightEquipCraftRecipeEntry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1010_OFFSET))(this, a1);
		}

		::System::Int32 __Gen_Delegate_Imp1011(::RPG::Client::IGridFightEquipCraftRecipeEntry* a1, ::RPG::Client::IGridFightEquipCraftRecipeEntry* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IGridFightEquipCraftRecipeEntry*, ::RPG::Client::IGridFightEquipCraftRecipeEntry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1011_OFFSET))(this, a1, a2);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* __Gen_Delegate_Imp1012(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1012_OFFSET))(this, a1, a2);
		}

		::System::Boolean __Gen_Delegate_Imp1013(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1013_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp1014(::ENGBNDIPDJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENGBNDIPDJL*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1014_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp1015(::HIOAMIPNLIN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOAMIPNLIN*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1015_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1016(::HIOAMIPNLIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOAMIPNLIN*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1016_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1017(::RPG::Client::LittleGame::FiveDim::MiniGameEventReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MiniGameEventReason))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1017_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1018(::GMEFBLGIECD a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMEFBLGIECD))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1018_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1019(::EOABGMGNKGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOABGMGNKGA*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1019_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1020(::RPG::Client::MapProp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1020_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp1021(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1021_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1022(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1022_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp1023(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1023_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1024(::RPG::Client::GridFightBonusConsumableItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusConsumableItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1024_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1025(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1025_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp1026(::XLua::LuaTable* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1026_OFFSET))(this, a1);
		}

		::System::Boolean __Gen_Delegate_Imp1027(::RPG::Client::RogueTournHexData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1027_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1028(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1028_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1029(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1029_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp1030(::HPKACEPPPCA* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1030_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp1031(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1031_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1032(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1032_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp1033(::IFLICGOLBIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFLICGOLBIG*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1033_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1034(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1034_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __Gen_Delegate_Imp1035(::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertOrderBubbleViewModel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1035_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1036(::RPG::Client::LittleGame::ComicDessert::ComicDessertEmojiBubbleViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertEmojiBubbleViewModel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1036_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1037(::RPG::Client::LittleGame::ComicDessert::ComicDessertTalkBubbleViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertTalkBubbleViewModel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1037_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1038(::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertCoinBubbleViewModel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1038_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1039(::RPG::Client::LittleGame::ComicDessert::ComicDessertEmotionBubbleViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertEmotionBubbleViewModel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1039_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1040(::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersPlayerSkillViewModel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1040_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1041(::RPG::Client::MechCraft::ViewModel::MechCraftDiyViewEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftDiyViewEvent*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1041_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1042(::RPG::Client::LimaoNews::LimaoNewsPlanStateRefreshMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPlanStateRefreshMessage*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1042_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1043(::RPG::Client::FateRin::CaseBoard::CaseBoardSetupScaleParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardSetupScaleParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1043_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1044(::RPG::Client::FateRin::CaseBoard::CaseBoardMoveToTeamParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardMoveToTeamParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1044_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1045(::RPG::Client::FateRin::CaseBoard::CaseBoardMoveToGrailParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardMoveToGrailParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1045_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1046(::RPG::Client::FateRin::CaseBoard::CaseBoardShowTeamParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardShowTeamParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1046_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1047(::RPG::Client::FateRin::CaseBoard::CaseBoardTrackTeamParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardTrackTeamParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1047_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1048(::RPG::Client::FateRin::CaseBoard::CaseBoardShowGrailParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardShowGrailParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1048_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1049(::RPG::Client::FateRin::CaseBoard::CaseBoardShowLineParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardShowLineParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1049_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1050(::RPG::Client::FateRin::CaseBoard::CaseBoardShowRewardParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardShowRewardParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1050_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1051(::RPG::Client::FateRin::CaseBoard::CaseBoardSimpleTalkParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardSimpleTalkParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1051_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1052(::RPG::Client::FateRin::Battle::CardAnimationEventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::CardAnimationEventArgs*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1052_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1053(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1053_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp1054(::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1054_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1055(::Spine::TrackEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1055_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1056(::Spine::TrackEntry* a1, ::Spine::Event* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Event*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1056_OFFSET))(this, a1, a2);
		}

		::System::Void __Gen_Delegate_Imp1057(::UnityEngine::UI::Graphic* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1057_OFFSET))(this, a1);
		}

		::System::Void __Gen_Delegate_Imp1058(::UnityEngine::UI::Graphic* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1058_OFFSET))(this, a1, a2);
		}

		::System::Delegate* GetDelegateByType(::System::Type* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE_GETDELEGATEBYTYPE_OFFSET))(this, a1);
		}

		::System::Void PCall(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE_PCALL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Action()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE_ACTION_OFFSET))(this);
		}

	};
}
