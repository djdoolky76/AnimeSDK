#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define AKKFPKPLIDF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x142253D0)
#define AKKFPKPLIDF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14225300)
#define AKKFPKPLIDF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x142250E0)
#define AKKFPKPLIDF__CTOR_OFFSET UNITYSDK_OFFSET(0x142253C0)

inline static constexpr unsigned int AKKFPKPLIDF_TypeDefinitionIndex = 44314;

class AKKFPKPLIDF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* FHAKACLLHEM; // 0x18
	::MoleMole::UIGeneralButtonController* PAAMOIHCKHF; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* OPEHBEBNGCH; // 0x28
	::LGINJIKKBJA* OGFPBBJEFEI; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* GGGHGIOEBGD; // 0x38
	::MoleMole::NotificationBadge* FBFGBCDJOFK; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* LMJDILJMCDL; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* EPDJDKJFBHP; // 0x58
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKKFPKPLIDF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AKKFPKPLIDF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKKFPKPLIDF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AKKFPKPLIDF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
