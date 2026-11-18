#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISCARYNIGHTIEVENTROWWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1859C8A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightIEventRowWidgetContext_TypeDefinitionIndex = 68538;

	class UIScaryNightIEventRowWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OnSelected; // 0x28
		::System::Action* OnGamepadSelectionChanged; // 0x30
		::System::Int32 EventId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTIEVENTROWWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
