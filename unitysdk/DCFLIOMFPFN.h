#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNCICEGGMKF.h"

class CGGLJLECNJM;
class OFLPOCHHHLC;

#define DCFLIOMFPFN_KLJLMGMLIIH_OFFSET UNITYSDK_OFFSET(0x20052E00)
#define DCFLIOMFPFN__CTOR_OFFSET UNITYSDK_OFFSET(0x200531C0)

inline static constexpr unsigned int DCFLIOMFPFN_TypeDefinitionIndex = 96468;

class DCFLIOMFPFN : public ::MNCICEGGMKF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFLIOMFPFN__CTOR_OFFSET))(this);
	}

	::System::Void KLJLMGMLIIH(::OFLPOCHHHLC* OAJIHMBGELO, ::OFLPOCHHHLC* LGOCCGBAHEA, ::CGGLJLECNJM* EGOIOLIBKMN)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*, ::OFLPOCHHHLC*, ::CGGLJLECNJM*))((::PBYTE)hIl2Cpp + DCFLIOMFPFN_KLJLMGMLIIH_OFFSET))(this, OAJIHMBGELO, LGOCCGBAHEA, EGOIOLIBKMN);
	}
};
