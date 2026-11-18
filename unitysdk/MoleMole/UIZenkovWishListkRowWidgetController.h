#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/OKKIMONLGJD.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class KOIDMLPJGML;
class NJBNBFCKBMA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIWindowController; }
namespace MoleMole { class UIZenkovItemIconBtnWidgetController; }
namespace MoleMole { class UIZenkovWishListkRowWidgetController_ItemData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_AKLJMLHJCPC_OFFSET UNITYSDK_OFFSET(0x14E569A0)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_BAGEJLCAIMC_OFFSET UNITYSDK_OFFSET(0x14E58720)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_BDIKDMKIJAB_OFFSET UNITYSDK_OFFSET(0x14E57740)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_EOGBCADHCJA_OFFSET UNITYSDK_OFFSET(0x14E584B0)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_GPFNNBEFCCB_OFFSET UNITYSDK_OFFSET(0x14E58350)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_LKMCEEHNPDI_OFFSET UNITYSDK_OFFSET(0x14E56930)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_OLLOEJBFFAB_OFFSET UNITYSDK_OFFSET(0x14E56A90)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x14E57100)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14E562D0)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x14E57140)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14E57C90)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x14E57070)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14E56420)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14E56360)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14E56040)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14E57F00)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14E57F90)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x14E58020)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14E580D0)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x14E58100)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14E58190)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14E58230)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14E582C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWishListkRowWidgetController_TypeDefinitionIndex = 75754;

	class UIZenkovWishListkRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::NJBNBFCKBMA* _view; // 0x2F8
		::MoleMole::UIZenkovWishListkRowWidgetController_ItemData* EIEFOCPBPAB; // 0x300
		::System::Collections::Generic::List_1<::MoleMole::UIZenkovItemIconBtnWidgetController*>* MMBCKHMALOO; // 0x308
		::UnityEngine::GameObject* PKCLNLOHNPN; // 0x310
		::MoleMole::UIGeneralDynamicTipsPopWindowController* ICIJFGJCKCE; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndexFromInput(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::OKKIMONLGJD result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndexFromInput(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::OKKIMONLGJD P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void GPFNNBEFCCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_GPFNNBEFCCB_OFFSET))(this);
		}

		::MoleMole::UIZenkovItemIconBtnWidgetController* BDIKDMKIJAB(::UnityEngine::Transform* LNEEMAGIHLB)
		{
			return ((::MoleMole::UIZenkovItemIconBtnWidgetController*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_BDIKDMKIJAB_OFFSET))(this, LNEEMAGIHLB);
		}

		static ::System::Void EOGBCADHCJA(::MoleMole::UIWindowController* HODAIDNDKHD)
		{
			return ((::System::Void(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_EOGBCADHCJA_OFFSET))(HODAIDNDKHD);
		}

		::System::Boolean AKLJMLHJCPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_AKLJMLHJCPC_OFFSET))(this);
		}

		::System::Void LKMCEEHNPDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_LKMCEEHNPDI_OFFSET))(this);
		}

		::System::Void OLLOEJBFFAB(::System::Collections::Generic::List_1<::KOIDMLPJGML*>* HNLPJABHFHO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KOIDMLPJGML*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_OLLOEJBFFAB_OFFSET))(this, HNLPJABHFHO);
		}

		::System::Void BAGEJLCAIMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_BAGEJLCAIMC_OFFSET))(this);
		}
	};
}
