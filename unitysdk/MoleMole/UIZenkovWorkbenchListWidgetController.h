#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/MoleMole/UIZenkovWorkbenchListWidgetController_TitleState.h"

class APEOIFAAPII;
class FEHDLBNAADP;
class IBENDELLLAO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIZenkovWorkbenchDialogPageController; }
namespace MoleMole { class UIZenkovWorkbenchRowWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_BINDBENCHNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x12FC2000)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_GET_ZENKOVWORKBENCHROW00_OFFSET UNITYSDK_OFFSET(0x12FC1AE0)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_GET_ZENKOVWORKBENCHROW01_OFFSET UNITYSDK_OFFSET(0x12FC1AF0)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_JALMLHHNAJM_OFFSET UNITYSDK_OFFSET(0x12FC2330)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_NBFGIBKNHNE_OFFSET UNITYSDK_OFFSET(0x12FC2340)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12FC1D00)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12FC1D90)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12FC1B00)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12FC1C90)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_PHJOFCGPFLE_OFFSET UNITYSDK_OFFSET(0x12FC2320)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x12FC1E20)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x12FC1E90)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_SETTITLESTATE_OFFSET UNITYSDK_OFFSET(0x12FC1F50)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12FC2080)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12FC20E0)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12FC2170)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12FC2200)
#define MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12FC2290)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWorkbenchListWidgetController_TypeDefinitionIndex = 82015;

	class UIZenkovWorkbenchListWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::FEHDLBNAADP* _view; // 0x2C8
		::APEOIFAAPII* CKOHJJLEOHB; // 0x2D0
		::System::Int32 AJMFBPDHBNL; // 0x2D8
		::System::Byte _padding0[0x4];
		::MoleMole::UIZenkovWorkbenchDialogPageController* NAHAGOPGBMI; // 0x2E0
		::MoleMole::UIZenkovWorkbenchRowWidgetController* _MMBOECGICFD_k__BackingField; // 0x2E8
		::MoleMole::UIZenkovWorkbenchRowWidgetController* _JIFBJGPJGAD_k__BackingField; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIZenkovWorkbenchRowWidgetController* get_ZenkovWorkbenchRow00()
		{
			return ((::MoleMole::UIZenkovWorkbenchRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_GET_ZENKOVWORKBENCHROW00_OFFSET))(this);
		}

		::MoleMole::UIZenkovWorkbenchRowWidgetController* get_ZenkovWorkbenchRow01()
		{
			return ((::MoleMole::UIZenkovWorkbenchRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_GET_ZENKOVWORKBENCHROW01_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetData(::MoleMole::UIZenkovWorkbenchDialogPageController* panel, ::APEOIFAAPII* bench, ::System::Int32 benchId)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovWorkbenchDialogPageController*, ::APEOIFAAPII*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_SETDATA_OFFSET))(this, panel, bench, benchId);
		}

		::System::Void SetText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_SETTEXT_OFFSET))(this, text);
		}

		::System::Void SetTitleState(::MoleMole::UIZenkovWorkbenchListWidgetController_TitleState state)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovWorkbenchListWidgetController_TitleState))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_SETTITLESTATE_OFFSET))(this, state);
		}

		::System::Void BindBenchNotification(::IBENDELLLAO* benchNode)
		{
			return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_BINDBENCHNOTIFICATION_OFFSET))(this, benchNode);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void PHJOFCGPFLE(::MoleMole::UIZenkovWorkbenchRowWidgetController* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovWorkbenchRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_PHJOFCGPFLE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void JALMLHHNAJM(::MoleMole::UIZenkovWorkbenchRowWidgetController* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovWorkbenchRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_JALMLHHNAJM_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void NBFGIBKNHNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHLISTWIDGETCONTROLLER_NBFGIBKNHNE_OFFSET))(this);
		}
	};
}
