#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/CustomRenderPipeline/GPUParticleSystemBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BDC595893C6EE433 { class EC81A325BE4ED2E9; }
namespace UnityEngine { class ComputeShader; }

#define ABC_CUSTOMRENDERPIPELINE_LEAFPARTICLESYSTEM_E25F37A835A565C1_OFFSET UNITYSDK_OFFSET(0x2807B50)
#define ABC_CUSTOMRENDERPIPELINE_LEAFPARTICLESYSTEM_F1D44021A9CB79D7_OFFSET UNITYSDK_OFFSET(0x2807BB0)
#define ABC_CUSTOMRENDERPIPELINE_LEAFPARTICLESYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x2807C90)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int LeafParticleSystem_TypeDefinitionIndex = 16826;

	class LeafParticleSystem : public ::ABC::CustomRenderPipeline::GPUParticleSystemBase
	{
	public:
		::UnityEngine::Vector3 spawnBoxSize; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LEAFPARTICLESYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void F1D44021A9CB79D7(::BDC595893C6EE433::EC81A325BE4ED2E9* AF56F86C59FD37AD)
		{
			return ((::System::Void(*)(::PVOID, ::BDC595893C6EE433::EC81A325BE4ED2E9*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LEAFPARTICLESYSTEM_F1D44021A9CB79D7_OFFSET))(this, AF56F86C59FD37AD);
		}

		::UnityEngine::ComputeShader* E25F37A835A565C1()
		{
			return ((::UnityEngine::ComputeShader*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LEAFPARTICLESYSTEM_E25F37A835A565C1_OFFSET))(this);
		}
	};
}
