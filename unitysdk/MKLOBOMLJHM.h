#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define MKLOBOMLJHM__CTOR_OFFSET UNITYSDK_OFFSET(0x16C95B10)

inline static constexpr unsigned int MKLOBOMLJHM_TypeDefinitionIndex = 76565;

class MKLOBOMLJHM : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLOBOMLJHM__CTOR_OFFSET))(this);
	}
};
