#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NCFLLEJHMEG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE1839F0)
#define NCFLLEJHMEG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE183960)
#define NCFLLEJHMEG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE1837B0)
#define NCFLLEJHMEG__CTOR_OFFSET UNITYSDK_OFFSET(0xE1839E0)

inline static constexpr unsigned int NCFLLEJHMEG_TypeDefinitionIndex = 77502;

class NCFLLEJHMEG : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* PMBLECALCKB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* IBPGNHGLOGP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* FDOGGANACAP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* ODALDIOFMPH; // 0x38
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFLLEJHMEG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NCFLLEJHMEG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NCFLLEJHMEG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFLLEJHMEG_KGEBDLGBGNM_OFFSET))(this);
	}
};
