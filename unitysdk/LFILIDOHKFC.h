#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define LFILIDOHKFC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15187790)
#define LFILIDOHKFC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x151876E0)
#define LFILIDOHKFC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x151874B0)
#define LFILIDOHKFC__CTOR_OFFSET UNITYSDK_OFFSET(0x15187780)

inline static constexpr unsigned int LFILIDOHKFC_TypeDefinitionIndex = 43396;

class LFILIDOHKFC : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIGeneralToggleWidgetController*>* HCCLJIGCHOG; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x28
	::UnityEngine::GameObject* POOEPIKINPB; // 0x30
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x38
	::MoleMole::MonoGamepadModule* GAFPEOCAECI; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x48
	::UnityEngine::GameObject* HLOELDBHFPG; // 0x50
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFILIDOHKFC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LFILIDOHKFC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LFILIDOHKFC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFILIDOHKFC_KGEBDLGBGNM_OFFSET))(this);
	}
};
