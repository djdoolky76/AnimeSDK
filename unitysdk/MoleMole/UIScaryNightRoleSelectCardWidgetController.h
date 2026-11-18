#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class EFGOLBIEJKD;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISCARYNIGHTROLESELECTCARDWIDGETCONTROLLER_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x148100E0)
#define MOLEMOLE_UISCARYNIGHTROLESELECTCARDWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x14810070)
#define MOLEMOLE_UISCARYNIGHTROLESELECTCARDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1480FD90)
#define MOLEMOLE_UISCARYNIGHTROLESELECTCARDWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1480FE30)
#define MOLEMOLE_UISCARYNIGHTROLESELECTCARDWIDGETCONTROLLER_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x14810180)
#define MOLEMOLE_UISCARYNIGHTROLESELECTCARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14810230)
#define MOLEMOLE_UISCARYNIGHTROLESELECTCARDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14810290)
#define MOLEMOLE_UISCARYNIGHTROLESELECTCARDWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14810330)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightRoleSelectCardWidgetController_TypeDefinitionIndex = 39289;

	class UIScaryNightRoleSelectCardWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTROLESELECTCARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTROLESELECTCARDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTROLESELECTCARDWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Int32 get_AvatarID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTROLESELECTCARDWIDGETCONTROLLER_GET_AVATARID_OFFSET))(this);
		}

		::System::Void SetSelected(::System::Boolean selected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTROLESELECTCARDWIDGETCONTROLLER_SETSELECTED_OFFSET))(this, selected);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTROLESELECTCARDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTROLESELECTCARDWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::EFGOLBIEJKD* OGMPOGIHBIK()
		{
			return ((::EFGOLBIEJKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTROLESELECTCARDWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
