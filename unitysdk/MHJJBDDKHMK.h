#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define MHJJBDDKHMK__CTOR_OFFSET UNITYSDK_OFFSET(0x11F4CFA0)

inline static constexpr unsigned int MHJJBDDKHMK_TypeDefinitionIndex = 70291;

class MHJJBDDKHMK : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJJBDDKHMK__CTOR_OFFSET))(this);
	}
};
