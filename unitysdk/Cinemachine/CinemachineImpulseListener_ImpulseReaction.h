#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace Cinemachine { class NoiseSettings; }

#define CINEMACHINE_CINEMACHINEIMPULSELISTENER_IMPULSEREACTION_GETREACTION_OFFSET UNITYSDK_OFFSET(0x2A5E1E0)
#define CINEMACHINE_CINEMACHINEIMPULSELISTENER_IMPULSEREACTION_RESEED_OFFSET UNITYSDK_OFFSET(0x2A5E630)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseListener_ImpulseReaction_TypeDefinitionIndex = 18367;

	struct alignas(8) CinemachineImpulseListener_ImpulseReaction
	{
		::Cinemachine::NoiseSettings* m_SecondaryNoise; // 0x10
		::System::Single m_AmplitudeGain; // 0x18
		::System::Single m_FrequencyGain; // 0x1C
		::System::Single m_Duration; // 0x20
		::System::Single m_CurrentAmount; // 0x24
		::System::Single m_CurrentTime; // 0x28
		::System::Single m_CurrentDamping; // 0x2C
		::System::Boolean m_Initialized; // 0x30
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 m_NoiseOffsets; // 0x34

		::System::Void ReSeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSELISTENER_IMPULSEREACTION_RESEED_OFFSET))(this);
		}

		::System::Boolean GetReaction(::System::Single EB5670302F34D4B7, ::UnityEngine::Vector3 EF608F83717862FC, ::UnityEngine::Vector3& A0C1F1E95D5F6CA9, ::UnityEngine::Quaternion& FBF9C1F5AF32571D)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSELISTENER_IMPULSEREACTION_GETREACTION_OFFSET))(this, EB5670302F34D4B7, EF608F83717862FC, A0C1F1E95D5F6CA9, FBF9C1F5AF32571D);
		}
	};
}
