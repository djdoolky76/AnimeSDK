#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIImgText; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EJDAPLLJKIN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10F38E90)
#define EJDAPLLJKIN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10F38DE0)
#define EJDAPLLJKIN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10F38C10)
#define EJDAPLLJKIN__CTOR_OFFSET UNITYSDK_OFFSET(0x10F38E80)

inline static constexpr unsigned int EJDAPLLJKIN_TypeDefinitionIndex = 90195;

class EJDAPLLJKIN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* KOGCHDKMOIC; // 0x18
	::UnityEngine::UI::Extension::UIImgText* LKGDOPJLNLL; // 0x20
	::LGINJIKKBJA* IIAPIPEOJCO; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* LAKNKNGLHCF; // 0x30
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x38
	::UnityEngine::RectTransform* FOBOKCCJLPG; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDAPLLJKIN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJDAPLLJKIN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJDAPLLJKIN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDAPLLJKIN_KGEBDLGBGNM_OFFSET))(this);
	}
};
