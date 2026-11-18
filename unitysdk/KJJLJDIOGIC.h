#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KJJLJDIOGIC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15213EB0)
#define KJJLJDIOGIC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15213DE0)
#define KJJLJDIOGIC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15213BB0)
#define KJJLJDIOGIC__CTOR_OFFSET UNITYSDK_OFFSET(0x15213EA0)

inline static constexpr unsigned int KJJLJDIOGIC_TypeDefinitionIndex = 40651;

class KJJLJDIOGIC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* KCMNCCBAKED; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DJFHOBOBOGG; // 0x28
	::MonoUITableScrollV2* HNDOBAPBHBM; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* MEPGMPPABJN; // 0x38
	::UnityEngine::Transform* FBLBBMGIEMK; // 0x40
	::UnityEngine::Transform* MBKACMJJMBH; // 0x48
	::UnityEngine::Transform* NMOJOJAKGAK; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* ILCLMDBIOJL; // 0x58
	::UnityEngine::Transform* AGBFJJGFGLO; // 0x60
	::LGINJIKKBJA* JDMMGAMPIKL; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJLJDIOGIC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJJLJDIOGIC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJJLJDIOGIC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJLJDIOGIC_KGEBDLGBGNM_OFFSET))(this);
	}
};
