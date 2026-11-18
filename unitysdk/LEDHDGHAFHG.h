#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPJMHAAEIKO.h"
#include "unitysdk/NCJLKIIGPIC.h"
#include "unitysdk/PABMDBLGGPH.h"

class MJHDNMKGLBJ;

#define LEDHDGHAFHG_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x126CFB40)
#define LEDHDGHAFHG_APDELEAANDM_OFFSET UNITYSDK_OFFSET(0x126CF9F0)
#define LEDHDGHAFHG_EFJCEJALMMG_OFFSET UNITYSDK_OFFSET(0x126CF840)
#define LEDHDGHAFHG_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x126CF920)
#define LEDHDGHAFHG__CTOR_OFFSET UNITYSDK_OFFSET(0x126CF960)

inline static constexpr unsigned int LEDHDGHAFHG_TypeDefinitionIndex = 78765;

class LEDHDGHAFHG
{
public:
	::NCJLKIIGPIC FJBPAKNMBLB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDHDGHAFHG__CTOR_OFFSET))(this);
	}

	::System::Boolean EFJCEJALMMG(::MJHDNMKGLBJ*& HBNBIBADGNH)
	{
		return ((::System::Boolean(*)(::PVOID, ::MJHDNMKGLBJ*&))((::PBYTE)hIl2Cpp + LEDHDGHAFHG_EFJCEJALMMG_OFFSET))(this, HBNBIBADGNH);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDHDGHAFHG_ONRECYCLE_OFFSET))(this);
	}

	::System::Void APDELEAANDM(::GPJMHAAEIKO CBHKCCOFHKA, ::System::Single EGEGIMGMJHN, ::PABMDBLGGPH CBBCJFPGBOK)
	{
		return ((::System::Void(*)(::PVOID, ::GPJMHAAEIKO, ::System::Single, ::PABMDBLGGPH))((::PBYTE)hIl2Cpp + LEDHDGHAFHG_APDELEAANDM_OFFSET))(this, CBHKCCOFHKA, EGEGIMGMJHN, CBBCJFPGBOK);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDHDGHAFHG_ANEOCOIFDDJ_OFFSET))(this);
	}
};
