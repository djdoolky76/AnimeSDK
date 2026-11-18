#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOKNNAOONPN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1078AF20)
#define MOKNNAOONPN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1078AE50)
#define MOKNNAOONPN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1078ACA0)
#define MOKNNAOONPN__CTOR_OFFSET UNITYSDK_OFFSET(0x1078AF10)

inline static constexpr unsigned int MOKNNAOONPN_TypeDefinitionIndex = 75870;

class MOKNNAOONPN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* EJFDBIFBIDK; // 0x18
	::UnityEngine::Transform* JIDINKGJAJH; // 0x20
	::LGINJIKKBJA* GPLJEKNNGLO; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* JKDHPEBMIOH; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* DEMGHPAAOKC; // 0x38
	::UnityEngine::GameObject* MCNIHBDGDIN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKNNAOONPN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MOKNNAOONPN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MOKNNAOONPN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKNNAOONPN_KGEBDLGBGNM_OFFSET))(this);
	}
};
