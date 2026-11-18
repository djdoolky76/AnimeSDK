#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define LKBHEGDLDPD__CTOR_OFFSET UNITYSDK_OFFSET(0x12A620F0)

inline static constexpr unsigned int LKBHEGDLDPD_TypeDefinitionIndex = 57485;

class LKBHEGDLDPD : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBHEGDLDPD__CTOR_OFFSET))(this);
	}
};
