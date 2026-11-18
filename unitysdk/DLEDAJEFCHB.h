#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define DLEDAJEFCHB__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6F620)

inline static constexpr unsigned int DLEDAJEFCHB_TypeDefinitionIndex = 39295;

class DLEDAJEFCHB : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEDAJEFCHB__CTOR_OFFSET))(this);
	}
};
