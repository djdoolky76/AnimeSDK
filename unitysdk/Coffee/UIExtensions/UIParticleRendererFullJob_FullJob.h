#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/ParticleSystemRenderer_UIParticleRendererFullJobData.h"

namespace System { class Object; }

#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERERFULLJOB_FULLJOB_EXECUTEOPT_OFFSET UNITYSDK_OFFSET(0x8E44B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERERFULLJOB_FULLJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x8E44A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERERFULLJOB_FULLJOB_WRITEMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x8E44C0)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleRendererFullJob_FullJob_TypeDefinitionIndex = 34421;

	struct alignas(8) UIParticleRendererFullJob_FullJob
	{
		::Unity::Collections::NativeArray_1<::System::Object*> AllSimCmds; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::System::Object*> JobDatas; // 0x20
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::System::Object*> AllPropertySpecs; // 0x30
		::System::Byte _padding2[0x8];
		::System::Int32 OptPropCombineMeshMatrix; // 0x40
		::System::Int32 OptPropCanvasMatrix; // 0x44
		::System::Int32 OptPropUITransform; // 0x48
		::System::Int32 OptPropClipRect; // 0x4C
		::System::Int32 OptPropMultipliedColor; // 0x50

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERERFULLJOB_FULLJOB_EXECUTE_OFFSET))(this, index);
		}

		::System::Void ExecuteOpt(::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData& data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERERFULLJOB_FULLJOB_EXECUTEOPT_OFFSET))(this, data);
		}

		::System::Void WriteMaterialProperties(::System::Int32 materialId, ::System::Int32 rendererId, ::System::Int32 propStart, ::System::Int32 propCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERERFULLJOB_FULLJOB_WRITEMATERIALPROPERTIES_OFFSET))(this, materialId, rendererId, propStart, propCount);
		}
	};
}
