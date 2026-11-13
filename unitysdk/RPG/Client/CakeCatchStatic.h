#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainCakeCatchExhibitController_CatGroundType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/CakeBubbleOffset.h"
class ALEAKDBNMKC;
namespace RPG::Client { class OnlineCakeCatchShelfData; }
namespace RPG::Client { class TrainCakeCatchExhibitController; }
namespace RPG::GameCore { class DynamicValue; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKECATCHSTATIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD86CB0)
#define RPG_CLIENT_CAKECATCHSTATIC_GETBUBBLEOFFSETINDEX_OFFSET UNITYSDK_OFFSET(0x1BD766B0)
#define RPG_CLIENT_CAKECATCHSTATIC_GETDEFAULTBUBBLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1BD76920)
#define RPG_CLIENT_CAKECATCHSTATIC_GETEXHIBITCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1BD6F950)
#define RPG_CLIENT_CAKECATCHSTATIC_GETGROUNDBUBBLEOFFSETINDEX_OFFSET UNITYSDK_OFFSET(0x1BD86C00)
#define RPG_CLIENT_CAKECATCHSTATIC_GETSHELFBUBBLEOFFSETINDEX_OFFSET UNITYSDK_OFFSET(0x1BD86C60)
#define RPG_CLIENT_CAKECATCHSTATIC_GETSHELFDATALIST_OFFSET UNITYSDK_OFFSET(0x1BD85F80)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_CATDIALOGUEBUBBLEOFFSETS_OFFSET UNITYSDK_OFFSET(0x1BD85EB0)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDFIRSTCAKECATCH_OFFSET UNITYSDK_OFFSET(0x1BD7F5E0)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPREARRANGEMISSION_OFFSET UNITYSDK_OFFSET(0x1BD85BA0)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPREGUIDEMISSION_OFFSET UNITYSDK_OFFSET(0x1BD85AF0)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPRELEVELREQUIREMENT_OFFSET UNITYSDK_OFFSET(0x1BD85A40)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_MAX_CAT_OBTAINABLE_COUNT_OFFSET UNITYSDK_OFFSET(0x1BD81660)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_POSE1_UNLOCK_THRESHOLD_OFFSET UNITYSDK_OFFSET(0x1BD75170)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_POSE2_UNLOCK_THRESHOLD_OFFSET UNITYSDK_OFFSET(0x1BD75270)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_SOCIALPLAYUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1BD85D00)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_SOCIALPLAYUNLOCKID_OFFSET UNITYSDK_OFFSET(0x1BD85DB0)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_STORY_UNLOCK_THRESHOLD_OFFSET UNITYSDK_OFFSET(0x1BD77180)
#define RPG_CLIENT_CAKECATCHSTATIC_GET_VISITFUNCTIONUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1BD85C50)
#define RPG_CLIENT_CAKECATCHSTATIC_ISCAKEGODSEEN_OFFSET UNITYSDK_OFFSET(0x1BD86760)
#define RPG_CLIENT_CAKECATCHSTATIC_ISCATGODINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1BD6EE70)
#define RPG_CLIENT_CAKECATCHSTATIC_ISLOCALBOXOPENABLE_OFFSET UNITYSDK_OFFSET(0x1BD6F010)
#define RPG_CLIENT_CAKECATCHSTATIC_ISLOCALCATGODVISIBLE_OFFSET UNITYSDK_OFFSET(0x1BD6EF40)
#define RPG_CLIENT_CAKECATCHSTATIC_ISSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET UNITYSDK_OFFSET(0x1BD866B0)
#define RPG_CLIENT_CAKECATCHSTATIC_SETCAKEGODSEEN_OFFSET UNITYSDK_OFFSET(0x1BD86930)
#define RPG_CLIENT_CAKECATCHSTATIC_SETSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET UNITYSDK_OFFSET(0x1BD86700)
#define RPG_CLIENT_CAKECATCHSTATIC_STARTCAKEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1BD860F0)
#define RPG_CLIENT_CAKECATCHSTATIC__GETGROUNDTYPETOBUBBLEOFFSETID_OFFSET UNITYSDK_OFFSET(0x1BD86BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchStatic_TypeDefinitionIndex = 64409;

	class CakeCatchStatic : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__VisitFunctionUnlockID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x3090);
		}

		static ::System::UInt32* StaticGet_PreGuideMissionGotoID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x3094);
		}

		static ::System::Single* StaticGet_CatTextBubbleTime()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x3098);
		}

		static ::System::UInt32* StaticGet__FinishedPreGuideMissionUnlockID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x309C);
		}

		static ::System::UInt32* StaticGet_WEEKLY_MAX_CATCH_COUNT()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x30A0);
		}

		static ::System::UInt32* StaticGet_ArrangeAreaInteractPropGroupID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x30A4);
		}

		static ::System::UInt32* StaticGet_MAX_CAT_ARRANGE_COUNT()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x30A8);
		}

		static ::System::UInt32* StaticGet_ArrangeAreaInteractPropInstanceID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x30AC);
		}

		static ::System::UInt32* StaticGet__FirstCatCatchUnlockID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x30B0);
		}

		static ::System::UInt32* StaticGet_TEXTJOIN_ID_CAKE_CATCH_WEEKLY_CAUGHT_COUNT()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x30B4);
		}

		static ::System::UInt32* StaticGet_CatGodMappingInfoID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x30B8);
		}

		static ::System::UInt32* StaticGet_CatGodMapIconType()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x30BC);
		}

		static ::System::UInt32* StaticGet_CatBoxInstanceID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x30C0);
		}

		static ::System::UInt32* StaticGet_CatBoxGroupID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x30C4);
		}

		static ::System::UInt32* StaticGet_PreMainMissionID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x30C8);
		}

		static ::System::UInt32* StaticGet_CatGodGroupID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x30CC);
		}

		static ::System::UInt32* StaticGet_OnlinePlayRoomFriendEntryId()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x30D0);
		}

		static ::System::UInt32* StaticGet_OnlinePlayRoomSelfEntryId()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x30D4);
		}

		static ::System::UInt32* StaticGet_CatGodPropID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x30D8);
		}

		static ::System::UInt32* StaticGet_CakeCatchShelfMappingInfoID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x30DC);
		}

		static ::System::UInt32* StaticGet__FinishedPreArrangeMissionUnlockID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x30E0);
		}

		static ::System::UInt32* StaticGet_CatGodInstanceID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x30E4);
		}

		static ::System::UInt32* StaticGet_CAT_NUM_PER_ROOM()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x30E8);
		}

		static ::System::Single* StaticGet_CatDialogueBubbleTime()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x30EC);
		}

		static ::System::Single* StaticGet_CatDialogueGroupCD()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x30F0);
		}

		static ::System::UInt32* StaticGet__FinishedPreLevelRequirementUnlockID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "CakeCatchStatic")->GetStaticField(0x30F4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_CCTOR_OFFSET))();
		}

		static ::System::Boolean get_FinishedPreLevelRequirement()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPRELEVELREQUIREMENT_OFFSET))();
		}

		static ::System::Boolean get_FinishedPreGuideMission()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPREGUIDEMISSION_OFFSET))();
		}

		static ::System::Boolean get_FinishedPreArrangeMission()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDPREARRANGEMISSION_OFFSET))();
		}

		static ::System::Boolean get_FinishedFirstCakeCatch()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_FINISHEDFIRSTCAKECATCH_OFFSET))();
		}

		static ::System::Boolean get_VisitFunctionUnlocked()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_VISITFUNCTIONUNLOCKED_OFFSET))();
		}

		static ::System::Boolean get_SocialPlayUnlocked()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_SOCIALPLAYUNLOCKED_OFFSET))();
		}

		static ::System::UInt32 get_POSE1_UNLOCK_THRESHOLD()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_POSE1_UNLOCK_THRESHOLD_OFFSET))();
		}

		static ::System::UInt32 get_POSE2_UNLOCK_THRESHOLD()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_POSE2_UNLOCK_THRESHOLD_OFFSET))();
		}

		static ::System::UInt32 get_STORY_UNLOCK_THRESHOLD()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_STORY_UNLOCK_THRESHOLD_OFFSET))();
		}

		static ::System::UInt32 get_MAX_CAT_OBTAINABLE_COUNT()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_MAX_CAT_OBTAINABLE_COUNT_OFFSET))();
		}

		static ::System::UInt32 get_SocialPlayUnlockID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_SOCIALPLAYUNLOCKID_OFFSET))();
		}

		static ::Il2CppArray<::RPG::GameCore::DynamicValue*>* get_CatDialogueBubbleOffsets()
		{
			return ((::Il2CppArray<::RPG::GameCore::DynamicValue*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GET_CATDIALOGUEBUBBLEOFFSETS_OFFSET))();
		}

		static ::RPG::Client::TrainCakeCatchExhibitController* GetExhibitController()
		{
			return ((::RPG::Client::TrainCakeCatchExhibitController*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GETEXHIBITCONTROLLER_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::OnlineCakeCatchShelfData*>* GetShelfDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::OnlineCakeCatchShelfData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GETSHELFDATALIST_OFFSET))();
		}

		static ::System::Void StartCakePerformance(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_STARTCAKEPERFORMANCE_OFFSET))(a1);
		}

		static ::System::Boolean IsSpecialShelfUnlockStatusSeen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_ISSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET))();
		}

		static ::System::Void SetSpecialShelfUnlockStatusSeen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_SETSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET))();
		}

		static ::System::Boolean IsCakeGodSeen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_ISCAKEGODSEEN_OFFSET))();
		}

		static ::System::Boolean IsCatGodInteractable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_ISCATGODINTERACTABLE_OFFSET))();
		}

		static ::System::Boolean IsLocalCatGodVisible()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_ISLOCALCATGODVISIBLE_OFFSET))();
		}

		static ::System::Boolean IsLocalBoxOpenable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_ISLOCALBOXOPENABLE_OFFSET))();
		}

		static ::System::Void SetCakeGodSeen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_SETCAKEGODSEEN_OFFSET))();
		}

		static ::System::UInt32 _GetGroundTypeToBubbleOffsetID(::RPG::Client::TrainCakeCatchExhibitController_CatGroundType a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::TrainCakeCatchExhibitController_CatGroundType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC__GETGROUNDTYPETOBUBBLEOFFSETID_OFFSET))(a1);
		}

		static ::System::UInt32 GetGroundBubbleOffsetIndex(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GETGROUNDBUBBLEOFFSETINDEX_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetShelfBubbleOffsetIndex(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GETSHELFBUBBLEOFFSETINDEX_OFFSET))(a1);
		}

		static ::System::UInt32 GetBubbleOffsetIndex(::ALEAKDBNMKC* a1)
		{
			return ((::System::UInt32(*)(::ALEAKDBNMKC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GETBUBBLEOFFSETINDEX_OFFSET))(a1);
		}

		static ::RPG::Client::CakeBubbleOffset GetDefaultBubbleOffset()
		{
			return ((::RPG::Client::CakeBubbleOffset(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHSTATIC_GETDEFAULTBUBBLEOFFSET_OFFSET))();
		}

	};
}
