#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define EBEGNMNPEJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1062B900)

inline static constexpr unsigned int EBEGNMNPEJI_TypeDefinitionIndex = 76129;

class EBEGNMNPEJI : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEGNMNPEJI__CTOR_OFFSET))(this);
	}
};
