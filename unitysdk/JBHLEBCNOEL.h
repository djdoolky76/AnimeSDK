#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define JBHLEBCNOEL__CTOR_OFFSET UNITYSDK_OFFSET(0x153C9E90)

inline static constexpr unsigned int JBHLEBCNOEL_TypeDefinitionIndex = 63908;

class JBHLEBCNOEL : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHLEBCNOEL__CTOR_OFFSET))(this);
	}
};
