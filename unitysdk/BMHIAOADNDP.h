#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define BMHIAOADNDP__CTOR_OFFSET UNITYSDK_OFFSET(0xF7B1190)

inline static constexpr unsigned int BMHIAOADNDP_TypeDefinitionIndex = 74208;

class BMHIAOADNDP : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHIAOADNDP__CTOR_OFFSET))(this);
	}
};
