#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MFMKEGPELOE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A6415B0)
#define MFMKEGPELOE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A6414C0)
#define MFMKEGPELOE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A641240)
#define MFMKEGPELOE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6415A0)

inline static constexpr unsigned int MFMKEGPELOE_TypeDefinitionIndex = 51179;

class MFMKEGPELOE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* ALBFADMNCPG; // 0x18
	::UnityEngine::GameObject* DNILNJBKLLG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* AJHAGPKPDGN; // 0x28
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x30
	::LGINJIKKBJA* DFKEJDCDLOB; // 0x38
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x40
	::UnityEngine::Transform* EFFBCNENKIN; // 0x48
	::UnityEngine::Transform* AIBOHAIMPOJ; // 0x50
	::UnityEngine::GameObject* CNDCHJDEFMK; // 0x58
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x60
	::UnityEngine::UI::Text* PNDHOGLJAHH; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* EIJIICLEGNI; // 0x70
	::UnityEngine::Animation* OIKFFMHNCHB; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* NCDJFAMBGJF; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMKEGPELOE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MFMKEGPELOE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMKEGPELOE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MFMKEGPELOE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
