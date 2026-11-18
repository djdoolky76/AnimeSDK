#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNCICEGGMKF.h"

class CGGLJLECNJM;
class OFLPOCHHHLC;

#define GJIIDOAIIEC_KLJLMGMLIIH_OFFSET UNITYSDK_OFFSET(0x1FFFEB60)
#define GJIIDOAIIEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFFEE60)

inline static constexpr unsigned int GJIIDOAIIEC_TypeDefinitionIndex = 96643;

class GJIIDOAIIEC : public ::MNCICEGGMKF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIIDOAIIEC__CTOR_OFFSET))(this);
	}

	::System::Void KLJLMGMLIIH(::OFLPOCHHHLC* OAJIHMBGELO, ::OFLPOCHHHLC* LGOCCGBAHEA, ::CGGLJLECNJM* EGOIOLIBKMN)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*, ::OFLPOCHHHLC*, ::CGGLJLECNJM*))((::PBYTE)hIl2Cpp + GJIIDOAIIEC_KLJLMGMLIIH_OFFSET))(this, OAJIHMBGELO, LGOCCGBAHEA, EGOIOLIBKMN);
	}
};
