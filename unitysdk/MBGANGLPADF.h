#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define MBGANGLPADF__CTOR_OFFSET UNITYSDK_OFFSET(0x14041E40)

inline static constexpr unsigned int MBGANGLPADF_TypeDefinitionIndex = 48005;

class MBGANGLPADF : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBGANGLPADF__CTOR_OFFSET))(this);
	}
};
