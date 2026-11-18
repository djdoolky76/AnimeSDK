#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class MonoGuideItemConfig; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define POEMJBHLPAD_CEMGPKNDOON_OFFSET UNITYSDK_OFFSET(0x194BAAA0)
#define POEMJBHLPAD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x194BABC0)
#define POEMJBHLPAD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x194BAA00)
#define POEMJBHLPAD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x194BA700)
#define POEMJBHLPAD_POIFGHCCMKN_OFFSET UNITYSDK_OFFSET(0x194BAB20)
#define POEMJBHLPAD__CTOR_OFFSET UNITYSDK_OFFSET(0x194BAB10)

inline static constexpr unsigned int POEMJBHLPAD_TypeDefinitionIndex = 39385;

class POEMJBHLPAD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* GKLEIMGLOGA; // 0x18
	::UnityEngine::CanvasGroup* OCKENNPJMHL; // 0x20
	::GCIMMDDIFBJ* NJNAACMKEBD; // 0x28
	::FGCOIBFFCHB* LOELDBNKAKF; // 0x30
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x38
	::MoleMole::MonoGuideItemConfig* DFMKILICPFB; // 0x40
	::UnityEngine::RectTransform* MCCNMLNMCJF; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* HMCOPHANFFA; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* KIKKEBAHHOA; // 0x58
	::GCIMMDDIFBJ* KBLBGBILDPH; // 0x60
	::UnityEngine::Transform* FMJEJOOLKCK; // 0x68
	::UnityEngine::UI::Text* HLCMIEKCKAP; // 0x70
	::UnityEngine::RectTransform* NOMIGEAEBKF; // 0x78
	::UnityEngine::GameObject* IKOFJEHPPAN; // 0x80
	::GCIMMDDIFBJ* AOKJEGNBALI; // 0x88
	::UnityEngine::RectTransform* EMDOIDLAFDB; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEMJBHLPAD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + POEMJBHLPAD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Boolean CEMGPKNDOON(::MoleMole::UIControlCollection* FJHDNIKAKLO, ::HNLACBJDCGI* FOLOGOFJHED)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + POEMJBHLPAD_CEMGPKNDOON_OFFSET))(this, FJHDNIKAKLO, FOLOGOFJHED);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEMJBHLPAD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Boolean POIFGHCCMKN(::MoleMole::UIControlCollection* MIALFKCCCPI, ::HNLACBJDCGI* KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + POEMJBHLPAD_POIFGHCCMKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + POEMJBHLPAD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
