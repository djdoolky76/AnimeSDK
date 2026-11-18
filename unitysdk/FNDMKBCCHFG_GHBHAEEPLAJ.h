#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FNDMKBCCHFG_GHBHAEEPLAJ_COKMIIDJOGD_OFFSET UNITYSDK_OFFSET(0x724FE0)

inline static constexpr unsigned int FNDMKBCCHFG_GHBHAEEPLAJ_TypeDefinitionIndex = 72663;

struct alignas(4) FNDMKBCCHFG_GHBHAEEPLAJ
{
	// static const ::System::Int32 FFHNLIKAILO = -0x1; // 0x0
	// static const ::System::Int32 AFJFGHKGKIN = -0x2; // 0x0
	::System::Int32 FEAAKLJIAFE; // 0x10
	::System::Int32 BNMDJFMOKFE; // 0x14

	::System::Boolean COKMIIDJOGD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDMKBCCHFG_GHBHAEEPLAJ_COKMIIDJOGD_OFFSET))(this);
	}
};
