#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CEOKDNCAHFL__CTOR_OFFSET UNITYSDK_OFFSET(0x199FDEC0)

inline static constexpr unsigned int CEOKDNCAHFL_TypeDefinitionIndex = 49521;

class CEOKDNCAHFL : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOKDNCAHFL__CTOR_OFFSET))(this);
	}
};
