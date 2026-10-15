#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetKind.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetType.h"
class OGODLCGIBNC;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY_CREATEALL_OFFSET UNITYSDK_OFFSET(0xDAA7FE0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xDAA7DE0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__QUERYTYPEROW_OFFSET UNITYSDK_OFFSET(0xDAA7E90)

namespace RPG::Client::Pet::BlindBox
{
	inline static constexpr unsigned int BlindBoxPetTypeFactory_TypeDefinitionIndex = 75737;

	class BlindBoxPetTypeFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::Pet::BlindBox::BlindBoxPetType Create(::RPG::Client::Pet::BlindBox::BlindBoxPetKind a1)
		{
			return ((::RPG::Client::Pet::BlindBox::BlindBoxPetType(*)(::RPG::Client::Pet::BlindBox::BlindBoxPetKind))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY_CREATE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::BlindBoxPetType>* CreateAll()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::BlindBoxPetType>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY_CREATEALL_OFFSET))();
		}

		static ::OGODLCGIBNC* _QueryTypeRow(::RPG::Client::Pet::BlindBox::BlindBoxPetKind a1)
		{
			return ((::OGODLCGIBNC*(*)(::RPG::Client::Pet::BlindBox::BlindBoxPetKind))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEFACTORY__QUERYTYPEROW_OFFSET))(a1);
		}

	};
}
