#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define LOOKMGIPDIO__CTOR_OFFSET UNITYSDK_OFFSET(0x15679950)

inline static constexpr unsigned int LOOKMGIPDIO_TypeDefinitionIndex = 82095;

class LOOKMGIPDIO : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOKMGIPDIO__CTOR_OFFSET))(this);
	}
};
