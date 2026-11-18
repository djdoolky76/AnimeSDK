#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LevelUpProgressWidget;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KCIMALNDJMM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16332520)
#define KCIMALNDJMM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16332490)
#define KCIMALNDJMM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16332280)
#define KCIMALNDJMM__CTOR_OFFSET UNITYSDK_OFFSET(0x16332510)

inline static constexpr unsigned int KCIMALNDJMM_TypeDefinitionIndex = 50135;

class KCIMALNDJMM : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoInputKey* PCJMLDNNMIA; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* NCPBNKMCAFK; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* IBPGNHGLOGP; // 0x28
	::UnityEngine::Transform* CGNPIGHBMDN; // 0x30
	::UnityEngine::GameObject* OGDHHANGGIG; // 0x38
	::LevelUpProgressWidget* HGOPEJALAKE; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* GIMKMNALPJF; // 0x48
	::FGCOIBFFCHB* IKOFJEHPPAN; // 0x50
	::MoleMole::MonoInputKey* OJDCNFBNPHE; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* BPGODNEMNOO; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIMALNDJMM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KCIMALNDJMM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KCIMALNDJMM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIMALNDJMM_KGEBDLGBGNM_OFFSET))(this);
	}
};
