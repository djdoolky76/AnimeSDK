#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class LGHFGLMOPHC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIZenkovDataInfoWidgetController_Context; }
namespace MoleMole { class UIZenkovResultDataStartWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER_MGDEBFOPAOJ_OFFSET UNITYSDK_OFFSET(0x164F3720)
#define MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x164F3530)
#define MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x164F35C0)
#define MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x164F3460)
#define MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x164F34C0)
#define MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x164F3640)
#define MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x164F3A10)
#define MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x164F3A70)
#define MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x164F3B00)
#define MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x164F3B90)
#define MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x164F3C20)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDataInfoWidgetController_TypeDefinitionIndex = 88890;

	class UIZenkovDataInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::LGHFGLMOPHC* _view; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UIZenkovResultDataStartWidgetController*>* LIMKONFIDMC; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::MoleMole::UIZenkovDataInfoWidgetController_Context* dataContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovDataInfoWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, dataContext);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void MGDEBFOPAOJ(::System::Int32 CBNIAIGNDJF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDATAINFOWIDGETCONTROLLER_MGDEBFOPAOJ_OFFSET))(this, CBNIAIGNDJF);
		}
	};
}
