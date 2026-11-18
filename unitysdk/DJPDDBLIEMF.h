#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNOEJBLCINK.h"

#define DJPDDBLIEMF__CTOR_OFFSET UNITYSDK_OFFSET(0x149B10B0)

inline static constexpr unsigned int DJPDDBLIEMF_TypeDefinitionIndex = 41312;

class DJPDDBLIEMF : public ::JNOEJBLCINK
{
public:
	::System::Boolean AIEOINEIMGB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPDDBLIEMF__CTOR_OFFSET))(this);
	}
};
