#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHFGDIHNHMC;
namespace RPG::Client::Pet { class PetModule; }

#define RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D6150)
#define RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_0___ONGETPETDATASCRSP_B__0_OFFSET UNITYSDK_OFFSET(0x1C1D9230)
#define RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_0___ONGETPETDATASCRSP_B__1_OFFSET UNITYSDK_OFFSET(0x1C1D9260)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetModule___c__DisplayClass23_0_TypeDefinitionIndex = 78019;

	class PetModule___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::RPG::Client::Pet::PetModule* __4__this; // 0x10
		::IHFGDIHNHMC* rsp; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnGetPetDataScRsp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_0___ONGETPETDATASCRSP_B__0_OFFSET))(this);
		}

		::System::Void __OnGetPetDataScRsp_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_0___ONGETPETDATASCRSP_B__1_OFFSET))(this);
		}

	};
}
