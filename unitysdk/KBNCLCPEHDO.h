#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define KBNCLCPEHDO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15B81370)
#define KBNCLCPEHDO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15B812C0)
#define KBNCLCPEHDO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15B81120)
#define KBNCLCPEHDO__CTOR_OFFSET UNITYSDK_OFFSET(0x15B81360)

inline static constexpr unsigned int KBNCLCPEHDO_TypeDefinitionIndex = 60456;

class KBNCLCPEHDO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UITimeWidget* OPEHBEBNGCH; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20
	::MoleMole::UIGeneralButtonController* DNGFGABBHEG; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* EPDJDKJFBHP; // 0x30
	::UnityEngine::RectTransform* FJGPOOLCOEP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNCLCPEHDO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KBNCLCPEHDO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KBNCLCPEHDO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNCLCPEHDO_KGEBDLGBGNM_OFFSET))(this);
	}
};
