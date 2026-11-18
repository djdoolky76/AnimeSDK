#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define BELJCAPGAIH__CTOR_OFFSET UNITYSDK_OFFSET(0x1506F840)

inline static constexpr unsigned int BELJCAPGAIH_TypeDefinitionIndex = 43541;

class BELJCAPGAIH : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BELJCAPGAIH__CTOR_OFFSET))(this);
	}
};
