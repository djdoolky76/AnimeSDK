#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIABBattlePhaseWidgetController; }
namespace MoleMole { class UIABInLevelGeneralWidgetController; }
namespace MoleMole { class UIABStandbyPhaseWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;
template <typename T> class MEKABAIJMNM_1;

#define EAFGLEIPIFO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13533730)
#define EAFGLEIPIFO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13533630)
#define EAFGLEIPIFO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x135332D0)
#define EAFGLEIPIFO__CTOR_OFFSET UNITYSDK_OFFSET(0x13533720)

inline static constexpr unsigned int EAFGLEIPIFO_TypeDefinitionIndex = 91640;

class EAFGLEIPIFO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* LLILBLGNLEE; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIABInLevelGeneralWidgetController*>* DCCJFCFAGAH; // 0x20
	::UnityEngine::RectTransform* MHAECEODBJM; // 0x28
	::MoleMole::MonoGamepadNestedListDelegate* MHKPINBMMCM; // 0x30
	::UnityEngine::RectTransform* PBLLLCLHGDG; // 0x38
	::UnityEngine::UI::Extension::UIImgEventTrigger* KNHLOHIEIIL; // 0x40
	::MoleMole::MonoGamepadRegion* GAFPEOCAECI; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* LHJKCIIEGJK; // 0x50
	::UnityEngine::RectTransform* DHNLCLFNJJK; // 0x58
	::MEKABAIJMNM_1<::MoleMole::UIABBattlePhaseWidgetController*>* MAAOGPFAPMM; // 0x60
	::MoleMole::MonoGamepadNestedListDelegate* MLGMPGLLOGF; // 0x68
	::MEKABAIJMNM_1<::MoleMole::UIABStandbyPhaseWidgetController*>* KLNCDEABINN; // 0x70
	::MoleMole::MonoGamepadNestedListDelegate* MDMHANBKPAO; // 0x78
	::KNLFLMMHALL_1<::System::Object*>* CLFIAFHIJEF; // 0x80
	::UnityEngine::RectTransform* AHGLOGDDBDA; // 0x88
	::UnityEngine::RectTransform* GLBHGIGHIPB; // 0x90
	::MoleMole::MonoGamepadRegion* GFJFJBJALFD; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFGLEIPIFO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EAFGLEIPIFO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EAFGLEIPIFO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFGLEIPIFO_KGEBDLGBGNM_OFFSET))(this);
	}
};
