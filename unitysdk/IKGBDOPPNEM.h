#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define IKGBDOPPNEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACB70F0)

inline static constexpr unsigned int IKGBDOPPNEM_TypeDefinitionIndex = 57242;

class IKGBDOPPNEM : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGBDOPPNEM__CTOR_OFFSET))(this);
	}
};
