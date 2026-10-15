#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
#include "unitysdk/RPG/Client/Pet/PetRarity.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client::Pet { class IPetAppearance; }
namespace RPG::Client::Pet { class IPetInstance; }

#define KOILFCNBLIA_CTOR_OFFSET UNITYSDK_OFFSET(0xB591E20)
#define KOILFCNBLIA_GET_APPEARANCE_OFFSET UNITYSDK_OFFSET(0xB5928E0)
#define KOILFCNBLIA_GET_BACKGROUNDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xB592630)
#define KOILFCNBLIA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xB5924E0)
#define KOILFCNBLIA_GET_EFFECTIVEAPPEARANCE_OFFSET UNITYSDK_OFFSET(0xB592B60)
#define KOILFCNBLIA_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xB591ED0)
#define KOILFCNBLIA_GET_INSTANCEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xB592A10)
#define KOILFCNBLIA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xB592130)
#define KOILFCNBLIA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB592390)
#define KOILFCNBLIA_GET_PETID_OFFSET UNITYSDK_OFFSET(0xB592000)
#define KOILFCNBLIA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xB592780)
#define KOILFCNBLIA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB592260)

inline static constexpr unsigned int KOILFCNBLIA_TypeDefinitionIndex = 75663;

	class KOILFCNBLIA : public ::System::Object
	{
	public:
		::RPG::Client::Pet::IPetAppearance* CINLAGDKIAO; // 0x10
		::RPG::Client::Pet::IPetInstance* FLMODBLFAGD; // 0x18
		::System::Void _ctor(::RPG::Client::Pet::IPetInstance* a1, ::RPG::Client::Pet::IPetAppearance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::IPetInstance*, ::RPG::Client::Pet::IPetAppearance*))((::PBYTE)hIl2Cpp + KOILFCNBLIA_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Pet::PetIdentifier get_Identifier()
		{
			return ((::RPG::Client::Pet::PetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + KOILFCNBLIA_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_PetId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOILFCNBLIA_GET_PETID_OFFSET))(this);
		}

		::System::UInt32 get_ItemId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOILFCNBLIA_GET_ITEMID_OFFSET))(this);
		}

		::RPG::Client::Pet::PetType get_Type()
		{
			return ((::RPG::Client::Pet::PetType(*)(::PVOID))((::PBYTE)hIl2Cpp + KOILFCNBLIA_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + KOILFCNBLIA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Description()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + KOILFCNBLIA_GET_DESCRIPTION_OFFSET))(this);
		}

		::RPG::Client::TextID get_BackgroundDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + KOILFCNBLIA_GET_BACKGROUNDDESCRIPTION_OFFSET))(this);
		}

		::RPG::Client::Pet::PetRarity get_Rarity()
		{
			return ((::RPG::Client::Pet::PetRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + KOILFCNBLIA_GET_RARITY_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetAppearance* get_Appearance()
		{
			return ((::RPG::Client::Pet::IPetAppearance*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOILFCNBLIA_GET_APPEARANCE_OFFSET))(this);
		}

		::RPG::Client::Pet::PetInstanceIdentifier get_InstanceIdentifier()
		{
			return ((::RPG::Client::Pet::PetInstanceIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + KOILFCNBLIA_GET_INSTANCEIDENTIFIER_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetAppearance* get_EffectiveAppearance()
		{
			return ((::RPG::Client::Pet::IPetAppearance*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOILFCNBLIA_GET_EFFECTIVEAPPEARANCE_OFFSET))(this);
		}

	};
