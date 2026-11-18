#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define JMEMDKKCLNA__CTOR_OFFSET UNITYSDK_OFFSET(0x157CF9B0)

inline static constexpr unsigned int JMEMDKKCLNA_TypeDefinitionIndex = 88168;

class JMEMDKKCLNA : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMEMDKKCLNA__CTOR_OFFSET))(this);
	}
};
