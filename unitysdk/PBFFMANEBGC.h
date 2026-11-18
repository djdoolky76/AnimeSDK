#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define PBFFMANEBGC__CTOR_OFFSET UNITYSDK_OFFSET(0x150AE1D0)

inline static constexpr unsigned int PBFFMANEBGC_TypeDefinitionIndex = 54991;

class PBFFMANEBGC : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFFMANEBGC__CTOR_OFFSET))(this);
	}
};
