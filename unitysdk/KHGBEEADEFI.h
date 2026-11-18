#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNCICEGGMKF.h"

class CGGLJLECNJM;
class OFLPOCHHHLC;

#define KHGBEEADEFI_KLJLMGMLIIH_OFFSET UNITYSDK_OFFSET(0x1F955710)
#define KHGBEEADEFI__CTOR_OFFSET UNITYSDK_OFFSET(0x1F955880)

inline static constexpr unsigned int KHGBEEADEFI_TypeDefinitionIndex = 94939;

class KHGBEEADEFI : public ::MNCICEGGMKF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGBEEADEFI__CTOR_OFFSET))(this);
	}

	::System::Void KLJLMGMLIIH(::OFLPOCHHHLC* OAJIHMBGELO, ::OFLPOCHHHLC* LGOCCGBAHEA, ::CGGLJLECNJM* EGOIOLIBKMN)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*, ::OFLPOCHHHLC*, ::CGGLJLECNJM*))((::PBYTE)hIl2Cpp + KHGBEEADEFI_KLJLMGMLIIH_OFFSET))(this, OAJIHMBGELO, LGOCCGBAHEA, EGOIOLIBKMN);
	}
};
