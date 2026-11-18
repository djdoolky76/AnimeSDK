#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FFDKLGEOAAD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10F60A50)
#define FFDKLGEOAAD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10F60900)
#define FFDKLGEOAAD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10F605C0)
#define FFDKLGEOAAD__CTOR_OFFSET UNITYSDK_OFFSET(0x10F60A40)

inline static constexpr unsigned int FFDKLGEOAAD_TypeDefinitionIndex = 39131;

class FFDKLGEOAAD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x18
	::UnityEngine::CanvasGroup* EHMLMJKEJMM; // 0x20
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x28
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x30
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x38
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x40
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x48
	::LGINJIKKBJA* JDBDAFFFOJK; // 0x50
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x58
	::GCIMMDDIFBJ* PBOBANNJLKM; // 0x60
	::GCIMMDDIFBJ* OFDAMOBFACE; // 0x68
	::UnityEngine::GameObject* KDGDNBGJDHN; // 0x70
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* HMBAEGDOIKA; // 0x80
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x88
	::GCIMMDDIFBJ* EAKCNMHGKHL; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDKLGEOAAD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFDKLGEOAAD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDKLGEOAAD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFDKLGEOAAD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
