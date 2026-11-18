#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class GACFLIICJFD;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_DKACPADBENC_OFFSET UNITYSDK_OFFSET(0x14BFE7A0)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_EIGBMEJCAAI_OFFSET UNITYSDK_OFFSET(0x14BFE0F0)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14BFDD90)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14BFDE20)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14BFE1E0)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14BFDA50)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14BFDD20)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_SAMPLE_OFFSET UNITYSDK_OFFSET(0x14BFE260)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_SETWIDTH_OFFSET UNITYSDK_OFFSET(0x14BFE370)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14BFE420)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14BFE4C0)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14BFE550)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14BFE5F0)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14BFE680)
#define MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14BFE710)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotTrailWidgetController_TypeDefinitionIndex = 78246;

	class UIActivityHotpotTrailWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::GACFLIICJFD* _view; // 0x2C8
		::System::String* BAENNHHMHNC; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Sample(::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_SAMPLE_OFFSET))(this, ratio);
		}

		::System::Void SetWidth(::System::Single width)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_SETWIDTH_OFFSET))(this, width);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void DKACPADBENC(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_DKACPADBENC_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void EIGBMEJCAAI(::System::Boolean NDHBPDFNOGP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTTRAILWIDGETCONTROLLER_EIGBMEJCAAI_OFFSET))(this, NDHBPDFNOGP);
		}
	};
}
