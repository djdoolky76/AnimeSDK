#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_EEA6666F039DC9CD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_EEA6666F039DC9CD__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineVirtualCamera_EEA6666F039DC9CD_TypeDefinitionIndex = 18380;

	class CinemachineVirtualCamera_EEA6666F039DC9CD : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_EEA6666F039DC9CD__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::UnityEngine::GameObject* F45BD004CCE124E8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_EEA6666F039DC9CD_INVOKE_OFFSET))(this, F45BD004CCE124E8);
		}
	};
}
