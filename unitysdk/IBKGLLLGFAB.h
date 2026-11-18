#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define IBKGLLLGFAB__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA0860)

inline static constexpr unsigned int IBKGLLLGFAB_TypeDefinitionIndex = 88146;

class IBKGLLLGFAB : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKGLLLGFAB__CTOR_OFFSET))(this);
	}
};
