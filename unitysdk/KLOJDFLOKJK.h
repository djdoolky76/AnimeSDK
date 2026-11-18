#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNCICEGGMKF.h"

class CGGLJLECNJM;
class OFLPOCHHHLC;

#define KLOJDFLOKJK_KLJLMGMLIIH_OFFSET UNITYSDK_OFFSET(0x20008960)
#define KLOJDFLOKJK__CTOR_OFFSET UNITYSDK_OFFSET(0x200091B0)

inline static constexpr unsigned int KLOJDFLOKJK_TypeDefinitionIndex = 96536;

class KLOJDFLOKJK : public ::MNCICEGGMKF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLOJDFLOKJK__CTOR_OFFSET))(this);
	}

	::System::Void KLJLMGMLIIH(::OFLPOCHHHLC* OAJIHMBGELO, ::OFLPOCHHHLC* LGOCCGBAHEA, ::CGGLJLECNJM* EGOIOLIBKMN)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*, ::OFLPOCHHHLC*, ::CGGLJLECNJM*))((::PBYTE)hIl2Cpp + KLOJDFLOKJK_KLJLMGMLIIH_OFFSET))(this, OAJIHMBGELO, LGOCCGBAHEA, EGOIOLIBKMN);
	}
};
