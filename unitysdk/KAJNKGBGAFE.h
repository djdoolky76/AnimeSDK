#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNCICEGGMKF.h"

class CGGLJLECNJM;
class OFLPOCHHHLC;

#define KAJNKGBGAFE_KLJLMGMLIIH_OFFSET UNITYSDK_OFFSET(0x1EBA4B50)
#define KAJNKGBGAFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBA51C0)

inline static constexpr unsigned int KAJNKGBGAFE_TypeDefinitionIndex = 96499;

class KAJNKGBGAFE : public ::MNCICEGGMKF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJNKGBGAFE__CTOR_OFFSET))(this);
	}

	::System::Void KLJLMGMLIIH(::OFLPOCHHHLC* OAJIHMBGELO, ::OFLPOCHHHLC* LGOCCGBAHEA, ::CGGLJLECNJM* EGOIOLIBKMN)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*, ::OFLPOCHHHLC*, ::CGGLJLECNJM*))((::PBYTE)hIl2Cpp + KAJNKGBGAFE_KLJLMGMLIIH_OFFSET))(this, OAJIHMBGELO, LGOCCGBAHEA, EGOIOLIBKMN);
	}
};
