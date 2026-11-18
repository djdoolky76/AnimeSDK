#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define JBFLMOOAKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x160D2020)

inline static constexpr unsigned int JBFLMOOAKEN_TypeDefinitionIndex = 74730;

class JBFLMOOAKEN : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFLMOOAKEN__CTOR_OFFSET))(this);
	}
};
