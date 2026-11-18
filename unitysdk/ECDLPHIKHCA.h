#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNCICEGGMKF.h"

class CGGLJLECNJM;
class OFLPOCHHHLC;

#define ECDLPHIKHCA_KLJLMGMLIIH_OFFSET UNITYSDK_OFFSET(0x1FE15590)
#define ECDLPHIKHCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE15980)

inline static constexpr unsigned int ECDLPHIKHCA_TypeDefinitionIndex = 96549;

class ECDLPHIKHCA : public ::MNCICEGGMKF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECDLPHIKHCA__CTOR_OFFSET))(this);
	}

	::System::Void KLJLMGMLIIH(::OFLPOCHHHLC* OAJIHMBGELO, ::OFLPOCHHHLC* LGOCCGBAHEA, ::CGGLJLECNJM* EGOIOLIBKMN)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*, ::OFLPOCHHHLC*, ::CGGLJLECNJM*))((::PBYTE)hIl2Cpp + ECDLPHIKHCA_KLJLMGMLIIH_OFFSET))(this, OAJIHMBGELO, LGOCCGBAHEA, EGOIOLIBKMN);
	}
};
