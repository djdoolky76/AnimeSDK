#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define PHAALFPIAHF__CTOR_OFFSET UNITYSDK_OFFSET(0x11B682A0)

inline static constexpr unsigned int PHAALFPIAHF_TypeDefinitionIndex = 72083;

class PHAALFPIAHF : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHAALFPIAHF__CTOR_OFFSET))(this);
	}
};
