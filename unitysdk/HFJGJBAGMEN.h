#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define HFJGJBAGMEN__CTOR_OFFSET UNITYSDK_OFFSET(0x13D8BD00)

inline static constexpr unsigned int HFJGJBAGMEN_TypeDefinitionIndex = 65983;

class HFJGJBAGMEN : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJGJBAGMEN__CTOR_OFFSET))(this);
	}
};
