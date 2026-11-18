#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BMAKEANEPOO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1857EA60)
#define BMAKEANEPOO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1857E990)
#define BMAKEANEPOO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1857E710)
#define BMAKEANEPOO__CTOR_OFFSET UNITYSDK_OFFSET(0x1857EA50)

inline static constexpr unsigned int BMAKEANEPOO_TypeDefinitionIndex = 79548;

class BMAKEANEPOO : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HCBLGBKKOIB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* NKLDHJDEAGN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BMJDMEIADIH; // 0x28
	::UnityEngine::GameObject* FPCBOKMEMHL; // 0x30
	::UnityEngine::GameObject* EJHNNMBHAPK; // 0x38
	::FGCOIBFFCHB* CLGLIAFNLGK; // 0x40
	::UnityEngine::RectTransform* HMILEKEEAPM; // 0x48
	::FGCOIBFFCHB* GFIPBLEEAIP; // 0x50
	::UnityEngine::GameObject* COEHGEPPEJH; // 0x58
	::UnityEngine::RectTransform* OLDBICPEOHO; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* JGLLPJLIGDN; // 0x68
	::UnityEngine::GameObject* EMEAPOFBBOL; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMAKEANEPOO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BMAKEANEPOO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BMAKEANEPOO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMAKEANEPOO_KGEBDLGBGNM_OFFSET))(this);
	}
};
