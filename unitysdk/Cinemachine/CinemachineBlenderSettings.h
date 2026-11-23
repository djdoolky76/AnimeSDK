#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"

namespace System { class Object; }
namespace System { class String; }

#define CINEMACHINE_CINEMACHINEBLENDERSETTINGS_GETBLENDFORVIRTUALCAMERAS_OFFSET UNITYSDK_OFFSET(0x2A44F20)
#define CINEMACHINE_CINEMACHINEBLENDERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F270C0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBlenderSettings_TypeDefinitionIndex = 18348;

	class CinemachineBlenderSettings : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_CustomBlends; // 0x18

		::Cinemachine::CinemachineBlendDefinition GetBlendForVirtualCameras(::System::String* AAAED95F8685F62F, ::System::String* E2575FDCC5291A4A, ::Cinemachine::CinemachineBlendDefinition A729B6115B3E374E)
		{
			return ((::Cinemachine::CinemachineBlendDefinition(*)(::PVOID, ::System::String*, ::System::String*, ::Cinemachine::CinemachineBlendDefinition))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDERSETTINGS_GETBLENDFORVIRTUALCAMERAS_OFFSET))(this, AAAED95F8685F62F, E2575FDCC5291A4A, A729B6115B3E374E);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDERSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
