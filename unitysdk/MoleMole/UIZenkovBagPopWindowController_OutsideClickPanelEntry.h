#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER_OUTSIDECLICKPANELENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1056A750)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBagPopWindowController_OutsideClickPanelEntry_TypeDefinitionIndex = 91351;

	class UIZenkovBagPopWindowController_OutsideClickPanelEntry : public ::System::Object
	{
	public:
		::UnityEngine::Transform* Root; // 0x10
		::System::Func_1<::System::Boolean>* IsOpen; // 0x18
		::System::Func_2<::UnityEngine::GameObject*, ::System::Boolean>* ExtraPending; // 0x20
		::System::Action* Close; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER_OUTSIDECLICKPANELENTRY__CTOR_OFFSET))(this);
		}
	};
}
