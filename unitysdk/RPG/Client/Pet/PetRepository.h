#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
namespace RPG::Client::Pet { class INormalPetRepository; }
namespace RPG::Client::Pet { class IPet; }
namespace RPG::Client::Pet { class NormalPetRepository; }
namespace RPG::Client::Pet::BlindBox { class BlindBoxPetRepository; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPetRepository; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_PET_PETREPOSITORY_CTOR_OFFSET UNITYSDK_OFFSET(0xE511460)
#define RPG_CLIENT_PET_PETREPOSITORY_GETALL_OFFSET UNITYSDK_OFFSET(0xE5185C0)
#define RPG_CLIENT_PET_PETREPOSITORY_GET_BLINDBOX_OFFSET UNITYSDK_OFFSET(0xE510990)
#define RPG_CLIENT_PET_PETREPOSITORY_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0xE510D00)
#define RPG_CLIENT_PET_PETREPOSITORY_GET_OFFSET UNITYSDK_OFFSET(0xE50D8C0)
#define RPG_CLIENT_PET_PETREPOSITORY_TRYGET_OFFSET UNITYSDK_OFFSET(0xE517B00)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetRepository_TypeDefinitionIndex = 78032;

	class PetRepository : public ::System::Object
	{
	public:
		::RPG::Client::Pet::NormalPetRepository* _Normal; // 0x10
		::RPG::Client::Pet::BlindBox::BlindBoxPetRepository* _BlindBox; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETREPOSITORY_CTOR_OFFSET))(this);
		}

		::RPG::Client::Pet::IPet* Get(::RPG::Client::Pet::PetIdentifier a1)
		{
			return ((::RPG::Client::Pet::IPet*(*)(::PVOID, ::RPG::Client::Pet::PetIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETREPOSITORY_GET_OFFSET))(this, a1);
		}

		::System::Boolean TryGet(::RPG::Client::Pet::PetIdentifier a1, ::RPG::Client::Pet::IPet* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::PetIdentifier, ::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETREPOSITORY_TRYGET_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPet*>* GetAll()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPet*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETREPOSITORY_GETALL_OFFSET))(this);
		}

		::RPG::Client::Pet::INormalPetRepository* get_Normal()
		{
			return ((::RPG::Client::Pet::INormalPetRepository*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETREPOSITORY_GET_NORMAL_OFFSET))(this);
		}

		::RPG::Client::Pet::BlindBox::IBlindBoxPetRepository* get_BlindBox()
		{
			return ((::RPG::Client::Pet::BlindBox::IBlindBoxPetRepository*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETREPOSITORY_GET_BLINDBOX_OFFSET))(this);
		}

	};
}
