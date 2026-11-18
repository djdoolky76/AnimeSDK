#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class FMLGMCONPAD;
class ODNBJIEICJH;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFlowerMainTargetImgWidgetController; }
namespace MoleMole { class UIFlowerMainTargetRoleWidgetController; }
namespace MoleMole { class UIFlowerMain_LeftWidgetController_Context; }
namespace MoleMole { class UIFlowerMain_LeftWidgetController_ViewModel; }

#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_BJKGNPHBHLG_OFFSET UNITYSDK_OFFSET(0x180209B0)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_FLBMBPEBOAE_OFFSET UNITYSDK_OFFSET(0x18021070)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_GBCIOIMAIJL_OFFSET UNITYSDK_OFFSET(0x180205F0)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x18020BF0)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_LFOBOALJGLG_OFFSET UNITYSDK_OFFSET(0x18020790)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_MMDFMBHMLGJ_OFFSET UNITYSDK_OFFSET(0x18020630)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18020B60)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x180206A0)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18020CB0)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x180204F0)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18020D30)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x18020D90)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18020E20)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18020EB0)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18020F50)
#define MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18020FE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_LeftWidgetController_TypeDefinitionIndex = 58714;

	class UIFlowerMain_LeftWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::FMLGMCONPAD* _view; // 0x2C8
		::MoleMole::UIFlowerMain_LeftWidgetController_Context* DAAAEJDBNFI; // 0x2D0
		::MoleMole::UIFlowerMain_LeftWidgetController_ViewModel* FFDBFAEKDCL; // 0x2D8
		::ODNBJIEICJH* FPFDBCJDECN; // 0x2E0
		::ODNBJIEICJH* OIMHJPLKABL; // 0x2E8
		::MoleMole::UIFlowerMainTargetRoleWidgetController* KEMEGHBBJOO; // 0x2F0
		::MoleMole::UIFlowerMainTargetImgWidgetController* FCLJCOMPAHC; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void LFOBOALJGLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_LFOBOALJGLG_OFFSET))(this);
		}

		::System::Void FLBMBPEBOAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_FLBMBPEBOAE_OFFSET))(this);
		}

		::System::Void BJKGNPHBHLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_BJKGNPHBHLG_OFFSET))(this);
		}

		::System::Void MMDFMBHMLGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_MMDFMBHMLGJ_OFFSET))(this);
		}

		::System::Void GBCIOIMAIJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_LEFTWIDGETCONTROLLER_GBCIOIMAIJL_OFFSET))(this);
		}
	};
}
