#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class HAMGKJCMGNP;
class IODHKENMIFH;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_DGKNPGHDNEN_OFFSET UNITYSDK_OFFSET(0x184B51E0)
#define MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_INFNOCPBEEK_OFFSET UNITYSDK_OFFSET(0x184B5B00)
#define MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184B4FB0)
#define MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x184B50C0)
#define MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184B5040)
#define MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184B4EA0)
#define MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x184B58A0)
#define MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184B58B0)
#define MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x184B5940)
#define MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184B59E0)
#define MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184B5A70)

namespace MoleMole
{
	inline static constexpr unsigned int UIExplorationMissionWidgetController_TypeDefinitionIndex = 64347;

	class UIExplorationMissionWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::IODHKENMIFH* _view; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void DGKNPGHDNEN(::HAMGKJCMGNP* LGDIGHANHIP)
		{
			return ((::System::Void(*)(::PVOID, ::HAMGKJCMGNP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_DGKNPGHDNEN_OFFSET))(this, LGDIGHANHIP);
		}

		::System::Void INFNOCPBEEK(::UnityEngine::UI::Extension::UITimeWidget* EIFONLCJOPG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPLORATIONMISSIONWIDGETCONTROLLER_INFNOCPBEEK_OFFSET))(this, EIFONLCJOPG);
		}
	};
}
