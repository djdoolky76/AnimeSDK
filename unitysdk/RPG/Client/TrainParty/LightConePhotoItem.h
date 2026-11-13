#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLLBJDEJFNF_OOIDNDCPEAF_DAHCIBCIIAD.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyBuildDIYPhotoItem.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyBuildDIYPhotoItemFilterType.h"
namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace System { class String; }

#define RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C615410)
#define RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C6150F0)
#define RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GETFILTERTYPEID_OFFSET UNITYSDK_OFFSET(0x1C615180)
#define RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GET_ISFARMABLE_OFFSET UNITYSDK_OFFSET(0x1C6153F0)
#define RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GET_PHOTOTYPE_OFFSET UNITYSDK_OFFSET(0x1C615380)
#define RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1C6153D0)
#define RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0x1C615310)
#define RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GET__REDDOTIDS_OFFSET UNITYSDK_OFFSET(0x1C615290)
#define RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_INITDATA_OFFSET UNITYSDK_OFFSET(0x1C614E10)
#define RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_SET_ISFARMABLE_OFFSET UNITYSDK_OFFSET(0x1C615400)
#define RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_SET_RARITY_OFFSET UNITYSDK_OFFSET(0x1C6153E0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int LightConePhotoItem_TypeDefinitionIndex = 76431;

	class LightConePhotoItem : public ::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem
	{
	public:
		::System::UInt32 _Rarity_k__BackingField; // 0x88
		::System::Boolean _IsFarmable_k__BackingField; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_CTOR_OFFSET))(this);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_INITDATA_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_EQUALS_OFFSET))(this, a1);
		}

		::System::UInt32 GetFilterTypeID(::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItemFilterType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GETFILTERTYPEID_OFFSET))(this, a1);
		}

		::RPG::Client::PrefHashSet_1<::System::UInt32>* get__ReddotIDs()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GET__REDDOTIDS_OFFSET))(this);
		}

		::System::String* get_ReddotKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GET_REDDOTKEY_OFFSET))(this);
		}

		::CLLBJDEJFNF_OOIDNDCPEAF_DAHCIBCIIAD get_PhotoType()
		{
			return ((::CLLBJDEJFNF_OOIDNDCPEAF_DAHCIBCIIAD(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GET_PHOTOTYPE_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GET_RARITY_OFFSET))(this);
		}

		::System::Void set_Rarity(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_SET_RARITY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFarmable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_GET_ISFARMABLE_OFFSET))(this);
		}

		::System::Void set_IsFarmable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_LIGHTCONEPHOTOITEM_SET_ISFARMABLE_OFFSET))(this, a1);
		}

	};
}
