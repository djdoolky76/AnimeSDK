#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LJKJFDKIHIP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15662B60)
#define LJKJFDKIHIP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15662A50)
#define LJKJFDKIHIP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x156627F0)
#define LJKJFDKIHIP__CTOR_OFFSET UNITYSDK_OFFSET(0x15662B50)

inline static constexpr unsigned int LJKJFDKIHIP_TypeDefinitionIndex = 86791;

class LJKJFDKIHIP : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* BHICENDACGN; // 0x18
	::LGINJIKKBJA* MFEKIGIPFBJ; // 0x20
	::UnityEngine::CanvasGroup* NAMGDPJOHDF; // 0x28
	::UnityEngine::RectTransform* OCPFFNKLFKP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* KALNOLIPPHA; // 0x38
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x40
	::UnityEngine::Animation* CMCAKLMEKMP; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* MFNKHOIGALK; // 0x50
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x58
	::UnityEngine::CanvasGroup* MKEHNELMGNP; // 0x60
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKJFDKIHIP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LJKJFDKIHIP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKJFDKIHIP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LJKJFDKIHIP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
