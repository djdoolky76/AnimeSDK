#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define CNLIPFFFGDA_MMDPOAFBNKO_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x145DA200)
#define CNLIPFFFGDA_MMDPOAFBNKO__CTOR_OFFSET UNITYSDK_OFFSET(0x145DA1F0)

inline static constexpr unsigned int CNLIPFFFGDA_MMDPOAFBNKO_TypeDefinitionIndex = 89533;

class CNLIPFFFGDA_MMDPOAFBNKO : public ::System::Object
{
public:
	::HOCDHMEPPEG PABLEDCGDGM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLIPFFFGDA_MMDPOAFBNKO__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::System::Boolean CAAFEGLOALC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CNLIPFFFGDA_MMDPOAFBNKO_LIDNPLMPHAL_OFFSET))(this, CAAFEGLOALC);
	}
};
