#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define NHDIPJIMGMJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE754AF0)
#define NHDIPJIMGMJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE754A60)
#define NHDIPJIMGMJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE7548B0)
#define NHDIPJIMGMJ__CTOR_OFFSET UNITYSDK_OFFSET(0xE754AE0)

inline static constexpr unsigned int NHDIPJIMGMJ_TypeDefinitionIndex = 59802;

class NHDIPJIMGMJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* KCPODMGDGFL; // 0x18
	::MoleMole::MonoGamepadCustomList* IBCNKMCOCHD; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* GAKIANGHPND; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* GLLBNHFGIJJ; // 0x30
	::UnityEngine::UI::Extension::UITimeWidget* NPCIPCPJEMF; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* KFGKOAAIAKJ; // 0x40
	::MoleMole::UIGeneralButtonController* CNEMGKPCIBB; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* GLCKMPDLOIE; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDIPJIMGMJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHDIPJIMGMJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHDIPJIMGMJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDIPJIMGMJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
