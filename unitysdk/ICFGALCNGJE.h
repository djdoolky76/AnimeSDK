#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ICFGALCNGJE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15EA26F0)
#define ICFGALCNGJE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15EA2620)
#define ICFGALCNGJE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15EA2440)
#define ICFGALCNGJE__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA26E0)

inline static constexpr unsigned int ICFGALCNGJE_TypeDefinitionIndex = 86446;

class ICFGALCNGJE : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* GPLJEKNNGLO; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MBCNAFEOGAE; // 0x20
	::UnityEngine::Transform* JIDINKGJAJH; // 0x28
	::UnityEngine::GameObject* MCNIHBDGDIN; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* GNMBNPFECBO; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* MFNBKFOMOJG; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* EJFDBIFBIDK; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICFGALCNGJE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ICFGALCNGJE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ICFGALCNGJE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICFGALCNGJE_KGEBDLGBGNM_OFFSET))(this);
	}
};
