#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class MOGKOOADAEI;
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER_ACHIPEMGJJD_OFFSET UNITYSDK_OFFSET(0x12F911F0)
#define MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x12F90FF0)
#define MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12F90A30)
#define MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12F90AF0)
#define MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER_SETCHOICE_OFFSET UNITYSDK_OFFSET(0x12F90BB0)
#define MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12F91060)
#define MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12F910C0)
#define MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12F91160)

namespace MoleMole
{
	inline static constexpr unsigned int UIVoidFrontDetailStoryRowWidgetController_TypeDefinitionIndex = 71357;

	class UIVoidFrontDetailStoryRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetChoice(::System::Int32 nodeId, ::System::Int32 sourceDes, ::System::Int32 idx, ::System::Action_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER_SETCHOICE_OFFSET))(this, nodeId, sourceDes, idx, onClick);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::MOGKOOADAEI* OGMPOGIHBIK()
		{
			return ((::MOGKOOADAEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void ACHIPEMGJJD(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTDETAILSTORYROWWIDGETCONTROLLER_ACHIPEMGJJD_OFFSET))(this, KOIBHLHLMFC);
		}
	};
}
