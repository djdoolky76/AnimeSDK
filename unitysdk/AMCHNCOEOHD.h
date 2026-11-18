#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define AMCHNCOEOHD__CTOR_OFFSET UNITYSDK_OFFSET(0x11BC37F0)

inline static constexpr unsigned int AMCHNCOEOHD_TypeDefinitionIndex = 54620;

class AMCHNCOEOHD : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCHNCOEOHD__CTOR_OFFSET))(this);
	}
};
