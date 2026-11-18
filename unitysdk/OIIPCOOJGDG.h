#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNCICEGGMKF.h"

class CGGLJLECNJM;
class OFLPOCHHHLC;

#define OIIPCOOJGDG_KLJLMGMLIIH_OFFSET UNITYSDK_OFFSET(0x1F4A1AF0)
#define OIIPCOOJGDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4A24E0)

inline static constexpr unsigned int OIIPCOOJGDG_TypeDefinitionIndex = 96462;

class OIIPCOOJGDG : public ::MNCICEGGMKF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIPCOOJGDG__CTOR_OFFSET))(this);
	}

	::System::Void KLJLMGMLIIH(::OFLPOCHHHLC* OAJIHMBGELO, ::OFLPOCHHHLC* LGOCCGBAHEA, ::CGGLJLECNJM* EGOIOLIBKMN)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*, ::OFLPOCHHHLC*, ::CGGLJLECNJM*))((::PBYTE)hIl2Cpp + OIIPCOOJGDG_KLJLMGMLIIH_OFFSET))(this, OAJIHMBGELO, LGOCCGBAHEA, EGOIOLIBKMN);
	}
};
