#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define JGDMDLONOCC_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x14FB2170)
#define JGDMDLONOCC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14FB20D0)
#define JGDMDLONOCC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14FB1E70)
#define JGDMDLONOCC__CTOR_OFFSET UNITYSDK_OFFSET(0x14FB26A0)

inline static constexpr unsigned int JGDMDLONOCC_TypeDefinitionIndex = 67218;

class JGDMDLONOCC : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::UI::Extension::UIToggleButton* DMBAKHKINMH; // 0x28
	::UnityEngine::RectTransform* MCGPPADHCLJ; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* EPMEILNJMFF; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* IMDDBGOBMKK; // 0x40
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* KLHNCBGCEHI; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* JDJKPGMLGDN; // 0x58
	::FGCOIBFFCHB* DEAPLILJLJD; // 0x60
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x70
	::UnityEngine::RectTransform* NDPFKBKABLI; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* KJCNBCCJJLH; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDMDLONOCC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JGDMDLONOCC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDMDLONOCC_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDMDLONOCC_KGEBDLGBGNM_OFFSET))(this);
	}
};
