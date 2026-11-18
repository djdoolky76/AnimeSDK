#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class AudioLineEffect;
class FILNFMCNCFE;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControllerExtensionData;
namespace MoleMole { class Mono3DModelRotateHandler; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define KCNMJCKGOMB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x157E0A90)
#define KCNMJCKGOMB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x157E08C0)
#define KCNMJCKGOMB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x157E03D0)
#define KCNMJCKGOMB__CTOR_OFFSET UNITYSDK_OFFSET(0x157E0A80)

inline static constexpr unsigned int KCNMJCKGOMB_TypeDefinitionIndex = 59611;

class KCNMJCKGOMB : public ::GIBMJLOJLKD
{
public:
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x18
	::UnityEngine::UI::Extension::UISlider* EGAGEFLKHHA; // 0x20
	::UnityEngine::UI::Extension::UISlider* GNDNMFLAEIG; // 0x28
	::UnityEngine::RectTransform* OMKKKALAKHL; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x38
	::UnityEngine::UI::Extension::UIImgEventTrigger* NNPMCNNEAGB; // 0x40
	::UnityEngine::GameObject* PKHAMIAEKNF; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* BEAFLPNHDMA; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x58
	::UnityEngine::GameObject* GBFAKPPCFIA; // 0x60
	::MoleMole::Mono3DModelRotateHandler* NBAOMHPOPLO; // 0x68
	::GCIMMDDIFBJ* CPODKLKNKBF; // 0x70
	::GCIMMDDIFBJ* LMOOOPFIBGK; // 0x78
	::LGINJIKKBJA* PFBKCDLPMFH; // 0x80
	::LGINJIKKBJA* DPNNDCNEPKG; // 0x88
	::LGINJIKKBJA* MGNDOJHBJHB; // 0x90
	::UnityEngine::RectTransform* HDHKHELDNKB; // 0x98
	::LGINJIKKBJA* CIPLLBJJOJG; // 0xA0
	::UnityEngine::UI::Extension::UILocalizationText* OPMHOCAJODK; // 0xA8
	::LGINJIKKBJA* CNEMGKPCIBB; // 0xB0
	::UnityEngine::RectTransform* DFLOEIDOLJD; // 0xB8
	::LGINJIKKBJA* ICNIHACFEEN; // 0xC0
	::UnityEngine::GameObject* MHOKLGLGOOL; // 0xC8
	::UnityEngine::GameObject* JOBHEDFEEAK; // 0xD0
	::UnityEngine::UI::Extension::UILocalizationText* CKKLKEHHKAD; // 0xD8
	::AudioLineEffect* PLEOOPOLGIG; // 0xE0
	::LGINJIKKBJA* ALAKLHDMHIN; // 0xE8
	::LGINJIKKBJA* BJCMAOABFCL; // 0xF0
	::UnityEngine::GameObject* BLFIOHADOMB; // 0xF8
	::FILNFMCNCFE* IEPBOLFDAJP; // 0x100
	::UnityEngine::UI::Extension::UILocalizationText* ECMADABAIAE; // 0x108

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNMJCKGOMB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KCNMJCKGOMB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNMJCKGOMB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KCNMJCKGOMB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
