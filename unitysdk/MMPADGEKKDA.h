#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define MMPADGEKKDA__CTOR_OFFSET UNITYSDK_OFFSET(0x174AD4B0)

inline static constexpr unsigned int MMPADGEKKDA_TypeDefinitionIndex = 85125;

class MMPADGEKKDA : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPADGEKKDA__CTOR_OFFSET))(this);
	}
};
