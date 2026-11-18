#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define DHLDCHFDIHH__CTOR_OFFSET UNITYSDK_OFFSET(0x19D61020)

inline static constexpr unsigned int DHLDCHFDIHH_TypeDefinitionIndex = 56568;

class DHLDCHFDIHH : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLDCHFDIHH__CTOR_OFFSET))(this);
	}
};
