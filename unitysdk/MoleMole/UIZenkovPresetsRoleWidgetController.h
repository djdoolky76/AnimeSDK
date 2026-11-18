#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class AOIPOJNOLJO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIZenkovPresetsRoleWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_GETDATA_OFFSET UNITYSDK_OFFSET(0xEB23BF0)
#define MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0xEB23D60)
#define MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xEB238A0)
#define MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xEB23940)
#define MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0xEB23A00)
#define MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xEB23DD0)
#define MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xEB23DE0)
#define MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xEB23E80)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPresetsRoleWidgetController_TypeDefinitionIndex = 42731;

	class UIZenkovPresetsRoleWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::MoleMole::UIZenkovPresetsRoleWidgetController_Data* GetData()
		{
			return ((::MoleMole::UIZenkovPresetsRoleWidgetController_Data*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_GETDATA_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::AOIPOJNOLJO* OGMPOGIHBIK()
		{
			return ((::AOIPOJNOLJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB(::MoleMole::UIZenkovPresetsRoleWidgetController_Data* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovPresetsRoleWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROLEWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
