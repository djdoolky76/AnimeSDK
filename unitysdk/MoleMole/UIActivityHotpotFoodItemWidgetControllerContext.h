#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Color.h"

class BCPLJJIAKMO;
namespace MoleMole { class UIActivityHotpotFoodItemWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYHOTPOTFOODITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19904520)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotFoodItemWidgetControllerContext_TypeDefinitionIndex = 85474;

	class UIActivityHotpotFoodItemWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::MoleMole::UIActivityHotpotFoodItemWidgetController*>* OnPlayFadein; // 0x28
		::System::Action_1<::MoleMole::UIActivityHotpotFoodItemWidgetController*>* OnPlayFadeout; // 0x30
		::System::Action_1<::MoleMole::UIActivityHotpotFoodItemWidgetController*>* OnPlayLink; // 0x38
		::BCPLJJIAKMO* FoodCfg; // 0x40
		::System::Single CollisionIntensityThreshold; // 0x48
		::UnityEngine::Color ErosionColor; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTFOODITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
