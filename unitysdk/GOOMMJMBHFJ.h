#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define GOOMMJMBHFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15F403D0)

inline static constexpr unsigned int GOOMMJMBHFJ_TypeDefinitionIndex = 80742;

class GOOMMJMBHFJ : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOMMJMBHFJ__CTOR_OFFSET))(this);
	}
};
