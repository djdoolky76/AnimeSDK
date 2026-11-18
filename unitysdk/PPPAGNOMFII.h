#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define PPPAGNOMFII__CTOR_OFFSET UNITYSDK_OFFSET(0x1C67C840)

inline static constexpr unsigned int PPPAGNOMFII_TypeDefinitionIndex = 55433;

class PPPAGNOMFII : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPAGNOMFII__CTOR_OFFSET))(this);
	}
};
