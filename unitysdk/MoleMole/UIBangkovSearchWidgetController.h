#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class BMBDMMPKIHO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x17ECDAD0)
#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17ECD800)
#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x17ECDB40)
#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17ECD8A0)
#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17ECDBE0)
#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_REALSETACTIVESAFELY_OFFSET UNITYSDK_OFFSET(0x17ECD740)
#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17ECDC80)
#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17ECDCE0)
#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x17ECDD80)
#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17ECDE10)
#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17ECDEB0)
#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER___BASE_REALSETACTIVESAFELY_OFFSET UNITYSDK_OFFSET(0x17ECDEC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovSearchWidgetController_TypeDefinitionIndex = 64849;

	class UIBangkovSearchWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void RealSetActiveSafely(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_REALSETACTIVESAFELY_OFFSET))(this, active);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_RealSetActiveSafely(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER___BASE_REALSETACTIVESAFELY_OFFSET))(this, P0);
		}

		::BMBDMMPKIHO* OGMPOGIHBIK()
		{
			return ((::BMBDMMPKIHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
