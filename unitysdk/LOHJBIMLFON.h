#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define LOHJBIMLFON__CTOR_OFFSET UNITYSDK_OFFSET(0x14D40170)

inline static constexpr unsigned int LOHJBIMLFON_TypeDefinitionIndex = 82219;

class LOHJBIMLFON : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHJBIMLFON__CTOR_OFFSET))(this);
	}
};
