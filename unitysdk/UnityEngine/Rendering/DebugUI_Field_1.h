#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Widget.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_Field_1_TypeDefinitionIndex = 35528;

	template <typename T>
	class DebugUI_Field_1 : public ::UnityEngine::Rendering::DebugUI_Widget
	{
	public:
		::System::Func_1<T>* _getter_k__BackingField; // 0x0
		::System::Action_1<T>* _setter_k__BackingField; // 0x0
		::System::Action_2<::System::Object*, T>* onValueChanged; // 0x0
	};
}
