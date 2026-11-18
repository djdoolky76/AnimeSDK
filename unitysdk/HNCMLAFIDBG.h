#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HNCMLAFIDBG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17A60540)
#define HNCMLAFIDBG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17A60470)
#define HNCMLAFIDBG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17A602D0)
#define HNCMLAFIDBG__CTOR_OFFSET UNITYSDK_OFFSET(0x17A60530)

inline static constexpr unsigned int HNCMLAFIDBG_TypeDefinitionIndex = 48410;

class HNCMLAFIDBG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* BPDONKAIKAB; // 0x18
	::LGINJIKKBJA* DNLDJKDCCEP; // 0x20
	::UnityEngine::GameObject* BGFLCLGJKEF; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* MMNNLOMMNGL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCMLAFIDBG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HNCMLAFIDBG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HNCMLAFIDBG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNCMLAFIDBG_KGEBDLGBGNM_OFFSET))(this);
	}
};
