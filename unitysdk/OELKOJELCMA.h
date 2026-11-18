#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OELKOJELCMA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xFD68920)
#define OELKOJELCMA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xFD68850)
#define OELKOJELCMA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFD68570)
#define OELKOJELCMA__CTOR_OFFSET UNITYSDK_OFFSET(0xFD68910)

inline static constexpr unsigned int OELKOJELCMA_TypeDefinitionIndex = 59515;

class OELKOJELCMA : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* KDOFOMOEMFH; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* CGNNFHDIHBO; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* MGENCAMALLO; // 0x28
	::LGINJIKKBJA* GENFGBPJOJC; // 0x30
	::FGCOIBFFCHB* NBEEIJLIEOA; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* EKHAHGNIBFP; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* NPPDCLHNJGC; // 0x48
	::UnityEngine::RectTransform* HHIIBKOEPKC; // 0x50
	::UnityEngine::RectTransform* NJEINCHPLOA; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* CNEFOKJBMKJ; // 0x60
	::UnityEngine::RectTransform* AONPIHCFBOA; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* IKEACLEKLNE; // 0x70
	::UnityEngine::GameObject* EHMLMJKEJMM; // 0x78
	::FGCOIBFFCHB* FEHGBHMCHMB; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELKOJELCMA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OELKOJELCMA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELKOJELCMA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OELKOJELCMA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
