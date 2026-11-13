#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHotCoreRewardData.h"
namespace RPG::GameCore { class ActivityHotExtraItemRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYHOTEXTRACOREREWARDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1259D0)
#define RPG_CLIENT_ACTIVITYHOTEXTRACOREREWARDDATA_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1D125BA0)
#define RPG_CLIENT_ACTIVITYHOTEXTRACOREREWARDDATA_GET_HINTTEXT_OFFSET UNITYSDK_OFFSET(0x1D125C50)
#define RPG_CLIENT_ACTIVITYHOTEXTRACOREREWARDDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D125A60)
#define RPG_CLIENT_ACTIVITYHOTEXTRACOREREWARDDATA_GET_ITEMDESC_OFFSET UNITYSDK_OFFSET(0x1D125DD0)
#define RPG_CLIENT_ACTIVITYHOTEXTRACOREREWARDDATA_GET_ITEMICONPATH_OFFSET UNITYSDK_OFFSET(0x1D126080)
#define RPG_CLIENT_ACTIVITYHOTEXTRACOREREWARDDATA_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x1D125A80)
#define RPG_CLIENT_ACTIVITYHOTEXTRACOREREWARDDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1D125B30)
#define RPG_CLIENT_ACTIVITYHOTEXTRACOREREWARDDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1D125A70)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHotExtraCoreRewardData_TypeDefinitionIndex = 62921;

	class ActivityHotExtraCoreRewardData : public ::RPG::Client::ActivityHotCoreRewardData
	{
	public:
		::RPG::GameCore::ActivityHotExtraItemRow* _Row_Read; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x30
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTEXTRACOREREWARDDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTEXTRACOREREWARDDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTEXTRACOREREWARDDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SortWeight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTEXTRACOREREWARDDATA_GET_SORTWEIGHT_OFFSET))(this);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTEXTRACOREREWARDDATA_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::String* get_HintText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTEXTRACOREREWARDDATA_GET_HINTTEXT_OFFSET))(this);
		}

		::System::String* get_ItemDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTEXTRACOREREWARDDATA_GET_ITEMDESC_OFFSET))(this);
		}

		::System::String* get_ItemIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTEXTRACOREREWARDDATA_GET_ITEMICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::ActivityHotExtraItemRow* get__Row()
		{
			return ((::RPG::GameCore::ActivityHotExtraItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTEXTRACOREREWARDDATA_GET__ROW_OFFSET))(this);
		}

	};
}
