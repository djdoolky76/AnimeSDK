#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define VIRTUALCAMERAANIMATION_CNEMKMKEKDO_OFFSET UNITYSDK_OFFSET(0xE9ECAA0)
#define VIRTUALCAMERAANIMATION_CTOR_OFFSET UNITYSDK_OFFSET(0xE9ECD70)
#define VIRTUALCAMERAANIMATION_JKHMMKCNMML_OFFSET UNITYSDK_OFFSET(0xE9EC990)
#define VIRTUALCAMERAANIMATION_JPHPDCBEENO_OFFSET UNITYSDK_OFFSET(0xE9ECB70)
#define VIRTUALCAMERAANIMATION_MPNPPPLPLOA_OFFSET UNITYSDK_OFFSET(0xE9ECCE0)
#define VIRTUALCAMERAANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0xE9EC940)

inline static constexpr unsigned int VirtualCameraAnimation_TypeDefinitionIndex = 47597;

	class VirtualCameraAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AnimationClip* AnimationClip; // 0x18
		::System::Single SampleTime; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::Rendering::CRPVirtualCamera* VirtualCamera; // 0x28
		::UnityEngine::Camera* SampleCamera; // 0x30
		::System::String* TargetMaskRenderer; // 0x38
		// static const ::System::Object DKKOEMPGCDI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIRTUALCAMERAANIMATION_CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIRTUALCAMERAANIMATION_UPDATE_OFFSET))(this);
		}

		::System::Void JKHMMKCNMML(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + VIRTUALCAMERAANIMATION_JKHMMKCNMML_OFFSET))(this, a1);
		}

		::System::Void JPHPDCBEENO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + VIRTUALCAMERAANIMATION_JPHPDCBEENO_OFFSET))(this, a1);
		}

		::System::Void CNEMKMKEKDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIRTUALCAMERAANIMATION_CNEMKMKEKDO_OFFSET))(this);
		}

		::System::Single MPNPPPLPLOA(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + VIRTUALCAMERAANIMATION_MPNPPPLPLOA_OFFSET))(this, a1, a2);
		}

	};
