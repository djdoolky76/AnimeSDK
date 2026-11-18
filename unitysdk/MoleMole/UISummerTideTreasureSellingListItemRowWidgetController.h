#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class ACBOKCIMPLP;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISummerTideTreasureSellingListItemRowWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_GET_DATAVALUE_OFFSET UNITYSDK_OFFSET(0x16917000)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x16917140)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x169171B0)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16917250)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x169175F0)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x169176A0)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x169176B0)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16917750)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingListItemRowWidgetController_TypeDefinitionIndex = 38660;

	class UISummerTideTreasureSellingListItemRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UISummerTideTreasureSellingListItemRowWidgetController_Data* get_DataValue()
		{
			return ((::MoleMole::UISummerTideTreasureSellingListItemRowWidgetController_Data*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_GET_DATAVALUE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::ACBOKCIMPLP* OGMPOGIHBIK()
		{
			return ((::ACBOKCIMPLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB(::MoleMole::UISummerTideTreasureSellingListItemRowWidgetController_Data* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISummerTideTreasureSellingListItemRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
