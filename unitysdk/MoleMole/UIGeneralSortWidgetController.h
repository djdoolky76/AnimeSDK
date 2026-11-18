#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIHHMALKNLE.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/NLLAEGMBGNN.h"
#include "unitysdk/FONOPBIBMOD.h"
#include "unitysdk/GPBNJFPLDME.h"
#include "unitysdk/UnityEngine/Vector2.h"

class DEGIHKLKKFG;
class GIEMFJONNKB;
class LGINJIKKBJA;
class MAAOANNFKKK;
class NKJLHJMFGGD;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralFilterPopContext; }
namespace MoleMole { class UIGeneralFilterPopWindowController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_BILIKILAOAA_OFFSET UNITYSDK_OFFSET(0x16EEC170)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GENERATESORTERLIST_OFFSET UNITYSDK_OFFSET(0x16EEA830)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GETFILTERBTN_OFFSET UNITYSDK_OFFSET(0x16EEA8B0)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x16EEA910)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GET_POPWINDOW_OFFSET UNITYSDK_OFFSET(0x16EEA750)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GET_SELECTEDSORTOPTIONSTATE_OFFSET UNITYSDK_OFFSET(0x16EEA730)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GET_SELECTEDSORTOPTIONSUBTYPE_OFFSET UNITYSDK_OFFSET(0x16EEA710)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GET_SELECTEDSORTOPTION_OFFSET UNITYSDK_OFFSET(0x16EEA6F0)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_ISFILTERACTIVE_OFFSET UNITYSDK_OFFSET(0x16EEB530)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_NFFJCOALFOF_OFFSET UNITYSDK_OFFSET(0x16EEC140)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EEB9C0)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EEBA50)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EEB640)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16EEB890)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_REFRESHSORTOPTIONS_OFFSET UNITYSDK_OFFSET(0x16EEA7B0)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16EEAF40)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_RESETALL_OFFSET UNITYSDK_OFFSET(0x16EEB360)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_SETCHILDSIZE_OFFSET UNITYSDK_OFFSET(0x16EEA920)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_SETCONSOLEKEY_OFFSET UNITYSDK_OFFSET(0x16EEAA50)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_SETFILTERINSTANCE_OFFSET UNITYSDK_OFFSET(0x16EEA760)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_SETFILTERSTATE_OFFSET UNITYSDK_OFFSET(0x16EEBAD0)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16EEBDE0)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EEBF00)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EEBF90)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EEC020)
#define MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16EEC0B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralSortWidgetController_TypeDefinitionIndex = 50803;

	class UIGeneralSortWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MAAOANNFKKK* _view; // 0x2C8
		::System::Action* DIODDBPBMOI; // 0x2D0
		::System::Action_1<::System::Int32>* GFFJBFMOFHD; // 0x2D8
		::System::Action* DEODNMFGBLN; // 0x2E0
		::System::Action* MADNACIFFPG; // 0x2E8
		::DEGIHKLKKFG* HNAIHAEHFEO; // 0x2F0
		::System::Collections::Generic::List_1<::GIEMFJONNKB*>* ToggleInfos; // 0x2F8
		::MoleMole::UIGeneralFilterPopContext* BBJOEGIHAKK; // 0x300
		::MoleMole::UIGeneralFilterPopWindowController* GHLFIBDPIBK; // 0x308
		::NKJLHJMFGGD* EFFAONJBCOG; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::NLLAEGMBGNN get_SelectedSortOption()
		{
			return ((::NLLAEGMBGNN(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GET_SELECTEDSORTOPTION_OFFSET))(this);
		}

		::System::Int32 get_SelectedSortOptionSubtype()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GET_SELECTEDSORTOPTIONSUBTYPE_OFFSET))(this);
		}

		::FONOPBIBMOD get_SelectedSortOptionState()
		{
			return ((::FONOPBIBMOD(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GET_SELECTEDSORTOPTIONSTATE_OFFSET))(this);
		}

		::MoleMole::UIGeneralFilterPopWindowController* get_PopWindow()
		{
			return ((::MoleMole::UIGeneralFilterPopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GET_POPWINDOW_OFFSET))(this);
		}

		::System::Void SetFilterInstance(::DEGIHKLKKFG* instance)
		{
			return ((::System::Void(*)(::PVOID, ::DEGIHKLKKFG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_SETFILTERINSTANCE_OFFSET))(this, instance);
		}

		::System::Void RefreshSortOptions(::Il2CppArray<::GPBNJFPLDME>* nextSortOptions, ::FONOPBIBMOD defaultState, ::System::Boolean tryToKeepOptionUnchanged)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::GPBNJFPLDME>*, ::FONOPBIBMOD, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_REFRESHSORTOPTIONS_OFFSET))(this, nextSortOptions, defaultState, tryToKeepOptionUnchanged);
		}

		::System::Collections::Generic::List_1<::NLLAEGMBGNN>* GenerateSorterList(::System::Collections::Generic::IList_1<::NLLAEGMBGNN>* confignedSorters, ::NLLAEGMBGNN& inverseSort, ::System::Collections::Generic::IList_1<::NLLAEGMBGNN>* highPriorityConfignedSorters)
		{
			return ((::System::Collections::Generic::List_1<::NLLAEGMBGNN>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::NLLAEGMBGNN>*, ::NLLAEGMBGNN&, ::System::Collections::Generic::IList_1<::NLLAEGMBGNN>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GENERATESORTERLIST_OFFSET))(this, confignedSorters, inverseSort, highPriorityConfignedSorters);
		}

		::LGINJIKKBJA* GetFilterBtn()
		{
			return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GETFILTERBTN_OFFSET))(this);
		}

		::DEGIHKLKKFG* get_Instance()
		{
			return ((::DEGIHKLKKFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_GET_INSTANCE_OFFSET))(this);
		}

		::System::Void SetChildSize(::UnityEngine::Vector2 anchorPos, ::UnityEngine::Vector2 size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_SETCHILDSIZE_OFFSET))(this, anchorPos, size);
		}

		::System::Void SetConsoleKey(::MoleMole::InputLogicEventType logicEventType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_SETCONSOLEKEY_OFFSET))(this, logicEventType);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void ResetAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_RESETALL_OFFSET))(this);
		}

		::System::Boolean IsFilterActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_ISFILTERACTIVE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetFilterState(::System::Int32 groupIdx, ::System::Int32 dataIdx, ::System::Boolean state, ::GIHHMALKNLE type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::GIHHMALKNLE))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_SETFILTERSTATE_OFFSET))(this, groupIdx, dataIdx, state, type);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void NFFJCOALFOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_NFFJCOALFOF_OFFSET))(this);
		}

		::System::Void BILIKILAOAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETCONTROLLER_BILIKILAOAA_OFFSET))(this);
		}
	};
}
