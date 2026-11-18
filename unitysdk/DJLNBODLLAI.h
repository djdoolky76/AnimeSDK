#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define DJLNBODLLAI__CTOR_OFFSET UNITYSDK_OFFSET(0x1344C4A0)

inline static constexpr unsigned int DJLNBODLLAI_TypeDefinitionIndex = 92964;

class DJLNBODLLAI : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLNBODLLAI__CTOR_OFFSET))(this);
	}
};
