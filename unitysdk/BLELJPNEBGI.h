#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BLELJPNEBGI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x128B0CB0)
#define BLELJPNEBGI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x128B0B90)
#define BLELJPNEBGI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x128B0890)
#define BLELJPNEBGI__CTOR_OFFSET UNITYSDK_OFFSET(0x128B0CA0)

inline static constexpr unsigned int BLELJPNEBGI_TypeDefinitionIndex = 85378;

class BLELJPNEBGI : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KFKBKELPIOA; // 0x18
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x20
	::GCIMMDDIFBJ* KLHEGKFCJEN; // 0x28
	::GCIMMDDIFBJ* LLNLKIKBBMF; // 0x30
	::LGINJIKKBJA* ILKIDNPCMGA; // 0x38
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x40
	::LGINJIKKBJA* FDJHEBHLJLD; // 0x48
	::GCIMMDDIFBJ* DNJKLJFMJLM; // 0x50
	::LGINJIKKBJA* PJPBLLPLGCC; // 0x58
	::UnityEngine::RectTransform* JMFIHIGOOJJ; // 0x60
	::UnityEngine::RectTransform* JFDOOELFAOA; // 0x68
	::UnityEngine::GameObject* CJFCGNFOCFO; // 0x70
	::UnityEngine::CanvasGroup* ALABMCKFFGP; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x80
	::LGINJIKKBJA* GEKLIOPBICD; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLELJPNEBGI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BLELJPNEBGI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BLELJPNEBGI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLELJPNEBGI_KGEBDLGBGNM_OFFSET))(this);
	}
};
