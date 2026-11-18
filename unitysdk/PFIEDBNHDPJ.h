#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNCICEGGMKF.h"

class CGGLJLECNJM;
class OFLPOCHHHLC;

#define PFIEDBNHDPJ_KLJLMGMLIIH_OFFSET UNITYSDK_OFFSET(0x1ED95FB0)
#define PFIEDBNHDPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED961C0)

inline static constexpr unsigned int PFIEDBNHDPJ_TypeDefinitionIndex = 94951;

class PFIEDBNHDPJ : public ::MNCICEGGMKF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFIEDBNHDPJ__CTOR_OFFSET))(this);
	}

	::System::Void KLJLMGMLIIH(::OFLPOCHHHLC* OAJIHMBGELO, ::OFLPOCHHHLC* LGOCCGBAHEA, ::CGGLJLECNJM* EGOIOLIBKMN)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*, ::OFLPOCHHHLC*, ::CGGLJLECNJM*))((::PBYTE)hIl2Cpp + PFIEDBNHDPJ_KLJLMGMLIIH_OFFSET))(this, OAJIHMBGELO, LGOCCGBAHEA, EGOIOLIBKMN);
	}
};
