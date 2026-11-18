#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNCICEGGMKF.h"

class CGGLJLECNJM;
class OFLPOCHHHLC;

#define DHFLNOEMNCA_KLJLMGMLIIH_OFFSET UNITYSDK_OFFSET(0x1FEC34D0)
#define DHFLNOEMNCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEC36C0)

inline static constexpr unsigned int DHFLNOEMNCA_TypeDefinitionIndex = 95057;

class DHFLNOEMNCA : public ::MNCICEGGMKF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFLNOEMNCA__CTOR_OFFSET))(this);
	}

	::System::Void KLJLMGMLIIH(::OFLPOCHHHLC* OAJIHMBGELO, ::OFLPOCHHHLC* LGOCCGBAHEA, ::CGGLJLECNJM* EGOIOLIBKMN)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*, ::OFLPOCHHHLC*, ::CGGLJLECNJM*))((::PBYTE)hIl2Cpp + DHFLNOEMNCA_KLJLMGMLIIH_OFFSET))(this, OAJIHMBGELO, LGOCCGBAHEA, EGOIOLIBKMN);
	}
};
