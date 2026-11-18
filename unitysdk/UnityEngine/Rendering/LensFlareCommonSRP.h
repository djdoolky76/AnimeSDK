#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/LensFlareOcclusionTestInput.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SRPLensFlareType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/Rendering/LensFlareCommonSRP_ComponentContext.h"
#include "unitysdk/UnityEngine/Rendering/LensFlareCommonSRP_ComputeLocalSizeParamPack.h"
#include "unitysdk/UnityEngine/Rendering/LensFlareCommonSRP_LensFlareRuntimeData.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Random; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::NAPRenderPipeline0 { class LensFlareComponentSRP; }
namespace UnityEngine::NAPRenderPipeline0 { class LensFlareDataElementSRP; }
namespace UnityEngine::NAPRenderPipeline0 { class PerCameraLensFlareData; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class DynamicArray_1; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_ADDDATA_OFFSET UNITYSDK_OFFSET(0x1D1733A0)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_BUILDCPUCONTEXTDATA_OFFSET UNITYSDK_OFFSET(0x1D174A10)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_COMPUTELOCALSIZE_OFFSET UNITYSDK_OFFSET(0x1D172D40)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_DOLENSFLAREDATADRIVENCOMMON_EXECUTEONMAIN_OFFSET UNITYSDK_OFFSET(0x1D175450)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_DOOCCLUSION_EXECUTEONMAIN_OFFSET UNITYSDK_OFFSET(0x1D175140)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_DRAWLENSFLAREELEMENT_OFFSET UNITYSDK_OFFSET(0x1D175320)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_ENSUREASSETS_OFFSET UNITYSDK_OFFSET(0x1D1730D0)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GETFADETRANSPARENCY_OFFSET UNITYSDK_OFFSET(0x1D172500)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GETFLAREDATA0_OFFSET UNITYSDK_OFFSET(0x1D172030)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GETLENSFLARELIGHTATTENUATION_OFFSET UNITYSDK_OFFSET(0x1D172960)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GETLENSFLARERAYOFFSET_OFFSET UNITYSDK_OFFSET(0x1D172310)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GETORCREATECACHEDLENSFLAREDATA_OFFSET UNITYSDK_OFFSET(0x1D1723F0)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1D172FC0)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D1719B0)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1D173020)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_PREPARECONTEXT_OFFSET UNITYSDK_OFFSET(0x1D174440)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_REMOVEDATA_OFFSET UNITYSDK_OFFSET(0x1D173600)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_SHAPEATTENUATIONDIRLIGHT_OFFSET UNITYSDK_OFFSET(0x1D171E60)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_SHAPEATTENUATIONPOINTLIGHT_OFFSET UNITYSDK_OFFSET(0x1D171E20)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_SHAPEATTENUATIONSPOTCONELIGHT_OFFSET UNITYSDK_OFFSET(0x1D171EF0)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_UPDATEFORLIGHTS_OFFSET UNITYSDK_OFFSET(0x1D173930)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D17AB40)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D171AA0)
#define UNITYENGINE_RENDERING_LENSFLARECOMMONSRP__DOLENSFLAREDATADRIVENCOMMON_EXECUTEONMAIN_G__RANDOMRANGE_58_0_OFFSET UNITYSDK_OFFSET(0x1D17AAF0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LensFlareCommonSRP_TypeDefinitionIndex = 26383;

	class LensFlareCommonSRP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_s_FlareAtlasScaleOffsets()
		{
			return (::Il2CppArray<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x24490);
		}
		static ::Il2CppArray<::UnityEngine::Matrix4x4>** StaticGet_s_FlareMatrix()
		{
			return (::Il2CppArray<::UnityEngine::Matrix4x4>**)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x24498);
		}
		static ::UnityEngine::Rendering::LensFlareCommonSRP** StaticGet_instance()
		{
			return (::UnityEngine::Rendering::LensFlareCommonSRP**)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x244A0);
		}
		static ::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Object*>** StaticGet_m_Data()
		{
			return (::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x244A8);
		}
		static ::UnityEngine::Mesh** StaticGet_m_QuadMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x244B0);
		}
		static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_s_FlareDatas1()
		{
			return (::Il2CppArray<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x244B8);
		}
		static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_s_FlareDatas4()
		{
			return (::Il2CppArray<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x244C0);
		}
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_m_PropertyBlock()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x244C8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_DoLensFlareDataDrivenCommonSampler()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x244D0);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_s_FlareBlendModes()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x244D8);
		}
		static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_s_FlareDatas5()
		{
			return (::Il2CppArray<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x244E0);
		}
		static ::Il2CppArray<::UnityEngine::Matrix4x4>** StaticGet_instancingMatrices()
		{
			return (::Il2CppArray<::UnityEngine::Matrix4x4>**)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x244E8);
		}
		static ::System::Int32* StaticGet__FlareBlendMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x6A10);
		}
		static ::System::Int32* StaticGet__FlareAtlasTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x6A14);
		}
		static ::System::Int32* StaticGet__FlareDatas1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x6A18);
		}
		static ::System::Int32* StaticGet__FlareAtlasScaleOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x6A1C);
		}
		static ::System::Int32* StaticGet__FlareOcclusion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x6A20);
		}
		static ::System::Int32* StaticGet_s_SizeOfLensFlareOcclusionTestInput()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x6A24);
		}
		static ::System::Int32* StaticGet__FlareData4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x6A28);
		}
		static ::System::Int32* StaticGet__FlareBlendModes()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x6A2C);
		}
		static ::System::Int32* StaticGet__FlareDatas4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x6A30);
		}
		static ::System::Int32* StaticGet__FlareData1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x6A34);
		}
		static ::System::Int32* StaticGet__FlareDatas5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x6A38);
		}
		static ::System::Int32* StaticGet__FlareData5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x6A3C);
		}
		static ::System::Int32* StaticGet__FlareAtlasScaleOffsets()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x6A40);
		}
		static ::System::Int32* StaticGet__FlareTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LensFlareCommonSRP_TypeDefinitionIndex)->GetStaticField(0x6A44);
		}
		// static const ::System::Int32 s_LensFlareMaxCount = 0x80; // 0x0
		// static const ::System::Int32 kDrawIndexedBatchSize = 0x80; // 0x0
		// static const ::System::Int32 maxBatchCount = 0x14; // 0x0
		::System::Collections::Generic::Stack_1<::System::Int32>* unusedBufferIndex; // 0x10
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::LensFlareOcclusionTestInput>* inBufferData; // 0x18
		::Il2CppArray<::System::Object*>* componentContext; // 0x20
		::System::Collections::Generic::Dictionary_2<::UnityEngine::NAPRenderPipeline0::SRPLensFlareType, ::System::Collections::Generic::List_1<::System::Object*>*>* s_SingleLensFlareDatas; // 0x28
		::System::Random* m_Random; // 0x30
		::System::Int32 componentContextCount; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::LensFlareCommonSRP* get_Instance()
		{
			return ((::UnityEngine::Rendering::LensFlareCommonSRP*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GET_INSTANCE_OFFSET))();
		}

		static ::System::Single ShapeAttenuationPointLight()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_SHAPEATTENUATIONPOINTLIGHT_OFFSET))();
		}

		static ::System::Single ShapeAttenuationDirLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_SHAPEATTENUATIONDIRLIGHT_OFFSET))(forward, wo);
		}

		static ::System::Single ShapeAttenuationSpotConeLight(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 wo, ::System::Single spotAngle, ::System::Single innerSpotPercent01)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_SHAPEATTENUATIONSPOTCONELIGHT_OFFSET))(forward, wo, spotAngle, innerSpotPercent01);
		}

		static ::UnityEngine::Vector4 GetFlareData0(::UnityEngine::Vector2 screenPos, ::UnityEngine::Vector2 translationScale, ::UnityEngine::Vector2 vLocalScreenRatio, ::System::Single angleDeg, ::System::Single position, ::System::Single angularOffset, ::UnityEngine::Vector2 positionOffset, ::System::Boolean autoRotate)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GETFLAREDATA0_OFFSET))(screenPos, translationScale, vLocalScreenRatio, angleDeg, position, angularOffset, positionOffset, autoRotate);
		}

		static ::UnityEngine::Vector2 GetLensFlareRayOffset(::UnityEngine::Vector2 screenPos, ::UnityEngine::Vector2 focus, ::System::Single position, ::System::Single globalCos0, ::System::Single globalSin0)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GETLENSFLARERAYOFFSET_OFFSET))(screenPos, focus, position, globalCos0, globalSin0);
		}

		static ::UnityEngine::NAPRenderPipeline0::PerCameraLensFlareData* GetOrCreateCachedLensFlareData(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::UnityEngine::NAPRenderPipeline0::PerCameraLensFlareData*(*)(::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GETORCREATECACHEDLENSFLAREDATA_OFFSET))(cameraData);
		}

		static ::System::Void GetFadeTransparency(::UnityEngine::NAPRenderPipeline0::LensFlareComponentSRP* comp, ::UnityEngine::NAPRenderPipeline0::PerCameraLensFlareData* cameraLensFlareData, ::UnityEngine::Vector3 viewportPos, ::System::Single& fade)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::LensFlareComponentSRP*, ::UnityEngine::NAPRenderPipeline0::PerCameraLensFlareData*, ::UnityEngine::Vector3, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GETFADETRANSPARENCY_OFFSET))(comp, cameraLensFlareData, viewportPos, fade);
		}

		static ::System::Single GetLensFlareLightAttenuation(::UnityEngine::NAPRenderPipeline0::LensFlareComponentSRP* lensFlareComponnet, ::UnityEngine::Vector3 wo)
		{
			return ((::System::Single(*)(::UnityEngine::NAPRenderPipeline0::LensFlareComponentSRP*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GETLENSFLARELIGHTATTENUATION_OFFSET))(lensFlareComponnet, wo);
		}

		static ::UnityEngine::Vector2 ComputeLocalSize(::UnityEngine::Vector2 rayOff, ::UnityEngine::Vector2 rayOff0, ::UnityEngine::Vector2 curSize, ::UnityEngine::AnimationCurve* distortionCurve, ::UnityEngine::Rendering::LensFlareCommonSRP_ComputeLocalSizeParamPack& paramPack)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::AnimationCurve*, ::UnityEngine::Rendering::LensFlareCommonSRP_ComputeLocalSizeParamPack&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_COMPUTELOCALSIZE_OFFSET))(rayOff, rayOff0, curSize, distortionCurve, paramPack);
		}

		::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Object*>* get_Data()
		{
			return ((::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_GET_DATA_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_ISEMPTY_OFFSET))(this);
		}

		::System::Void EnsureAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_ENSUREASSETS_OFFSET))(this);
		}

		::System::Void AddData(::UnityEngine::NAPRenderPipeline0::LensFlareComponentSRP* newData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::LensFlareComponentSRP*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_ADDDATA_OFFSET))(this, newData);
		}

		::System::Void RemoveData(::UnityEngine::NAPRenderPipeline0::LensFlareComponentSRP* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::LensFlareComponentSRP*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_REMOVEDATA_OFFSET))(this, data);
		}

		::System::Void UpdateForLights()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_UPDATEFORLIGHTS_OFFSET))(this);
		}

		::UnityEngine::Rendering::LensFlareCommonSRP_ComponentContext PrepareContext(::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareRuntimeData& runtimeData, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::UnityEngine::Rendering::LensFlareCommonSRP_ComponentContext(*)(::PVOID, ::UnityEngine::Rendering::LensFlareCommonSRP_LensFlareRuntimeData&, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_PREPARECONTEXT_OFFSET))(this, runtimeData, cameraData);
		}

		::System::Void BuildCPUContextData(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::System::Boolean buildOccluionPassData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_BUILDCPUCONTEXTDATA_OFFSET))(this, cameraData, buildOccluionPassData);
		}

		::System::Void DoOcclusion_ExecuteOnMain(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* computeShader, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_DOOCCLUSION_EXECUTEONMAIN_OFFSET))(this, cmd, computeShader, cameraData);
		}

		::System::Void DrawLensFlareElement(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::LensFlareDataElementSRP* element, ::UnityEngine::Material* lensFlareMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::LensFlareDataElementSRP*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_DRAWLENSFLAREELEMENT_OFFSET))(this, cmd, element, lensFlareMaterial);
		}

		::System::Void DoLensFlareDataDrivenCommon_ExecuteOnMain(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Material* lensFlareMaterial, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::System::Single actualWidth, ::System::Single actualHeight, ::System::Boolean debugView)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP_DOLENSFLAREDATADRIVENCOMMON_EXECUTEONMAIN_OFFSET))(this, cmd, lensFlareMaterial, cameraData, actualWidth, actualHeight, debugView);
		}

		::System::Single _DoLensFlareDataDrivenCommon_ExecuteOnMain_g__RandomRange_58_0(::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLARECOMMONSRP__DOLENSFLAREDATADRIVENCOMMON_EXECUTEONMAIN_G__RANDOMRANGE_58_0_OFFSET))(this, min, max);
		}
	};
}
