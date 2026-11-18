#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Animation/EaseType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System::Collections { class IEnumerator; }

#define FLOWCANVAS_NODES_TWEENCOLOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EDC5C70)
#define FLOWCANVAS_NODES_TWEENCOLOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EDC5C90)
#define FLOWCANVAS_NODES_TWEENCOLOR_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EDC5C80)
#define FLOWCANVAS_NODES_TWEENCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDC5D10)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int TweenColor_TypeDefinitionIndex = 29779;

	class TweenColor
	{
	public:
		::UnityEngine::Color _value_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENCOLOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color get_value()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENCOLOR_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENCOLOR_SET_VALUE_OFFSET))(this, value);
		}

		::System::Collections::IEnumerator* Invoke(::UnityEngine::Color from, ::UnityEngine::Color to, ::System::Single duration, ::ParadoxNotion::Animation::EaseType interpolation)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Single, ::ParadoxNotion::Animation::EaseType))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENCOLOR_INVOKE_OFFSET))(this, from, to, duration, interpolation);
		}
	};
}
