#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ItemData; }

#define RPG_CLIENT_OPTIONEXEIDOLONREWARDITEMINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xE4B0400)
#define RPG_CLIENT_OPTIONEXEIDOLONREWARDITEMINFO_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xE4B03C0)
#define RPG_CLIENT_OPTIONEXEIDOLONREWARDITEMINFO_GET_EXEIDOLONID_OFFSET UNITYSDK_OFFSET(0xE4B03E0)
#define RPG_CLIENT_OPTIONEXEIDOLONREWARDITEMINFO_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0xE4B03A0)
#define RPG_CLIENT_OPTIONEXEIDOLONREWARDITEMINFO_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xE4B0380)
#define RPG_CLIENT_OPTIONEXEIDOLONREWARDITEMINFO_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xE4B03D0)
#define RPG_CLIENT_OPTIONEXEIDOLONREWARDITEMINFO_SET_EXEIDOLONID_OFFSET UNITYSDK_OFFSET(0xE4B03F0)
#define RPG_CLIENT_OPTIONEXEIDOLONREWARDITEMINFO_SET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0xE4B03B0)
#define RPG_CLIENT_OPTIONEXEIDOLONREWARDITEMINFO_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0xE4B0390)

namespace RPG::Client
{
	inline static constexpr unsigned int OptionExEidolonRewardItemInfo_TypeDefinitionIndex = 63046;

	class OptionExEidolonRewardItemInfo : public ::System::Object
	{
	public:
		::RPG::Client::ItemData* _ItemData_k__BackingField; // 0x10
		::System::UInt32 _RewardID_k__BackingField; // 0x18
		::System::UInt32 _AvatarID_k__BackingField; // 0x1C
		::System::UInt32 _ExEidolonID_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIONEXEIDOLONREWARDITEMINFO_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIONEXEIDOLONREWARDITEMINFO_GET_REWARDID_OFFSET))(this);
		}

		::System::Void set_RewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIONEXEIDOLONREWARDITEMINFO_SET_REWARDID_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* get_ItemData()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIONEXEIDOLONREWARDITEMINFO_GET_ITEMDATA_OFFSET))(this);
		}

		::System::Void set_ItemData(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIONEXEIDOLONREWARDITEMINFO_SET_ITEMDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIONEXEIDOLONREWARDITEMINFO_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIONEXEIDOLONREWARDITEMINFO_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ExEidolonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIONEXEIDOLONREWARDITEMINFO_GET_EXEIDOLONID_OFFSET))(this);
		}

		::System::Void set_ExEidolonID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIONEXEIDOLONREWARDITEMINFO_SET_EXEIDOLONID_OFFSET))(this, a1);
		}

	};
}
