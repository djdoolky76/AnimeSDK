#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define IMOCFLNLAFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACC1000)

inline static constexpr unsigned int IMOCFLNLAFB_TypeDefinitionIndex = 79831;

class IMOCFLNLAFB : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOCFLNLAFB__CTOR_OFFSET))(this);
	}
};
