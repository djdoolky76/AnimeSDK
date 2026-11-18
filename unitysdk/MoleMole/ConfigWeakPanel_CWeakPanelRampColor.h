#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_CONFIGWEAKPANEL_CWEAKPANELRAMPCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x142CEC30)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigWeakPanel_CWeakPanelRampColor_TypeDefinitionIndex = 85871;

	class ConfigWeakPanel_CWeakPanelRampColor : public ::System::Object
	{
	public:
		::UnityEngine::Color startColor; // 0x10
		::UnityEngine::Color endColor; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGWEAKPANEL_CWEAKPANELRAMPCOLOR__CTOR_OFFSET))(this);
		}
	};
}
