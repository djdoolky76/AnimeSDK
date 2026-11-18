#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

class GHICACFMBNP;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole::Config { class ConfigCameraNoise; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }

#define MOLEMOLE_MONOLOGINCAMERANOISE_AWAKE_OFFSET UNITYSDK_OFFSET(0x14B00000)
#define MOLEMOLE_MONOLOGINCAMERANOISE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14B00160)
#define MOLEMOLE_MONOLOGINCAMERANOISE_STARTNOISE_OFFSET UNITYSDK_OFFSET(0x14AFFDA0)
#define MOLEMOLE_MONOLOGINCAMERANOISE_TICK_OFFSET UNITYSDK_OFFSET(0x14B00400)
#define MOLEMOLE_MONOLOGINCAMERANOISE__CTOR_OFFSET UNITYSDK_OFFSET(0x14B00A40)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLoginCameraNoise_TypeDefinitionIndex = 89680;

	class MonoLoginCameraNoise : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* loginTV; // 0x58
		::MoleMole::Config::ConfigCameraNoise* cameraNoiseProfile; // 0x60
		::System::Single noiseDelayTime; // 0x68
		::System::Single noiseBlendDuration; // 0x6C
		::UnityEngine::AnimationCurve* noiseBlendSpeedCurve; // 0x70
		::UnityEngine::Camera* _mainCam; // 0x78
		::GHICACFMBNP* _cameraClipPost; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLOGINCAMERANOISE__CTOR_OFFSET))(this);
		}

		::System::Void StartNoise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLOGINCAMERANOISE_STARTNOISE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLOGINCAMERANOISE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLOGINCAMERANOISE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLOGINCAMERANOISE_TICK_OFFSET))(this);
		}
	};
}
