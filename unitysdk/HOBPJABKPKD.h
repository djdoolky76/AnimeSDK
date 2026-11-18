#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define HOBPJABKPKD__CTOR_OFFSET UNITYSDK_OFFSET(0x14D3A400)

inline static constexpr unsigned int HOBPJABKPKD_TypeDefinitionIndex = 78382;

class HOBPJABKPKD : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBPJABKPKD__CTOR_OFFSET))(this);
	}
};
