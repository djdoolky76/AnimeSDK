#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define MMOHFIFLPIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1077C150)

inline static constexpr unsigned int MMOHFIFLPIM_TypeDefinitionIndex = 82907;

class MMOHFIFLPIM : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOHFIFLPIM__CTOR_OFFSET))(this);
	}
};
