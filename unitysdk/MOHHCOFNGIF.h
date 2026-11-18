#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define MOHHCOFNGIF__CTOR_OFFSET UNITYSDK_OFFSET(0xFA7AC50)

inline static constexpr unsigned int MOHHCOFNGIF_TypeDefinitionIndex = 41922;

class MOHHCOFNGIF : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHHCOFNGIF__CTOR_OFFSET))(this);
	}
};
