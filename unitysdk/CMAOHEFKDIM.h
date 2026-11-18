#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CMAOHEFKDIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1533F8C0)

inline static constexpr unsigned int CMAOHEFKDIM_TypeDefinitionIndex = 42693;

class CMAOHEFKDIM : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMAOHEFKDIM__CTOR_OFFSET))(this);
	}
};
