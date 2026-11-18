#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define MBPAKCNCJAP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D4ED20)
#define MBPAKCNCJAP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12D4EC30)
#define MBPAKCNCJAP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D4EA00)
#define MBPAKCNCJAP__CTOR_OFFSET UNITYSDK_OFFSET(0x12D4ED10)

inline static constexpr unsigned int MBPAKCNCJAP_TypeDefinitionIndex = 46845;

class MBPAKCNCJAP : public ::GIBMJLOJLKD
{
public:
	::FILNFMCNCFE* KFMGMEJEIKD; // 0x18
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x20
	::LGINJIKKBJA* EGKGPAHJGFN; // 0x28
	::UnityEngine::UI::Text* CBPLDAMKPOK; // 0x30
	::UnityEngine::CanvasGroup* INEFGIHAMOB; // 0x38
	::UnityEngine::GameObject* JGPIGFLIDOJ; // 0x40
	::UnityEngine::UI::Text* IKAFLADJBKP; // 0x48
	::UnityEngine::GameObject* FJAIOHDJOMI; // 0x50
	::UnityEngine::GameObject* DIILMFKMLEL; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPAKCNCJAP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MBPAKCNCJAP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MBPAKCNCJAP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPAKCNCJAP_KGEBDLGBGNM_OFFSET))(this);
	}
};
