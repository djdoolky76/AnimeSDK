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
namespace UnityEngine::UI { class Text; }

#define JBOHEJKEABN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1989D830)
#define JBOHEJKEABN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1989D710)
#define JBOHEJKEABN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1989D400)
#define JBOHEJKEABN__CTOR_OFFSET UNITYSDK_OFFSET(0x1989D820)

inline static constexpr unsigned int JBOHEJKEABN_TypeDefinitionIndex = 75724;

class JBOHEJKEABN : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* LAMHHGKFGKM; // 0x18
	::FGCOIBFFCHB* GHJJBIBENLH; // 0x20
	::UnityEngine::UI::Text* IKAFLADJBKP; // 0x28
	::UnityEngine::GameObject* FJAIOHDJOMI; // 0x30
	::UnityEngine::UI::Text* CBPLDAMKPOK; // 0x38
	::FGCOIBFFCHB* HKEGPJJJEIB; // 0x40
	::UnityEngine::RectTransform* FFJIGPPOPDE; // 0x48
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x50
	::LGINJIKKBJA* EGKGPAHJGFN; // 0x58
	::UnityEngine::GameObject* DIILMFKMLEL; // 0x60
	::UnityEngine::CanvasGroup* ANEEEIBEEPJ; // 0x68
	::FGCOIBFFCHB* CAEHCICFJFN; // 0x70
	::UnityEngine::GameObject* ANDFIBAKEAE; // 0x78
	::UnityEngine::RectTransform* JNDKPCAAKFA; // 0x80
	::GCIMMDDIFBJ* BEAAIPLODBJ; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOHEJKEABN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBOHEJKEABN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBOHEJKEABN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOHEJKEABN_KGEBDLGBGNM_OFFSET))(this);
	}
};
