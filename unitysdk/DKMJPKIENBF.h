#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DKMJPKIENBF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A1E8D80)
#define DKMJPKIENBF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A1E8CD0)
#define DKMJPKIENBF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A1E8A80)
#define DKMJPKIENBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E8D70)

inline static constexpr unsigned int DKMJPKIENBF_TypeDefinitionIndex = 93231;

class DKMJPKIENBF : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MFGPCFNAPHA; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* PJIMOIIONNI; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* JCLGPAMLEHP; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* GNKDIDJABCP; // 0x48
	::LGINJIKKBJA* HPHBDLBMECK; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x58
	::UnityEngine::GameObject* HDNPNKOIFGD; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* HHDMKFPFEJO; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* BNGAGBJCINA; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMJPKIENBF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DKMJPKIENBF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DKMJPKIENBF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMJPKIENBF_KGEBDLGBGNM_OFFSET))(this);
	}
};
