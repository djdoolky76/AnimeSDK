#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IntegerRectangle.h"
#include "unitysdk/PerObjectShadowFailedAtlasId.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PerObjectShadowResolveData.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/PerObjectShadow___c__DisplayClass45_0.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawPerObjectShadowParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Plane.h"

class CSharpPerObjectShadowSettings;
class IPerObjectShadowEntity;
class NapRenderEntity;
class RectanglePacker;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Light; }
namespace UnityEngine::NAPRenderPipeline0 { class CameraCacheData; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering::Universal { class MonoPerObjectShadow; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define PEROBJECTSHADOW_ACTIVECULLINGFORMONOPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x1D8B4480)
#define PEROBJECTSHADOW_ACTIVECULLINGFORNAPRENDERENTITY_OFFSET UNITYSDK_OFFSET(0x1D8B3000)
#define PEROBJECTSHADOW_CASTPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x1D8B5270)
#define PEROBJECTSHADOW_CULLENTITY_OFFSET UNITYSDK_OFFSET(0x1D8B3BC0)
#define PEROBJECTSHADOW_FINDMAINLIGHT_OFFSET UNITYSDK_OFFSET(0x1D8B69A0)
#define PEROBJECTSHADOW_FRUSTUMCULLING_OFFSET UNITYSDK_OFFSET(0x1D8B6CE0)
#define PEROBJECTSHADOW_GETSCREENSPACEDRAWPARAMS_OFFSET UNITYSDK_OFFSET(0x1D8B9450)
#define PEROBJECTSHADOW_GET_CANUSENATIVE_OFFSET UNITYSDK_OFFSET(0x1D8B1120)
#define PEROBJECTSHADOW_GET_ENTITIES_OFFSET UNITYSDK_OFFSET(0x1D8B14B0)
#define PEROBJECTSHADOW_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D8B1400)
#define PEROBJECTSHADOW_GET_USENATIVE_OFFSET UNITYSDK_OFFSET(0x1D8B1130)
#define PEROBJECTSHADOW_GET_USESHADOWPROXY_OFFSET UNITYSDK_OFFSET(0x1D8B14C0)
#define PEROBJECTSHADOW_PREPARERENDERDATA_OFFSET UNITYSDK_OFFSET(0x1D8B6F20)
#define PEROBJECTSHADOW_REFRESHUSENATIVE_OFFSET UNITYSDK_OFFSET(0x1D8B1190)
#define PEROBJECTSHADOW_RESETNATIVEBACKENDSTATE_OFFSET UNITYSDK_OFFSET(0x1D8B1380)
#define PEROBJECTSHADOW_SORTENTITIES_OFFSET UNITYSDK_OFFSET(0x1D8B4AB0)
#define PEROBJECTSHADOW_UPDATEPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x1D8B94C0)
#define PEROBJECTSHADOW_UPDATETARGETS_OFFSET UNITYSDK_OFFSET(0x1D8B17D0)
#define PEROBJECTSHADOW_USEPOSLERPCSM_OFFSET UNITYSDK_OFFSET(0x1D8B5E40)
#define PEROBJECTSHADOW__ACTIVECULLINGFORNAPRENDERENTITY_G__GETISACTIVEANDENABLED_45_0_OFFSET UNITYSDK_OFFSET(0x1D8B67A0)
#define PEROBJECTSHADOW__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8B9C00)
#define PEROBJECTSHADOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B1600)

inline static constexpr unsigned int PerObjectShadow_TypeDefinitionIndex = 27395;

class PerObjectShadow : public ::System::Object
{
public:
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_CullEntity()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x23A00);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_UpdatePerObjectShadow()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x23A08);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_CheckRendererVisibility()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x23A10);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SampleRegularCulling()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x23A18);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SamplePerObjectShadowUpdateTargets()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x23A20);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SortEntities()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x23A28);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SetRendererStates()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x23A30);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_ProcessFading()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x23A38);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SamplePerObjectShadow()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x23A40);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SetShadowDataBlock()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x23A48);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SamplePrepareForCulling()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x23A50);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_AfterGetScreenSpaceDrawParams()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x23A58);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SampleObjectShadow()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x23A60);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_CalculateFrustumPlanes()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x23A68);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_BeforeGetScreenSpaceDrawParams()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x23A70);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SampleFrustumCulling()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x23A78);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SamplePerObjectShadowEditorOnly()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x23A80);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_PrepareRenderData()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x23A88);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SampleFindMainLight()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x23A90);
	}
	static ::System::Boolean* StaticGet_DebugPause()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x5CC0);
	}
	static ::System::Boolean* StaticGet_s_UseNative()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow_TypeDefinitionIndex)->GetStaticField(0x5CC1);
	}
	// static const ::System::Int32 shadowBlendRange = 0x2; // 0x0
	::System::Collections::Generic::List_1<::PerObjectShadowFailedAtlasId>* failedAtlasIds; // 0x10
	::System::Collections::Generic::List_1<::IPerObjectShadowEntity*>* m_Entities; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::PerObjectShadowResolveData>* resolveData; // 0x20
	::RectanglePacker* _packer; // 0x28
	::System::Collections::Generic::List_1<::IPerObjectShadowEntity*>* m_PreviousEntities; // 0x30
	::System::Collections::Generic::List_1<::IPerObjectShadowEntity*>* sortList; // 0x38
	::IntegerRectangle _rect; // 0x40
	::UnityEngine::Vector2 atlasSize; // 0x60
	::System::Int32 listCount; // 0x68

	::System::Void _ctor(::CSharpPerObjectShadowSettings* setting)
	{
		return ((::System::Void(*)(::PVOID, ::CSharpPerObjectShadowSettings*))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW__CTOR_OFFSET))(this, setting);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEROBJECTSHADOW__CCTOR_OFFSET))();
	}

	static ::System::Boolean get_CanUseNative()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_GET_CANUSENATIVE_OFFSET))();
	}

	static ::System::Boolean get_UseNative()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_GET_USENATIVE_OFFSET))();
	}

	static ::System::Boolean RefreshUseNative()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_REFRESHUSENATIVE_OFFSET))();
	}

	static ::System::Void ResetNativeBackendState()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_RESETNATIVEBACKENDSTATE_OFFSET))();
	}

	static ::PerObjectShadow* get_instance()
	{
		return ((::PerObjectShadow*(*)())((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_GET_INSTANCE_OFFSET))();
	}

	::System::Collections::Generic::List_1<::IPerObjectShadowEntity*>* get_Entities()
	{
		return ((::System::Collections::Generic::List_1<::IPerObjectShadowEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_GET_ENTITIES_OFFSET))(this);
	}

	::System::Boolean get_UseShadowProxy()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_GET_USESHADOWPROXY_OFFSET))(this);
	}

	::System::Void UpdateTargets(::UnityEngine::Camera* camera, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_UPDATETARGETS_OFFSET))(this, camera, renderingData, postCullRenderingData);
	}

	::System::Boolean ActiveCullingForNapRenderEntity(::NapRenderEntity* entity, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset, ::CSharpPerObjectShadowSettings* setting, ::System::Boolean disableCulling, ::UnityEngine::NAPRenderPipeline0::CameraCacheData* cacheData, ::System::Single cullDistanceScale)
	{
		return ((::System::Boolean(*)(::PVOID, ::NapRenderEntity*, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::CSharpPerObjectShadowSettings*, ::System::Boolean, ::UnityEngine::NAPRenderPipeline0::CameraCacheData*, ::System::Single))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_ACTIVECULLINGFORNAPRENDERENTITY_OFFSET))(this, entity, asset, setting, disableCulling, cacheData, cullDistanceScale);
	}

	::System::Boolean ActiveCullingForMonoPerObjectShadow(::UnityEngine::Rendering::Universal::MonoPerObjectShadow* entity, ::CSharpPerObjectShadowSettings* setting, ::UnityEngine::Camera* camera)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::Universal::MonoPerObjectShadow*, ::CSharpPerObjectShadowSettings*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_ACTIVECULLINGFORMONOPEROBJECTSHADOW_OFFSET))(this, entity, setting, camera);
	}

	::System::Void CullEntity(::IPerObjectShadowEntity* entity, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset, ::System::Boolean fade)
	{
		return ((::System::Void(*)(::PVOID, ::IPerObjectShadowEntity*, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_CULLENTITY_OFFSET))(this, entity, asset, fade);
	}

	static ::UnityEngine::Light* FindMainLight()
	{
		return ((::UnityEngine::Light*(*)())((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_FINDMAINLIGHT_OFFSET))();
	}

	::System::Boolean FrustumCulling(::IPerObjectShadowEntity* entity, ::Il2CppArray<::UnityEngine::Plane>* cullingPlanes)
	{
		return ((::System::Boolean(*)(::PVOID, ::IPerObjectShadowEntity*, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_FRUSTUMCULLING_OFFSET))(this, entity, cullingPlanes);
	}

	::System::Void PrepareRenderData(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::CSharpPerObjectShadowSettings* setting)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::CSharpPerObjectShadowSettings*))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_PREPARERENDERDATA_OFFSET))(this, postCullRenderingData, setting);
	}

	static ::System::Void SortEntities(::System::Collections::Generic::List_1<::IPerObjectShadowEntity*>* entities, ::System::Int32 maxDrawCount, ::UnityEngine::Camera* camera)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::IPerObjectShadowEntity*>*, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_SORTENTITIES_OFFSET))(entities, maxDrawCount, camera);
	}

	::System::Void UsePOSLerpCSM(::CSharpPerObjectShadowSettings* settings, ::IPerObjectShadowEntity* entity)
	{
		return ((::System::Void(*)(::PVOID, ::CSharpPerObjectShadowSettings*, ::IPerObjectShadowEntity*))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_USEPOSLERPCSM_OFFSET))(this, settings, entity);
	}

	::System::Void CastPerObjectShadow(::CSharpPerObjectShadowSettings* settings, ::IPerObjectShadowEntity* entity, ::System::Boolean enable)
	{
		return ((::System::Void(*)(::PVOID, ::CSharpPerObjectShadowSettings*, ::IPerObjectShadowEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_CASTPEROBJECTSHADOW_OFFSET))(this, settings, entity, enable);
	}

	::System::Void GetScreenSpaceDrawParams(::UnityEngine::NAPRenderPipeline0::DrawPerObjectShadowParams& p)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::DrawPerObjectShadowParams&))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_GETSCREENSPACEDRAWPARAMS_OFFSET))(this, p);
	}

	::System::Void UpdatePerObjectShadow(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW_UPDATEPEROBJECTSHADOW_OFFSET))(this, postCullRenderingData);
	}

	static ::System::Boolean _ActiveCullingForNapRenderEntity_g__GetIsActiveAndEnabled_45_0(::PerObjectShadow___c__DisplayClass45_0& param_0, ::System::Object*& param_1)
	{
		return ((::System::Boolean(*)(::PerObjectShadow___c__DisplayClass45_0&, ::System::Object*&))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW__ACTIVECULLINGFORNAPRENDERENTITY_G__GETISACTIVEANDENABLED_45_0_OFFSET))(param_0, param_1);
	}
};
