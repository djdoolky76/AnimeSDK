#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNCICEGGMKF.h"

class CGGLJLECNJM;
class OFLPOCHHHLC;

#define NCGCMEPIKJH_KLJLMGMLIIH_OFFSET UNITYSDK_OFFSET(0x1EEB5BC0)
#define NCGCMEPIKJH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEB5D10)

inline static constexpr unsigned int NCGCMEPIKJH_TypeDefinitionIndex = 94646;

class NCGCMEPIKJH : public ::MNCICEGGMKF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGCMEPIKJH__CTOR_OFFSET))(this);
	}

	::System::Void KLJLMGMLIIH(::OFLPOCHHHLC* OAJIHMBGELO, ::OFLPOCHHHLC* LGOCCGBAHEA, ::CGGLJLECNJM* EGOIOLIBKMN)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*, ::OFLPOCHHHLC*, ::CGGLJLECNJM*))((::PBYTE)hIl2Cpp + NCGCMEPIKJH_KLJLMGMLIIH_OFFSET))(this, OAJIHMBGELO, LGOCCGBAHEA, EGOIOLIBKMN);
	}
};
