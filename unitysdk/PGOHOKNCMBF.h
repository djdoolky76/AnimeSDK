#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define PGOHOKNCMBF__CTOR_OFFSET UNITYSDK_OFFSET(0x13705640)

inline static constexpr unsigned int PGOHOKNCMBF_TypeDefinitionIndex = 80021;

class PGOHOKNCMBF : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGOHOKNCMBF__CTOR_OFFSET))(this);
	}
};
