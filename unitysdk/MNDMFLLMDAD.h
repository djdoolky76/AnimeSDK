#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define MNDMFLLMDAD__CTOR_OFFSET UNITYSDK_OFFSET(0x14072990)

inline static constexpr unsigned int MNDMFLLMDAD_TypeDefinitionIndex = 62456;

class MNDMFLLMDAD : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDMFLLMDAD__CTOR_OFFSET))(this);
	}
};
