#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class EFLKJFJEPML;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIRectRoleCardWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIRECTROLECARDWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x147FE620)
#define MOLEMOLE_UIRECTROLECARDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x147FDE00)
#define MOLEMOLE_UIRECTROLECARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x147FDEA0)
#define MOLEMOLE_UIRECTROLECARDWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x147FE4A0)
#define MOLEMOLE_UIRECTROLECARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x147FE690)
#define MOLEMOLE_UIRECTROLECARDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x147FE6A0)
#define MOLEMOLE_UIRECTROLECARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x147FE740)

namespace MoleMole
{
	inline static constexpr unsigned int UIRectRoleCardWidgetController_TypeDefinitionIndex = 65032;

	class UIRectRoleCardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECTROLECARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECTROLECARDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECTROLECARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECTROLECARDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECTROLECARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void PDKCHDBODJB(::MoleMole::UIRectRoleCardWidgetController_Data* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRectRoleCardWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECTROLECARDWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, LJBPECKCCEA);
		}

		::EFLKJFJEPML* OGMPOGIHBIK()
		{
			return ((::EFLKJFJEPML*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECTROLECARDWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
