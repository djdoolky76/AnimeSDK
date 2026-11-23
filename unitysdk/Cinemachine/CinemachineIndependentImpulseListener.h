#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineImpulseListener_ImpulseReaction.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_BC5FC01AE53FF41F_OFFSET UNITYSDK_OFFSET(0x2A65D60)
#define CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2A65CE0)
#define CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x2A65DE0)
#define CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_F5E407B60CCCAC07_OFFSET UNITYSDK_OFFSET(0x2A65770)
#define CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineIndependentImpulseListener_TypeDefinitionIndex = 18412;

	class CinemachineIndependentImpulseListener : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 BDF47D302C56D759; // 0x20
		::UnityEngine::Quaternion F81A98459D412E20; // 0x2C
		::System::Int32 m_ChannelMask; // 0x3C
		::System::Single m_Gain; // 0x40
		::System::Boolean m_Use2DDistance; // 0x44
		::System::Boolean m_UseLocalSpace; // 0x45
		::System::Byte _padding0[0x2];
		::Cinemachine::CinemachineImpulseListener_ImpulseReaction m_ReactionSettings; // 0x48

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_E02954280801633F_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void BC5FC01AE53FF41F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_BC5FC01AE53FF41F_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER__CTOR_OFFSET))(this);
		}

		::System::Void F5E407B60CCCAC07()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINDEPENDENTIMPULSELISTENER_F5E407B60CCCAC07_OFFSET))(this);
		}
	};
}
