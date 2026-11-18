#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define POPHBCHCHED_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1EBBE8F0)
#define POPHBCHCHED_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1EBBE7D0)
#define POPHBCHCHED_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1EBBE540)
#define POPHBCHCHED__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBBE8E0)

inline static constexpr unsigned int POPHBCHCHED_TypeDefinitionIndex = 88010;

class POPHBCHCHED : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IAEJGLCBGEE; // 0x18
	::UnityEngine::RectTransform* IGGLGJHNMMD; // 0x20
	::UnityEngine::RectTransform* GLOKANKLFPI; // 0x28
	::LGINJIKKBJA* NFMOOAHNCKI; // 0x30
	::LGINJIKKBJA* GOOPJBHOKAM; // 0x38
	::UnityEngine::RectTransform* NKGJGOIKICF; // 0x40
	::UnityEngine::RectTransform* BGMLDDEKCMG; // 0x48
	::LGINJIKKBJA* DFKEJDCDLOB; // 0x50
	::UnityEngine::RectTransform* GNKGJAFLBMD; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* DLLDFPGIKLL; // 0x60
	::LGINJIKKBJA* FJPPONFPKPE; // 0x68
	::LGINJIKKBJA* PBBMJEEHGIM; // 0x70
	::UnityEngine::RectTransform* NIBIKDMMOKP; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPHBCHCHED__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + POPHBCHCHED_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPHBCHCHED_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + POPHBCHCHED_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
