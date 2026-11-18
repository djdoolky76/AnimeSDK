#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define LGINCAAEMEO__CTOR_OFFSET UNITYSDK_OFFSET(0x14DAA9B0)

inline static constexpr unsigned int LGINCAAEMEO_TypeDefinitionIndex = 64172;

class LGINCAAEMEO : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGINCAAEMEO__CTOR_OFFSET))(this);
	}
};
