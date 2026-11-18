#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define AKBPCBOEPFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x134D76B0)

inline static constexpr unsigned int AKBPCBOEPFJ_TypeDefinitionIndex = 63771;

class AKBPCBOEPFJ : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBPCBOEPFJ__CTOR_OFFSET))(this);
	}
};
