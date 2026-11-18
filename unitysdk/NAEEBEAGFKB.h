#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define NAEEBEAGFKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1726A7F0)

inline static constexpr unsigned int NAEEBEAGFKB_TypeDefinitionIndex = 84661;

class NAEEBEAGFKB : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEEBEAGFKB__CTOR_OFFSET))(this);
	}
};
