#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PPPCILCGFLK.h"
#include "unitysdk/System/Object.h"

class PJEJIAEDLFG;

#define PJEJIAEDLFG_HNNBONJLHCH_ICPBBHEJIEL_OFFSET UNITYSDK_OFFSET(0x1D62B380)
#define PJEJIAEDLFG_HNNBONJLHCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D62B370)

inline static constexpr unsigned int PJEJIAEDLFG_HNNBONJLHCH_TypeDefinitionIndex = 45423;

class PJEJIAEDLFG_HNNBONJLHCH : public ::System::Object
{
public:
	::PJEJIAEDLFG* KLHPEBKNIFB; // 0x10
	::PPPCILCGFLK LJMJKBKIMLF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJEJIAEDLFG_HNNBONJLHCH__CTOR_OFFSET))(this);
	}

	::System::Int32 ICPBBHEJIEL(::PPPCILCGFLK HAAEBCOBKFF, ::PPPCILCGFLK BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::PPPCILCGFLK, ::PPPCILCGFLK))((::PBYTE)hIl2Cpp + PJEJIAEDLFG_HNNBONJLHCH_ICPBBHEJIEL_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
