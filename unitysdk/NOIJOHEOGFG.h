#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

#define NOIJOHEOGFG__CTOR_OFFSET UNITYSDK_OFFSET(0x13774EF0)

inline static constexpr unsigned int NOIJOHEOGFG_TypeDefinitionIndex = 74020;

class NOIJOHEOGFG : public ::JGELKBLKFHE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIJOHEOGFG__CTOR_OFFSET))(this);
	}
};
