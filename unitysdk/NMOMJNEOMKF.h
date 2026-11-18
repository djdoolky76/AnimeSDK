#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define NMOMJNEOMKF__CTOR_OFFSET UNITYSDK_OFFSET(0x11F8A370)

inline static constexpr unsigned int NMOMJNEOMKF_TypeDefinitionIndex = 60961;

class NMOMJNEOMKF : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMOMJNEOMKF__CTOR_OFFSET))(this);
	}
};
