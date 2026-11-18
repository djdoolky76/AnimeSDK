#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define PIMPHMEELEF__CTOR_OFFSET UNITYSDK_OFFSET(0x178D7F90)

inline static constexpr unsigned int PIMPHMEELEF_TypeDefinitionIndex = 73818;

class PIMPHMEELEF : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMPHMEELEF__CTOR_OFFSET))(this);
	}
};
