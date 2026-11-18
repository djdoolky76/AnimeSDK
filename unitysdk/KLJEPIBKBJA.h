#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define KLJEPIBKBJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1521FCC0)

inline static constexpr unsigned int KLJEPIBKBJA_TypeDefinitionIndex = 51556;

class KLJEPIBKBJA : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJEPIBKBJA__CTOR_OFFSET))(this);
	}
};
