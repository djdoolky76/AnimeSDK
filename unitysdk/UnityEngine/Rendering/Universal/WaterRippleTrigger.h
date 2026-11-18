#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_ADDTRAILEVENT_OFFSET UNITYSDK_OFFSET(0x1F927190)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_COPYTRAILEVENTDATA_OFFSET UNITYSDK_OFFSET(0x1F927300)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_GETCUSTOMRIPPLEDATA_OFFSET UNITYSDK_OFFSET(0x1F926C10)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_ISTOUCHINGWATER_OFFSET UNITYSDK_OFFSET(0x1F926E80)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F9266F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F926500)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_PRUNETRAILEVENTS_OFFSET UNITYSDK_OFFSET(0x1F926F30)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_RESETTRAILSTATE_OFFSET UNITYSDK_OFFSET(0x1F926610)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_TRYGETTRAILEVENTPARAMS_OFFSET UNITYSDK_OFFSET(0x1F927430)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_UPDATETRAILINTERACTION_OFFSET UNITYSDK_OFFSET(0x1F9267E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_UPDATETRAILTIMEEMISSION_OFFSET UNITYSDK_OFFSET(0x1F927020)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F926780)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F927540)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterRippleTrigger_TypeDefinitionIndex = 26951;

	class WaterRippleTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single triggerTime; // 0x18
		::System::Single timeOffset; // 0x1C
		::System::Boolean isLoop; // 0x20
		::System::Boolean useSingleControl; // 0x21
		::System::Byte _padding0[0x2];
		::System::Single lifeTime; // 0x24
		::System::Single rippleAmplitude; // 0x28
		::System::Single rippleFrequency; // 0x2C
		::System::Single rippleSize; // 0x30
		::System::UInt32 rippleRingCount; // 0x34
		::System::Single secondRippleOffset; // 0x38
		::System::Single rippleSpeed; // 0x3C
		::System::Single rippleDistortionStrength; // 0x40
		::System::Boolean enableTrailInteraction; // 0x44
		::System::Byte _padding1[0x3];
		::System::Single minMoveDistance; // 0x48
		::System::Single trailRadius; // 0x4C
		::System::Single trailStrength; // 0x50
		::System::Single trailLifeTime; // 0x54
		::System::Single trailSpawnRateByDistance; // 0x58
		::System::Single trailSpawnRateByTime; // 0x5C
		::System::Int32 maxTrailEventCount; // 0x60
		::System::Boolean requireWaterContact; // 0x64
		::System::Byte _padding2[0x3];
		::System::Single waterSurfaceHeight; // 0x68
		::System::Single waterContactHeightRange; // 0x6C
		::System::Single waterContactHeightOffset; // 0x70
		::System::Single trailFoamRingWidth; // 0x74
		::System::Single trailFoamIntensity; // 0x78
		::System::Single trailNoiseScale; // 0x7C
		::System::Single trailNoiseStrength; // 0x80
		::System::Single trailNoiseRandomOffsetStrength; // 0x84
		::System::Single trailBreakupStrength; // 0x88
		::System::Single trailParticleCutoff; // 0x8C
		::System::Single trailParticleCutoffSoftness; // 0x90
		::System::Boolean trailInitialized; // 0x94
		::System::Byte _padding3[0x3];
		::UnityEngine::Vector3 lastTrailPosition; // 0x98
		::System::Single trailDistanceAccumulator; // 0xA4
		::System::Single trailTimeAccumulator; // 0xA8
		::System::Byte _padding4[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* trailEvents; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_UPDATE_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetCustomRippleData(::System::Single globalTimer, ::System::Single globalLifeTime)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_GETCUSTOMRIPPLEDATA_OFFSET))(this, globalTimer, globalLifeTime);
		}

		::System::Void ResetTrailState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_RESETTRAILSTATE_OFFSET))(this);
		}

		::System::Void UpdateTrailInteraction(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_UPDATETRAILINTERACTION_OFFSET))(this, deltaTime);
		}

		::System::Boolean IsTouchingWater()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_ISTOUCHINGWATER_OFFSET))(this);
		}

		::System::Void UpdateTrailTimeEmission(::System::Single deltaTime, ::System::Single currentTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_UPDATETRAILTIMEEMISSION_OFFSET))(this, deltaTime, currentTime);
		}

		::System::Void AddTrailEvent(::UnityEngine::Vector3 worldPosition, ::System::Single currentTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_ADDTRAILEVENT_OFFSET))(this, worldPosition, currentTime);
		}

		::System::Void PruneTrailEvents(::System::Single currentTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_PRUNETRAILEVENTS_OFFSET))(this, currentTime);
		}

		::System::Int32 CopyTrailEventData(::Il2CppArray<::UnityEngine::Vector4>* targetData, ::System::Int32 startIndex, ::System::Single currentTime)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_COPYTRAILEVENTDATA_OFFSET))(this, targetData, startIndex, currentTime);
		}

		::System::Boolean TryGetTrailEventParams(::UnityEngine::Vector4& rippleParams, ::UnityEngine::Vector4& shapeParams, ::UnityEngine::Vector4& foamParams, ::UnityEngine::Vector4& cutoffParams)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERRIPPLETRIGGER_TRYGETTRAILEVENTPARAMS_OFFSET))(this, rippleParams, shapeParams, foamParams, cutoffParams);
		}
	};
}
