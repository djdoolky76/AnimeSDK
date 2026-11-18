#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define LEHKCFCIEPN__CTOR_OFFSET UNITYSDK_OFFSET(0x158CC220)

inline static constexpr unsigned int LEHKCFCIEPN_TypeDefinitionIndex = 54036;

class LEHKCFCIEPN : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEHKCFCIEPN__CTOR_OFFSET))(this);
	}
};
