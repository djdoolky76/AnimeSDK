#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define GGGHPDNGKHH__CTOR_OFFSET UNITYSDK_OFFSET(0x10EEFA70)

inline static constexpr unsigned int GGGHPDNGKHH_TypeDefinitionIndex = 58526;

class GGGHPDNGKHH : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGHPDNGKHH__CTOR_OFFSET))(this);
	}
};
