#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ColorHSV.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

class JCMPDFCOMGM;

#define MOLEMOLE_UILINEUPROLESELECTWIDGETCONTROLLER_ROLEBGCOLOR_LERP_OFFSET UNITYSDK_OFFSET(0x17C534C0)
#define MOLEMOLE_UILINEUPROLESELECTWIDGETCONTROLLER_ROLEBGCOLOR_WRITE_OFFSET UNITYSDK_OFFSET(0x7BF9D0)
#define MOLEMOLE_UILINEUPROLESELECTWIDGETCONTROLLER_ROLEBGCOLOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7BF6E0)
#define MOLEMOLE_UILINEUPROLESELECTWIDGETCONTROLLER_ROLEBGCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x7BF6D0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupRoleSelectWidgetController_RoleBGColor_TypeDefinitionIndex = 84783;

	struct alignas(4) UILineupRoleSelectWidgetController_RoleBGColor
	{
		::MoleMole::ColorHSV textColor; // 0x10
		::MoleMole::ColorHSV imageColor; // 0x1C
		::MoleMole::ColorHSV outlineColor; // 0x28

		::System::Void _ctor(::JCMPDFCOMGM* bg)
		{
			return ((::System::Void(*)(::PVOID, ::JCMPDFCOMGM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPROLESELECTWIDGETCONTROLLER_ROLEBGCOLOR__CTOR_OFFSET))(this, bg);
		}

		::System::Void _ctor_1(::UnityEngine::Color textColor, ::UnityEngine::Color imageColor, ::UnityEngine::Color outlineColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPROLESELECTWIDGETCONTROLLER_ROLEBGCOLOR__CTOR_1_OFFSET))(this, textColor, imageColor, outlineColor);
		}

		/*
		static ::MoleMole::UILineupRoleSelectWidgetController_RoleBGColor Lerp(::MoleMole::UILineupRoleSelectWidgetController_RoleBGColor a, ::MoleMole::UILineupRoleSelectWidgetController_RoleBGColor b, ::System::Single alpha)
		{
			return ((::MoleMole::UILineupRoleSelectWidgetController_RoleBGColor(*)(::MoleMole::UILineupRoleSelectWidgetController_RoleBGColor, ::MoleMole::UILineupRoleSelectWidgetController_RoleBGColor, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPROLESELECTWIDGETCONTROLLER_ROLEBGCOLOR_LERP_OFFSET))(a, b, alpha);
		}
		*/

		::System::Void Write(::JCMPDFCOMGM* bg)
		{
			return ((::System::Void(*)(::PVOID, ::JCMPDFCOMGM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPROLESELECTWIDGETCONTROLLER_ROLEBGCOLOR_WRITE_OFFSET))(this, bg);
		}
	};
}
