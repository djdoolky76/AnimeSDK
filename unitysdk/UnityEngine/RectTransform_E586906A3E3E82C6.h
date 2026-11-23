#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_RECTTRANSFORM_E586906A3E3E82C6_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define UNITYENGINE_RECTTRANSFORM_E586906A3E3E82C6__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

namespace UnityEngine
{
	inline static constexpr unsigned int RectTransform_E586906A3E3E82C6_TypeDefinitionIndex = 17093;

	class RectTransform_E586906A3E3E82C6 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_E586906A3E3E82C6__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::UnityEngine::RectTransform* FD6B5E831E55B349)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RECTTRANSFORM_E586906A3E3E82C6_INVOKE_OFFSET))(this, FD6B5E831E55B349);
		}
	};
}
