#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/TransformHook.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_RECTTRANSFORMHOOK_INVOKE_ONHOOKRECTTRANSFORMHOOKSETANCHOREDPOSITION_OFFSET UNITYSDK_OFFSET(0x1ED88BC0)
#define UNITYENGINE_RECTTRANSFORMHOOK__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED88C30)

namespace UnityEngine
{
	inline static constexpr unsigned int RectTransformHook_TypeDefinitionIndex = 5348;

	class RectTransformHook : public ::UnityEngine::TransformHook
	{
	public:
		static ::System::Action_2<::UnityEngine::RectTransform*, ::UnityEngine::Vector2>** StaticGet_onHookSetAnchoredPosition()
		{
			return (::System::Action_2<::UnityEngine::RectTransform*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(RectTransformHook_TypeDefinitionIndex)->GetStaticField(0x50F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMHOOK__CTOR_OFFSET))(this);
		}

		static ::System::Void invoke_onHookRectTransformHookSetAnchoredPosition(::UnityEngine::RectTransform* trans, ::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORMHOOK_INVOKE_ONHOOKRECTTRANSFORMHOOKSETANCHOREDPOSITION_OFFSET))(trans, value);
		}
	};
}
