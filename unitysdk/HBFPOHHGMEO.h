#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define HBFPOHHGMEO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x146DD4E0)
#define HBFPOHHGMEO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x146DD430)
#define HBFPOHHGMEO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x146DD160)
#define HBFPOHHGMEO__CTOR_OFFSET UNITYSDK_OFFSET(0x146DD4D0)

inline static constexpr unsigned int HBFPOHHGMEO_TypeDefinitionIndex = 56325;

class HBFPOHHGMEO : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* KGFOLOAHDIA; // 0x18
	::UnityEngine::UI::Extension::UITabButtonGroup* CKBCJBHOOLM; // 0x20
	::MoleMole::UIGeneralButtonController* MPBJGPNGDKH; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* NKADAPNGKAI; // 0x30
	::MonoUITableScrollV2* LPNMGMAFNLP; // 0x38
	::UnityEngine::GameObject* ANBLGKBBIKI; // 0x40
	::UnityEngine::GameObject* OGKGFKEHFHD; // 0x48
	::FGCOIBFFCHB* BFEBPKGJAPC; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* AAJIHFCEABI; // 0x58
	::UnityEngine::GameObject* IJMFIKNOMMI; // 0x60
	::MonoUITableScrollV2* KOMPENNKJPF; // 0x68
	::UnityEngine::GameObject* GDLCCFGKNBD; // 0x70
	::MoleMole::MonoGamepadNavigatableList* AHNKMPHELFA; // 0x78
	::UnityEngine::GameObject* EOHLKFEFLGH; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* GIMDNILAFKM; // 0x88
	::MoleMole::MonoGamepadNavigatableList* CEDIEOFNELM; // 0x90
	::MoleMole::UIGeneralButtonController* JOPPPINKAPO; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFPOHHGMEO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBFPOHHGMEO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFPOHHGMEO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBFPOHHGMEO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
