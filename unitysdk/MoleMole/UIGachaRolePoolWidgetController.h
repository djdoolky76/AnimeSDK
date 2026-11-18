#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"

class OLKLFNKHLIF;
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_BINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1802BA10)
#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_ILBPOJOHJPE_OFFSET UNITYSDK_OFFSET(0x1802DEF0)
#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_INITROLEINDEX_OFFSET UNITYSDK_OFFSET(0x1802B820)
#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1802DB60)
#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1802DBF0)
#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1802D990)
#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1802DC70)
#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_SETSELECT_OFFSET UNITYSDK_OFFSET(0x1802B870)
#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1802DCE0)
#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1802DD40)
#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1802DDD0)
#define MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1802DE60)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaRolePoolWidgetController_TypeDefinitionIndex = 79018;

	class UIGachaRolePoolWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::OLKLFNKHLIF* _view; // 0x2C8
		::System::Action_1<::MoleMole::UIGachaRolePoolWidgetController*>* PLGLKDMLBLE; // 0x2D0
		::UnityEngine::Color DIDJCCNBNNI; // 0x2D8
		::UnityEngine::Color AJBPGFGBFBB; // 0x2E8
		::System::Int32 roleIndex; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitRoleIndex(::System::Int32 roleIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_INITROLEINDEX_OFFSET))(this, roleIndex);
		}

		::System::Void SetSelect(::System::Boolean select)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_SETSELECT_OFFSET))(this, select);
		}

		::System::Void SetInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_SETINTERACTABLE_OFFSET))(this, interactable);
		}

		::System::Void BindCallback(::System::Action_1<::MoleMole::UIGachaRolePoolWidgetController*>* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIGachaRolePoolWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_BINDCALLBACK_OFFSET))(this, cb);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void ILBPOJOHJPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLWIDGETCONTROLLER_ILBPOJOHJPE_OFFSET))(this);
		}
	};
}
