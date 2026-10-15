#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DOFCocMethodType.h"

#define BJCFIOLIACA_DHBNHOKCILK_OFFSET UNITYSDK_OFFSET(0x1C80)
#define BJCFIOLIACA_DIEBABEACFH_OFFSET UNITYSDK_OFFSET(0x1A700)
#define BJCFIOLIACA_HLKCBOLGLAJ_OFFSET UNITYSDK_OFFSET(0x1A700)
#define BJCFIOLIACA_LHJBMMOKJLA_OFFSET UNITYSDK_OFFSET(0x1A6F0)
#define BJCFIOLIACA_MBBJEFODOLA_OFFSET UNITYSDK_OFFSET(0x1C80)
#define BJCFIOLIACA_MDPFOAOPGEM_OFFSET UNITYSDK_OFFSET(0x1A6F0)
#define BJCFIOLIACA_PFMJGBNEJFH_OFFSET UNITYSDK_OFFSET(0x1A6E0)
#define BJCFIOLIACA_PILDNFCHMJC_OFFSET UNITYSDK_OFFSET(0x1A6E0)

inline static constexpr unsigned int BJCFIOLIACA_TypeDefinitionIndex = 69615;

	struct alignas(4) BJCFIOLIACA
	{
		::System::Boolean NCPOGCJPCCP; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::DOFCocMethodType IOIJODCBPIO; // 0x14
		::System::Single MOGLLNFFMPH; // 0x18
		::System::Single MDMNHPCHPNJ; // 0x1C
		::System::Single KOOPNHBBLDG; // 0x20
		::System::Single MBBJEFODOLA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCFIOLIACA_MBBJEFODOLA_OFFSET))(this);
		}

		::System::Void PILDNFCHMJC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BJCFIOLIACA_PILDNFCHMJC_OFFSET))(this, a1);
		}

		::System::Single MDPFOAOPGEM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCFIOLIACA_MDPFOAOPGEM_OFFSET))(this);
		}

		::System::Void HLKCBOLGLAJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BJCFIOLIACA_HLKCBOLGLAJ_OFFSET))(this, a1);
		}

		::System::Single DHBNHOKCILK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCFIOLIACA_DHBNHOKCILK_OFFSET))(this);
		}

		::System::Void PFMJGBNEJFH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BJCFIOLIACA_PFMJGBNEJFH_OFFSET))(this, a1);
		}

		::System::Single LHJBMMOKJLA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCFIOLIACA_LHJBMMOKJLA_OFFSET))(this);
		}

		::System::Void DIEBABEACFH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BJCFIOLIACA_DIEBABEACFH_OFFSET))(this, a1);
		}

	};
