#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define DAMOAILPPNP__CTOR_OFFSET UNITYSDK_OFFSET(0x12B9BC00)

inline static constexpr unsigned int DAMOAILPPNP_TypeDefinitionIndex = 62452;

class DAMOAILPPNP : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMOAILPPNP__CTOR_OFFSET))(this);
	}
};
