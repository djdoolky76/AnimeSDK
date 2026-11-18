#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class CJGJNLHEKIC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1890A840)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_JPAOIOHEHMF_OFFSET UNITYSDK_OFFSET(0x1890B1E0)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1890AB60)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1890A850)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1890ABD0)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1890AC80)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1890A8F0)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_SETVIEWRADARCHARTLIST_OFFSET UNITYSDK_OFFSET(0x1890AE30)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1890AD80)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1890AFD0)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1890AFE0)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1890B080)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1890B090)
#define MOLEMOLE_UICINEMAREPORTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1890B150)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaReportPageController_TypeDefinitionIndex = 43867;

	class UICinemaReportPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void SetViewRadarChartList(::System::Collections::Generic::List_1<::System::Single>* setValueList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_SETVIEWRADARCHARTLIST_OFFSET))(this, setValueList);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::CJGJNLHEKIC* OGMPOGIHBIK()
		{
			return ((::CJGJNLHEKIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void JPAOIOHEHMF(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREPORTPAGECONTROLLER_JPAOIOHEHMF_OFFSET))(this, KOIBHLHLMFC);
		}
	};
}
