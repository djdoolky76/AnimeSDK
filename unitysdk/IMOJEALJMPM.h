#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define IMOJEALJMPM__CTOR_OFFSET UNITYSDK_OFFSET(0x153C2660)

inline static constexpr unsigned int IMOJEALJMPM_TypeDefinitionIndex = 50111;

class IMOJEALJMPM : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOJEALJMPM__CTOR_OFFSET))(this);
	}
};
