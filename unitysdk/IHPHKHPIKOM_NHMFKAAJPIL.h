#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AKCGFNKLIBA;
namespace System { class Action; }

#define IHPHKHPIKOM_NHMFKAAJPIL_BABHJDMNLCK_OFFSET UNITYSDK_OFFSET(0x141DAA50)
#define IHPHKHPIKOM_NHMFKAAJPIL_EHEAJHBNPHH_OFFSET UNITYSDK_OFFSET(0x141DAA60)
#define IHPHKHPIKOM_NHMFKAAJPIL__CTOR_OFFSET UNITYSDK_OFFSET(0x141DAA40)

inline static constexpr unsigned int IHPHKHPIKOM_NHMFKAAJPIL_TypeDefinitionIndex = 92495;

class IHPHKHPIKOM_NHMFKAAJPIL : public ::System::Object
{
public:
	::System::Action* PABLEDCGDGM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHPHKHPIKOM_NHMFKAAJPIL__CTOR_OFFSET))(this);
	}

	::System::Void BABHJDMNLCK(::AKCGFNKLIBA* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::AKCGFNKLIBA*))((::PBYTE)hIl2Cpp + IHPHKHPIKOM_NHMFKAAJPIL_BABHJDMNLCK_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void EHEAJHBNPHH(::AKCGFNKLIBA* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::AKCGFNKLIBA*))((::PBYTE)hIl2Cpp + IHPHKHPIKOM_NHMFKAAJPIL_EHEAJHBNPHH_OFFSET))(this, PIIPCLCCOIG);
	}
};
