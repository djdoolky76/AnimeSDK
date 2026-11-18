#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define IAOBBMMGFKC_BFDFFEJHDNJ_OFFSET UNITYSDK_OFFSET(0x141AEE40)
#define IAOBBMMGFKC_DIBKMDLDIAJ_OFFSET UNITYSDK_OFFSET(0x141AEE10)
#define IAOBBMMGFKC_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x141AEC40)
#define IAOBBMMGFKC_GCLJPPNJKBM_OFFSET UNITYSDK_OFFSET(0x141AEE30)
#define IAOBBMMGFKC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x141AEBC0)
#define IAOBBMMGFKC_MMIFKPMCBFL_OFFSET UNITYSDK_OFFSET(0x141AEE20)
#define IAOBBMMGFKC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x141AEA60)
#define IAOBBMMGFKC__CTOR_OFFSET UNITYSDK_OFFSET(0x141AED80)

inline static constexpr unsigned int IAOBBMMGFKC_TypeDefinitionIndex = 44143;

class IAOBBMMGFKC : public ::IOOIHHOJOPI
{
public:
	::FGCOIBFFCHB* _FCAIEIEKMKF_k__BackingField; // 0x28
	::UnityEngine::RectTransform* _BCMJDLNHPOM_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOBBMMGFKC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IAOBBMMGFKC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::UnityEngine::RectTransform* DIBKMDLDIAJ()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOBBMMGFKC_DIBKMDLDIAJ_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOBBMMGFKC_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void MMIFKPMCBFL(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + IAOBBMMGFKC_MMIFKPMCBFL_OFFSET))(this, EGEGIMGMJHN);
	}

	::FGCOIBFFCHB* GCLJPPNJKBM()
	{
		return ((::FGCOIBFFCHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOBBMMGFKC_GCLJPPNJKBM_OFFSET))(this);
	}

	::System::Void BFDFFEJHDNJ(::FGCOIBFFCHB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + IAOBBMMGFKC_BFDFFEJHDNJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOBBMMGFKC_KGEBDLGBGNM_OFFSET))(this);
	}
};
