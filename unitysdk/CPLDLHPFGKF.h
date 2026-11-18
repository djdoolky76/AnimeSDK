#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDJEMDDDGPG.h"

#define CPLDLHPFGKF__CTOR_OFFSET UNITYSDK_OFFSET(0x18318520)

inline static constexpr unsigned int CPLDLHPFGKF_TypeDefinitionIndex = 58528;

class CPLDLHPFGKF : public ::KDJEMDDDGPG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLDLHPFGKF__CTOR_OFFSET))(this);
	}
};
