#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define DANBJJEEPLA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1CDE50)

inline static constexpr unsigned int DANBJJEEPLA_TypeDefinitionIndex = 72875;

class DANBJJEEPLA : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DANBJJEEPLA__CTOR_OFFSET))(this);
	}
};
