#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionReference; }

#define CINEMACHINE_CINEMACHINEINPUTPROVIDER_A8E9DD1C2BFC4100_AF124017F89EEB51_OFFSET UNITYSDK_OFFSET(0x2A7C550)
#define CINEMACHINE_CINEMACHINEINPUTPROVIDER_A8E9DD1C2BFC4100__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineInputProvider_A8E9DD1C2BFC4100_TypeDefinitionIndex = 18399;

	class CinemachineInputProvider_A8E9DD1C2BFC4100 : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::InputActionReference* B8BC42FED07EB777; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTPROVIDER_A8E9DD1C2BFC4100__CTOR_OFFSET))(this);
		}

		::System::Boolean AF124017F89EEB51(::UnityEngine::InputSystem::InputAction* BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTPROVIDER_A8E9DD1C2BFC4100_AF124017F89EEB51_OFFSET))(this, BB8C609F76620E45);
		}
	};
}
