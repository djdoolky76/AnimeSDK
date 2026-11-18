#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define IMMAJMHADPP__CTOR_OFFSET UNITYSDK_OFFSET(0x19889690)

inline static constexpr unsigned int IMMAJMHADPP_TypeDefinitionIndex = 70121;

class IMMAJMHADPP : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMAJMHADPP__CTOR_OFFSET))(this);
	}
};
