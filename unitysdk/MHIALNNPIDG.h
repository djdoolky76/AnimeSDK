#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MHIALNNPIDG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11F4CF00)
#define MHIALNNPIDG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11F4CE10)
#define MHIALNNPIDG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11F4CBE0)
#define MHIALNNPIDG__CTOR_OFFSET UNITYSDK_OFFSET(0x11F4CEF0)

inline static constexpr unsigned int MHIALNNPIDG_TypeDefinitionIndex = 90750;

class MHIALNNPIDG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AHGKFBEOLIP; // 0x18
	::MoleMole::UIGeneralButtonController* ONFPPIDAEEL; // 0x20
	::LGINJIKKBJA* ADDNFIECFDO; // 0x28
	::UnityEngine::Transform* CEDEJDHCHLI; // 0x30
	::UnityEngine::Transform* LLPJFFMIJAO; // 0x38
	::FGCOIBFFCHB* CBCKLGMHAEA; // 0x40
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* HPECOCEHFBO; // 0x50
	::UnityEngine::Transform* CPIOABLKPIB; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIALNNPIDG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MHIALNNPIDG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIALNNPIDG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MHIALNNPIDG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
