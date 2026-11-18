#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MIGLICMOJCE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14DEA070)
#define MIGLICMOJCE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14DE9FE0)
#define MIGLICMOJCE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14DE9E30)
#define MIGLICMOJCE__CTOR_OFFSET UNITYSDK_OFFSET(0x14DEA060)

inline static constexpr unsigned int MIGLICMOJCE_TypeDefinitionIndex = 79506;

class MIGLICMOJCE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x18
	::MoleMole::MonoGamepadModule* KMHLOAMHDCF; // 0x20
	::UnityEngine::RectTransform* DPDOFDHIBCP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x30
	::MoleMole::MonoGamepadSelectable* DANNBOGNOEH; // 0x38
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGLICMOJCE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MIGLICMOJCE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGLICMOJCE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MIGLICMOJCE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
