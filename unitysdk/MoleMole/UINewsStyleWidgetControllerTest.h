#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class JOPLLKHJEON;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLERTEST_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x14CB1130)
#define MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLERTEST_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14CB0FA0)
#define MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLERTEST__CTOR_OFFSET UNITYSDK_OFFSET(0x14CB1030)
#define MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLERTEST___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14CB1090)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStyleWidgetControllerTest_TypeDefinitionIndex = 50619;

	class UINewsStyleWidgetControllerTest : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLERTEST__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLERTEST_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLERTEST___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::JOPLLKHJEON* OGMPOGIHBIK()
		{
			return ((::JOPLLKHJEON*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLERTEST_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
