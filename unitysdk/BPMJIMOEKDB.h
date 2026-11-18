#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define BPMJIMOEKDB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10E24650)
#define BPMJIMOEKDB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10E24550)
#define BPMJIMOEKDB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10E24250)
#define BPMJIMOEKDB__CTOR_OFFSET UNITYSDK_OFFSET(0x10E24640)

inline static constexpr unsigned int BPMJIMOEKDB_TypeDefinitionIndex = 72215;

class BPMJIMOEKDB : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* DFKEJDCDLOB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x20
	::MonoUITableScrollV2* BPBFDIHHKAF; // 0x28
	::UnityEngine::CanvasGroup* PAMIPJNEOFP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x38
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x40
	::UnityEngine::CanvasGroup* BILPCFHBICO; // 0x48
	::UnityEngine::RectTransform* IAKICPMGKOD; // 0x50
	::UnityEngine::RectTransform* PJLIMJOGOKD; // 0x58
	::FGCOIBFFCHB* IDIKHBOADLP; // 0x60
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x68
	::GCIMMDDIFBJ* LNICJDEAJCA; // 0x70
	::MonoUITableScrollV2* APABKAMAOCF; // 0x78
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x80
	::UnityEngine::UI::Extension::UITabButtonGroup* FJPCAHJIAGA; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMJIMOEKDB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BPMJIMOEKDB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMJIMOEKDB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BPMJIMOEKDB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
