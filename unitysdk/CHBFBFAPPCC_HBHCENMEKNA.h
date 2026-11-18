#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CHBFBFAPPCC;

#define CHBFBFAPPCC_HBHCENMEKNA_FCHLDFAFBCO_OFFSET UNITYSDK_OFFSET(0x10E39740)
#define CHBFBFAPPCC_HBHCENMEKNA_HMGMBHPOOCO_OFFSET UNITYSDK_OFFSET(0x10E39570)
#define CHBFBFAPPCC_HBHCENMEKNA__CTOR_OFFSET UNITYSDK_OFFSET(0x10E39560)

inline static constexpr unsigned int CHBFBFAPPCC_HBHCENMEKNA_TypeDefinitionIndex = 41656;

class CHBFBFAPPCC_HBHCENMEKNA : public ::System::Object
{
public:
	::CHBFBFAPPCC* KLHPEBKNIFB; // 0x10
	::System::Int32 JHFKDGBCOBA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBFBFAPPCC_HBHCENMEKNA__CTOR_OFFSET))(this);
	}

	::System::Void HMGMBHPOOCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBFBFAPPCC_HBHCENMEKNA_HMGMBHPOOCO_OFFSET))(this);
	}

	::System::Void FCHLDFAFBCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBFBFAPPCC_HBHCENMEKNA_FCHLDFAFBCO_OFFSET))(this);
	}
};
