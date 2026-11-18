#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class KBLGHPDBEFK;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralFilterPopWindowController; }

#define MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x184BF920)
#define MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x184BF9E0)
#define MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x184BFA50)
#define MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x184BFB10)
#define MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x184BFB70)

namespace MoleMole
{
	inline static constexpr unsigned int UIForceSetOwnToggleWidgetController_TypeDefinitionIndex = 91722;

	class UIForceSetOwnToggleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::MoleMole::UIGeneralFilterPopWindowController* popWindow, ::System::Int32 ownFilterGroupIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralFilterPopWindowController*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER_INIT_OFFSET))(this, popWindow, ownFilterGroupIndex);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::KBLGHPDBEFK* OGMPOGIHBIK()
		{
			return ((::KBLGHPDBEFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORCESETOWNTOGGLEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
