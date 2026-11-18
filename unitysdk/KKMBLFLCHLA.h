#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define KKMBLFLCHLA__CTOR_OFFSET UNITYSDK_OFFSET(0xD3FF200)

inline static constexpr unsigned int KKMBLFLCHLA_TypeDefinitionIndex = 51348;

class KKMBLFLCHLA : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMBLFLCHLA__CTOR_OFFSET))(this);
	}
};
