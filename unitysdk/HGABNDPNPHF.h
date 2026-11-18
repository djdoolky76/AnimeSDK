#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define HGABNDPNPHF__CTOR_OFFSET UNITYSDK_OFFSET(0x19E0D4A0)

inline static constexpr unsigned int HGABNDPNPHF_TypeDefinitionIndex = 78069;

class HGABNDPNPHF : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGABNDPNPHF__CTOR_OFFSET))(this);
	}
};
