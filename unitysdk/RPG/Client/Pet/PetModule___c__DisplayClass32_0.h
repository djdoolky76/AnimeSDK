#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPDGMIHGIFG;
namespace RPG::Client::Pet { class PetModule; }

#define RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS32_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D7EF0)
#define RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS32_0___ONSUMMONPETSCRSP_B__0_OFFSET UNITYSDK_OFFSET(0x1C1D97D0)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetModule___c__DisplayClass32_0_TypeDefinitionIndex = 78023;

	class PetModule___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::MPDGMIHGIFG* rsp; // 0x10
		::RPG::Client::Pet::PetModule* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS32_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnSummonPetScRsp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS32_0___ONSUMMONPETSCRSP_B__0_OFFSET))(this);
		}

	};
}
