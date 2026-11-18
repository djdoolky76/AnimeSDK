#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParticleBaseDataType.h"

#define PARTICLEFLOATDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF72A80)

inline static constexpr unsigned int ParticleFloatData_TypeDefinitionIndex = 27130;

class ParticleFloatData : public ::ParticleBaseDataType
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEFLOATDATA__CTOR_OFFSET))(this);
	}
};
