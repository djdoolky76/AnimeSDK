#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LNAFGFENNBE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1637C700)
#define LNAFGFENNBE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1637C630)
#define LNAFGFENNBE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1637C460)
#define LNAFGFENNBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1637C6F0)

inline static constexpr unsigned int LNAFGFENNBE_TypeDefinitionIndex = 93093;

class LNAFGFENNBE : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* KHOJKFHFKIJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x20
	::UnityEngine::RectTransform* JFDOOELFAOA; // 0x28
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x30
	::UnityEngine::RectTransform* HFCDAPLEPPN; // 0x38
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x40
	::UnityEngine::RectTransform* KOHCCHBBEBJ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAFGFENNBE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LNAFGFENNBE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LNAFGFENNBE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAFGFENNBE_KGEBDLGBGNM_OFFSET))(this);
	}
};
