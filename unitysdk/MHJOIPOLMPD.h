#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MHJOIPOLMPD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x156ADEF0)
#define MHJOIPOLMPD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x156ADDF0)
#define MHJOIPOLMPD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x156ADC10)
#define MHJOIPOLMPD__CTOR_OFFSET UNITYSDK_OFFSET(0x156ADEE0)

inline static constexpr unsigned int MHJOIPOLMPD_TypeDefinitionIndex = 77833;

class MHJOIPOLMPD : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* PAAMOIHCKHF; // 0x18
	::UnityEngine::UI::Extension::UITimeWidget* OPEHBEBNGCH; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x28
	::LGINJIKKBJA* OGFPBBJEFEI; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x40
	::MoleMole::NotificationBadge* FBFGBCDJOFK; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJOIPOLMPD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MHJOIPOLMPD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MHJOIPOLMPD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJOIPOLMPD_KGEBDLGBGNM_OFFSET))(this);
	}
};
