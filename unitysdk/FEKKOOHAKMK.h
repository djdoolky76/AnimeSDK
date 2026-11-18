#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class ADEJAGFCBHK;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FEKKOOHAKMK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16180720)
#define FEKKOOHAKMK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16180670)
#define FEKKOOHAKMK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16180410)
#define FEKKOOHAKMK__CTOR_OFFSET UNITYSDK_OFFSET(0x16180710)

inline static constexpr unsigned int FEKKOOHAKMK_TypeDefinitionIndex = 65001;

class FEKKOOHAKMK : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* LMKANBIHAHB; // 0x18
	::ADEJAGFCBHK* FBLMLOANCHG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* MKAMEMNJEAM; // 0x28
	::UnityEngine::UI::Button* KKGLIKPIMBJ; // 0x30
	::UnityEngine::GameObject* AFECILMMGEF; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* PIEIKCNMDKG; // 0x40
	::UnityEngine::UI::Button* IOOGPJCHJLO; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* IGICAHEDODO; // 0x50
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x58
	::UnityEngine::GameObject* OJCNGJAJALL; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* KDGKBPGMCKG; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKKOOHAKMK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FEKKOOHAKMK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FEKKOOHAKMK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKKOOHAKMK_KGEBDLGBGNM_OFFSET))(this);
	}
};
