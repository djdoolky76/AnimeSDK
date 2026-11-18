#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define ABGLCDJLIEF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x144B5530)
#define ABGLCDJLIEF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x144B54A0)
#define ABGLCDJLIEF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x144B5330)
#define ABGLCDJLIEF__CTOR_OFFSET UNITYSDK_OFFSET(0x144B5520)

inline static constexpr unsigned int ABGLCDJLIEF_TypeDefinitionIndex = 52717;

class ABGLCDJLIEF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* OMIPADPKONH; // 0x18
	::UnityEngine::RectTransform* COLHANPDNOI; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* IFNNBKFBJEL; // 0x28
	::UnityEngine::RectTransform* EBHFCDHBHMG; // 0x30
	::UnityEngine::RectTransform* NFGHKHKEKHP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGLCDJLIEF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ABGLCDJLIEF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGLCDJLIEF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ABGLCDJLIEF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
