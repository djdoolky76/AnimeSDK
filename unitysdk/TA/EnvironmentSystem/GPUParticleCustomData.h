#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/EnvironmentSystem/ESCustomData.h"

class ABEBA93AD61764EF;
namespace TA::EnvironmentSystem { class ESFloat; }
namespace TA::EnvironmentSystem { class ESObject; }
namespace TA::EnvironmentSystem { class ESVector2; }
namespace TA::EnvironmentSystem { class ESVector3; }
namespace TA::EnvironmentSystem { class HeightMapData; }
namespace UnityEngine { class B196ACFA9D2AE729; }
namespace UnityEngine { class FAED0374422E783A; }

#define TA_ENVIRONMENTSYSTEM_GPUPARTICLECUSTOMDATA_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x28B6870)
#define TA_ENVIRONMENTSYSTEM_GPUPARTICLECUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x28B6CE0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int GPUParticleCustomData_TypeDefinitionIndex = 16287;

	class GPUParticleCustomData : public ::TA::EnvironmentSystem::ESCustomData
	{
	public:
		::TA::EnvironmentSystem::ESFloat* ParticleCount; // 0x38
		::TA::EnvironmentSystem::ESVector3* BoundBoxCenter; // 0x40
		::TA::EnvironmentSystem::ESVector3* BoundBoxSize; // 0x48
		::TA::EnvironmentSystem::ESVector2* SizeRandom; // 0x50
		::TA::EnvironmentSystem::ESVector2* LifeRandom; // 0x58
		::TA::EnvironmentSystem::ESVector2* StartRotationRandom; // 0x60
		::TA::EnvironmentSystem::ESVector2* VelocityRandom; // 0x68
		::TA::EnvironmentSystem::ESVector3* ConstantWind; // 0x70
		::TA::EnvironmentSystem::ESFloat* NoiseFrequency; // 0x78
		::TA::EnvironmentSystem::ESFloat* NoiseIntensity; // 0x80
		::UnityEngine::B196ACFA9D2AE729* GpuParticleColorOverTime; // 0x88
		::UnityEngine::FAED0374422E783A* GpuParticleSizeOverTime; // 0x90
		::TA::EnvironmentSystem::ESObject* QuadMesh; // 0x98
		::TA::EnvironmentSystem::ESObject* GPUParticleMaterial; // 0xA0
		::TA::EnvironmentSystem::HeightMapData* HeightMapData; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_GPUPARTICLECUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void EvaluateParameters(::ABEBA93AD61764EF* F1EE4CF10E4B5F91, ::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Void(*)(::PVOID, ::ABEBA93AD61764EF*, ::System::Single))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_GPUPARTICLECUSTOMDATA_EVALUATEPARAMETERS_OFFSET))(this, F1EE4CF10E4B5F91, BBCFEC7DB309E927);
		}
	};
}
