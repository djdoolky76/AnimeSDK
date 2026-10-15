#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CameraShakeTask;
namespace UnityEngine { class AnimationCurve; }

#define DEBUGCAMERASHAKE_CTOR_OFFSET UNITYSDK_OFFSET(0x12661D30)
#define DEBUGCAMERASHAKE_ELEBOJFHKBP_OFFSET UNITYSDK_OFFSET(0x12661CB0)
#define DEBUGCAMERASHAKE_GBOJICMOLJD_OFFSET UNITYSDK_OFFSET(0x12661A10)
#define DEBUGCAMERASHAKE_START_OFFSET UNITYSDK_OFFSET(0x126616F0)
#define DEBUGCAMERASHAKE_UPDATE_OFFSET UNITYSDK_OFFSET(0x12661890)

inline static constexpr unsigned int DebugCameraShake_TypeDefinitionIndex = 47244;

	class DebugCameraShake : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IsShake; // 0x18
		::System::Boolean ApplyPerlinNoise; // 0x19
		::System::Byte _padding0[0x6];
		::CameraShakeTask* PosShakeTask; // 0x20
		::CameraShakeTask* RotShakeTask; // 0x28
		::UnityEngine::AnimationCurve* AmplitudeAttenuationCurve; // 0x30
		::System::Single ACNHFNBLHDD; // 0x38
		::UnityEngine::Vector3 LDGKLOMDNDK; // 0x3C
		::UnityEngine::Vector3 KHDDKPNOAMK; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGCAMERASHAKE_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGCAMERASHAKE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGCAMERASHAKE_UPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GBOJICMOLJD(::CameraShakeTask* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::CameraShakeTask*))((::PBYTE)hIl2Cpp + DEBUGCAMERASHAKE_GBOJICMOLJD_OFFSET))(this, a1);
		}

		::System::Void ELEBOJFHKBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGCAMERASHAKE_ELEBOJFHKBP_OFFSET))(this);
		}

	};
