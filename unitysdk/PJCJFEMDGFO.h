#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define PJCJFEMDGFO__CTOR_OFFSET UNITYSDK_OFFSET(0x150CF150)

inline static constexpr unsigned int PJCJFEMDGFO_TypeDefinitionIndex = 79686;

class PJCJFEMDGFO : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJCJFEMDGFO__CTOR_OFFSET))(this);
	}
};
