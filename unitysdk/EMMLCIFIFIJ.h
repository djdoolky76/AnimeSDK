#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define EMMLCIFIFIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x169B2AA0)

inline static constexpr unsigned int EMMLCIFIFIJ_TypeDefinitionIndex = 79779;

class EMMLCIFIFIJ : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMMLCIFIFIJ__CTOR_OFFSET))(this);
	}
};
