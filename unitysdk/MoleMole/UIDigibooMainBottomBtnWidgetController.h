#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class EEHLBNPKKPM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIDigibooMainBottomBtnWidgetController_Context; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIDIGIBOOMAINBOTTOMBTNWIDGETCONTROLLER_MHBCDAIJGCE_OFFSET UNITYSDK_OFFSET(0x198584F0)
#define MOLEMOLE_UIDIGIBOOMAINBOTTOMBTNWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x198580D0)
#define MOLEMOLE_UIDIGIBOOMAINBOTTOMBTNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19857DB0)
#define MOLEMOLE_UIDIGIBOOMAINBOTTOMBTNWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19857F10)
#define MOLEMOLE_UIDIGIBOOMAINBOTTOMBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19857E50)
#define MOLEMOLE_UIDIGIBOOMAINBOTTOMBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19858140)
#define MOLEMOLE_UIDIGIBOOMAINBOTTOMBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x198582C0)
#define MOLEMOLE_UIDIGIBOOMAINBOTTOMBTNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19858320)
#define MOLEMOLE_UIDIGIBOOMAINBOTTOMBTNWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x198583C0)
#define MOLEMOLE_UIDIGIBOOMAINBOTTOMBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19858460)

namespace MoleMole
{
	inline static constexpr unsigned int UIDigibooMainBottomBtnWidgetController_TypeDefinitionIndex = 61669;

	class UIDigibooMainBottomBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOMAINBOTTOMBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOMAINBOTTOMBTNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOMAINBOTTOMBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOMAINBOTTOMBTNWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshView(::MoleMole::UIDigibooMainBottomBtnWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIDigibooMainBottomBtnWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOMAINBOTTOMBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, context);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOMAINBOTTOMBTNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOMAINBOTTOMBTNWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOMAINBOTTOMBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::EEHLBNPKKPM* OGMPOGIHBIK()
		{
			return ((::EEHLBNPKKPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOMAINBOTTOMBTNWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void MHBCDAIJGCE(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOMAINBOTTOMBTNWIDGETCONTROLLER_MHBCDAIJGCE_OFFSET))(this, KOIBHLHLMFC);
		}
	};
}
