#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangkovBagPageController; }
namespace MoleMole { class UIBangkovItemInfoWidgetController_Context; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A154F60)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__DISPLAYCLASS50_0__REQUESTNESTEDGIFTPREVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1A154F70)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovBagPageController___c__DisplayClass50_0_TypeDefinitionIndex = 54346;

	class UIBangkovBagPageController___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangkovItemInfoWidgetController_Context* ctx; // 0x10
		::MoleMole::UIBangkovBagPageController* __4__this; // 0x18
		::UnityEngine::Transform* parent; // 0x20
		::System::Int32 oppositeSlot; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestNestedGiftPreview_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__DISPLAYCLASS50_0__REQUESTNESTEDGIFTPREVIEW_B__0_OFFSET))(this);
		}
	};
}
