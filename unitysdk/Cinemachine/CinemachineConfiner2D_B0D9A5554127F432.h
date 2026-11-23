#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AAF95C9CE8DF069C_E936E0FD60282964;
namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CINEMACHINE_CINEMACHINECONFINER2D_B0D9A5554127F432__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineConfiner2D_B0D9A5554127F432_TypeDefinitionIndex = 18359;

	class CinemachineConfiner2D_B0D9A5554127F432 : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 BD4CE8A579BF7B00; // 0x10
		::UnityEngine::Vector3 F2055FED73C3459F; // 0x1C
		::AAF95C9CE8DF069C_E936E0FD60282964* E2767BB1FC6949B4; // 0x28
		::Cinemachine::CinemachineVirtualCameraBase* A6FC6E9B0BFF9355; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_B0D9A5554127F432__CTOR_OFFSET))(this);
		}
	};
}
