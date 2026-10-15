#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Eff_VoxelUnidirOcclusionMonoPlugin_SeparationOffsetModeType.h"
#include "unitysdk/RPG/Client/Eff_VoxelUnidirOcclusionMonoPlugin_SeparationUniformScaleMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class String; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class GPUParticlesAsset; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD14880)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xCD14830)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONMONOPLUGIN_NGHOECOCNAF_OFFSET UNITYSDK_OFFSET(0xCD14820)

namespace RPG::Client
{
	class Eff_VoxelUnidirOcclusionMonoPlugin
	{
	public:
		::System::Int32 ExampleProperty; // 0x30
		::System::Byte _padding0[0x4];
		::UnityEngine::GPUParticlesAsset* GPUParticleAsset; // 0x38
		::UnityEngine::ComputeShader* GPUParticleShader; // 0x40
		::UnityEngine::Vector4 ParticleSpawnScale; // 0x48
		::UnityEngine::Vector4 ParticleUnitScale; // 0x58
		::UnityEngine::Material* GPUParticleMaterial; // 0x68
		::System::Single FlyHeight; // 0x70
		::System::Single Disappear; // 0x74
		::System::Boolean AutoAdjustARPatternTiling; // 0x78
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector2 ARPatternTilingBase; // 0x7C
		::System::Boolean ARPatternUseAxisScale; // 0x84
		::System::Byte _padding2[0x3];
		::System::Single ARPatternScaleMultiplier; // 0x88
		::RPG::Client::Eff_VoxelUnidirOcclusionMonoPlugin_SeparationOffsetModeType SeparationOffsetMode; // 0x8C
		::UnityEngine::Vector4 SeparationOffsetBase; // 0x90
		::System::Boolean AutoAdjustSeparationOffsetByScale; // 0xA0
		::System::Boolean SeparationXYZUseAxisCompensation; // 0xA1
		::System::Byte _padding3[0x2];
		::RPG::Client::Eff_VoxelUnidirOcclusionMonoPlugin_SeparationUniformScaleMode SeparationUniformScale; // 0xA4
		::System::Boolean SeparationCompensateW; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::Boolean NGHOECOCNAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONMONOPLUGIN_NGHOECOCNAF_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
