#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore
{
	template <typename T>
	class PerformanceMaskStack_1 : public ::System::Object
	{
	public:
		T _ExcelValue; // 0x0
		T _TriggerTaskValue; // 0x0
		::System::Boolean _HasTriggerTaskValue; // 0x0
		T _OverrideValue; // 0x0
		::System::Boolean _HasOverrideValue; // 0x0
		T _Value; // 0x0
	};
}
