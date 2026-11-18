#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define EMMLINBDEGE__CTOR_OFFSET UNITYSDK_OFFSET(0xF9E3850)

inline static constexpr unsigned int EMMLINBDEGE_TypeDefinitionIndex = 48185;

class EMMLINBDEGE : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMMLINBDEGE__CTOR_OFFSET))(this);
	}
};
