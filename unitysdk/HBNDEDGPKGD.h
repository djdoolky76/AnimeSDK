#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralReportItemWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UISlider; }
template <typename T> class CBCLGFEGHLJ_1;

#define HBNDEDGPKGD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x146E2CA0)
#define HBNDEDGPKGD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x146E2B30)
#define HBNDEDGPKGD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x146E2880)
#define HBNDEDGPKGD__CTOR_OFFSET UNITYSDK_OFFSET(0x146E2C90)

inline static constexpr unsigned int HBNDEDGPKGD_TypeDefinitionIndex = 66613;

class HBNDEDGPKGD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* CCIILJMPGGJ; // 0x18
	::LGINJIKKBJA* BKBMFOJCMOJ; // 0x20
	::LGINJIKKBJA* CCLPLBPBAOD; // 0x28
	::CBCLGFEGHLJ_1<::MoleMole::UIGeneralReportItemWidgetController*>* OMOMGIPCBPA; // 0x30
	::CBCLGFEGHLJ_1<::MoleMole::UIGeneralReportItemWidgetController*>* GOEPDMGFDGC; // 0x38
	::UnityEngine::UI::Extension::UISlider* EGAGEFLKHHA; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* FDEMMNCMLGD; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* JOFCDKNJACA; // 0x50
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x58
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* BOKMJMOAONH; // 0x68
	::CBCLGFEGHLJ_1<::MoleMole::UIGeneralReportItemWidgetController*>* IKPCJDLNFCC; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNDEDGPKGD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBNDEDGPKGD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBNDEDGPKGD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNDEDGPKGD_KGEBDLGBGNM_OFFSET))(this);
	}
};
