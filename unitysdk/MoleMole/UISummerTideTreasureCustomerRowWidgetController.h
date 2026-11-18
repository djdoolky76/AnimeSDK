#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class HCAIIGDODKM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISummerTideTreasureCustomerRowWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x148302A0)
#define MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1482FE70)
#define MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1482FF10)
#define MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x1482FFD0)
#define MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14830150)
#define MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14830160)
#define MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14830200)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureCustomerRowWidgetController_TypeDefinitionIndex = 84516;

	class UISummerTideTreasureCustomerRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::HCAIIGDODKM* OGMPOGIHBIK()
		{
			return ((::HCAIIGDODKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB(::MoleMole::UISummerTideTreasureCustomerRowWidgetController_Data* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISummerTideTreasureCustomerRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECUSTOMERROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
