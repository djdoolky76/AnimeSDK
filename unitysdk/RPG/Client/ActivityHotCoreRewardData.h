#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IActivityHotData; }
namespace RPG::Client { class ItemData; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D122320)
#define RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D122710)
#define RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_GET_ISAVATARREWARD_OFFSET UNITYSDK_OFFSET(0x1D122750)
#define RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_GET_ITEMDESC_OFFSET UNITYSDK_OFFSET(0x1D122410)
#define RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_GET_ITEMICONPATH_OFFSET UNITYSDK_OFFSET(0x1D122650)
#define RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x1D1223C0)
#define RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1D122730)
#define RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D122720)
#define RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1D122740)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHotCoreRewardData_TypeDefinitionIndex = 62917;

	class ActivityHotCoreRewardData : public ::System::Object
	{
	public:
		::RPG::Client::ItemData* _ItemData; // 0x10
		::RPG::Client::IActivityHotData* _ActivityHotData; // 0x18
		::System::UInt32 _Count_k__BackingField; // 0x20
		::System::UInt32 _Progress_k__BackingField; // 0x24
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::IActivityHotData* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::IActivityHotData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_ItemId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::String* get_ItemDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_GET_ITEMDESC_OFFSET))(this);
		}

		::System::String* get_ItemIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_GET_ITEMICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_SET_COUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_SET_PROGRESS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAvatarReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTCOREREWARDDATA_GET_ISAVATARREWARD_OFFSET))(this);
		}

	};
}
