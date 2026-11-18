#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJMJOBMIJLD.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/OKKIMONLGJD.h"

class KOIDMLPJGML;
class PAIMJHDJFJA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIZenkovItemIconBtnWidgetController; }
namespace MoleMole { class UIZenkovWishListDialogRowWidgetController_ItemData; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ALOEGNBCLFK_OFFSET UNITYSDK_OFFSET(0x12869B90)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ANDGIKOAICJ_OFFSET UNITYSDK_OFFSET(0x12868FF0)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_GETSRCID_OFFSET UNITYSDK_OFFSET(0x128696B0)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_GETSRCTYPE_OFFSET UNITYSDK_OFFSET(0x12869650)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x12869520)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12868C30)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x128695D0)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x12869570)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12868D50)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12868CC0)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12868900)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_SETITEMCLICKACTION_OFFSET UNITYSDK_OFFSET(0x12869710)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12869760)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x128697F0)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12869800)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x12869890)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x12869940)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x128699D0)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12869A70)
#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12869B00)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWishListDialogRowWidgetController_TypeDefinitionIndex = 49950;

	class UIZenkovWishListDialogRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::Int32 MDGEHACAMEB = 0x4; // 0x0
		::PAIMJHDJFJA* _view; // 0x2F8
		::MoleMole::UIZenkovWishListDialogRowWidgetController_ItemData* EIEFOCPBPAB; // 0x300
		::UnityEngine::GameObject* EODOBOJHBEE; // 0x308
		::System::Action_1<::System::Int32>* HOFLCHEGGMC; // 0x310
		::System::Collections::Generic::List_1<::MoleMole::UIZenkovItemIconBtnWidgetController*>* MMBCKHMALOO; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::OKKIMONLGJD result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::HJMJOBMIJLD GetSrcType()
		{
			return ((::HJMJOBMIJLD(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_GETSRCTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSrcId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_GETSRCID_OFFSET))(this);
		}

		::System::Void SetItemClickAction(::System::Action_1<::System::Int32>* onItemClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_SETITEMCLICKACTION_OFFSET))(this, onItemClick);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::OKKIMONLGJD P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void ALOEGNBCLFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ALOEGNBCLFK_OFFSET))(this);
		}

		::System::Void ANDGIKOAICJ(::System::Collections::Generic::List_1<::KOIDMLPJGML*>* HNLPJABHFHO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KOIDMLPJGML*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ANDGIKOAICJ_OFFSET))(this, HNLPJABHFHO);
		}
	};
}
