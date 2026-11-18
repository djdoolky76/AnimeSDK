#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define EBPLHCFDMHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1062BE90)

inline static constexpr unsigned int EBPLHCFDMHJ_TypeDefinitionIndex = 84154;

class EBPLHCFDMHJ : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPLHCFDMHJ__CTOR_OFFSET))(this);
	}
};
