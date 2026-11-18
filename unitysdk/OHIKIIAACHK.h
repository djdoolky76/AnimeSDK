#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNCICEGGMKF.h"

class CGGLJLECNJM;
class OFLPOCHHHLC;

#define OHIKIIAACHK_KLJLMGMLIIH_OFFSET UNITYSDK_OFFSET(0x1EB70780)
#define OHIKIIAACHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB70BB0)

inline static constexpr unsigned int OHIKIIAACHK_TypeDefinitionIndex = 96517;

class OHIKIIAACHK : public ::MNCICEGGMKF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHIKIIAACHK__CTOR_OFFSET))(this);
	}

	::System::Void KLJLMGMLIIH(::OFLPOCHHHLC* OAJIHMBGELO, ::OFLPOCHHHLC* LGOCCGBAHEA, ::CGGLJLECNJM* EGOIOLIBKMN)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*, ::OFLPOCHHHLC*, ::CGGLJLECNJM*))((::PBYTE)hIl2Cpp + OHIKIIAACHK_KLJLMGMLIIH_OFFSET))(this, OAJIHMBGELO, LGOCCGBAHEA, EGOIOLIBKMN);
	}
};
