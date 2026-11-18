#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKGAHGCJOAN;
namespace MoleMole { class UIZenkovMissionRowWidgetController; }
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18C14C70)
#define MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__SETDATA_B__0_OFFSET UNITYSDK_OFFSET(0x18C14C80)
#define MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__SETDATA_B__1_OFFSET UNITYSDK_OFFSET(0x18C15020)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovMissionRowWidgetController___c__DisplayClass5_0_TypeDefinitionIndex = 62233;

	class UIZenkovMissionRowWidgetController___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::EKGAHGCJOAN* zenkovModel; // 0x18
		::UnityEngine::Transform* root; // 0x20
		::MoleMole::UIZenkovMissionRowWidgetController* __4__this; // 0x28
		::System::Int32 itemId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetData_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__SETDATA_B__0_OFFSET))(this);
		}

		::System::Void _SetData_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER___C__DISPLAYCLASS5_0__SETDATA_B__1_OFFSET))(this);
		}
	};
}
