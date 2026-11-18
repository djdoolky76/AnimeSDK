#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NDJLOHNCMPB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x120F6040)
#define NDJLOHNCMPB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x120F5EF0)
#define NDJLOHNCMPB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x120F5BF0)
#define NDJLOHNCMPB__CTOR_OFFSET UNITYSDK_OFFSET(0x120F6030)

inline static constexpr unsigned int NDJLOHNCMPB_TypeDefinitionIndex = 86303;

class NDJLOHNCMPB : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* LHBGEADHPCO; // 0x18
	::LGINJIKKBJA* GKMLNJGMOMF; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BNGAGBJCINA; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* GNKDIDJABCP; // 0x30
	::UnityEngine::GameObject* HDNPNKOIFGD; // 0x38
	::LGINJIKKBJA* HPHBDLBMECK; // 0x40
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x50
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* JCLGPAMLEHP; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* MFGPCFNAPHA; // 0x70
	::LGINJIKKBJA* PGMCKJPNCDE; // 0x78
	::MonoUITableScrollV2* MIPOCEGEKFA; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* PJIMOIIONNI; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* HHDMKFPFEJO; // 0x90
	::LGINJIKKBJA* IIAPIPEOJCO; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJLOHNCMPB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDJLOHNCMPB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDJLOHNCMPB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJLOHNCMPB_KGEBDLGBGNM_OFFSET))(this);
	}
};
