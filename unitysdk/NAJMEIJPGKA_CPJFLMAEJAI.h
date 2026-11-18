#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMGJAMPDNJI.h"
#include "unitysdk/System/Object.h"

class NAJMEIJPGKA;

#define NAJMEIJPGKA_CPJFLMAEJAI_DIBOLJPDIBA_OFFSET UNITYSDK_OFFSET(0x170F0570)
#define NAJMEIJPGKA_CPJFLMAEJAI__CTOR_OFFSET UNITYSDK_OFFSET(0x170F0560)

inline static constexpr unsigned int NAJMEIJPGKA_CPJFLMAEJAI_TypeDefinitionIndex = 74989;

class NAJMEIJPGKA_CPJFLMAEJAI : public ::System::Object
{
public:
	::NAJMEIJPGKA* KLHPEBKNIFB; // 0x10
	::System::Int32 MGMDLMBEDJF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJMEIJPGKA_CPJFLMAEJAI__CTOR_OFFSET))(this);
	}

	::System::Boolean DIBOLJPDIBA(::AMGJAMPDNJI MOBNMDEDJIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::AMGJAMPDNJI))((::PBYTE)hIl2Cpp + NAJMEIJPGKA_CPJFLMAEJAI_DIBOLJPDIBA_OFFSET))(this, MOBNMDEDJIP);
	}
};
