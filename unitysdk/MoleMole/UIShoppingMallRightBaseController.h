#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

namespace MoleMole { class ShoppingMallBaseContextBase; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISHOPPINGMALLRIGHTBASECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18261440)
#define MOLEMOLE_UISHOPPINGMALLRIGHTBASECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18261680)
#define MOLEMOLE_UISHOPPINGMALLRIGHTBASECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x182616E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallRightBaseController_TypeDefinitionIndex = 61683;

	class UIShoppingMallRightBaseController : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::ShoppingMallBaseContextBase* DNHMPMEMPHJ; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRIGHTBASECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRIGHTBASECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRIGHTBASECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
