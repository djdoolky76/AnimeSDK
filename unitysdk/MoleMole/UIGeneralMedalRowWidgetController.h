#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class FCLFGJFPFIB;
class JFDMHLOBDGB;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALMEDALROWWIDGETCONTROLLER_CLEARMEDAL_OFFSET UNITYSDK_OFFSET(0x18E53030)
#define MOLEMOLE_UIGENERALMEDALROWWIDGETCONTROLLER_GET_HASMEDAL_OFFSET UNITYSDK_OFFSET(0x18E52C00)
#define MOLEMOLE_UIGENERALMEDALROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x18E52CB0)
#define MOLEMOLE_UIGENERALMEDALROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18E52D20)
#define MOLEMOLE_UIGENERALMEDALROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18E52DC0)
#define MOLEMOLE_UIGENERALMEDALROWWIDGETCONTROLLER_REFRESHMEDAL_OFFSET UNITYSDK_OFFSET(0x18E52F80)
#define MOLEMOLE_UIGENERALMEDALROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18E530D0)
#define MOLEMOLE_UIGENERALMEDALROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18E53130)
#define MOLEMOLE_UIGENERALMEDALROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18E531D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralMedalRowWidgetController_TypeDefinitionIndex = 88813;

	class UIGeneralMedalRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMEDALROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasMedal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMEDALROWWIDGETCONTROLLER_GET_HASMEDAL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMEDALROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMEDALROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshMedal(::JFDMHLOBDGB* friendSystemMedalData, ::System::Action_1<::JFDMHLOBDGB*>* onClickMedalBtn)
		{
			return ((::System::Void(*)(::PVOID, ::JFDMHLOBDGB*, ::System::Action_1<::JFDMHLOBDGB*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMEDALROWWIDGETCONTROLLER_REFRESHMEDAL_OFFSET))(this, friendSystemMedalData, onClickMedalBtn);
		}

		::System::Void ClearMedal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMEDALROWWIDGETCONTROLLER_CLEARMEDAL_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMEDALROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMEDALROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::FCLFGJFPFIB* OGMPOGIHBIK()
		{
			return ((::FCLFGJFPFIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMEDALROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
