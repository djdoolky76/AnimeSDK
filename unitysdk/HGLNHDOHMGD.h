#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HGLNHDOHMGD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16F36D40)
#define HGLNHDOHMGD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16F36C00)
#define HGLNHDOHMGD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F36960)
#define HGLNHDOHMGD__CTOR_OFFSET UNITYSDK_OFFSET(0x16F36D30)

inline static constexpr unsigned int HGLNHDOHMGD_TypeDefinitionIndex = 87880;

class HGLNHDOHMGD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x18
	::FGCOIBFFCHB* OCBNLOAGKNC; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* EHALDAHKAGN; // 0x28
	::UnityEngine::RectTransform* AMEEMEPHGEL; // 0x30
	::FGCOIBFFCHB* MCNIHBDGDIN; // 0x38
	::FGCOIBFFCHB* FNNFFOGGJJK; // 0x40
	::FGCOIBFFCHB* CKEKMDOEMPC; // 0x48
	::UnityEngine::RectTransform* LKPBHJPGNKF; // 0x50
	::UnityEngine::RectTransform* FCCFIPOLMNM; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* BJIHDIHMKJB; // 0x60
	::FGCOIBFFCHB* JDIAGCOMHKJ; // 0x68
	::LGINJIKKBJA* NBIKKACIPJH; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLNHDOHMGD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HGLNHDOHMGD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HGLNHDOHMGD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLNHDOHMGD_KGEBDLGBGNM_OFFSET))(this);
	}
};
