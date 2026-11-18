#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CFPNDJJDFML__CTOR_OFFSET UNITYSDK_OFFSET(0x199FE9A0)

inline static constexpr unsigned int CFPNDJJDFML_TypeDefinitionIndex = 81639;

class CFPNDJJDFML : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNDJJDFML__CTOR_OFFSET))(this);
	}
};
