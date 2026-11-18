#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GIABOBKGBCK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x149D8AD0)
#define GIABOBKGBCK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x149D8A20)
#define GIABOBKGBCK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x149D8810)
#define GIABOBKGBCK__CTOR_OFFSET UNITYSDK_OFFSET(0x149D8AC0)

inline static constexpr unsigned int GIABOBKGBCK_TypeDefinitionIndex = 51532;

class GIABOBKGBCK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MFKBCHAJOGK; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HMBAEGDOIKA; // 0x20
	::UnityEngine::RectTransform* EKGCNEJNDJN; // 0x28
	::LGINJIKKBJA* IOKMAADCDAO; // 0x30
	::MoleMole::UIGeneralButtonController* KHOJKFHFKIJ; // 0x38
	::UnityEngine::RectTransform* COPKFNAFGME; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* OAKAIIJLMIL; // 0x48
	::FGCOIBFFCHB* LKHNJLMCMOK; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIABOBKGBCK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GIABOBKGBCK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIABOBKGBCK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GIABOBKGBCK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
