#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIActivityDuelBaseCardContainerWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class BEJMFMEDABH;
class CDGMBHGDCBK;
class HFFHPFCJGBO;
class NGJGLFFBIFB;
namespace MoleMole { class UIControlReference; }
namespace MoleMole::ScaryNight { class UIScaryNightInLevelBaseCardDraggingWidgetController; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_ADDDRAGLISTENER_OFFSET UNITYSDK_OFFSET(0x19F8B5E0)
#define MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_CLEARDRAGLISTENER_OFFSET UNITYSDK_OFFSET(0x19F8B380)
#define MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_CLOSECARDWIDGET_OFFSET UNITYSDK_OFFSET(0x19F8B1B0)
#define MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_DJKJAGHGLKP_OFFSET UNITYSDK_OFFSET(0x19F8B9D0)
#define MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_GET_TARGETCARDCOUNT_OFFSET UNITYSDK_OFFSET(0x19F8AD40)
#define MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_GET__HOLDER_OFFSET UNITYSDK_OFFSET(0x19F8ACE0)
#define MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19F8B140)
#define MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_LKBDIHAFIIM_OFFSET UNITYSDK_OFFSET(0x19F8BB10)
#define MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_OHNLLGEAHJD_OFFSET UNITYSDK_OFFSET(0x19F8BA70)
#define MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19F8B290)
#define MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19F8B330)
#define MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_OPENCARDWIDGET_OFFSET UNITYSDK_OFFSET(0x19F8AD50)
#define MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_PPFDPHLKKCJ_OFFSET UNITYSDK_OFFSET(0x19F8BBB0)
#define MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F8B890)
#define MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19F8B920)
#define MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19F8B9C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityDuelDepotWidgetController_TypeDefinitionIndex = 69557;

	class UIActivityDuelDepotWidgetController : public ::MoleMole::UIActivityDuelBaseCardContainerWidgetController
	{
	public:
		::System::Action_2<::BEJMFMEDABH*, ::UnityEngine::EventSystems::PointerEventData*>* EventCardBeginDrag; // 0x2E0
		::System::Action_3<::BEJMFMEDABH*, ::UnityEngine::EventSystems::PointerEventData*, ::System::Boolean>* EventCardEndDrag; // 0x2E8
		::System::Action_2<::BEJMFMEDABH*, ::UnityEngine::EventSystems::PointerEventData*>* EventCardDragReady; // 0x2F0
		::System::Action_2<::BEJMFMEDABH*, ::UnityEngine::EventSystems::PointerEventData*>* EventCardDragCancelReady; // 0x2F8
		::System::Collections::Generic::List_1<::MoleMole::ScaryNight::UIScaryNightInLevelBaseCardDraggingWidgetController*>* DKAELFLGKOA; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::NGJGLFFBIFB* get__holder()
		{
			return ((::NGJGLFFBIFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_GET__HOLDER_OFFSET))(this);
		}

		::System::Int32 get_TargetCardCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_GET_TARGETCARDCOUNT_OFFSET))(this);
		}

		::HFFHPFCJGBO* OpenCardWidget(::System::Int32 index)
		{
			return ((::HFFHPFCJGBO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_OPENCARDWIDGET_OFFSET))(this, index);
		}

		::System::Void CloseCardWidget(::HFFHPFCJGBO* card)
		{
			return ((::System::Void(*)(::PVOID, ::HFFHPFCJGBO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_CLOSECARDWIDGET_OFFSET))(this, card);
		}

		::CDGMBHGDCBK* get__viewModel()
		{
			return ((::CDGMBHGDCBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void ClearDragListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_CLEARDRAGLISTENER_OFFSET))(this);
		}

		::System::Void AddDragListener(::MoleMole::ScaryNight::UIScaryNightInLevelBaseCardDraggingWidgetController* draggingCard)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScaryNight::UIScaryNightInLevelBaseCardDraggingWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_ADDDRAGLISTENER_OFFSET))(this, draggingCard);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void DJKJAGHGLKP(::BEJMFMEDABH* KHGFAKJKDGG, ::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD, ::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Void(*)(::PVOID, ::BEJMFMEDABH*, ::UnityEngine::EventSystems::PointerEventData*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_DJKJAGHGLKP_OFFSET))(this, KHGFAKJKDGG, DIHNFECKHMD, NPPMJEIPMFC);
		}

		::System::Void OHNLLGEAHJD(::BEJMFMEDABH* KHGFAKJKDGG, ::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::BEJMFMEDABH*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_OHNLLGEAHJD_OFFSET))(this, KHGFAKJKDGG, DIHNFECKHMD);
		}

		::System::Void LKBDIHAFIIM(::BEJMFMEDABH* KHGFAKJKDGG, ::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::BEJMFMEDABH*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_LKBDIHAFIIM_OFFSET))(this, KHGFAKJKDGG, DIHNFECKHMD);
		}

		::System::Void PPFDPHLKKCJ(::BEJMFMEDABH* KHGFAKJKDGG, ::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::BEJMFMEDABH*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDUELDEPOTWIDGETCONTROLLER_PPFDPHLKKCJ_OFFSET))(this, KHGFAKJKDGG, DIHNFECKHMD);
		}
	};
}
