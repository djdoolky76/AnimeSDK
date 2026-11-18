#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define AKILBGBACLK__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8CD30)

inline static constexpr unsigned int AKILBGBACLK_TypeDefinitionIndex = 76779;

class AKILBGBACLK : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKILBGBACLK__CTOR_OFFSET))(this);
	}
};
