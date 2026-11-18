#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class BLFHMIMNHMM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISwitchTeamBattleLevelRowWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x13BBAC40)
#define MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13BBA790)
#define MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13BBA830)
#define MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x13BBA8F0)
#define MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13BBAAF0)
#define MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13BBAB00)
#define MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13BBABA0)

namespace MoleMole
{
	inline static constexpr unsigned int UISwitchTeamBattleLevelRowWidgetController_TypeDefinitionIndex = 76171;

	class UISwitchTeamBattleLevelRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::BLFHMIMNHMM* OGMPOGIHBIK()
		{
			return ((::BLFHMIMNHMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB(::MoleMole::UISwitchTeamBattleLevelRowWidgetController_Data* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISwitchTeamBattleLevelRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISWITCHTEAMBATTLELEVELROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
