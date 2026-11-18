#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class HGAJKHIMKJP;
class MFFALNLDPBH;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIMainCityRewardTipsWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_ADDPREVIEWCOMMONREWARD_OFFSET UNITYSDK_OFFSET(0x1870E120)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1870E0A0)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_FORCEPLAY_OFFSET UNITYSDK_OFFSET(0x1870DE30)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_GETREWARDTIPSWIDGET_OFFSET UNITYSDK_OFFSET(0x1870E4E0)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_HEGOBNKDJNO_OFFSET UNITYSDK_OFFSET(0x155E0B40)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_INITTIPSWIDGET_OFFSET UNITYSDK_OFFSET(0x1870E7B0)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1870DFF0)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_JMEDIPMBAGD_OFFSET UNITYSDK_OFFSET(0x155E0D40)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_KBJAKNJEIIB_OFFSET UNITYSDK_OFFSET(0x155E0AD0)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1870DA80)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1870DAD0)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1870D890)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_PAUSE_OFFSET UNITYSDK_OFFSET(0x1870DD60)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_PHLCGLOLJKD_OFFSET UNITYSDK_OFFSET(0x155E0A40)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_PLAY_OFFSET UNITYSDK_OFFSET(0x1870DCC0)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_PREVIEWCLEARCOMMONREWARDS_OFFSET UNITYSDK_OFFSET(0x1870E280)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_PREVIEWCOMMONREWARDS_OFFSET UNITYSDK_OFFSET(0x1870E2F0)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_RECYLEREWARDTIPWIDGET_OFFSET UNITYSDK_OFFSET(0x1870E3B0)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_REFRESHTIPSWIDGET_OFFSET UNITYSDK_OFFSET(0x1870E930)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x155E0740)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x155E0890)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x155E0920)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x155E09B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRewardTipsWidgetController_TypeDefinitionIndex = 89416;

	class UIRewardTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIMainCityRewardTipsWidgetController*>* cacheWidgetList; // 0x2C8
		::MFFALNLDPBH* animHandler; // 0x2D0
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* previewDataList; // 0x2D8
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* AECHNIIOHLI; // 0x2E0
		::System::Action* DIIMPPOAGAE; // 0x2E8
		::System::Boolean NCKCKOHHMOE; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Play(::System::Action* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_PLAY_OFFSET))(this, onComplete);
		}

		::System::Void ForcePlay(::System::Int32 id, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_FORCEPLAY_OFFSET))(this, id, count);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_PAUSE_OFFSET))(this);
		}

		::System::Void Interrupt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_INTERRUPT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_CLEAR_OFFSET))(this);
		}

		::System::Void AddPreviewCommonReward(::System::Int32 itemID, ::System::Int32 itemCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_ADDPREVIEWCOMMONREWARD_OFFSET))(this, itemID, itemCount);
		}

		::System::Void PreviewClearCommonRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_PREVIEWCLEARCOMMONREWARDS_OFFSET))(this);
		}

		::System::Void PreviewCommonRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_PREVIEWCOMMONREWARDS_OFFSET))(this);
		}

		::System::Void RecyleRewardTipWidget(::MoleMole::UIWidgetController* targetWidget, ::System::Action* fadeOutCallback, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_RECYLEREWARDTIPWIDGET_OFFSET))(this, targetWidget, fadeOutCallback, animSpeed);
		}

		::MoleMole::UIWidgetController* GetRewardTipsWidget()
		{
			return ((::MoleMole::UIWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_GETREWARDTIPSWIDGET_OFFSET))(this);
		}

		::System::Void InitTipsWidget(::MoleMole::UIWidgetController* refWidget, ::HGAJKHIMKJP* itemData, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*, ::HGAJKHIMKJP*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_INITTIPSWIDGET_OFFSET))(this, refWidget, itemData, animSpeed);
		}

		::System::Void RefreshTipsWidget(::MoleMole::UIWidgetController* refWidget, ::HGAJKHIMKJP* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_REFRESHTIPSWIDGET_OFFSET))(this, refWidget, itemData);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void PHLCGLOLJKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_PHLCGLOLJKD_OFFSET))(this);
		}

		::System::Void KBJAKNJEIIB(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_KBJAKNJEIIB_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void HEGOBNKDJNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_HEGOBNKDJNO_OFFSET))(this);
		}

		::System::Void JMEDIPMBAGD(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER_JMEDIPMBAGD_OFFSET))(this, KOIBHLHLMFC);
		}
	};
}
