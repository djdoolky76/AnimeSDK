#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CMFNIKLFCHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x147ADD80)

inline static constexpr unsigned int CMFNIKLFCHJ_TypeDefinitionIndex = 55838;

class CMFNIKLFCHJ : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFNIKLFCHJ__CTOR_OFFSET))(this);
	}
};
