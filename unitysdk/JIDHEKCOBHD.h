#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDPCOFANLGK.h"

#define JIDHEKCOBHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1873C330)

inline static constexpr unsigned int JIDHEKCOBHD_TypeDefinitionIndex = 90877;

class JIDHEKCOBHD : public ::KDPCOFANLGK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDHEKCOBHD__CTOR_OFFSET))(this);
	}
};
