#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define MAPGJBPIGLF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1568FCF0)
#define MAPGJBPIGLF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1568FC40)
#define MAPGJBPIGLF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1568F9A0)
#define MAPGJBPIGLF__CTOR_OFFSET UNITYSDK_OFFSET(0x1568FCE0)

inline static constexpr unsigned int MAPGJBPIGLF_TypeDefinitionIndex = 63141;

class MAPGJBPIGLF : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* CGHMDNOBOAJ; // 0x18
	::UnityEngine::RectTransform* LCEIBNJKGHJ; // 0x20
	::UnityEngine::RectTransform* FJGPOOLCOEP; // 0x28
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x30
	::UnityEngine::GameObject* HLJMMLMNFDG; // 0x38
	::UnityEngine::RectTransform* JNADFFOLDGP; // 0x40
	::UnityEngine::RectTransform* DNJLPEHIEAE; // 0x48
	::UnityEngine::GameObject* PPGOGGMDMGF; // 0x50
	::MEKABAIJMNM_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* NLOFGFEHFKE; // 0x58
	::UnityEngine::UI::Text* JDJKPGMLGDN; // 0x60
	::UnityEngine::UI::Text* EPMEILNJMFF; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* OIJMFDBGDJD; // 0x78
	::UnityEngine::UI::Text* PNDHOGLJAHH; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAPGJBPIGLF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MAPGJBPIGLF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MAPGJBPIGLF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAPGJBPIGLF_KGEBDLGBGNM_OFFSET))(this);
	}
};
