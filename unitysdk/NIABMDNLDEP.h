#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define NIABMDNLDEP__CTOR_OFFSET UNITYSDK_OFFSET(0x12FEAF80)

inline static constexpr unsigned int NIABMDNLDEP_TypeDefinitionIndex = 41142;

class NIABMDNLDEP : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIABMDNLDEP__CTOR_OFFSET))(this);
	}
};
