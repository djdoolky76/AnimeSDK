#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define NEOMDOLDIBF__CTOR_OFFSET UNITYSDK_OFFSET(0xE735D50)

inline static constexpr unsigned int NEOMDOLDIBF_TypeDefinitionIndex = 67335;

class NEOMDOLDIBF : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOMDOLDIBF__CTOR_OFFSET))(this);
	}
};
