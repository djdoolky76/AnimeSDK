#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define EKPMEKOILDK__CTOR_OFFSET UNITYSDK_OFFSET(0x10F3CA00)

inline static constexpr unsigned int EKPMEKOILDK_TypeDefinitionIndex = 72857;

class EKPMEKOILDK : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPMEKOILDK__CTOR_OFFSET))(this);
	}
};
