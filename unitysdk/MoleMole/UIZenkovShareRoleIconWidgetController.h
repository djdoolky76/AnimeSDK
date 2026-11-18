#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class ABLOHCMFMBC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x13EAE370)
#define MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13EAE100)
#define MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13EAE1A0)
#define MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER_SETROLEID_OFFSET UNITYSDK_OFFSET(0x13EAE3E0)
#define MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13EAE490)
#define MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13EAE4F0)
#define MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13EAE590)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovShareRoleIconWidgetController_TypeDefinitionIndex = 76474;

	class UIZenkovShareRoleIconWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetRoleID(::System::Int32 roleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER_SETROLEID_OFFSET))(this, roleID);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::ABLOHCMFMBC* OGMPOGIHBIK()
		{
			return ((::ABLOHCMFMBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSHAREROLEICONWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
