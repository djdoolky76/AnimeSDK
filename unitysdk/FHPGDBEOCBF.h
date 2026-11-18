#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNAELLALHIM.h"

#define FHPGDBEOCBF__CTOR_OFFSET UNITYSDK_OFFSET(0x116B39A0)

inline static constexpr unsigned int FHPGDBEOCBF_TypeDefinitionIndex = 40568;

class FHPGDBEOCBF : public ::DNAELLALHIM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHPGDBEOCBF__CTOR_OFFSET))(this);
	}
};
