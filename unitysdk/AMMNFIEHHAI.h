#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define AMMNFIEHHAI__CTOR_OFFSET UNITYSDK_OFFSET(0x11BC3ED0)

inline static constexpr unsigned int AMMNFIEHHAI_TypeDefinitionIndex = 49553;

class AMMNFIEHHAI : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMNFIEHHAI__CTOR_OFFSET))(this);
	}
};
