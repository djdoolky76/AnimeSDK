#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEEMNKNHHAP.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class BJHFBCHDHCP;
class NBBPBGCCCBN;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }

#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x17EE1A40)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONCLICKMOVIE_OFFSET UNITYSDK_OFFSET(0x17EE1A90)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17EE1790)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17EE18A0)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17EE1820)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17EE15D0)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17EE1630)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_SETMOVIESELECT_OFFSET UNITYSDK_OFFSET(0x16659970)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_SETMOVIESTATE_OFFSET UNITYSDK_OFFSET(0x16659760)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x166599E0)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x166599F0)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16659A80)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16659B20)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16659BB0)
#define MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16659C40)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaMovieWidgetController_TypeDefinitionIndex = 42842;

	class UICinemaMovieWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::BJHFBCHDHCP* _view; // 0x2F8
		::NBBPBGCCCBN* singleLevelData; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::BJHFBCHDHCP* GetView()
		{
			return ((::BJHFBCHDHCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void OnClickMovie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_ONCLICKMOVIE_OFFSET))(this);
		}

		::System::Void SetMovieState(::EEEMNKNHHAP state)
		{
			return ((::System::Void(*)(::PVOID, ::EEEMNKNHHAP))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_SETMOVIESTATE_OFFSET))(this, state);
		}

		::System::Void SetMovieSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER_SETMOVIESELECT_OFFSET))(this, isSelect);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAMOVIEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
