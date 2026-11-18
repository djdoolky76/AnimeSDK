#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class KGLEANEGJGI;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIZenkovMissionLeftTabWidgetController_Data; }
namespace MoleMole { class UIZenkovMissionLeftTabWidgetController_ZkMapViewData; }
namespace System { class Object; }

#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_GETDATA_OFFSET UNITYSDK_OFFSET(0x18F6CC60)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_GETMAPID_OFFSET UNITYSDK_OFFSET(0x18F6CF30)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x18F6D0C0)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x18F6CE10)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18F6C970)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18F6CA10)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x18F6CAD0)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_REFRESHMISSIONPOPUP_OFFSET UNITYSDK_OFFSET(0x18F6D160)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_REFRESHPANEL_OFFSET UNITYSDK_OFFSET(0x18F6D200)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_UPDATEBACKGROUND_OFFSET UNITYSDK_OFFSET(0x18F6CE80)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F6D410)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18F6D420)
#define MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18F6D4C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovMissionLeftTabWidgetController_TypeDefinitionIndex = 66431;

	class UIZenkovMissionLeftTabWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::MoleMole::UIZenkovMissionLeftTabWidgetController_ZkMapViewData* GetData()
		{
			return ((::MoleMole::UIZenkovMissionLeftTabWidgetController_ZkMapViewData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_GETDATA_OFFSET))(this);
		}

		::System::Void UpdateBackground(::System::Boolean needFrameAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_UPDATEBACKGROUND_OFFSET))(this, needFrameAnim);
		}

		::System::Int32 GetMapId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_GETMAPID_OFFSET))(this);
		}

		::System::Boolean IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_ISLOCKED_OFFSET))(this);
		}

		::System::Void RefreshMissionPopup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_REFRESHMISSIONPOPUP_OFFSET))(this);
		}

		::System::Void RefreshPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_REFRESHPANEL_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void PDKCHDBODJB(::MoleMole::UIZenkovMissionLeftTabWidgetController_Data* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovMissionLeftTabWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, LJBPECKCCEA);
		}

		::KGLEANEGJGI* OGMPOGIHBIK()
		{
			return ((::KGLEANEGJGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONLEFTTABWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
