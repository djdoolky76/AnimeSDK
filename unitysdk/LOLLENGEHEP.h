#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define LOLLENGEHEP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11F28F80)
#define LOLLENGEHEP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11F28E70)
#define LOLLENGEHEP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11F28C70)
#define LOLLENGEHEP__CTOR_OFFSET UNITYSDK_OFFSET(0x11F28F70)

inline static constexpr unsigned int LOLLENGEHEP_TypeDefinitionIndex = 62261;

class LOLLENGEHEP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* APIFCJGEJIP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DCDNEMMDAHE; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x28
	::FGCOIBFFCHB* IAOCBIHABLH; // 0x30
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x38
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x40
	::LGINJIKKBJA* JNIAEBKPLBP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOLLENGEHEP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LOLLENGEHEP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LOLLENGEHEP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOLLENGEHEP_KGEBDLGBGNM_OFFSET))(this);
	}
};
