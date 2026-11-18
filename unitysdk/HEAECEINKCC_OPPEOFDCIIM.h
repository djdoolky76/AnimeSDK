#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLJHKEAFOAF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FEIKPIKAJEC.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define HEAECEINKCC_OPPEOFDCIIM_FMGGMNJHAJB_OFFSET UNITYSDK_OFFSET(0x14942310)
#define HEAECEINKCC_OPPEOFDCIIM_MJIBFIFIIBK_OFFSET UNITYSDK_OFFSET(0x14942160)
#define HEAECEINKCC_OPPEOFDCIIM_PNOEELIHBIE_OFFSET UNITYSDK_OFFSET(0x14942120)
#define HEAECEINKCC_OPPEOFDCIIM__CTOR_OFFSET UNITYSDK_OFFSET(0x14942110)

inline static constexpr unsigned int HEAECEINKCC_OPPEOFDCIIM_TypeDefinitionIndex = 64554;

class HEAECEINKCC_OPPEOFDCIIM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Double>* NFJECIGPFOL; // 0x10
	::LLJHKEAFOAF NJDHJMHFMLO; // 0x18
	::System::Double BOBHDMBLNFL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_OPPEOFDCIIM__CTOR_OFFSET))(this);
	}

	::System::Void PNOEELIHBIE(::FEIKPIKAJEC HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::FEIKPIKAJEC))((::PBYTE)hIl2Cpp + HEAECEINKCC_OPPEOFDCIIM_PNOEELIHBIE_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Void MJIBFIFIIBK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_OPPEOFDCIIM_MJIBFIFIIBK_OFFSET))(this);
	}

	::System::Void FMGGMNJHAJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_OPPEOFDCIIM_FMGGMNJHAJB_OFFSET))(this);
	}
};
