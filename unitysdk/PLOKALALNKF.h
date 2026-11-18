#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define PLOKALALNKF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C664300)

inline static constexpr unsigned int PLOKALALNKF_TypeDefinitionIndex = 88173;

class PLOKALALNKF : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOKALALNKF__CTOR_OFFSET))(this);
	}
};
