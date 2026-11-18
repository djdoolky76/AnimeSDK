#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define DKNNBHKJFIB__CTOR_OFFSET UNITYSDK_OFFSET(0x13E53FD0)

inline static constexpr unsigned int DKNNBHKJFIB_TypeDefinitionIndex = 54592;

class DKNNBHKJFIB : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNNBHKJFIB__CTOR_OFFSET))(this);
	}
};
