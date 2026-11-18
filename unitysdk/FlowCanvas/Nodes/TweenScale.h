#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Animation/EaseType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Transform; }

#define FLOWCANVAS_NODES_TWEENSCALE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EDC60C0)
#define FLOWCANVAS_NODES_TWEENSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDC6150)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int TweenScale_TypeDefinitionIndex = 29869;

	class TweenScale
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENSCALE__CTOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Invoke(::UnityEngine::Transform* transform, ::UnityEngine::Vector3 scale, ::System::Single duration, ::ParadoxNotion::Animation::EaseType interpolation, ::System::Boolean relative)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::ParadoxNotion::Animation::EaseType, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENSCALE_INVOKE_OFFSET))(this, transform, scale, duration, interpolation, relative);
		}
	};
}
