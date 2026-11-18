#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EKEFEMBCJML_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x169A5BE0)
#define EKEFEMBCJML_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x169A5AA0)
#define EKEFEMBCJML_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x169A5760)
#define EKEFEMBCJML__CTOR_OFFSET UNITYSDK_OFFSET(0x169A5BD0)

inline static constexpr unsigned int EKEFEMBCJML_TypeDefinitionIndex = 67836;

class EKEFEMBCJML : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* PINIDEDDLOL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* KDLMLPLFHON; // 0x20
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x28
	::LGINJIKKBJA* HJDMIFJKFEB; // 0x30
	::FGCOIBFFCHB* NLLLJNLDFMC; // 0x38
	::LGINJIKKBJA* PMBLECALCKB; // 0x40
	::FGCOIBFFCHB* PHJIMBMGCPA; // 0x48
	::FGCOIBFFCHB* ILDBJNNIKKA; // 0x50
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x58
	::LGINJIKKBJA* IOIANILNPPI; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* HMJEIJKLDAL; // 0x68
	::UnityEngine::RectTransform* OKLLFEIJKHN; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* CDHBLCGJLLH; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* KLEAEBCODPG; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* OEDOKBJLPJI; // 0x88
	::MoleMole::MonoGamepadSelectable* DANNBOGNOEH; // 0x90
	::MoleMole::NotificationBadgeEx* JFDOOELFAOA; // 0x98
	::UnityEngine::UI::Extension::UILocalizationText* MPFPJKGJOPL; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEFEMBCJML__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EKEFEMBCJML_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEFEMBCJML_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EKEFEMBCJML_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
