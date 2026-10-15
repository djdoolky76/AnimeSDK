#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class LittleGameRadialBlurEffect; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_CHAELJEJKPH_OFFSET UNITYSDK_OFFSET(0xDEBFD90)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_CIDDCGGBPIB_OFFSET UNITYSDK_OFFSET(0xDEBFD10)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0xDEBFF10)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_ENOPKFHOEGM_OFFSET UNITYSDK_OFFSET(0xDEBFE10)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_HENEAGPOOHG_OFFSET UNITYSDK_OFFSET(0xDEBFBB0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_JOCEIEEOKGG_OFFSET UNITYSDK_OFFSET(0xDEBFB30)
#define RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_PEKNEMKIKLN_OFFSET UNITYSDK_OFFSET(0xDEBFE90)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashCameraSettings_TypeDefinitionIndex = 75841;

	class MonoRoadRashCameraSettings : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single BlendFOVDefaultHalfTime; // 0x18
		::System::Single SpeedToMinFOV; // 0x1C
		::System::Single SpeedToMaxFOV; // 0x20
		::System::Single MinSpeedToFOV; // 0x24
		::System::Single MaxSpeedToFOV; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* SpeedToFOVCurve; // 0x30
		::System::Single FOVMin; // 0x38
		::System::Single FOVMax; // 0x3C
		::System::Single DriftDutchAngle; // 0x40
		::System::Single DriftDutchFadeInTime; // 0x44
		::System::Single DriftDutchFadeOutTime; // 0x48
		::UnityEngine::Vector3 UltimateTrackedObjectOffset; // 0x4C
		::System::Single UltimateTrackedObjectOffsetFadeInTime; // 0x58
		::System::Single UltimateTrackedObjectOffsetFadeOutTime; // 0x5C
		::System::Single UltimateRigHeight; // 0x60
		::System::Single UltimateRigRadius; // 0x64
		::System::Single UltimateRigFadeInTime; // 0x68
		::System::Single UltimateRigFadeOutTime; // 0x6C
		::System::Single BlendRigHeightDefaultHalfTime; // 0x70
		::System::Single SpeedToMinRigHeight; // 0x74
		::System::Single SpeedToMaxRigHeight; // 0x78
		::System::Single MinSpeedToRigHeight; // 0x7C
		::System::Single MaxSpeedToRigHeight; // 0x80
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* SpeedToRigHeightCurve; // 0x88
		::System::Single BlendRigRadiusHalfTime; // 0x90
		::System::Single SpeedToMinRigRadius; // 0x94
		::System::Single SpeedToMaxRigRadius; // 0x98
		::System::Single MinSpeedToRigRadius; // 0x9C
		::System::Single MaxSpeedToRigRadius; // 0xA0
		::System::Byte _padding2[0x4];
		::UnityEngine::AnimationCurve* SpeedToRigRadiusCurve; // 0xA8
		::System::Int32 HitWallShakeIndex; // 0xB0
		::System::Single HitWallShakeCooldown; // 0xB4
		::System::Int32 HitCarNormalShakeIndex; // 0xB8
		::System::Single HitCarNormalShakeCooldown; // 0xBC
		::System::Int32 HitCarSlamShakeIndex; // 0xC0
		::System::Single HitCarSlamShakeCooldown; // 0xC4
		::System::Int32 HitCarUltimateShakeIndex; // 0xC8
		::System::Single HitCarUltimateShakeCooldown; // 0xCC
		::System::Int32 CarLandedShakeIndex; // 0xD0
		::System::Single CarLandedShakeCooldown; // 0xD4
		::RPG::GameCore::LittleGameRadialBlurEffect* DefaultBlur; // 0xD8
		::UnityEngine::AnimationCurve* BlurBlendCurve; // 0xE0
		::System::Single BlurBlendDuration; // 0xE8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_CTOR_OFFSET))(this);
		}

		::System::String* JOCEIEEOKGG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_JOCEIEEOKGG_OFFSET))(this);
		}

		::System::String* CIDDCGGBPIB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_CIDDCGGBPIB_OFFSET))(this);
		}

		::System::String* CHAELJEJKPH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_CHAELJEJKPH_OFFSET))(this);
		}

		::System::String* ENOPKFHOEGM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_ENOPKFHOEGM_OFFSET))(this);
		}

		::System::String* PEKNEMKIKLN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_PEKNEMKIKLN_OFFSET))(this);
		}

		::System::String* HENEAGPOOHG(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHCAMERASETTINGS_HENEAGPOOHG_OFFSET))(this, a1);
		}

	};
}
