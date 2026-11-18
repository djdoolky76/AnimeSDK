#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BallGameRoleLocalData.h"
#include "unitysdk/MoleMole/HollowCameraSerializeField.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivityQuestRedDotRecord; }
namespace MoleMole { class BackFlowLocalData; }
namespace MoleMole { class UserLocalDataItem_AEEJOIBCMIA; }
namespace MoleMole { class UserLocalDataItem_AEPLMAFJBEP; }
namespace MoleMole { class UserLocalDataItem_ConfigMobileButtonGlobal; }
namespace MoleMole { class UserLocalDataItem_LMHFFJHMOPG; }
namespace MoleMole { class UserLocalDataItem_OverrideMobileButtonPosition; }
namespace MoleMole { class UserLocalDataItem_TempleSimulationRecord; }
namespace MoleMole::MusicGame { class MusicCalibrationData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_USERLOCALDATAITEM_AGCENOKIIGB_OFFSET UNITYSDK_OFFSET(0x12C1AE60)
#define MOLEMOLE_USERLOCALDATAITEM_BKNNDHJEBNF_OFFSET UNITYSDK_OFFSET(0x12C1A970)
#define MOLEMOLE_USERLOCALDATAITEM_CEACGLPNCKN_OFFSET UNITYSDK_OFFSET(0x12C1B6C0)
#define MOLEMOLE_USERLOCALDATAITEM_DIOEADPGOGE_OFFSET UNITYSDK_OFFSET(0x12C1AB20)
#define MOLEMOLE_USERLOCALDATAITEM_DNGBKFINIKD_OFFSET UNITYSDK_OFFSET(0x12C1B5D0)
#define MOLEMOLE_USERLOCALDATAITEM_GET_CONFIGMOBILEBUTTONS_OFFSET UNITYSDK_OFFSET(0x12C15EC0)
#define MOLEMOLE_USERLOCALDATAITEM_GET_OVERRIDEMOBILEBUTTONPANELS_OFFSET UNITYSDK_OFFSET(0x12C15740)
#define MOLEMOLE_USERLOCALDATAITEM_GET_OVERRIDEMOBILEBUTTONPOSITIONS_OFFSET UNITYSDK_OFFSET(0x12C14FC0)
#define MOLEMOLE_USERLOCALDATAITEM_GET__CONFIGMOBILEBUTTONPANELSWRAPPER_OFFSET UNITYSDK_OFFSET(0x12C15820)
#define MOLEMOLE_USERLOCALDATAITEM_GET__CONFIGMOBILEBUTTONSWRAPPER_OFFSET UNITYSDK_OFFSET(0x12C150A0)
#define MOLEMOLE_USERLOCALDATAITEM_GET__OVERRIDEMOBILEBUTTONPANELS_OFFSET UNITYSDK_OFFSET(0x12C15CB0)
#define MOLEMOLE_USERLOCALDATAITEM_GET__OVERRIDEMOBILEBUTTONPOSITIONS_OFFSET UNITYSDK_OFFSET(0x12C15530)
#define MOLEMOLE_USERLOCALDATAITEM_JGECEJIHMLG_OFFSET UNITYSDK_OFFSET(0x12C1B020)
#define MOLEMOLE_USERLOCALDATAITEM_JIDMADDMGIE_OFFSET UNITYSDK_OFFSET(0x12C1A450)
#define MOLEMOLE_USERLOCALDATAITEM_KPPDPPFMNDO_OFFSET UNITYSDK_OFFSET(0x12C1B700)
#define MOLEMOLE_USERLOCALDATAITEM_LCCGLBGHAAN_OFFSET UNITYSDK_OFFSET(0x12C1AD90)
#define MOLEMOLE_USERLOCALDATAITEM_LGJBBHMPDFG_OFFSET UNITYSDK_OFFSET(0x12C1B7A0)
#define MOLEMOLE_USERLOCALDATAITEM_MCMLJCNJAGO_OFFSET UNITYSDK_OFFSET(0x12C1AF30)
#define MOLEMOLE_USERLOCALDATAITEM_MPIGEECIKOP_OFFSET UNITYSDK_OFFSET(0x12C1B530)
#define MOLEMOLE_USERLOCALDATAITEM_NPBGJFABENJ_OFFSET UNITYSDK_OFFSET(0x12C1B670)
#define MOLEMOLE_USERLOCALDATAITEM_SET_CONFIGMOBILEBUTTONS_OFFSET UNITYSDK_OFFSET(0x12C15ED0)
#define MOLEMOLE_USERLOCALDATAITEM_SET_OVERRIDEMOBILEBUTTONPANELS_OFFSET UNITYSDK_OFFSET(0x12C158B0)
#define MOLEMOLE_USERLOCALDATAITEM_SET_OVERRIDEMOBILEBUTTONPOSITIONS_OFFSET UNITYSDK_OFFSET(0x12C15130)
#define MOLEMOLE_USERLOCALDATAITEM_SET__OVERRIDEMOBILEBUTTONPANELS_OFFSET UNITYSDK_OFFSET(0x12C15CC0)
#define MOLEMOLE_USERLOCALDATAITEM_SET__OVERRIDEMOBILEBUTTONPOSITIONS_OFFSET UNITYSDK_OFFSET(0x12C15540)
#define MOLEMOLE_USERLOCALDATAITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C19430)
#define MOLEMOLE_USERLOCALDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x12C16090)

namespace MoleMole
{
	inline static constexpr unsigned int UserLocalDataItem_TypeDefinitionIndex = 89792;

