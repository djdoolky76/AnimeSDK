#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHOOSEDELIVERYGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF8C70)
#define RPG_CLIENT_CHOOSEDELIVERYGROUP_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CFF8C30)
#define RPG_CLIENT_CHOOSEDELIVERYGROUP_GET_REWARDIDLIST_OFFSET UNITYSDK_OFFSET(0x1CFF8C50)
#define RPG_CLIENT_CHOOSEDELIVERYGROUP_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CFF8C40)
#define RPG_CLIENT_CHOOSEDELIVERYGROUP_SET_REWARDIDLIST_OFFSET UNITYSDK_OFFSET(0x1CFF8C60)

namespace RPG::Client
{
	inline static constexpr unsigned int ChooseDeliveryGroup_TypeDefinitionIndex = 64958;

	class ChooseDeliveryGroup : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _RewardIDList_k__BackingField; // 0x10
		::System::UInt32 _GroupID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYGROUP_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYGROUP_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYGROUP_SET_GROUPID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_RewardIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYGROUP_GET_REWARDIDLIST_OFFSET))(this);
		}

		::System::Void set_RewardIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYGROUP_SET_REWARDIDLIST_OFFSET))(this, a1);
		}

	};
}
