#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BANEOPFLFAC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D15260)
#define BANEOPFLFAC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12D15160)
#define BANEOPFLFAC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D14EB0)
#define BANEOPFLFAC__CTOR_OFFSET UNITYSDK_OFFSET(0x12D15250)

inline static constexpr unsigned int BANEOPFLFAC_TypeDefinitionIndex = 61483;

class BANEOPFLFAC : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x18
	::MonoUITableScrollV2* EDBBBMAJFCJ; // 0x20
	::LGINJIKKBJA* HHGDKKCMNMN; // 0x28
	::UnityEngine::RectTransform* KKOJIGEFPBM; // 0x30
	::GCIMMDDIFBJ* IKOFJEHPPAN; // 0x38
	::LGINJIKKBJA* NPAEFFLHDLM; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HCOHONOBCEF; // 0x48
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* MBDMAMEEAOO; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x60
	::LGINJIKKBJA* CJBOGNKLKFJ; // 0x68
	::MoleMole::NotificationBadge* BHHKPPEFJKH; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANEOPFLFAC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BANEOPFLFAC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANEOPFLFAC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BANEOPFLFAC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
