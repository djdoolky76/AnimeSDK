#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ADJFJHHMKPI;
class PNJDGHBEMLK;

#define ADJFJHHMKPI_DELMAOJDDBF_PPPCAMGALMK_OFFSET UNITYSDK_OFFSET(0x134A8180)
#define ADJFJHHMKPI_DELMAOJDDBF__CTOR_OFFSET UNITYSDK_OFFSET(0x134A8170)

inline static constexpr unsigned int ADJFJHHMKPI_DELMAOJDDBF_TypeDefinitionIndex = 56172;

class ADJFJHHMKPI_DELMAOJDDBF : public ::System::Object
{
public:
	::ADJFJHHMKPI* KLHPEBKNIFB; // 0x10
	::System::Boolean OICJOPILAKC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJFJHHMKPI_DELMAOJDDBF__CTOR_OFFSET))(this);
	}

	::System::Boolean PPPCAMGALMK(::PNJDGHBEMLK* DDOFCJOGADE)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + ADJFJHHMKPI_DELMAOJDDBF_PPPCAMGALMK_OFFSET))(this, DDOFCJOGADE);
	}
};
