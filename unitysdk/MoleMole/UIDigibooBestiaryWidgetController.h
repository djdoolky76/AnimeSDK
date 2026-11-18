#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class PEOKKIIGIBN;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }

#define MOLEMOLE_UIDIGIBOOBESTIARYWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x15990E40)
#define MOLEMOLE_UIDIGIBOOBESTIARYWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15990BE0)
#define MOLEMOLE_UIDIGIBOOBESTIARYWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15990C80)
#define MOLEMOLE_UIDIGIBOOBESTIARYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15990EB0)
#define MOLEMOLE_UIDIGIBOOBESTIARYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x159910E0)
#define MOLEMOLE_UIDIGIBOOBESTIARYWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15991140)
#define MOLEMOLE_UIDIGIBOOBESTIARYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15991190)
#define MOLEMOLE_UIDIGIBOOBESTIARYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x159911E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDigibooBestiaryWidgetController_TypeDefinitionIndex = 80514;

	class UIDigibooBestiaryWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Action* onClose; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOBESTIARYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOBESTIARYWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOBESTIARYWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOBESTIARYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOBESTIARYWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOBESTIARYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOBESTIARYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::PEOKKIIGIBN* OGMPOGIHBIK()
		{
			return ((::PEOKKIIGIBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOBESTIARYWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
