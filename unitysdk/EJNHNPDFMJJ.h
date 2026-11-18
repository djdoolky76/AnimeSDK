#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class RawImage; }
namespace UnityEngine::UI { class Text; }

#define EJNHNPDFMJJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17119D20)
#define EJNHNPDFMJJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17119C50)
#define EJNHNPDFMJJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17119A20)
#define EJNHNPDFMJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17119D10)

inline static constexpr unsigned int EJNHNPDFMJJ_TypeDefinitionIndex = 50602;

class EJNHNPDFMJJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* INEFGIHAMOB; // 0x18
	::UnityEngine::CanvasGroup* ANEEEIBEEPJ; // 0x20
	::UnityEngine::UI::Text* CBPLDAMKPOK; // 0x28
	::UnityEngine::GameObject* DIILMFKMLEL; // 0x30
	::UnityEngine::UI::RawImage* KFMGMEJEIKD; // 0x38
	::UnityEngine::GameObject* FJAIOHDJOMI; // 0x40
	::UnityEngine::UI::Text* IKAFLADJBKP; // 0x48
	::LGINJIKKBJA* EGKGPAHJGFN; // 0x50
	::UnityEngine::GameObject* JGPIGFLIDOJ; // 0x58
	::UnityEngine::Animation* CMCAKLMEKMP; // 0x60
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNHNPDFMJJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJNHNPDFMJJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJNHNPDFMJJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNHNPDFMJJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
