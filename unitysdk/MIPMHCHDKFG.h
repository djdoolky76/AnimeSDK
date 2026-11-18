#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIDoubleTipsInfoWidgetController; }
namespace MoleMole { class UIWishlistTargetAvatarPopupWidgetController; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class KNLFLMMHALL_1;
template <typename T> class MEKABAIJMNM_1;

#define MIPMHCHDKFG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x151D6980)
#define MIPMHCHDKFG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x151D6810)
#define MIPMHCHDKFG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x151D6500)
#define MIPMHCHDKFG__CTOR_OFFSET UNITYSDK_OFFSET(0x151D6970)

inline static constexpr unsigned int MIPMHCHDKFG_TypeDefinitionIndex = 60586;

class MIPMHCHDKFG : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* KGODLNIIIEA; // 0x18
	::LGINJIKKBJA* EADDCKNAFGG; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIWishlistTargetAvatarPopupWidgetController*>* BMDFIJOGIDG; // 0x28
	::UnityEngine::UI::Extension::UITabButtonGroup* LLHIDGDNLAJ; // 0x30
	::UnityEngine::GameObject* DNAHCNPICBF; // 0x38
	::KNLFLMMHALL_1<::System::Object*>* DPNLLKMJMMB; // 0x40
	::KNLFLMMHALL_1<::System::Object*>* ODKGAHDFMAP; // 0x48
	::MEKABAIJMNM_1<::MoleMole::UIDoubleTipsInfoWidgetController*>* LLNLKIKBBMF; // 0x50
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* KFDOBMKJEPI; // 0x60
	::FGCOIBFFCHB* KMBGKOCKAGF; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPMHCHDKFG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MIPMHCHDKFG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPMHCHDKFG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MIPMHCHDKFG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
