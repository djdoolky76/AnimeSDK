#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNOEJBLCINK.h"

#define GOKOFGKMDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x14D08370)

inline static constexpr unsigned int GOKOFGKMDOM_TypeDefinitionIndex = 65111;

class GOKOFGKMDOM : public ::JNOEJBLCINK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOKOFGKMDOM__CTOR_OFFSET))(this);
	}
};
