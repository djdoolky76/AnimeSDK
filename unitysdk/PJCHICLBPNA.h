#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNOEJBLCINK.h"

#define PJCHICLBPNA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C65EE00)

inline static constexpr unsigned int PJCHICLBPNA_TypeDefinitionIndex = 76911;

class PJCHICLBPNA : public ::JNOEJBLCINK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJCHICLBPNA__CTOR_OFFSET))(this);
	}
};
