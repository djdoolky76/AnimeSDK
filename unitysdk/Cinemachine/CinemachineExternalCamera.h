#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCE1737A98084F1E.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_B2274BBBB52C08C1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_ACB298BF5EBBA6A3_OFFSET UNITYSDK_OFFSET(0x17F7020)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_B71B2C6552B0F380_OFFSET UNITYSDK_OFFSET(0x2A4C140)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_BC97F3832072C035_OFFSET UNITYSDK_OFFSET(0x17F7050)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_BE7D2F23D235544D_OFFSET UNITYSDK_OFFSET(0x2A4B830)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_E25F83180723A165_OFFSET UNITYSDK_OFFSET(0x2A4C150)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA_EDACA8863D41E796_OFFSET UNITYSDK_OFFSET(0x2A4C1F0)
#define CINEMACHINE_CINEMACHINEEXTERNALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x2A4BFC0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineExternalCamera_TypeDefinitionIndex = 18356;

	class CinemachineExternalCamera : public ::Cinemachine::CinemachineVirtualCameraBase
	{
	public:
		::UnityEngine::Transform* m_LookAt; // 0xA8
		::UnityEngine::Camera* B980EBE34BA29828; // 0xB0
		::BCE1737A98084F1E F8F80FD201522382; // 0xB8
		::UnityEngine::Transform* ABE7DA76ECABCC64; // 0x1A0
		::Cinemachine::CinemachineVirtualCameraBase_B2274BBBB52C08C1 m_BlendHint; // 0x1A8

		::UnityEngine::Transform* B71B2C6552B0F380()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTERNALCAMERA_B71B2C6552B0F380_OFFSET))(this);
		}

		::System::Void BE7D2F23D235544D(::UnityEngine::Vector3 FF2EA59FD4C4EE89, ::System::Single EB5670302F34D4B7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTERNALCAMERA_BE7D2F23D235544D_OFFSET))(this, FF2EA59FD4C4EE89, EB5670302F34D4B7);
		}

		::System::Void BC97F3832072C035(::UnityEngine::Transform* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTERNALCAMERA_BC97F3832072C035_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void EDACA8863D41E796(::UnityEngine::Transform* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTERNALCAMERA_EDACA8863D41E796_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::Transform* ACB298BF5EBBA6A3()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTERNALCAMERA_ACB298BF5EBBA6A3_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTERNALCAMERA__CTOR_OFFSET))(this);
		}

		::BCE1737A98084F1E E25F83180723A165()
		{
			return ((::BCE1737A98084F1E(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEEXTERNALCAMERA_E25F83180723A165_OFFSET))(this);
		}
	};
}
