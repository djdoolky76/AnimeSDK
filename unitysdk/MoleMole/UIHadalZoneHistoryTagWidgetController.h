#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class FPBDKCBABBG;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIHADALZONEHISTORYTAGWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x16EEF380)
#define MOLEMOLE_UIHADALZONEHISTORYTAGWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16EEF020)
#define MOLEMOLE_UIHADALZONEHISTORYTAGWIDGETCONTROLLER_SETNUM_OFFSET UNITYSDK_OFFSET(0x16EEF0E0)
#define MOLEMOLE_UIHADALZONEHISTORYTAGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16EEF3F0)
#define MOLEMOLE_UIHADALZONEHISTORYTAGWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16EEF450)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZoneHistoryTagWidgetController_TypeDefinitionIndex = 42363;

	class UIHadalZoneHistoryTagWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONEHISTORYTAGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONEHISTORYTAGWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetNum(::System::Int32 num, ::System::Int32 totalNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONEHISTORYTAGWIDGETCONTROLLER_SETNUM_OFFSET))(this, num, totalNum);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONEHISTORYTAGWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::FPBDKCBABBG* OGMPOGIHBIK()
		{
			return ((::FPBDKCBABBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONEHISTORYTAGWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
