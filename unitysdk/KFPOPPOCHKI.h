#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define KFPOPPOCHKI__CTOR_OFFSET UNITYSDK_OFFSET(0x179071C0)

inline static constexpr unsigned int KFPOPPOCHKI_TypeDefinitionIndex = 61281;

class KFPOPPOCHKI : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPOPPOCHKI__CTOR_OFFSET))(this);
	}
};
