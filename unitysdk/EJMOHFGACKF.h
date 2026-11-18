#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define EJMOHFGACKF__CTOR_OFFSET UNITYSDK_OFFSET(0x161496A0)

inline static constexpr unsigned int EJMOHFGACKF_TypeDefinitionIndex = 40440;

class EJMOHFGACKF : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMOHFGACKF__CTOR_OFFSET))(this);
	}
};
