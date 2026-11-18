#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNCICEGGMKF.h"

class CGGLJLECNJM;
class OFLPOCHHHLC;

#define HCBPHFPCHNJ_KLJLMGMLIIH_OFFSET UNITYSDK_OFFSET(0x1F4A06D0)
#define HCBPHFPCHNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4A0900)

inline static constexpr unsigned int HCBPHFPCHNJ_TypeDefinitionIndex = 96437;

class HCBPHFPCHNJ : public ::MNCICEGGMKF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBPHFPCHNJ__CTOR_OFFSET))(this);
	}

	::System::Void KLJLMGMLIIH(::OFLPOCHHHLC* OAJIHMBGELO, ::OFLPOCHHHLC* LGOCCGBAHEA, ::CGGLJLECNJM* EGOIOLIBKMN)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*, ::OFLPOCHHHLC*, ::CGGLJLECNJM*))((::PBYTE)hIl2Cpp + HCBPHFPCHNJ_KLJLMGMLIIH_OFFSET))(this, OAJIHMBGELO, LGOCCGBAHEA, EGOIOLIBKMN);
	}
};
