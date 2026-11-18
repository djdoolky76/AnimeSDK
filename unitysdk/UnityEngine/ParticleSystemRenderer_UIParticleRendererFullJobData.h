#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemRenderer_UIParticleRendererFullJobData_TypeDefinitionIndex = 7771;

	struct alignas(4) ParticleSystemRenderer_UIParticleRendererFullJobData
	{
		::System::Int32 ParticleSystemID; // 0x10
		::System::Int32 UIParticleRendererID; // 0x14
		::System::Int32 ParticleSystemRendererID; // 0x18
		::System::Int32 OptCanvasRendererID; // 0x1C
		::System::Int32 IsValid; // 0x20
		::System::Int32 IsTrail; // 0x24
		::System::Int32 EnableOpt; // 0x28
		::System::Int32 IsPaused; // 0x2C
		::System::Int32 CanSimulate; // 0x30
		::System::Int32 NeedSetKeywords; // 0x34
		::System::Int32 ScreenSizeChanged; // 0x38
		::System::Int32 PositionMode; // 0x3C
		::System::Int32 CanvasLayer; // 0x40
		::System::Int32 OptShouldClip; // 0x44
		::System::Int32 Delay; // 0x48
		::System::Int32 Prewarm; // 0x4C
		::UnityEngine::Vector3 PrevScale; // 0x50
		::UnityEngine::Vector3 PrevParticleSystemPosition; // 0x5C
		::UnityEngine::Vector3 ParentPosition; // 0x68
		::UnityEngine::Vector3 WorldScale; // 0x74
		::UnityEngine::Vector3 Scale3DForCalc; // 0x80
		::System::Int32 SimCmdStart; // 0x8C
		::System::Int32 SimCmdCount; // 0x90
		::System::Int32 Loop; // 0x94
		::System::Single Duration; // 0x98
		::System::Int32 NeedBakeMesh; // 0x9C
		::System::Int32 MeshID; // 0xA0
		::System::Int32 CameraID; // 0xA4
		::System::Single OverrideMaxParticleSize; // 0xA8
		::UnityEngine::Matrix4x4 Transform; // 0xAC
		::System::Int32 MaterialID; // 0xEC
		::System::Int32 PropertyStart; // 0xF0
		::System::Int32 PropertyCount; // 0xF4
	};
}
