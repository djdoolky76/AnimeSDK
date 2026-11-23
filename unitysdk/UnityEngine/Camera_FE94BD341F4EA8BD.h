#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_CAMERA_FE94BD341F4EA8BD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define UNITYENGINE_CAMERA_FE94BD341F4EA8BD__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

namespace UnityEngine
{
	inline static constexpr unsigned int Camera_FE94BD341F4EA8BD_TypeDefinitionIndex = 17714;

	class Camera_FE94BD341F4EA8BD : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERA_FE94BD341F4EA8BD__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::UnityEngine::Camera* A98EBC175E852459)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_CAMERA_FE94BD341F4EA8BD_INVOKE_OFFSET))(this, A98EBC175E852459);
		}
	};
}
