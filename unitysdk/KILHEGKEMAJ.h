#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define KILHEGKEMAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1299D700)

inline static constexpr unsigned int KILHEGKEMAJ_TypeDefinitionIndex = 71780;

class KILHEGKEMAJ : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KILHEGKEMAJ__CTOR_OFFSET))(this);
	}
};
