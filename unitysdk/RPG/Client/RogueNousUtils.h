#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueNousDiceBranchDataItem; }
namespace RPG::Client { class RogueNousDiceSlotDataItem; }
namespace RPG::Client { class RogueNousDiceSurfaceDataItem; }
namespace RPG::Client { class RogueNousMainMissionDataItem; }
namespace RPG::Client { class RogueNousSubMissionDataItem; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class RogueNousAeonRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_ROGUENOUSUTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0xEA15580)
#define RPG_CLIENT_ROGUENOUSUTILS_CHECKGUIDEMAINMISSIONSALLFINISHED_OFFSET UNITYSDK_OFFSET(0xEA14130)
#define RPG_CLIENT_ROGUENOUSUTILS_CHECKIFHASROGUENOUSQUESTREWARD_OFFSET UNITYSDK_OFFSET(0xEA05A20)
#define RPG_CLIENT_ROGUENOUSUTILS_CHECKIFHASROGUENOUSSTORYREWARD_OFFSET UNITYSDK_OFFSET(0xEA05FE0)
#define RPG_CLIENT_ROGUENOUSUTILS_CHECKLOCKMAINMISSIONSALLFINISHED_OFFSET UNITYSDK_OFFSET(0xEA135E0)
#define RPG_CLIENT_ROGUENOUSUTILS_GETFINALLEVELAREAID_OFFSET UNITYSDK_OFFSET(0xEA126D0)
#define RPG_CLIENT_ROGUENOUSUTILS_GETGUIDEONEAREAID_OFFSET UNITYSDK_OFFSET(0xEA12370)
#define RPG_CLIENT_ROGUENOUSUTILS_GETROGUENOUSACCESSIBLEAEONROWSORTEDLIST_OFFSET UNITYSDK_OFFSET(0xEA12890)
#define RPG_CLIENT_ROGUENOUSUTILS_GETSLOTDATAITEMSORDERBYSLOTID_OFFSET UNITYSDK_OFFSET(0xEA12BE0)
#define RPG_CLIENT_ROGUENOUSUTILS_GETSURFACEDATAITEM_OFFSET UNITYSDK_OFFSET(0xEA0B130)
#define RPG_CLIENT_ROGUENOUSUTILS_ISANYMISSIONREWARDUNTAKEN_OFFSET UNITYSDK_OFFSET(0xEA14D80)
#define RPG_CLIENT_ROGUENOUSUTILS_ISCURLAYERACCESSABLEMAINSTORY_OFFSET UNITYSDK_OFFSET(0xEA145B0)
#define RPG_CLIENT_ROGUENOUSUTILS_ISCURLAYERACCESSABLESUBSTORY_OFFSET UNITYSDK_OFFSET(0xEA142F0)
#define RPG_CLIENT_ROGUENOUSUTILS_ISFINALLEVELFINISHED_OFFSET UNITYSDK_OFFSET(0xEA0B030)
#define RPG_CLIENT_ROGUENOUSUTILS_ISGUIDEONEAREA_OFFSET UNITYSDK_OFFSET(0xEA12430)
#define RPG_CLIENT_ROGUENOUSUTILS_ISGUIDEONEFINISHED_OFFSET UNITYSDK_OFFSET(0xEA04E80)
#define RPG_CLIENT_ROGUENOUSUTILS_ISINFINALLEVEL_OFFSET UNITYSDK_OFFSET(0xEA12790)
#define RPG_CLIENT_ROGUENOUSUTILS_ISINGENERALLEVEL_OFFSET UNITYSDK_OFFSET(0xEA12490)
#define RPG_CLIENT_ROGUENOUSUTILS_ISINGUIDEONE_OFFSET UNITYSDK_OFFSET(0xEA12270)
#define RPG_CLIENT_ROGUENOUSUTILS_ISSTORYMEETLAYERREQUIREMENT_OFFSET UNITYSDK_OFFSET(0xEA146C0)
#define RPG_CLIENT_ROGUENOUSUTILS_PREPAREMULTISUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xEA133E0)
#define RPG_CLIENT_ROGUENOUSUTILS_SETDICEMESHCOLOR_OFFSET UNITYSDK_OFFSET(0xEA14DF0)
#define RPG_CLIENT_ROGUENOUSUTILS_SETDICESURFACE_OFFSET UNITYSDK_OFFSET(0xEA151D0)
#define RPG_CLIENT_ROGUENOUSUTILS_SETROGUENOUSMAINSTORYSEEN_OFFSET UNITYSDK_OFFSET(0xEA132E0)
#define RPG_CLIENT_ROGUENOUSUTILS_SETROGUENOUSSUBSTORYSEEN_OFFSET UNITYSDK_OFFSET(0xEA131E0)
#define RPG_CLIENT_ROGUENOUSUTILS_SHOULDSHOWRECOMMENDBTN_OFFSET UNITYSDK_OFFSET(0xEA12E20)
#define RPG_CLIENT_ROGUENOUSUTILS_TAKEALLFINISHEDMISSIONREWARD_OFFSET UNITYSDK_OFFSET(0xEA147E0)
#define RPG_CLIENT_ROGUENOUSUTILS__CHECKMAINMISSIONALLFINISHED_OFFSET UNITYSDK_OFFSET(0xEA13980)
#define RPG_CLIENT_ROGUENOUSUTILS__GETALLUNTAKENMISSIONREWARDQUESTIDS_OFFSET UNITYSDK_OFFSET(0xEA14920)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueNousUtils_TypeDefinitionIndex = 69431;

	class RogueNousUtils : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__6ThTexPropertyID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "RogueNousUtils")->GetStaticField(0x15D00);
		}

		static ::System::Int32* StaticGet_EmiColor02PropertyID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "RogueNousUtils")->GetStaticField(0x15D04);
		}

		static ::System::Int32* StaticGet__5thRarityPropertyID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "RogueNousUtils")->GetStaticField(0x15D08);
		}

		static ::System::Int32* StaticGet__3rdRarityPropertyID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "RogueNousUtils")->GetStaticField(0x15D0C);
		}

		static ::System::Int32* StaticGet_EmiColorPropertyID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "RogueNousUtils")->GetStaticField(0x15D10);
		}

		static ::System::Int32* StaticGet__3rdTexPropertyID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "RogueNousUtils")->GetStaticField(0x15D14);
		}

		static ::System::Int32* StaticGet__4thTexPropertyID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "RogueNousUtils")->GetStaticField(0x15D18);
		}

		static ::System::Int32* StaticGet__1stRarityPropertyID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "RogueNousUtils")->GetStaticField(0x15D1C);
		}

		static ::System::Int32* StaticGet_EffectColor5PropertyID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "RogueNousUtils")->GetStaticField(0x15D20);
		}

		static ::System::Int32* StaticGet__2ndRarityPropertyID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "RogueNousUtils")->GetStaticField(0x15D24);
		}

		static ::System::Int32* StaticGet_EmiColor01PropertyID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "RogueNousUtils")->GetStaticField(0x15D28);
		}

		static ::System::Int32* StaticGet__5thTexPropertyID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "RogueNousUtils")->GetStaticField(0x15D2C);
		}

		static ::System::Int32* StaticGet__1stTexPropertyID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "RogueNousUtils")->GetStaticField(0x15D30);
		}

		static ::System::Int32* StaticGet__2ndTexPropertyID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "RogueNousUtils")->GetStaticField(0x15D34);
		}

		static ::System::Int32* StaticGet__4thRarityPropertyID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "RogueNousUtils")->GetStaticField(0x15D38);
		}

		static ::System::Int32* StaticGet__6ThRarityPropertyID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "RogueNousUtils")->GetStaticField(0x15D3C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsInGuideOne()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISINGUIDEONE_OFFSET))();
		}

		static ::System::Boolean IsGuideOneArea(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISGUIDEONEAREA_OFFSET))(a1);
		}

		static ::System::Boolean IsGuideOneFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISGUIDEONEFINISHED_OFFSET))();
		}

		static ::System::UInt32 GetGuideOneAreaID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_GETGUIDEONEAREAID_OFFSET))();
		}

		static ::System::Boolean IsInGeneralLevel()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISINGENERALLEVEL_OFFSET))();
		}

		static ::System::Boolean IsInFinalLevel()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISINFINALLEVEL_OFFSET))();
		}

		static ::System::Boolean IsFinalLevelFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISFINALLEVELFINISHED_OFFSET))();
		}

		static ::System::UInt32 GetFinalLevelAreaID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_GETFINALLEVELAREAID_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::RogueNousAeonRow*>* GetRogueNousAccessibleAeonRowSortedList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueNousAeonRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_GETROGUENOUSACCESSIBLEAEONROWSORTEDLIST_OFFSET))();
		}

		static ::RPG::Client::RogueNousDiceSurfaceDataItem* GetSurfaceDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueNousDiceSurfaceDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_GETSURFACEDATAITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceSlotDataItem*>* GetSlotDataItemsOrderBySlotID(::RPG::Client::RogueNousDiceBranchDataItem* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceSlotDataItem*>*(*)(::RPG::Client::RogueNousDiceBranchDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_GETSLOTDATAITEMSORDERBYSLOTID_OFFSET))(a1);
		}

		static ::System::Boolean ShouldShowRecommendBtn()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_SHOULDSHOWRECOMMENDBTN_OFFSET))();
		}

		static ::System::Void SetRogueNousSubStorySeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_SETROGUENOUSSUBSTORYSEEN_OFFSET))(a1);
		}

		static ::System::Void SetRogueNousMainStorySeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_SETROGUENOUSMAINSTORYSEEN_OFFSET))(a1);
		}

		static ::System::Boolean CheckIfHasRogueNousStoryReward()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_CHECKIFHASROGUENOUSSTORYREWARD_OFFSET))();
		}

		static ::System::Boolean CheckIfHasRogueNousQuestReward()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_CHECKIFHASROGUENOUSQUESTREWARD_OFFSET))();
		}

		static ::RPG::Client::Promises::IPromise* PrepareMultiSubMissionData(::Il2CppArray<::System::String*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_PREPAREMULTISUBMISSIONDATA_OFFSET))(a1);
		}

		static ::System::Boolean CheckLockMainMissionsAllFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_CHECKLOCKMAINMISSIONSALLFINISHED_OFFSET))(a1);
		}

		static ::System::Boolean CheckGuideMainMissionsAllFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_CHECKGUIDEMAINMISSIONSALLFINISHED_OFFSET))(a1);
		}

		static ::System::Boolean _CheckMainMissionAllFinished(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS__CHECKMAINMISSIONALLFINISHED_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsCurLayerAccessableSubStory(::RPG::Client::RogueNousSubMissionDataItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueNousSubMissionDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISCURLAYERACCESSABLESUBSTORY_OFFSET))(a1);
		}

		static ::System::Boolean IsCurLayerAccessableMainStory(::RPG::Client::RogueNousMainMissionDataItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueNousMainMissionDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISCURLAYERACCESSABLEMAINSTORY_OFFSET))(a1);
		}

		static ::System::Boolean IsStoryMeetLayerRequirement(::RPG::Client::RogueNousSubMissionDataItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueNousSubMissionDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISSTORYMEETLAYERREQUIREMENT_OFFSET))(a1);
		}

		static ::System::Void TakeAllFinishedMissionReward()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_TAKEALLFINISHEDMISSIONREWARD_OFFSET))();
		}

		static ::System::Boolean IsAnyMissionRewardUnTaken()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_ISANYMISSIONREWARDUNTAKEN_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* _GetAllUnTakenMissionRewardQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS__GETALLUNTAKENMISSIONREWARDQUESTIDS_OFFSET))();
		}

		static ::System::Void SetDiceMeshColor(::UnityEngine::MeshRenderer* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::MeshRenderer*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_SETDICEMESHCOLOR_OFFSET))(a1, a2);
		}

		static ::System::Void SetDiceSurface(::UnityEngine::MeshRenderer* a1, ::System::UInt32 a2, ::UnityEngine::Texture* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::UnityEngine::MeshRenderer*, ::System::UInt32, ::UnityEngine::Texture*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS_SETDICESURFACE_OFFSET))(a1, a2, a3, a4);
		}

	};
}
