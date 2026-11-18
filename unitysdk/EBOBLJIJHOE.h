#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define EBOBLJIJHOE__CTOR_OFFSET UNITYSDK_OFFSET(0x135394C0)

inline static constexpr unsigned int EBOBLJIJHOE_TypeDefinitionIndex = 73089;

class EBOBLJIJHOE : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOBLJIJHOE__CTOR_OFFSET))(this);
	}
};
