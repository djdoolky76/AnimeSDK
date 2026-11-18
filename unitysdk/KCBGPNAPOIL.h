#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define KCBGPNAPOIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4986E0)

inline static constexpr unsigned int KCBGPNAPOIL_TypeDefinitionIndex = 45685;

class KCBGPNAPOIL : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBGPNAPOIL__CTOR_OFFSET))(this);
	}
};
