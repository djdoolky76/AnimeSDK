#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNCICEGGMKF.h"

class CGGLJLECNJM;
class OFLPOCHHHLC;

#define MOJJLCBAMIM_KLJLMGMLIIH_OFFSET UNITYSDK_OFFSET(0x1FFCC4F0)
#define MOJJLCBAMIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFCC630)

inline static constexpr unsigned int MOJJLCBAMIM_TypeDefinitionIndex = 96581;

class MOJJLCBAMIM : public ::MNCICEGGMKF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJJLCBAMIM__CTOR_OFFSET))(this);
	}

	::System::Void KLJLMGMLIIH(::OFLPOCHHHLC* OAJIHMBGELO, ::OFLPOCHHHLC* LGOCCGBAHEA, ::CGGLJLECNJM* EGOIOLIBKMN)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*, ::OFLPOCHHHLC*, ::CGGLJLECNJM*))((::PBYTE)hIl2Cpp + MOJJLCBAMIM_KLJLMGMLIIH_OFFSET))(this, OAJIHMBGELO, LGOCCGBAHEA, EGOIOLIBKMN);
	}
};
