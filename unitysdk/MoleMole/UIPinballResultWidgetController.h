#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class BDMAHLDAOGC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }

#define MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER_IKBNMCFNCFB_OFFSET UNITYSDK_OFFSET(0x147EBFA0)
#define MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x147EC100)
#define MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER_ONSETDATA_OFFSET UNITYSDK_OFFSET(0x147EC210)
#define MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x147EC190)
#define MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x147EBEC0)
#define MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x147EBF20)
#define MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x147EC840)
#define MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x147EC8A0)
#define MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER___BASE_ONSETDATA_OFFSET UNITYSDK_OFFSET(0x147EC930)
#define MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x147EC9C0)
#define MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x147ECA50)
#define MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x147ECAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballResultWidgetController_TypeDefinitionIndex = 63143;

	class UIPinballResultWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::BDMAHLDAOGC* _view; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnSetData(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER_ONSETDATA_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnSetData(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER___BASE_ONSETDATA_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void IKBNMCFNCFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLRESULTWIDGETCONTROLLER_IKBNMCFNCFB_OFFSET))(this);
		}
	};
}
