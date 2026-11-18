#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CHHLCGILOLL__CTOR_OFFSET UNITYSDK_OFFSET(0x10E3C280)

inline static constexpr unsigned int CHHLCGILOLL_TypeDefinitionIndex = 86130;

class CHHLCGILOLL : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHHLCGILOLL__CTOR_OFFSET))(this);
	}
};
