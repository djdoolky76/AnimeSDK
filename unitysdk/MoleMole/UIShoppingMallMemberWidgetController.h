#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class KDJCCLMNJGC;
class MLJNEFKDCKN;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class ShoppingMallCardContext; }
namespace MoleMole { class UIAmerInfoWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_CJBEHMBKKAK_OFFSET UNITYSDK_OFFSET(0x167C6FC0)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_CLICKSHOWRULE_OFFSET UNITYSDK_OFFSET(0x167C66A0)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONCLICKBUY_OFFSET UNITYSDK_OFFSET(0x167C67D0)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167C63F0)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x167C6920)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x167C6480)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167C6620)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167C5850)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x167C5C30)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x167C6C60)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167C6CC0)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x167C6D50)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x167C6D80)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167C6E10)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167C6EA0)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x167C6F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallMemberWidgetController_TypeDefinitionIndex = 56684;

	class UIShoppingMallMemberWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::KDJCCLMNJGC* _view; // 0x2C8
		::UnityEngine::Transform* ILJINMCFDMI; // 0x2D0
		::MoleMole::UIAmerInfoWidgetController* LDONHCONDHP; // 0x2D8
		::MLJNEFKDCKN* LJBPECKCCEA; // 0x2E0
		::MoleMole::ShoppingMallCardContext* DAAAEJDBNFI; // 0x2E8
		::MoleMole::MonoGamepadCustomList* MEIFIAKIIBM; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ClickShowRule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_CLICKSHOWRULE_OFFSET))(this);
		}

		::System::Void OnClickBuy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONCLICKBUY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void CJBEHMBKKAK(::System::Int32 OIKFFGKDHME)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_CJBEHMBKKAK_OFFSET))(this, OIKFFGKDHME);
		}
	};
}
