#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class HHDKMGACFDG;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIZenkovRandomEventInfoTabBtnWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIZENKOVRANDOMEVENTINFOTABBTNWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x18F6DAA0)
#define MOLEMOLE_UIZENKOVRANDOMEVENTINFOTABBTNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18F6D670)
#define MOLEMOLE_UIZENKOVRANDOMEVENTINFOTABBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18F6D710)
#define MOLEMOLE_UIZENKOVRANDOMEVENTINFOTABBTNWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x18F6D7D0)
#define MOLEMOLE_UIZENKOVRANDOMEVENTINFOTABBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F6D950)
#define MOLEMOLE_UIZENKOVRANDOMEVENTINFOTABBTNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18F6D960)
#define MOLEMOLE_UIZENKOVRANDOMEVENTINFOTABBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18F6DA00)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovRandomEventInfoTabBtnWidgetController_TypeDefinitionIndex = 51395;

	class UIZenkovRandomEventInfoTabBtnWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANDOMEVENTINFOTABBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANDOMEVENTINFOTABBTNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANDOMEVENTINFOTABBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANDOMEVENTINFOTABBTNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANDOMEVENTINFOTABBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void PDKCHDBODJB(::MoleMole::UIZenkovRandomEventInfoTabBtnWidgetController_Data* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovRandomEventInfoTabBtnWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANDOMEVENTINFOTABBTNWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, LJBPECKCCEA);
		}

		::HHDKMGACFDG* OGMPOGIHBIK()
		{
			return ((::HHDKMGACFDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRANDOMEVENTINFOTABBTNWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
