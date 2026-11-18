#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AOIEAENINEE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13600A70)
#define AOIEAENINEE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x136009A0)
#define AOIEAENINEE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13600740)
#define AOIEAENINEE__CTOR_OFFSET UNITYSDK_OFFSET(0x13600A60)

inline static constexpr unsigned int AOIEAENINEE_TypeDefinitionIndex = 64790;

class AOIEAENINEE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* AJHAGPKPDGN; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* PDPEIOOJKNB; // 0x20
	::UnityEngine::Transform* JHGGHHOJDPF; // 0x28
	::UnityEngine::UI::Text* EIJIICLEGNI; // 0x30
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x38
	::LGINJIKKBJA* FEHGBHMCHMB; // 0x40
	::UnityEngine::GameObject* DAHBBHLPCDG; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* INOKEAFJFNF; // 0x50
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x58
	::LGINJIKKBJA* CLPKGBMDHNM; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* BDKBBOKFMOB; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOIEAENINEE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AOIEAENINEE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOIEAENINEE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AOIEAENINEE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
