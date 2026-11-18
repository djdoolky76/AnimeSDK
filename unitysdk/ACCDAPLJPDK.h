#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define ACCDAPLJPDK__CTOR_OFFSET UNITYSDK_OFFSET(0x135D4670)

inline static constexpr unsigned int ACCDAPLJPDK_TypeDefinitionIndex = 64274;

class ACCDAPLJPDK : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCDAPLJPDK__CTOR_OFFSET))(this);
	}
};
