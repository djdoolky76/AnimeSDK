#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define BLIEFABKJKE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E0C0D0)

inline static constexpr unsigned int BLIEFABKJKE_TypeDefinitionIndex = 42149;

class BLIEFABKJKE : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIEFABKJKE__CTOR_OFFSET))(this);
	}
};
