#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class BODMJDEMHKN;
class OCLLKJMICKK;
class PKPEEFCLMCH;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Sprite; }

#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_HAAIEKALNLM_OFFSET UNITYSDK_OFFSET(0x1EF379F0)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_NIMGJBNPILJ_OFFSET UNITYSDK_OFFSET(0x1EF36BE0)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1EF36930)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1EF36AC0)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1EF36E80)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1EF36DF0)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1EF367C0)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1EF368B0)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_PMLNPLMBEOC_OFFSET UNITYSDK_OFFSET(0x1EF37A00)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF37670)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1EF37680)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1EF37710)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1EF377A0)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1EF37840)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1EF378D0)
#define MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1EF37960)

namespace MoleMole
{
	inline static constexpr unsigned int UICpSelectItemWidgetController_TypeDefinitionIndex = 96513;

	class UICpSelectItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::PKPEEFCLMCH* _view; // 0x2F8
		::BODMJDEMHKN* EHFBAPOFEDN; // 0x300
		::MoleMole::UIGeneralPopUpHintWidgetController* OCAMNDBGALP; // 0x308
		::System::Boolean FIPMEKJKKBM; // 0x310
		::System::Byte _padding0[0x7];
		::System::Func_2<::Foundation::AssetPath, ::UnityEngine::Sprite*>* KLHMFOOHHAD; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void NIMGJBNPILJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_NIMGJBNPILJ_OFFSET))(this);
		}

		::System::Void HAAIEKALNLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_HAAIEKALNLM_OFFSET))(this);
		}

		::OCLLKJMICKK* PMLNPLMBEOC()
		{
			return ((::OCLLKJMICKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSELECTITEMWIDGETCONTROLLER_PMLNPLMBEOC_OFFSET))(this);
		}
	};
}
