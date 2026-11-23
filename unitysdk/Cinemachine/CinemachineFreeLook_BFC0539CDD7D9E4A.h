#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define CINEMACHINE_CINEMACHINEFREELOOK_BFC0539CDD7D9E4A_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define CINEMACHINE_CINEMACHINEFREELOOK_BFC0539CDD7D9E4A__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFreeLook_BFC0539CDD7D9E4A_TypeDefinitionIndex = 18387;

	class CinemachineFreeLook_BFC0539CDD7D9E4A : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_BFC0539CDD7D9E4A__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::UnityEngine::GameObject* A3D75347B7D41E30)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_BFC0539CDD7D9E4A_INVOKE_OFFSET))(this, A3D75347B7D41E30);
		}
	};
}
