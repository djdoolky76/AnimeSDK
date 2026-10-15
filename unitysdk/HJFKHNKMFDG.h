#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
#include "unitysdk/RPG/Client/Pet/PetType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/Pet/PetRarity.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client::Pet { class IPet; }
namespace RPG::Client::Pet { class IPetAppearance; }
namespace RPG::Client::Pet { class IPetRepository; }
namespace System { class WeakReference; }

#define HJFKHNKMFDG_ADOCMODJCNP_OFFSET UNITYSDK_OFFSET(0x15D1FBA0)
#define HJFKHNKMFDG_CTOR_OFFSET UNITYSDK_OFFSET(0x15D1F9E0)
#define HJFKHNKMFDG_GET_APPEARANCE_OFFSET UNITYSDK_OFFSET(0x15D20510)
#define HJFKHNKMFDG_GET_BACKGROUNDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x15D20230)
#define HJFKHNKMFDG_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x15D200C0)
#define HJFKHNKMFDG_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x15D1FA60)
#define HJFKHNKMFDG_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x15D1FCF0)
#define HJFKHNKMFDG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15D1FF50)
#define HJFKHNKMFDG_GET_PETID_OFFSET UNITYSDK_OFFSET(0x15D1FA70)
#define HJFKHNKMFDG_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x15D203A0)
#define HJFKHNKMFDG_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15D1FE20)

	class HJFKHNKMFDG : public ::System::Object
	{
	public:
		::System::WeakReference* NMPIJGKPFIK; // 0x10
		::RPG::Client::Pet::PetIdentifier _Identifier_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::Pet::PetIdentifier a1, ::RPG::Client::Pet::IPetRepository* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::PetIdentifier, ::RPG::Client::Pet::IPetRepository*))((::PBYTE)hIl2Cpp + HJFKHNKMFDG_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Pet::PetIdentifier get_Identifier()
		{
			return ((::RPG::Client::Pet::PetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFKHNKMFDG_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_PetId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFKHNKMFDG_GET_PETID_OFFSET))(this);
		}

		::System::UInt32 get_ItemId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFKHNKMFDG_GET_ITEMID_OFFSET))(this);
		}

		::RPG::Client::Pet::PetType get_Type()
		{
			return ((::RPG::Client::Pet::PetType(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFKHNKMFDG_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFKHNKMFDG_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Description()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFKHNKMFDG_GET_DESCRIPTION_OFFSET))(this);
		}

		::RPG::Client::TextID get_BackgroundDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFKHNKMFDG_GET_BACKGROUNDDESCRIPTION_OFFSET))(this);
		}

		::RPG::Client::Pet::PetRarity get_Rarity()
		{
			return ((::RPG::Client::Pet::PetRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFKHNKMFDG_GET_RARITY_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetAppearance* get_Appearance()
		{
			return ((::RPG::Client::Pet::IPetAppearance*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFKHNKMFDG_GET_APPEARANCE_OFFSET))(this);
		}

		::RPG::Client::Pet::IPet* ADOCMODJCNP()
		{
			return ((::RPG::Client::Pet::IPet*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFKHNKMFDG_ADOCMODJCNP_OFFSET))(this);
		}

	};
