#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JPCKFOCDMHH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x157D94B0)
#define JPCKFOCDMHH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x157D9420)
#define JPCKFOCDMHH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x157D9250)
#define JPCKFOCDMHH__CTOR_OFFSET UNITYSDK_OFFSET(0x157D94A0)

inline static constexpr unsigned int JPCKFOCDMHH_TypeDefinitionIndex = 76761;

class JPCKFOCDMHH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* PMHMEAAGCOA; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x20
	::UnityEngine::Transform* DPDOFDHIBCP; // 0x28
	::UnityEngine::GameObject* LLNLKIKBBMF; // 0x30
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x38
	::UnityEngine::Transform* LOGBOEJKNJG; // 0x40
	::MoleMole::NotificationBadgeEx* JFDOOELFAOA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCKFOCDMHH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPCKFOCDMHH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCKFOCDMHH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPCKFOCDMHH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
