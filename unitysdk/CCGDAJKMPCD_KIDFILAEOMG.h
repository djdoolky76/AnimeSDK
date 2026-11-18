#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOCCBECFDKA;
namespace System { class String; }

#define CCGDAJKMPCD_KIDFILAEOMG_EFMCEPCBHPN_OFFSET UNITYSDK_OFFSET(0x14F14EF0)
#define CCGDAJKMPCD_KIDFILAEOMG__CTOR_OFFSET UNITYSDK_OFFSET(0x14F14EE0)

inline static constexpr unsigned int CCGDAJKMPCD_KIDFILAEOMG_TypeDefinitionIndex = 83745;

class CCGDAJKMPCD_KIDFILAEOMG : public ::System::Object
{
public:
	::System::String* HIAIKHDFCLN; // 0x10
	::System::Boolean LPMBNPDADAO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGDAJKMPCD_KIDFILAEOMG__CTOR_OFFSET))(this);
	}

	::System::Void EFMCEPCBHPN(::AOCCBECFDKA* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::AOCCBECFDKA*))((::PBYTE)hIl2Cpp + CCGDAJKMPCD_KIDFILAEOMG_EFMCEPCBHPN_OFFSET))(this, GLAOEHCGCFO);
	}
};
