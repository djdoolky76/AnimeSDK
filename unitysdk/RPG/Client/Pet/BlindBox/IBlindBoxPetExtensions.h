#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }

#define RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_APPEARANCEID_OFFSET UNITYSDK_OFFSET(0x1C1CA960)
#define RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_ISCHIMERA_OFFSET UNITYSDK_OFFSET(0x1C1CA7A0)
#define RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_ISCHROMA_OFFSET UNITYSDK_OFFSET(0x1C1C9030)
#define RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_ISHIDDEN_OFFSET UNITYSDK_OFFSET(0x1C1CA560)
#define RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_ISRACCOON_OFFSET UNITYSDK_OFFSET(0x1C1CA5E0)

namespace RPG::Client::Pet::BlindBox
{
	inline static constexpr unsigned int IBlindBoxPetExtensions_TypeDefinitionIndex = 78069;

	class IBlindBoxPetExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsHidden(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_ISHIDDEN_OFFSET))(a1);
		}

		static ::System::Boolean IsRaccoon(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_ISRACCOON_OFFSET))(a1);
		}

		static ::System::Boolean IsChimera(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_ISCHIMERA_OFFSET))(a1);
		}

		static ::System::Boolean IsChroma(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_ISCHROMA_OFFSET))(a1);
		}

		static ::System::UInt32 AppearanceId(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_APPEARANCEID_OFFSET))(a1);
		}

	};
}
