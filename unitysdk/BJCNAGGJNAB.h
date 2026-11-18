#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNCICEGGMKF.h"

class CGGLJLECNJM;
class OFLPOCHHHLC;

#define BJCNAGGJNAB_KLJLMGMLIIH_OFFSET UNITYSDK_OFFSET(0x1E3AA6E0)
#define BJCNAGGJNAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3AAF90)

inline static constexpr unsigned int BJCNAGGJNAB_TypeDefinitionIndex = 94447;

class BJCNAGGJNAB : public ::MNCICEGGMKF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCNAGGJNAB__CTOR_OFFSET))(this);
	}

	::System::Void KLJLMGMLIIH(::OFLPOCHHHLC* OAJIHMBGELO, ::OFLPOCHHHLC* LGOCCGBAHEA, ::CGGLJLECNJM* EGOIOLIBKMN)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*, ::OFLPOCHHHLC*, ::CGGLJLECNJM*))((::PBYTE)hIl2Cpp + BJCNAGGJNAB_KLJLMGMLIIH_OFFSET))(this, OAJIHMBGELO, LGOCCGBAHEA, EGOIOLIBKMN);
	}
};
