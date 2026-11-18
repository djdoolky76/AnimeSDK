#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITimeWidgetParam_TypeDefinitionIndex = 54585;

	struct alignas(8) UITimeWidgetParam
	{
		::System::Boolean StopOnNonPositiveTime; // 0x10
		::System::Byte _padding0[0x7];
		::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>* EndCall; // 0x18
	};
}
