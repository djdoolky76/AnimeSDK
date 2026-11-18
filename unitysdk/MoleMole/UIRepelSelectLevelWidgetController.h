#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class MEEICGJDOKJ;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIREPELSELECTLEVELWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x17D80FF0)
#define MOLEMOLE_UIREPELSELECTLEVELWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D80E30)
#define MOLEMOLE_UIREPELSELECTLEVELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D80EF0)
#define MOLEMOLE_UIREPELSELECTLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D80F50)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepelSelectLevelWidgetController_TypeDefinitionIndex = 38698;

	class UIRepelSelectLevelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELSELECTLEVELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELSELECTLEVELWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELSELECTLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::MEEICGJDOKJ* OGMPOGIHBIK()
		{
			return ((::MEEICGJDOKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELSELECTLEVELWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
