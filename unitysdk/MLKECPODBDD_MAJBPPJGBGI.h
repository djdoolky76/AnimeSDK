#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MLKECPODBDD;
namespace Nap::NapECS { class EcsEntity; }

#define MLKECPODBDD_MAJBPPJGBGI_CHLDJEHPCHG_OFFSET UNITYSDK_OFFSET(0x17D4AAF0)
#define MLKECPODBDD_MAJBPPJGBGI_GCFAHNBCDNC_OFFSET UNITYSDK_OFFSET(0x17D4AA70)
#define MLKECPODBDD_MAJBPPJGBGI__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4AA60)

inline static constexpr unsigned int MLKECPODBDD_MAJBPPJGBGI_TypeDefinitionIndex = 53197;

class MLKECPODBDD_MAJBPPJGBGI : public ::System::Object
{
public:
	::MLKECPODBDD* KLHPEBKNIFB; // 0x10
	::Nap::NapECS::EcsEntity* KECKGDFIALJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKECPODBDD_MAJBPPJGBGI__CTOR_OFFSET))(this);
	}

	::System::Void GCFAHNBCDNC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKECPODBDD_MAJBPPJGBGI_GCFAHNBCDNC_OFFSET))(this);
	}

	::System::Void CHLDJEHPCHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKECPODBDD_MAJBPPJGBGI_CHLDJEHPCHG_OFFSET))(this);
	}
};
