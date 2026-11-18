#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define KMEJMMJGCJD__CTOR_OFFSET UNITYSDK_OFFSET(0x129A7A50)

inline static constexpr unsigned int KMEJMMJGCJD_TypeDefinitionIndex = 93007;

class KMEJMMJGCJD : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEJMMJGCJD__CTOR_OFFSET))(this);
	}
};
