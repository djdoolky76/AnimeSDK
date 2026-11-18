#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKHEOJOFLLA;
class MKEGFELEHIA_CMFMPGIKGKI;
class PEPGAFEGEME;

#define MKEGFELEHIA_MLNNAJCGKEK_FCBBBFEPHAG_OFFSET UNITYSDK_OFFSET(0x14D8B420)
#define MKEGFELEHIA_MLNNAJCGKEK__CTOR_OFFSET UNITYSDK_OFFSET(0x14D8B410)

inline static constexpr unsigned int MKEGFELEHIA_MLNNAJCGKEK_TypeDefinitionIndex = 58089;

class MKEGFELEHIA_MLNNAJCGKEK : public ::System::Object
{
public:
	::MKEGFELEHIA_CMFMPGIKGKI* FGBNBFHOKAA; // 0x10
	::PEPGAFEGEME* IKJFLIBFCJN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGFELEHIA_MLNNAJCGKEK__CTOR_OFFSET))(this);
	}

	::System::Void FCBBBFEPHAG(::EKHEOJOFLLA* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MKEGFELEHIA_MLNNAJCGKEK_FCBBBFEPHAG_OFFSET))(this, AAOCANGHBDG);
	}
};