	class UserLocalDataItem : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>** StaticGet__defaultConfigMobileButtons()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UserLocalDataItem_TypeDefinitionIndex)->GetStaticField(0x50E60);
		}
		// static const ::System::String* Field_1; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::BallGameRoleLocalData>* BallGameRoleLocalDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* BallGameRoleLatestArchive; // 0x18
		::System::Int32 HardCoreBossBossSelectIndex; // 0x20
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* BMWPictureBookPlayedUnlockAnimTreasureIDs; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* BMWPictureBookPlayedEmptyInAnimTreasureIDs; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* BMWRoleRowPlayedUnlockAnimCharacterIDs; // 0x38
		::System::Boolean SkipSummerTideTreasureShowModel; // 0x40
		::System::Byte _padding1[0x3];
		::System::Int32 SummerTideTreasureSelectRoleId; // 0x44
		::System::Int64 DigibooMainCityTipTimestamp; // 0x48
		::System::Collections::Generic::List_1<::System::Int32>* DigibooHandbook; // 0x50
		::System::Int64 ZenkovFriendMarketShowHighTipTimeStamp; // 0x58
		::System::UInt64 playerUID; // 0x60
		::MoleMole::HollowCameraSerializeField HollowCameraField; // 0x68
		::System::Boolean QuestModelChallengeTaskFinish; // 0xB4
		::System::Byte _padding2[0x3];
		::System::Int32 QuestModelTaskStartTime; // 0xB8
		::System::Byte _padding3[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* FairyRecordList; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* InteractiveRecords; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* TimeEventUnlockRecords; // 0xD0
		::System::Int32 EquipGachaLocalSelectForgeTab; // 0xD8
		::System::Byte _padding4[0x4];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* EquipGachaLocalTabSelectEquipPartDict; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* NotificationBadgeMap; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* CustomNotificationRecords; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* ExpeditionAreaClickIndexHistory; // 0xF8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ActivityRecords; // 0x100
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::ActivityQuestRedDotRecord*>* ActivityRedDotRecords; // 0x108
		::MoleMole::BackFlowLocalData* backFlowLocalData; // 0x110
		::System::String* HDDVideoPlayTime; // 0x118
		::System::UInt32 RepelSlotCountKey; // 0x120
		::System::Byte _padding5[0x4];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* AbyssTipRecords; // 0x128
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* AbyssGroupCloseToFinishRecords; // 0x130
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Boolean>* AvatarUIDToHintEquipEver; // 0x138
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* AbyssCardSuitSetToTop; // 0x140
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* FishPanelCollectFishItemMap; // 0x148
		::System::Collections::Generic::List_1<::System::UInt32>* AbyssS2InteractedTemplateIds; // 0x150
		::System::Collections::Generic::List_1<::System::Int32>* NeoGoldenDelNewMechaBuildIDs; // 0x158
		::System::Collections::Generic::List_1<::System::Int32>* NeoGoldenPopedNewList; // 0x160
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* CommonDataBool; // 0x168
		::System::Int32 ScaryNightSelectedAvatarID; // 0x170
		::System::Byte _padding6[0x4];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* ActivityBattleLevelNew; // 0x178
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* ActivityBattleLevelUnlockAnim; // 0x180
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* ActivityBattleLevelBestRecord; // 0x188
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* HollowQuestRecords; // 0x190
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* RallyQuestRecords; // 0x198
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* ActivityVirusRecords; // 0x1A0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* TheGunRecords; // 0x1A8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* AvatarStoryRecords; // 0x1B0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* questPerformResRecords; // 0x1B8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* EquipTipRecords; // 0x1C0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* YorozuyaDifficutyRecords; // 0x1C8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* YorozuyaOldChessboardRecords; // 0x1D0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* ActivityQuestDifficutyRecords; // 0x1D8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* GeneralTipsExcelRemindRecords; // 0x1E0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GeneralTipsLastBtnAction; // 0x1E8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int64>* GeneralTipsLastBtnActionTimestamp; // 0x1F0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* AbyssS2AvatarMissionRecords; // 0x1F8
		::System::Collections::Generic::List_1<::System::Int32>* ArpeggioBlessGroupRecord; // 0x200
		::System::Int32 YorozuyaChapterIdex; // 0x208
		::System::Byte _padding7[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* SelectedVHSList; // 0x210
		::System::UInt32 VHSPromoterID; // 0x218
		::System::Boolean hasSeenMessage; // 0x21C
		::System::Boolean hasPlayRiduRulePop; // 0x21D
		::System::Byte _padding8[0x2];
		::System::UInt32 lastVisitedArcadeActivityID; // 0x220
		::System::UInt32 lastVisitedArcadeScheduleID; // 0x224
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* ambientTriggerDic; // 0x228
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* battlePassRecords; // 0x230
		::System::Boolean performUseAutoPlay; // 0x238
		::System::Byte _padding9[0x7];
		::System::UInt64 m_lastVisitedAbyssRewardPeriodID; // 0x240
		::System::Collections::Generic::List_1<::System::Int32>* RecordedHeadPortraitIDs; // 0x248
		::System::Boolean IsBigSceneLineUpTutorialDialogShow; // 0x250
		::System::Byte _padding10[0x7];
		::System::Collections::Generic::List_1<::System::Int32>* RecordedNormalRallyQuestIDs; // 0x258
		::System::Collections::Generic::List_1<::System::Int32>* UnlockedRallyChapterRecords; // 0x260
		::System::Boolean HadalPopup_PrevTag; // 0x268
		::System::Byte _padding11[0x3];
		::System::Int32 HadalPopup_PrevZoneID; // 0x26C
		::System::Int32 HadalScheduleZoneIDRecord; // 0x270
		::System::Int32 NewHadalScheduleZoneIDRecord; // 0x274
		::System::Collections::Generic::List_1<::System::Int32>* NewBabelTowerID; // 0x278
		::System::Collections::Generic::List_1<::System::Int32>* HadalUnlockZoneAnims; // 0x280
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* HadalUnlockZoneLayersAnims; // 0x288
		::System::Int64 RewardTime; // 0x290
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* WorldLevelRecords; // 0x298
		::System::Collections::Generic::List_1<::System::Int32>* RecordedPostGirlIDs; // 0x2A0
		::System::Boolean roleSelectMultiSelectOn; // 0x2A8
		::System::Boolean roleSelectUpgradeOn; // 0x2A9
		::System::Boolean AbyssS2IntensifyToggle; // 0x2AA
		::System::Boolean BanbooDreamDescDetailToggle; // 0x2AB
		::System::Int32 BangbooDreamLastLevel; // 0x2AC
		::System::Boolean ExpeditionMultiSelectOn; // 0x2B0
		::System::Byte _padding12[0x7];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* UnlockedCharacterQuestEntryRecords; // 0x2B8
		::System::Collections::Generic::List_1<::System::Int32>* unlockedPartners; // 0x2C0
		::System::Collections::Generic::List_1<::System::Int32>* unlockedPartnerContacts; // 0x2C8
		::System::Collections::Generic::List_1<::System::UInt32>* recordedUpBangbooItems; // 0x2D0
		::System::Collections::Generic::List_1<::System::Int32>* unlockedMusicList; // 0x2D8
		::System::Collections::Generic::List_1<::System::Int32>* upAvatarIDList; // 0x2E0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* workbenchTrustDegreeHasSeeMaxLevel; // 0x2E8
		::System::Collections::Generic::List_1<::System::Int32>* unlockMonsterCardReadList; // 0x2F0
		::System::Collections::Generic::List_1<::System::Int32>* unlockSuitReadList; // 0x2F8
		::System::Collections::Generic::List_1<::System::Int32>* unlockEntrenceReadList; // 0x300
		::System::Collections::Generic::List_1<::System::Int32>* questDifficuteReadList; // 0x308
		::System::Collections::Generic::List_1<::System::Int32>* unlockBossQuestReadList; // 0x310
		::System::Collections::Generic::List_1<::System::Int32>* popupWindowList; // 0x318
		::System::Boolean PlayUnlockUnlimitAnimation; // 0x320
		::System::Byte _padding13[0x7];
		::System::Collections::Generic::List_1<::System::Int32>* TacticsIDRecord; // 0x328
		::System::Collections::Generic::List_1<::System::Int32>* TowerDefenseBuddy; // 0x330
		::System::Collections::Generic::List_1<::System::Int32>* TowerDefenseEnhance; // 0x338
		::System::Boolean MarcelScorePeriodRecord; // 0x340
		::System::Byte _padding14[0x7];
		::System::Collections::Generic::List_1<::System::Int32>* MarcelScorePeriodRecord2; // 0x348
		::System::Collections::Generic::List_1<::System::Int32>* MarcelLevelGroupRecord; // 0x350
		::System::Boolean MarcelMainPagePopRecord; // 0x358
		::System::Boolean MarcelMapNewRecord; // 0x359
		::System::Boolean MarcelRankTipsRecord; // 0x35A
		::System::Byte _padding15[0x5];
		::System::Collections::Generic::List_1<::System::Int32>* FoodTruckTabRecord; // 0x360
		::System::Collections::Generic::List_1<::System::Int32>* RiduBooClothingRecords; // 0x368
		::System::Collections::Generic::List_1<::System::Int32>* RiduBooPassiveSkillRecords; // 0x370
		::System::Collections::Generic::List_1<::System::Int32>* RiduBooAniRecords; // 0x378
		::System::Collections::Generic::List_1<::System::Int32>* doubleCostModeClosedQuests; // 0x380
		::System::Collections::Generic::List_1<::System::Int32>* flowerShopCustomQuestRecords; // 0x388
		::System::Collections::Generic::List_1<::System::Int32>* flowerShopLevelRecords; // 0x390
		::System::Collections::Generic::List_1<::System::Int32>* SuibianDrinkingTeaTaskRedSignClickList; // 0x398
		::System::Int32 SuibianDrinkingTeaSelectTabIndex; // 0x3A0
		::System::Byte _padding16[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* BangBooDreamUpgrade; // 0x3A8
		::System::Collections::Generic::List_1<::System::Int32>* BangBooDreamLevel; // 0x3B0
		::System::Collections::Generic::List_1<::System::Int32>* BangBooDreamEquipList; // 0x3B8
		::System::Collections::Generic::List_1<::System::Int32>* BangBooDreamItemList; // 0x3C0
		::System::Collections::Generic::List_1<::System::Int32>* HasSeeExtraChallengeID; // 0x3C8
		::System::Boolean TempleProductRecyle; // 0x3D0
		::System::Boolean TempleMaterialRecyle; // 0x3D1
		::System::Byte _padding17[0x6];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* TempleRecyleItemID; // 0x3D8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* TempleNewProductID; // 0x3E0
		::System::Collections::Generic::List_1<::System::Int32>* TempleWanderUnlockID; // 0x3E8
		::System::Collections::Generic::List_1<::System::UInt32>* TempleGoodShelveID; // 0x3F0
		::System::Collections::Generic::List_1<::System::Int32>* TempleNewProductShelveID; // 0x3F8
		::System::Boolean TempleUpgradeUnlock; // 0x400
		::System::Byte _padding18[0x7];
		::System::Collections::Generic::List_1<::System::Int32>* TempleNewResearchProductID; // 0x408
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* TempleResearchAndLevelUpProductNewDict; // 0x410
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* TempleSellProductNewDict; // 0x418
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* TempleSellShelveNewDict; // 0x420
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* TempleTrendNewDict; // 0x428
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* TempleRankQuestFinishCount; // 0x430
		::System::Collections::Generic::List_1<::System::Int32>* cinemaClearReview; // 0x438
		::System::Boolean cinemaChangedTitle; // 0x440
		::System::Byte _padding19[0x7];
		::System::Collections::Generic::List_1<::System::Int32>* HouseRhythmBangbooPeriod; // 0x448
		::System::Collections::Generic::List_1<::System::Int32>* PlayedFinishAnimationQuestID; // 0x450
		::System::Collections::Generic::List_1<::System::Int32>* PlayedUnlockAnimationQuestID; // 0x458
		::System::Collections::Generic::List_1<::System::Int32>* OperationYumShownNewHintQuestIDs; // 0x460
		::System::Int32 AbyssTrirdLoopBetaQuestId; // 0x468
		::System::Byte _padding20[0x4];
		::MoleMole::UserLocalDataItem_LMHFFJHMOPG* FlowerShopLocalCache; // 0x470
		::MoleMole::UserLocalDataItem_TempleSimulationRecord* TempleRecord; // 0x478
		::System::Collections::Generic::List_1<::System::UInt32>* TempleBuddyUidRecords; // 0x480
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*>* TempleBuddyTalentSkillRecords; // 0x488
		::System::Collections::Generic::List_1<::System::String*>* CloseProfessionLackWeaponTipVersions; // 0x490
		::System::Boolean MapLocation3dPopHide; // 0x498
		::System::Boolean MapLocation2dPopShow; // 0x499
		::System::Byte _padding21[0x6];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* SpecialWeaponContrastFinish; // 0x4A0
		::System::Collections::Generic::List_1<::System::Int32>* gachaActivityMilestoneRecords; // 0x4A8
		::System::Boolean enterBabelTower; // 0x4B0
		::System::Byte _padding22[0x3];
		::System::Int32 SummerEventUnLockMainQuestGroupID; // 0x4B4
		::System::Int32 SummerEventUnLockAliceQuestGroupID; // 0x4B8
		::System::Int32 SummerEventUnLockYuzuhaQuestGroupID; // 0x4BC
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* ShowNpcIconForInvitation; // 0x4C0
		::System::Boolean rolePageOnlySelectOwnAvatarFromMainCity; // 0x4C8
		::System::Byte _padding23[0x7];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int64>* TowerDefenseClickNew; // 0x4D0
		::System::Boolean ReadWeaponVideoRecord; // 0x4D8
		::System::Byte _padding24[0x3];
		::System::Single ActivityRhythmClickAudioVideoDelayTime; // 0x4DC
		::System::Single ActivityRhythmClickInputDelayTime; // 0x4E0
		::System::Int32 ActivityRhythmClickCloudGameDelayPlan; // 0x4E4
		::System::Collections::Generic::List_1<::System::Int32>* MonsterFantasyBuffData; // 0x4E8
		::System::Int32 MonsterFantasyLeastTurnCount; // 0x4F0
		::System::Int32 VoidFrontConfirmBattleId; // 0x4F4
		::System::Collections::Generic::List_1<::System::Int32>* VoidFrontNewRecords; // 0x4F8
		::System::Boolean OpenCoopStylish; // 0x500
		::System::Byte _padding25[0x7];
		::System::Collections::Generic::List_1<::System::Int32>* AutoBattlePVEPopupRecord; // 0x508
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* CircleChatShowTitleData; // 0x510
		::System::Int32 SocialCircleFindTagID; // 0x518
		::System::Byte _padding26[0x4];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* GachaScheduleHasRead; // 0x520
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* WinterPageDiaplayHasRead; // 0x528
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* NicePageDiaplayHasRead; // 0x530
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* AntiqueCollectIsReadDict; // 0x538
		::System::Collections::Generic::List_1<::System::Int32>* CoopUnlockPopList; // 0x540
		::System::Boolean BigSceneShowFloorPresetTip; // 0x548
		::System::Byte _padding27[0x3];
		::System::Int32 ForbiddenAreaUnLockQuestGroupID; // 0x54C
		::System::Collections::Generic::List_1<::System::UInt32>* ForbiddenAreaCollectListForAnim; // 0x550
		::System::Boolean NeedShowSquadNew; // 0x558
		::System::Byte _padding28[0x7];
		::System::Collections::Generic::List_1<::System::Int32>* SquadRecords; // 0x560
		::System::Collections::Generic::List_1<::System::Int32>* WorldLevelGoQuestRecords; // 0x568
		::System::Int64 materialNewTicketComposeTipTimeStamp; // 0x570
		::System::Int64 equipmentTicketComposeTipTimeStamp; // 0x578
		::System::Boolean bossChallengeTeamDetailShowed; // 0x580
		::System::Boolean hadalImpactBattleDetailShowed; // 0x581
		::System::Byte _padding29[0x6];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* ActivityBattleStylish; // 0x588
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* SettingHintVersions; // 0x590
		::System::Boolean ShowedEnterSocial; // 0x598
		::System::Byte _padding30[0x7];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* BattleDataRecordFirstNew; // 0x5A0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* NewInterknotPost; // 0x5A8
		::System::Collections::Generic::List_1<::System::Int32>* MusicBattleNotificationReceived; // 0x5B0
		::System::Boolean AbyssS2LevelDetailDesc; // 0x5B8
		::System::Byte _padding31[0x7];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MusicGame::MusicCalibrationData*>* MusicGameCalibrationDataDict; // 0x5C0
		::System::Collections::Generic::List_1<::System::Int32>* SquadToolNewZoneRecords; // 0x5C8
		::System::Boolean ShowHotpotSkipTips; // 0x5D0
		::System::Byte _padding32[0x7];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* HotpotFoodList; // 0x5D8
		::System::Collections::Generic::List_1<::System::Int32>* HotpotLevelList; // 0x5E0
		::System::Collections::Generic::List_1<::System::UInt32>* ZenkovDelegateNewQuestIds; // 0x5E8
		::System::Int32 ZenkovDelegateDutyResetId; // 0x5F0
		::System::Int32 ZenkovDelegateSeasonResetId; // 0x5F4
		::System::Collections::Generic::List_1<::System::UInt32>* ZenkovDelegateSeenOnceQuestIds; // 0x5F8
		::System::Int32 ZenkovDelegateSeenSeasonStage; // 0x600
		::System::Int32 ZenkovDelegateExpiringBubbleDay; // 0x604
		::System::Collections::Generic::List_1<::System::UInt32>* ZenkovMarketSeenTaskIds; // 0x608
		::System::Int64 ZenkovMarketTaskNewWeekStamp; // 0x610
		::System::Collections::Generic::List_1<::System::UInt32>* ZenkovCraftSeenUnlockedPageIds; // 0x618
		::System::Collections::Generic::List_1<::System::UInt32>* ZenkovCraftSeenUnlockedProductIds; // 0x620
		::System::Collections::Generic::List_1<::System::UInt32>* ZenkovCraftSeenUnlockedBenchIds; // 0x628
		::System::Collections::Generic::List_1<::System::UInt32>* ZenkovMissionSeenUnlockedDungeonIds; // 0x630
		::System::Collections::Generic::List_1<::System::UInt32>* ZenkovMissionNotifiedUnlockedDungeonIds; // 0x638
		::System::Collections::Generic::List_1<::System::UInt32>* ZenkovMissionSeenEventIds; // 0x640
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* PinkDisplayHasRead; // 0x648
		::System::Boolean ScaryNightDontShowCombatTip; // 0x650
		::System::Byte _padding33[0x7];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* _configMobileButtons; // 0x658
		::MoleMole::UserLocalDataItem_AEEJOIBCMIA* __configMobileButtonsWrapper; // 0x660
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* _configMobileButtonPanels; // 0x668
		::MoleMole::UserLocalDataItem_AEPLMAFJBEP* __configMobileButtonPanelsWrapper; // 0x670
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* _configMobileButtonsOld; // 0x678
		::MoleMole::UserLocalDataItem_ConfigMobileButtonGlobal* configMobileButtonGlobal_Battle; // 0x680
		::MoleMole::UserLocalDataItem_ConfigMobileButtonGlobal* configMobileButtonGlobal_MainCity; // 0x688
		::MoleMole::UserLocalDataItem_ConfigMobileButtonGlobal* configMobileButtonGlobal_Hollow; // 0x690
		::MoleMole::UserLocalDataItem_ConfigMobileButtonGlobal* configMobileButtonGlobal_Bangboo; // 0x698
		::MoleMole::UserLocalDataItem_ConfigMobileButtonGlobal* configMobileButtonGlobal_TriggerTPS; // 0x6A0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FrontCameraQuestTipBadge; // 0x6A8
		::System::Collections::Generic::List_1<::System::Int32>* unlockedOverlordFeastGames; // 0x6B0
		::System::Collections::Generic::List_1<::System::Int32>* unlockedOverlordFeastTodoQuests; // 0x6B8
		::System::Collections::Generic::List_1<::System::Int32>* overlordFeastPromotionShowed; // 0x6C0
		::System::Collections::Generic::List_1<::System::Int32>* unlockedOverlordFeastDevItem; // 0x6C8
		::System::Collections::Generic::List_1<::System::Int32>* overlordFeastDevItemWithTips; // 0x6D0
		::System::Collections::Generic::List_1<::System::Int32>* overlordFeastHiddenGuestWithTips; // 0x6D8
		::System::Collections::Generic::List_1<::System::Int32>* overlordFeastTodoQuestsWithTips; // 0x6E0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* overlordGameStars; // 0x6E8
		::System::Int32 miniscapeCacheLevel; // 0x6F0
		::System::Byte _padding34[0x4];
		::System::Int64 miniscapeTaskRefreshTimeStamp; // 0x6F8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* SummerTideBeachStageLocalDict; // 0x700
		::System::Boolean ReadWeaponBatchLockRecord; // 0x708
		::System::Byte _padding35[0x3];
		::System::Int32 NewbieGuideSelectedSquadIndex; // 0x70C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Object*>* get_OverrideMobileButtonPositions()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_GET_OVERRIDEMOBILEBUTTONPOSITIONS_OFFSET))(this);
		}

		::System::Void set_OverrideMobileButtonPositions(::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Object*>* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_SET_OVERRIDEMOBILEBUTTONPOSITIONS_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* get__overrideMobileButtonPositions()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_GET__OVERRIDEMOBILEBUTTONPOSITIONS_OFFSET))(this);
		}

		::System::Void set__overrideMobileButtonPositions(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_SET__OVERRIDEMOBILEBUTTONPOSITIONS_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Object*>* get_OverrideMobileButtonPanels()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_GET_OVERRIDEMOBILEBUTTONPANELS_OFFSET))(this);
		}

		::System::Void set_OverrideMobileButtonPanels(::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Object*>* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_SET_OVERRIDEMOBILEBUTTONPANELS_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* get__overrideMobileButtonPanels()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_GET__OVERRIDEMOBILEBUTTONPANELS_OFFSET))(this);
		}

		::System::Void set__overrideMobileButtonPanels(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_SET__OVERRIDEMOBILEBUTTONPANELS_OFFSET))(this, EGEGIMGMJHN);
		}

		::MoleMole::UserLocalDataItem_AEEJOIBCMIA* get__configMobileButtonsWrapper()
		{
			return ((::MoleMole::UserLocalDataItem_AEEJOIBCMIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_GET__CONFIGMOBILEBUTTONSWRAPPER_OFFSET))(this);
		}

		::MoleMole::UserLocalDataItem_AEPLMAFJBEP* get__configMobileButtonPanelsWrapper()
		{
			return ((::MoleMole::UserLocalDataItem_AEPLMAFJBEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_GET__CONFIGMOBILEBUTTONPANELSWRAPPER_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* get_configMobileButtons()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_GET_CONFIGMOBILEBUTTONS_OFFSET))(this);
		}

		::System::Void set_configMobileButtons(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_SET_CONFIGMOBILEBUTTONS_OFFSET))(this, EGEGIMGMJHN);
		}

		static ::MoleMole::UserLocalDataItem* JIDMADDMGIE(::System::String* AAOCANGHBDG)
		{
			return ((::MoleMole::UserLocalDataItem*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_JIDMADDMGIE_OFFSET))(AAOCANGHBDG);
		}

		static ::System::Boolean BKNNDHJEBNF(::System::Int32 MCOHLHMKLIP, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*& EGEGIMGMJHN)
		{
			return ((::System::Boolean(*)(::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*&))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_BKNNDHJEBNF_OFFSET))(MCOHLHMKLIP, EGEGIMGMJHN);
		}

		::System::Void AGCENOKIIGB(::System::String* MCOHLHMKLIP, ::System::Boolean LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_AGCENOKIIGB_OFFSET))(this, MCOHLHMKLIP, LJBPECKCCEA);
		}

		::System::Boolean MCMLJCNJAGO(::System::String* MCOHLHMKLIP)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_MCMLJCNJAGO_OFFSET))(this, MCOHLHMKLIP);
		}

		static ::System::String* JGECEJIHMLG(::MoleMole::UserLocalDataItem* BNHIFIHNCHD)
		{
			return ((::System::String*(*)(::MoleMole::UserLocalDataItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_JGECEJIHMLG_OFFSET))(BNHIFIHNCHD);
		}

		::System::Void MPIGEECIKOP(::System::UInt32 KGIOFDBFGAM, ::System::Boolean JKBLDFBGBPK)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_MPIGEECIKOP_OFFSET))(this, KGIOFDBFGAM, JKBLDFBGBPK);
		}

		static ::System::Boolean DIOEADPGOGE()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_DIOEADPGOGE_OFFSET))();
		}

		::System::Boolean DNGBKFINIKD(::System::UInt32 KGIOFDBFGAM)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_DNGBKFINIKD_OFFSET))(this, KGIOFDBFGAM);
		}

		::System::Void NPBGJFABENJ(::System::UInt64 EBLLOAONOIP)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_NPBGJFABENJ_OFFSET))(this, EBLLOAONOIP);
		}

		::System::Void CEACGLPNCKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CEACGLPNCKN_OFFSET))(this);
		}

		::System::Boolean KPPDPPFMNDO(::System::UInt64 LJMPICLENII)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_KPPDPPFMNDO_OFFSET))(this, LJMPICLENII);
		}

		static ::System::Boolean LCCGLBGHAAN(::System::Int32 MCOHLHMKLIP, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*& EGEGIMGMJHN)
		{
			return ((::System::Boolean(*)(::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*&))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_LCCGLBGHAAN_OFFSET))(MCOHLHMKLIP, EGEGIMGMJHN);
		}

		::System::Void LGJBBHMPDFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_LGJBBHMPDFG_OFFSET))(this);
		}
	};
}
