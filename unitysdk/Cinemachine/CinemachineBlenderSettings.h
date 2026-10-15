#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
namespace System { class Object; }
namespace System { class String; }

#define CINEMACHINE_CINEMACHINEBLENDERSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1665B9D0)
#define CINEMACHINE_CINEMACHINEBLENDERSETTINGS_GETBLENDFORVIRTUALCAMERAS_OFFSET UNITYSDK_OFFSET(0x1665B6A0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBlenderSettings_TypeDefinitionIndex = 39807;

	class CinemachineBlenderSettings : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_CustomBlends; // 0x18
		// static const ::System::String* kBlendFromAnyCameraLabel; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDERSETTINGS_CTOR_OFFSET))(this);
		}

		::Cinemachine::CinemachineBlendDefinition GetBlendForVirtualCameras(::System::String* a1, ::System::String* a2, ::Cinemachine::CinemachineBlendDefinition a3)
		{
			return ((::Cinemachine::CinemachineBlendDefinition(*)(::PVOID, ::System::String*, ::System::String*, ::Cinemachine::CinemachineBlendDefinition))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDERSETTINGS_GETBLENDFORVIRTUALCAMERAS_OFFSET))(this, a1, a2, a3);
		}

	};
}
