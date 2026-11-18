#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNCICEGGMKF.h"

class CGGLJLECNJM;
class OFLPOCHHHLC;

#define JCCDEEJBNBJ_KLJLMGMLIIH_OFFSET UNITYSDK_OFFSET(0x1EEE7CC0)
#define JCCDEEJBNBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEE7D20)

inline static constexpr unsigned int JCCDEEJBNBJ_TypeDefinitionIndex = 95123;

class JCCDEEJBNBJ : public ::MNCICEGGMKF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCDEEJBNBJ__CTOR_OFFSET))(this);
	}

	::System::Void KLJLMGMLIIH(::OFLPOCHHHLC* OAJIHMBGELO, ::OFLPOCHHHLC* LGOCCGBAHEA, ::CGGLJLECNJM* EGOIOLIBKMN)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*, ::OFLPOCHHHLC*, ::CGGLJLECNJM*))((::PBYTE)hIl2Cpp + JCCDEEJBNBJ_KLJLMGMLIIH_OFFSET))(this, OAJIHMBGELO, LGOCCGBAHEA, EGOIOLIBKMN);
	}
};
