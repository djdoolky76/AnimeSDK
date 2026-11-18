#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define LNKLGHOIPFN__CTOR_OFFSET UNITYSDK_OFFSET(0x16C69EE0)

inline static constexpr unsigned int LNKLGHOIPFN_TypeDefinitionIndex = 91481;

class LNKLGHOIPFN : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKLGHOIPFN__CTOR_OFFSET))(this);
	}
};
