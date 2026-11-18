#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define NBAOBOKCEOH__CTOR_OFFSET UNITYSDK_OFFSET(0x12885780)

inline static constexpr unsigned int NBAOBOKCEOH_TypeDefinitionIndex = 45228;

class NBAOBOKCEOH : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBAOBOKCEOH__CTOR_OFFSET))(this);
	}
};
