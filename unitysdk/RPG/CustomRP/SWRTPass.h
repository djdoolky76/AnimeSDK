#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetBinding.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
class SWRTAsset;
namespace RPG::CustomRP { class CRPRendererData; }
namespace RPG::CustomRP { class SWRTPass; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_SWRTPASS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE19460)
#define RPG_CUSTOMRP_SWRTPASS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DE1A2A0)
#define RPG_CUSTOMRP_SWRTPASS_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1DE19520)
#define RPG_CUSTOMRP_SWRTPASS_GET_ATLASALBEDO_OFFSET UNITYSDK_OFFSET(0x1DE19630)
#define RPG_CUSTOMRP_SWRTPASS_GET_ATLASNORMAL_OFFSET UNITYSDK_OFFSET(0x1DE19640)
#define RPG_CUSTOMRP_SWRTPASS_GET_BLASINDEX_OFFSET UNITYSDK_OFFSET(0x1DE195F0)
#define RPG_CUSTOMRP_SWRTPASS_GET_BLASOFFSETS8_OFFSET UNITYSDK_OFFSET(0x1DE195D0)
#define RPG_CUSTOMRP_SWRTPASS_GET_BUILDREVISION_OFFSET UNITYSDK_OFFSET(0x1DE19540)
#define RPG_CUSTOMRP_SWRTPASS_GET_BVHNODES8_OFFSET UNITYSDK_OFFSET(0x1DE195A0)
#define RPG_CUSTOMRP_SWRTPASS_GET_INDICES_OFFSET UNITYSDK_OFFSET(0x1DE19560)
#define RPG_CUSTOMRP_SWRTPASS_GET_LOCALTOWORLDS_OFFSET UNITYSDK_OFFSET(0x1DE19610)
#define RPG_CUSTOMRP_SWRTPASS_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x1DE19600)
#define RPG_CUSTOMRP_SWRTPASS_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x1DE19570)
#define RPG_CUSTOMRP_SWRTPASS_GET_RENDERERINDEX8_OFFSET UNITYSDK_OFFSET(0x1DE195E0)
#define RPG_CUSTOMRP_SWRTPASS_GET_TANGENTS_OFFSET UNITYSDK_OFFSET(0x1DE19580)
#define RPG_CUSTOMRP_SWRTPASS_GET_TRIANGLE8_OFFSET UNITYSDK_OFFSET(0x1DE195C0)
#define RPG_CUSTOMRP_SWRTPASS_GET_TRIANGLEINDEX8_OFFSET UNITYSDK_OFFSET(0x1DE195B0)
#define RPG_CUSTOMRP_SWRTPASS_GET_UVS_OFFSET UNITYSDK_OFFSET(0x1DE19590)
#define RPG_CUSTOMRP_SWRTPASS_GET_WORLDTOLOCALS_OFFSET UNITYSDK_OFFSET(0x1DE19620)
#define RPG_CUSTOMRP_SWRTPASS_INNEREXCUTE_OFFSET UNITYSDK_OFFSET(0x1DE19650)
#define RPG_CUSTOMRP_SWRTPASS_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1DE19530)
#define RPG_CUSTOMRP_SWRTPASS_SET_BUILDREVISION_OFFSET UNITYSDK_OFFSET(0x1DE19550)
#define RPG_CUSTOMRP_SWRTPASS_UPDATETESTCUBE_OFFSET UNITYSDK_OFFSET(0x1DE1B350)
#define RPG_CUSTOMRP_SWRTPASS__ENSURERESULTRT_OFFSET UNITYSDK_OFFSET(0x1DE1BED0)
#define RPG_CUSTOMRP_SWRTPASS__RECORDATLASBLIT_OFFSET UNITYSDK_OFFSET(0x1DE1AAA0)
#define RPG_CUSTOMRP_SWRTPASS__RELEASERESULTRT_OFFSET UNITYSDK_OFFSET(0x1DE1C160)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SWRTPass_TypeDefinitionIndex = 38799;

	class SWRTPass : public ::System::Object
	{
	public:
		::UnityEngine::ComputeBuffer* _Materials; // 0x10
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* _CaptureColors; // 0x18
		::UnityEngine::Rendering::RenderTargetBinding _CaptureBinding; // 0x20
		::UnityEngine::ComputeBuffer* _Indices; // 0x68
		::UnityEngine::RenderTexture* _AtlasNormal; // 0x70
		::UnityEngine::ComputeBuffer* _TriangleIndex8; // 0x78
		::UnityEngine::ComputeBuffer* _Tangents; // 0x80
		::UnityEngine::ComputeBuffer* _BlasIndex; // 0x88
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* _CaptureColorStores; // 0x90
		::UnityEngine::ComputeBuffer* _Positions; // 0x98
		::UnityEngine::RenderTexture* _ComputeResultRT; // 0xA0
		::UnityEngine::Material* _CaptureMaterial; // 0xA8
		::UnityEngine::Material* _BlitMaterial; // 0xB0
		::UnityEngine::RenderTexture* _AtlasAlbedo; // 0xB8
		::UnityEngine::ComputeBuffer* _UVs; // 0xC0
		::UnityEngine::ComputeBuffer* _BlasOffsets8; // 0xC8
		::SWRTAsset* _CurAsset; // 0xD0
		::UnityEngine::ComputeBuffer* _Triangle8; // 0xD8
		::UnityEngine::ComputeBuffer* _BVHNodes8; // 0xE0
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* _CaptureColorLoads; // 0xE8
		::UnityEngine::ComputeBuffer* _RendererIndex8; // 0xF0
		::UnityEngine::ComputeBuffer* _LocalToWorlds; // 0xF8
		::UnityEngine::ComputeBuffer* _WorldToLocals; // 0x100
		::UnityEngine::ComputeShader* _CachedComputeCS; // 0x108
		::System::Int32 _BuildRevision_k__BackingField; // 0x110
		::System::Int32 _CachedKernel; // 0x114
		static ::RPG::CustomRP::SWRTPass** StaticGet__Active_k__BackingField()
		{
			return (::RPG::CustomRP::SWRTPass**)UnitySDK::FromName("RPG.CustomRP", "SWRTPass")->GetStaticField(0x2E9F0);
		}

		// static const ::System::String* KeywordCompute; // 0x0
		// static const ::System::String* KeywordNonSwrt; // 0x0
		// static const ::System::String* KeywordScreen; // 0x0
		// static const ::System::String* KernelName; // 0x0
		::System::Void _ctor(::RPG::CustomRP::CRPRendererData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPRendererData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::CustomRP::SWRTPass* get_Active()
		{
			return ((::RPG::CustomRP::SWRTPass*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_ACTIVE_OFFSET))();
		}

		static ::System::Void set_Active(::RPG::CustomRP::SWRTPass* a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::SWRTPass*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_SET_ACTIVE_OFFSET))(a1);
		}

		::System::Int32 get_BuildRevision()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_BUILDREVISION_OFFSET))(this);
		}

		::System::Void set_BuildRevision(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_SET_BUILDREVISION_OFFSET))(this, a1);
		}

		::UnityEngine::ComputeBuffer* get_Indices()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_INDICES_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_Positions()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_POSITIONS_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_Tangents()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_TANGENTS_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_UVs()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_UVS_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_BVHNodes8()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_BVHNODES8_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_TriangleIndex8()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_TRIANGLEINDEX8_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_Triangle8()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_TRIANGLE8_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_BlasOffsets8()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_BLASOFFSETS8_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_RendererIndex8()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_RENDERERINDEX8_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_BlasIndex()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_BLASINDEX_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_Materials()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_MATERIALS_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_LocalToWorlds()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_LOCALTOWORLDS_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_WorldToLocals()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_WORLDTOLOCALS_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* get_AtlasAlbedo()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_ATLASALBEDO_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* get_AtlasNormal()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_GET_ATLASNORMAL_OFFSET))(this);
		}

		::System::Void InnerExcute(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_INNEREXCUTE_OFFSET))(this, a1);
		}

		::System::Void _RecordAtlasBlit(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS__RECORDATLASBLIT_OFFSET))(this, a1);
		}

		::System::Void UpdateTestCube(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_UPDATETESTCUBE_OFFSET))(this, a1, a2);
		}

		::System::Void _EnsureResultRT(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS__ENSURERESULTRT_OFFSET))(this, a1, a2);
		}

		::System::Void _ReleaseResultRT()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS__RELEASERESULTRT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SWRTPASS_DISPOSE_OFFSET))(this);
		}

	};
}
