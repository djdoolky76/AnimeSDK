#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LCLJLOJJEMA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1FFB5540)
#define LCLJLOJJEMA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1FFB5450)
#define LCLJLOJJEMA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1FFB5220)
#define LCLJLOJJEMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFB5530)

inline static constexpr unsigned int LCLJLOJJEMA_TypeDefinitionIndex = 96627;

class LCLJLOJJEMA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* KONPMOGCPID; // 0x18
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* LLJMGBMFEPA; // 0x28
	::UnityEngine::GameObject* DPJFNEKNDIA; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* IAPHAMFGIDG; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* MAMONMAINNA; // 0x40
	::FGCOIBFFCHB* IHOINPGNANO; // 0x48
	::UnityEngine::Animation* KOCAHFMIGDO; // 0x50
	::UnityEngine::Transform* EHMLMJKEJMM; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCLJLOJJEMA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LCLJLOJJEMA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCLJLOJJEMA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LCLJLOJJEMA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
