#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IJKOHIODLDG;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIDIGIBOOPLAYERCHANGEWIDGETCONTROLLER_ILBPOJOHJPE_OFFSET UNITYSDK_OFFSET(0x170661B0)
#define MOLEMOLE_UIDIGIBOOPLAYERCHANGEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x17065E50)
#define MOLEMOLE_UIDIGIBOOPLAYERCHANGEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17065BF0)
#define MOLEMOLE_UIDIGIBOOPLAYERCHANGEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17065C90)
#define MOLEMOLE_UIDIGIBOOPLAYERCHANGEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17065EC0)
#define MOLEMOLE_UIDIGIBOOPLAYERCHANGEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17065F80)
#define MOLEMOLE_UIDIGIBOOPLAYERCHANGEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17065FE0)
#define MOLEMOLE_UIDIGIBOOPLAYERCHANGEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17066080)
#define MOLEMOLE_UIDIGIBOOPLAYERCHANGEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17066120)

namespace MoleMole
{
	inline static constexpr unsigned int UIDigibooPlayerChangeWidgetController_TypeDefinitionIndex = 71083;

	class UIDigibooPlayerChangeWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOPLAYERCHANGEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOPLAYERCHANGEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOPLAYERCHANGEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOPLAYERCHANGEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOPLAYERCHANGEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOPLAYERCHANGEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOPLAYERCHANGEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void ILBPOJOHJPE(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOPLAYERCHANGEWIDGETCONTROLLER_ILBPOJOHJPE_OFFSET))(this, KOIBHLHLMFC);
		}

		::IJKOHIODLDG* OGMPOGIHBIK()
		{
			return ((::IJKOHIODLDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDIGIBOOPLAYERCHANGEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
