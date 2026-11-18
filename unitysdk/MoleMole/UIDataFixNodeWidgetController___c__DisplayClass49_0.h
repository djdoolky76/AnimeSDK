#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDataFixNodeWidgetController; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x191ABEA0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS49_0__TOGGLENODEACTIVE_B__0_OFFSET UNITYSDK_OFFSET(0x191ABEB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDataFixNodeWidgetController___c__DisplayClass49_0_TypeDefinitionIndex = 47375;

	class UIDataFixNodeWidgetController___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* lightGroup; // 0x10
		::System::String* fadein; // 0x18
		::MoleMole::UIDataFixNodeWidgetController* __4__this; // 0x20
		::UnityEngine::Animation* lgAnim; // 0x28
		::UnityEngine::Transform* otherGroup; // 0x30
		::UnityEngine::Transform* targetGroup; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Void _ToggleNodeActive_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS49_0__TOGGLENODEACTIVE_B__0_OFFSET))(this);
		}
	};
}
