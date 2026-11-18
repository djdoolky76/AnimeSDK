#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define KKKPPIEFEPM__CTOR_OFFSET UNITYSDK_OFFSET(0x126975F0)

inline static constexpr unsigned int KKKPPIEFEPM_TypeDefinitionIndex = 54410;

class KKKPPIEFEPM : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKPPIEFEPM__CTOR_OFFSET))(this);
	}
};
