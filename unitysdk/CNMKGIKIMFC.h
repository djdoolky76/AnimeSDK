#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define CNMKGIKIMFC__CTOR_OFFSET UNITYSDK_OFFSET(0x169743B0)

inline static constexpr unsigned int CNMKGIKIMFC_TypeDefinitionIndex = 57423;

class CNMKGIKIMFC : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMKGIKIMFC__CTOR_OFFSET))(this);
	}
};
