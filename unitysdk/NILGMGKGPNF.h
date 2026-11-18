#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define NILGMGKGPNF__CTOR_OFFSET UNITYSDK_OFFSET(0x17291740)

inline static constexpr unsigned int NILGMGKGPNF_TypeDefinitionIndex = 80981;

class NILGMGKGPNF : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILGMGKGPNF__CTOR_OFFSET))(this);
	}
};
