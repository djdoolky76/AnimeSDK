#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PJCFGFFECAD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C1D7A90)
#define PJCFGFFECAD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1C1D7910)
#define PJCFGFFECAD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C1D76C0)
#define PJCFGFFECAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D7A80)

inline static constexpr unsigned int PJCFGFFECAD_TypeDefinitionIndex = 52396;

class PJCFGFFECAD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* DKMMLHHHHBK; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x20
	::LGINJIKKBJA* AEOCGOIMJHA; // 0x28
	::FGCOIBFFCHB* OCBNLOAGKNC; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* GIEBFLOGIFI; // 0x38
	::FGCOIBFFCHB* GDFLNJLPAGA; // 0x40
	::FGCOIBFFCHB* CKEKMDOEMPC; // 0x48
	::FGCOIBFFCHB* LOEBBOLBLEH; // 0x50
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJCFGFFECAD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJCFGFFECAD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJCFGFFECAD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJCFGFFECAD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
