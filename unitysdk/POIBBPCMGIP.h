#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define POIBBPCMGIP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1CB5B8A0)
#define POIBBPCMGIP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1CB5B7B0)
#define POIBBPCMGIP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1CB5B560)
#define POIBBPCMGIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5B890)

inline static constexpr unsigned int POIBBPCMGIP_TypeDefinitionIndex = 76449;

class POIBBPCMGIP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UITabButtonGroup* FJPCAHJIAGA; // 0x18
	::UnityEngine::UI::Text* LHKDENMCKCA; // 0x20
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x28
	::LGINJIKKBJA* AEPLJDGPNNL; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* LANDACIDJIM; // 0x38
	::UnityEngine::Transform* EKHMFMNONGI; // 0x40
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x48
	::UnityEngine::UI::Extension::UITabButton* GEMEGBDBOMO; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* CGKOIBMEAFH; // 0x58
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x60
	::UnityEngine::Transform* FANPGBEFGEG; // 0x68
	::UnityEngine::UI::Extension::UITabButton* POJHEFDEOLC; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIBBPCMGIP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + POIBBPCMGIP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + POIBBPCMGIP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIBBPCMGIP_KGEBDLGBGNM_OFFSET))(this);
	}
};
