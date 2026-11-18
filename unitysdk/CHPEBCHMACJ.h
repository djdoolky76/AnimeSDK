#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CHPEBCHMACJ__CTOR_OFFSET UNITYSDK_OFFSET(0x139CA3B0)

inline static constexpr unsigned int CHPEBCHMACJ_TypeDefinitionIndex = 42863;

class CHPEBCHMACJ : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHPEBCHMACJ__CTOR_OFFSET))(this);
	}
};
