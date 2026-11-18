#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABGMNCCINDG.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/Share/EPerformType.h"
#include "unitysdk/System/Object.h"

class FEBHBBFCDOE;
class FPKIFHKCBEK;

#define FEBHBBFCDOE_HICNPENFPHE_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1713B0D0)
#define FEBHBBFCDOE_HICNPENFPHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1713B0C0)

inline static constexpr unsigned int FEBHBBFCDOE_HICNPENFPHE_TypeDefinitionIndex = 87208;

class FEBHBBFCDOE_HICNPENFPHE : public ::System::Object
{
public:
	::HOCDHMEPPEG BOOGIOBGHPL; // 0x10
	::FEBHBBFCDOE* KLHPEBKNIFB; // 0x40
	::ABGMNCCINDG PCHJFGPHEBG; // 0x48
	::System::Int32 LCNBDEOPDCM; // 0x70
	::System::Int32 COMDNFILAIC; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBHBBFCDOE_HICNPENFPHE__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::Share::EPerformType OBNIAHNMHPF, ::FPKIFHKCBEK* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Share::EPerformType, ::FPKIFHKCBEK*))((::PBYTE)hIl2Cpp + FEBHBBFCDOE_HICNPENFPHE_LIDNPLMPHAL_OFFSET))(this, OBNIAHNMHPF, LJBPECKCCEA);
	}
};
