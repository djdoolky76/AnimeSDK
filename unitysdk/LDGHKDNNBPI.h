#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNCICEGGMKF.h"

class CGGLJLECNJM;
class OFLPOCHHHLC;

#define LDGHKDNNBPI_KLJLMGMLIIH_OFFSET UNITYSDK_OFFSET(0x1EEC7E30)
#define LDGHKDNNBPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEC7FE0)

inline static constexpr unsigned int LDGHKDNNBPI_TypeDefinitionIndex = 94987;

class LDGHKDNNBPI : public ::MNCICEGGMKF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGHKDNNBPI__CTOR_OFFSET))(this);
	}

	::System::Void KLJLMGMLIIH(::OFLPOCHHHLC* OAJIHMBGELO, ::OFLPOCHHHLC* LGOCCGBAHEA, ::CGGLJLECNJM* EGOIOLIBKMN)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*, ::OFLPOCHHHLC*, ::CGGLJLECNJM*))((::PBYTE)hIl2Cpp + LDGHKDNNBPI_KLJLMGMLIIH_OFFSET))(this, OAJIHMBGELO, LGOCCGBAHEA, EGOIOLIBKMN);
	}
};
