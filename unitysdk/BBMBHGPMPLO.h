#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIScaryNightBossHPBarWidgetController; }
namespace MoleMole { class UIScaryNightDeckCardsWidgetController; }
namespace MoleMole { class UIScaryNightInLevelBuffWidgetController; }
namespace MoleMole { class UIScaryNightRoundWidgetController; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
template <typename T> class CBCLGFEGHLJ_1;
template <typename T> class MEKABAIJMNM_1;

#define BBMBHGPMPLO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13611310)
#define BBMBHGPMPLO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13611160)
#define BBMBHGPMPLO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13610E10)
#define BBMBHGPMPLO__CTOR_OFFSET UNITYSDK_OFFSET(0x13611300)

inline static constexpr unsigned int BBMBHGPMPLO_TypeDefinitionIndex = 40704;

class BBMBHGPMPLO : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIScaryNightBossHPBarWidgetController*>* FPDGDJLOHGK; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIScaryNightDeckCardsWidgetController*>* GKGKIAAENDP; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIScaryNightRoundWidgetController*>* BBHEABOBCDI; // 0x28
	::UnityEngine::RectTransform* NGMEILBHJLC; // 0x30
	::LGINJIKKBJA* EDIPODAJNEM; // 0x38
	::LGINJIKKBJA* MIGIMKNLHON; // 0x40
	::UnityEngine::CanvasGroup* NKMLBIMALCG; // 0x48
	::UnityEngine::RectTransform* PJFGLPDGNCN; // 0x50
	::LGINJIKKBJA* FDHICDPOGGP; // 0x58
	::LGINJIKKBJA* CIPLLBJJOJG; // 0x60
	::LGINJIKKBJA* FMOHFPIEJEH; // 0x68
	::UnityEngine::RectTransform* NIBIKDMMOKP; // 0x70
	::CBCLGFEGHLJ_1<::MoleMole::UIScaryNightInLevelBuffWidgetController*>* GEOJMPCKKJN; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMBHGPMPLO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BBMBHGPMPLO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BBMBHGPMPLO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMBHGPMPLO_KGEBDLGBGNM_OFFSET))(this);
	}
};
