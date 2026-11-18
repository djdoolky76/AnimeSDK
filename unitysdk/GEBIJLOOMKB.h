#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define GEBIJLOOMKB__CTOR_OFFSET UNITYSDK_OFFSET(0x16CAECB0)

inline static constexpr unsigned int GEBIJLOOMKB_TypeDefinitionIndex = 38633;

class GEBIJLOOMKB : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBIJLOOMKB__CTOR_OFFSET))(this);
	}
};
