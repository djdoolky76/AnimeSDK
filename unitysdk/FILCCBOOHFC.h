#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define FILCCBOOHFC__CTOR_OFFSET UNITYSDK_OFFSET(0x10EB6B20)

inline static constexpr unsigned int FILCCBOOHFC_TypeDefinitionIndex = 82905;

class FILCCBOOHFC : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILCCBOOHFC__CTOR_OFFSET))(this);
	}
};
