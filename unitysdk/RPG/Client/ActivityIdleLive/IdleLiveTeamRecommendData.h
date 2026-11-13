#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarTagConfig; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamRecommendData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotData; }
namespace RPG::GameCore { class IdleLiveTeamRecommendRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_CHECKISDISPLAY_OFFSET UNITYSDK_OFFSET(0x1D398790)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_CHECKTEAMISSAMEASRECOMMENDTEAM_OFFSET UNITYSDK_OFFSET(0x1D398FC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1D396B70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3970C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_GETCAPTAINTAGCONFIG_OFFSET UNITYSDK_OFFSET(0x1D399360)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_GETTEAMSLOTDATAS_OFFSET UNITYSDK_OFFSET(0x1D398AF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_GETTOTALWEIGHT_OFFSET UNITYSDK_OFFSET(0x1D398B60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_GETWEIGHTBYAVATARID_OFFSET UNITYSDK_OFFSET(0x1D398DB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1D399730)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_GET_DISPLAYCONDITION_OFFSET UNITYSDK_OFFSET(0x1D3996D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D3996F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_GET_TEAMMEMBERIDS_OFFSET UNITYSDK_OFFSET(0x1D3996B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1D399710)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_GET__CACHEDSLOTUNLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x1D398990)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0x1D399740)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_SET_DISPLAYCONDITION_OFFSET UNITYSDK_OFFSET(0x1D3996E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1D399700)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_SET_TEAMMEMBERIDS_OFFSET UNITYSDK_OFFSET(0x1D3996C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1D399720)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA__BUILDTEAMSLOTDATAS_OFFSET UNITYSDK_OFFSET(0x1D397160)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA__CHECKISDISPLAY_B__1_0_OFFSET UNITYSDK_OFFSET(0x1D399750)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA__GETTOTALWEIGHT_B__3_1_OFFSET UNITYSDK_OFFSET(0x1D3998E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___BUILDTEAMSLOTDATAS_B__5_4_OFFSET UNITYSDK_OFFSET(0x1D399A60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___BUILDTEAMSLOTDATAS_B__5_5_OFFSET UNITYSDK_OFFSET(0x1D399BF0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTeamRecommendData_TypeDefinitionIndex = 77430;

	class IdleLiveTeamRecommendData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _TeamMemberIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* _cachedTeamSlotDatas; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* _allSlotsCache; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _avatarIDToWeight; // 0x28
		::RPG::Client::TextID _Title_k__BackingField; // 0x30
		::System::UInt32 _ID_k__BackingField; // 0x40
		::System::Int32 _DisplayCondition_k__BackingField; // 0x44
		::RPG::Client::TextID _Desc_k__BackingField; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData* Create(::RPG::GameCore::IdleLiveTeamRecommendRow* a1, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*>* a2)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*(*)(::RPG::GameCore::IdleLiveTeamRecommendRow*, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Boolean CheckIsDisplay(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_CHECKISDISPLAY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* GetTeamSlotDatas(::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_GETTEAMSLOTDATAS_OFFSET))(this, a1);
		}

		::System::UInt32 GetTotalWeight(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_GETTOTALWEIGHT_OFFSET))(this, a1);
		}

		::System::UInt32 GetWeightByAvatarID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_GETWEIGHTBYAVATARID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* _BuildTeamSlotDatas(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA__BUILDTEAMSLOTDATAS_OFFSET))(this, a1);
		}

		::System::Boolean CheckTeamIsSameAsRecommendTeam(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_CHECKTEAMISSAMEASRECOMMENDTEAM_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig* GetCaptainTagConfig()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_GETCAPTAINTAGCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TeamMemberIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_GET_TEAMMEMBERIDS_OFFSET))(this);
		}

		::System::Void set_TeamMemberIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_SET_TEAMMEMBERIDS_OFFSET))(this, a1);
		}

		::System::Int32 get_DisplayCondition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_GET_DISPLAYCONDITION_OFFSET))(this);
		}

		::System::Void set_DisplayCondition(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_SET_DISPLAYCONDITION_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_SET_TITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_SET_DESC_OFFSET))(this, a1);
		}

		::System::Int32 get__cachedSlotUnlockCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA_GET__CACHEDSLOTUNLOCKCOUNT_OFFSET))(this);
		}

		::System::Boolean _CheckIsDisplay_b__1_0(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA__CHECKISDISPLAY_B__1_0_OFFSET))(this, a1);
		}

		::System::Int64 _GetTotalWeight_b__3_1(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA__GETTOTALWEIGHT_B__3_1_OFFSET))(this, a1);
		}

		::System::Boolean __BuildTeamSlotDatas_b__5_4(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___BUILDTEAMSLOTDATAS_B__5_4_OFFSET))(this, a1);
		}

		::System::UInt32 __BuildTeamSlotDatas_b__5_5(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDDATA___BUILDTEAMSLOTDATAS_B__5_5_OFFSET))(this, a1);
		}

	};
}
