#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
#include "unitysdk/RPG/Client/Pet/PetType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
#include "unitysdk/RPG/Client/Pet/PetRarity.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client::Pet { class IPetAppearance; }
namespace RPG::Client::Pet { class IPetInstance; }
namespace RPG::Client::Pet { class IPetInstanceRepository; }
namespace System { class WeakReference; }

#define GPPJMHDPEPH_CTOR_OFFSET UNITYSDK_OFFSET(0x15B680B0)
#define GPPJMHDPEPH_DGLEMDECAMN_OFFSET UNITYSDK_OFFSET(0x15B68280)
#define GPPJMHDPEPH_GET_APPEARANCE_OFFSET UNITYSDK_OFFSET(0x15B68CE0)
#define GPPJMHDPEPH_GET_BACKGROUNDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x15B68A00)
#define GPPJMHDPEPH_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x15B68890)
#define GPPJMHDPEPH_GET_EFFECTIVEAPPEARANCE_OFFSET UNITYSDK_OFFSET(0x15B68E10)
#define GPPJMHDPEPH_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x15B68150)
#define GPPJMHDPEPH_GET_INSTANCEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x15B68140)
#define GPPJMHDPEPH_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x15B684C0)
#define GPPJMHDPEPH_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15B68720)
#define GPPJMHDPEPH_GET_PETID_OFFSET UNITYSDK_OFFSET(0x15B68390)
#define GPPJMHDPEPH_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x15B68B70)
#define GPPJMHDPEPH_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15B685F0)

inline static constexpr unsigned int GPPJMHDPEPH_TypeDefinitionIndex = 75715;

	class GPPJMHDPEPH : public ::System::Object
	{
	public:
		::System::WeakReference* NMPIJGKPFIK; // 0x10
		::RPG::Client::Pet::PetInstanceIdentifier _InstanceIdentifier_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::Pet::PetInstanceIdentifier a1, ::RPG::Client::Pet::IPetInstanceRepository* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::PetInstanceIdentifier, ::RPG::Client::Pet::IPetInstanceRepository*))((::PBYTE)hIl2Cpp + GPPJMHDPEPH_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Pet::PetInstanceIdentifier get_InstanceIdentifier()
		{
			return ((::RPG::Client::Pet::PetInstanceIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPJMHDPEPH_GET_INSTANCEIDENTIFIER_OFFSET))(this);
		}

		::RPG::Client::Pet::PetIdentifier get_Identifier()
		{
			return ((::RPG::Client::Pet::PetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPJMHDPEPH_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_PetId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPJMHDPEPH_GET_PETID_OFFSET))(this);
		}

		::System::UInt32 get_ItemId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPJMHDPEPH_GET_ITEMID_OFFSET))(this);
		}

		::RPG::Client::Pet::PetType get_Type()
		{
			return ((::RPG::Client::Pet::PetType(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPJMHDPEPH_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPJMHDPEPH_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Description()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPJMHDPEPH_GET_DESCRIPTION_OFFSET))(this);
		}

		::RPG::Client::TextID get_BackgroundDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPJMHDPEPH_GET_BACKGROUNDDESCRIPTION_OFFSET))(this);
		}

		::RPG::Client::Pet::PetRarity get_Rarity()
		{
			return ((::RPG::Client::Pet::PetRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPJMHDPEPH_GET_RARITY_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetAppearance* get_Appearance()
		{
			return ((::RPG::Client::Pet::IPetAppearance*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPJMHDPEPH_GET_APPEARANCE_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetAppearance* get_EffectiveAppearance()
		{
			return ((::RPG::Client::Pet::IPetAppearance*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPJMHDPEPH_GET_EFFECTIVEAPPEARANCE_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetInstance* DGLEMDECAMN()
		{
			return ((::RPG::Client::Pet::IPetInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPJMHDPEPH_DGLEMDECAMN_OFFSET))(this);
		}

	};
