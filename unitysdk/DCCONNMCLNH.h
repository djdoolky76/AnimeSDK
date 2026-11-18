#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define DCCONNMCLNH__CTOR_OFFSET UNITYSDK_OFFSET(0x12400DA0)

inline static constexpr unsigned int DCCONNMCLNH_TypeDefinitionIndex = 79792;

class DCCONNMCLNH : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCONNMCLNH__CTOR_OFFSET))(this);
	}
};
