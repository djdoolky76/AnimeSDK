#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DHODJAKFEAH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x149A6F20)
#define DHODJAKFEAH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x149A6DE0)
#define DHODJAKFEAH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x149A6BA0)
#define DHODJAKFEAH__CTOR_OFFSET UNITYSDK_OFFSET(0x149A6F10)

inline static constexpr unsigned int DHODJAKFEAH_TypeDefinitionIndex = 82424;

class DHODJAKFEAH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* EHMLMJKEJMM; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* FKIIMEJJPBB; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HMBAEGDOIKA; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x30
	::LGINJIKKBJA* LBCGEFGMGDI; // 0x38
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x40
	::UnityEngine::RectTransform* PGEDJNDBLKC; // 0x48
	::LGINJIKKBJA* DPDFKBFLGDG; // 0x50
	::FGCOIBFFCHB* PNFKHNJCAAG; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHODJAKFEAH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DHODJAKFEAH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DHODJAKFEAH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHODJAKFEAH_KGEBDLGBGNM_OFFSET))(this);
	}
};
