#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNCICEGGMKF.h"

class CGGLJLECNJM;
class OFLPOCHHHLC;

#define AJFPMDHBEDO_KLJLMGMLIIH_OFFSET UNITYSDK_OFFSET(0x1FEA6C30)
#define AJFPMDHBEDO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEA6E80)

inline static constexpr unsigned int AJFPMDHBEDO_TypeDefinitionIndex = 94950;

class AJFPMDHBEDO : public ::MNCICEGGMKF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFPMDHBEDO__CTOR_OFFSET))(this);
	}

	::System::Void KLJLMGMLIIH(::OFLPOCHHHLC* OAJIHMBGELO, ::OFLPOCHHHLC* LGOCCGBAHEA, ::CGGLJLECNJM* EGOIOLIBKMN)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*, ::OFLPOCHHHLC*, ::CGGLJLECNJM*))((::PBYTE)hIl2Cpp + AJFPMDHBEDO_KLJLMGMLIIH_OFFSET))(this, OAJIHMBGELO, LGOCCGBAHEA, EGOIOLIBKMN);
	}
};
