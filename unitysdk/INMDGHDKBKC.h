#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define INMDGHDKBKC__CTOR_OFFSET UNITYSDK_OFFSET(0x13C9E960)

inline static constexpr unsigned int INMDGHDKBKC_TypeDefinitionIndex = 49600;

class INMDGHDKBKC : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INMDGHDKBKC__CTOR_OFFSET))(this);
	}
};
