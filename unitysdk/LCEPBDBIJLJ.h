#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LCEPBDBIJLJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17940130)
#define LCEPBDBIJLJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17940030)
#define LCEPBDBIJLJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1793FE10)
#define LCEPBDBIJLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17940120)

inline static constexpr unsigned int LCEPBDBIJLJ_TypeDefinitionIndex = 73521;

class LCEPBDBIJLJ : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x20
	::FGCOIBFFCHB* KAPIIGNLBDG; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* GANJOPGHALM; // 0x30
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* EJNDFOGINMN; // 0x40
	::LGINJIKKBJA* MJCAABAHNPP; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* LGLAODPABIL; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEPBDBIJLJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LCEPBDBIJLJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LCEPBDBIJLJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEPBDBIJLJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
