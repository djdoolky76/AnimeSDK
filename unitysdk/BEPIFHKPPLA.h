#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define BEPIFHKPPLA__CTOR_OFFSET UNITYSDK_OFFSET(0x143D2C50)

inline static constexpr unsigned int BEPIFHKPPLA_TypeDefinitionIndex = 71406;

class BEPIFHKPPLA : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPIFHKPPLA__CTOR_OFFSET))(this);
	}
};
