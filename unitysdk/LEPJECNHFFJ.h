#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LEPJECNHFFJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xD427080)
#define LEPJECNHFFJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xD426FB0)
#define LEPJECNHFFJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xD426DB0)
#define LEPJECNHFFJ__CTOR_OFFSET UNITYSDK_OFFSET(0xD427070)

inline static constexpr unsigned int LEPJECNHFFJ_TypeDefinitionIndex = 58050;

class LEPJECNHFFJ : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* DDPMCFOFMFA; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* ELPMOBIIFGJ; // 0x20
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x28
	::MoleMole::NotificationBadge* BHHKPPEFJKH; // 0x30
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* MBDMAMEEAOO; // 0x40
	::LGINJIKKBJA* FKIHBKIHDHI; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* HCOHONOBCEF; // 0x50
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEPJECNHFFJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LEPJECNHFFJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEPJECNHFFJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LEPJECNHFFJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
