#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PILAADCKJHL;

#define GKNEKPICCJK_JHPCIJCFGPP_EINGCPOGKDC_OFFSET UNITYSDK_OFFSET(0x13DDF350)
#define GKNEKPICCJK_JHPCIJCFGPP__CTOR_OFFSET UNITYSDK_OFFSET(0x13DDF340)

inline static constexpr unsigned int GKNEKPICCJK_JHPCIJCFGPP_TypeDefinitionIndex = 47862;

class GKNEKPICCJK_JHPCIJCFGPP : public ::System::Object
{
public:
	::System::Int32 MGMDLMBEDJF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNEKPICCJK_JHPCIJCFGPP__CTOR_OFFSET))(this);
	}

	::System::Boolean EINGCPOGKDC(::PILAADCKJHL* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::PILAADCKJHL*))((::PBYTE)hIl2Cpp + GKNEKPICCJK_JHPCIJCFGPP_EINGCPOGKDC_OFFSET))(this, HAAEBCOBKFF);
	}
};
