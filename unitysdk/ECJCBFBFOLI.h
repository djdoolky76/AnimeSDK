#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define ECJCBFBFOLI__CTOR_OFFSET UNITYSDK_OFFSET(0x1698C770)

inline static constexpr unsigned int ECJCBFBFOLI_TypeDefinitionIndex = 91683;

class ECJCBFBFOLI : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJCBFBFOLI__CTOR_OFFSET))(this);
	}
};
