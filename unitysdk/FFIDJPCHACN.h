#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define FFIDJPCHACN__CTOR_OFFSET UNITYSDK_OFFSET(0xBB3DCD0)

inline static constexpr unsigned int FFIDJPCHACN_TypeDefinitionIndex = 40336;

class FFIDJPCHACN : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIDJPCHACN__CTOR_OFFSET))(this);
	}
};
