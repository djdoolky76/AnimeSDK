#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GPUGrassBillboardRuntimeMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GPUGrassBillboardScatterParams.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GPUGrassBillboardSourceMaterialSwitchStage.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering::Universal { class GPUGrassBillboardBakeAsset; }

#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_AREMATERIALARRAYSEQUAL_OFFSET UNITYSDK_OFFSET(0x1D6FDC70)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_BUILDBILLBOARDBINDINGKEY_OFFSET UNITYSDK_OFFSET(0x1D6FE750)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_BUILDLEGACYBILLBOARDBINDINGKEY_OFFSET UNITYSDK_OFFSET(0x1D6FE550)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_BUILDTRANSFORMPATHSEGMENT_OFFSET UNITYSDK_OFFSET(0x1D6FEC60)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_BUILDTRANSFORMPATH_1_OFFSET UNITYSDK_OFFSET(0x1D6FE9D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_BUILDTRANSFORMPATH_OFFSET UNITYSDK_OFFSET(0x1D6FE980)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_CACHEORIGINALSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1D6FDBA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_ENSUREDEFAULTBILLBOARDMESH_OFFSET UNITYSDK_OFFSET(0x1D6FE2A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_GETBILLBOARDBINDINGKEY_OFFSET UNITYSDK_OFFSET(0x1D6FE3B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_GETLEGACYBINDINGKEYFORPROXY_OFFSET UNITYSDK_OFFSET(0x1D6FE500)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_GETRUNTIMEBINDINGKEYFORPROXY_OFFSET UNITYSDK_OFFSET(0x1D6FE480)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_GET_LODGROUPCREATEDBYMERGEDMESHBAKER_OFFSET UNITYSDK_OFFSET(0x1D6FD7F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_GET_ORIGINALSHAREDMATERIALSCACHESTATUS_OFFSET UNITYSDK_OFFSET(0x1D6FD850)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D6FE400)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D6FE2E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_RESET_OFFSET UNITYSDK_OFFSET(0x1D6FDF90)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_RESTORESAVEDORIGINALSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1D6FDD50)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_SETLODGROUPCREATEDBYMERGEDMESHBAKER_OFFSET UNITYSDK_OFFSET(0x1D6FD800)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_TRYGETSAVEDORIGINALSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1D6FDAE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FEEF0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassBillboardTarget_TypeDefinitionIndex = 26237;

	class GPUGrassBillboardTarget : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* DefaultBillboardMeshPath; // 0x0
		::System::String* m_RuntimeBindingKey; // 0x18
		::System::Boolean bakeEnabled; // 0x20
		::System::Byte _padding0[0x3];
		::UnityEngine::Rendering::Universal::GPUGrassBillboardRuntimeMode runtimeMode; // 0x24
		::System::Boolean enableBakeAssetWorkflow; // 0x28
		::System::Byte _padding1[0x7];
		::UnityEngine::Rendering::Universal::GPUGrassBillboardBakeAsset* targetBakeAsset; // 0x30
		::UnityEngine::Material* billboardMaterial; // 0x38
		::UnityEngine::Mesh* billboardMesh; // 0x40
		::System::Int32 generateTargetSubMeshIndex; // 0x48
		::UnityEngine::Rendering::Universal::GPUGrassBillboardScatterParams scatterParams; // 0x4C
		::System::Single culledSourceScale; // 0x70
		::UnityEngine::Rendering::Universal::GPUGrassBillboardSourceMaterialSwitchStage sourceMaterialSwitchStage; // 0x74
		::System::Boolean addLodGroupToPrefab; // 0x78
		::System::Boolean overwriteLodGroupDistanceParameters; // 0x79
		::System::Byte _padding2[0x2];
		::System::Single lodGroupLod0ToLod1DistancePercent; // 0x7C
		::System::Single lodGroupLod1ToLod2DistancePercent; // 0x80
		::System::Boolean generateLod1; // 0x84
		::System::Byte _padding3[0x3];
		::System::Single generateLod1RatioPercent; // 0x88
		::System::Boolean generateLod2; // 0x8C
		::System::Byte _padding4[0x3];
		::System::Single generateLod2RatioPercent; // 0x90
		::System::Boolean m_LodGroupCreatedByMergedMeshBaker; // 0x94
		::System::Byte _padding5[0x3];
		::Il2CppArray<::UnityEngine::Material*>* m_OriginalSharedMaterials; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET__CTOR_OFFSET))(this);
		}

		::System::Boolean get_lodGroupCreatedByMergedMeshBaker()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_GET_LODGROUPCREATEDBYMERGEDMESHBAKER_OFFSET))(this);
		}

		::System::Void SetLodGroupCreatedByMergedMeshBaker(::System::Boolean createdByBaker)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_SETLODGROUPCREATEDBYMERGEDMESHBAKER_OFFSET))(this, createdByBaker);
		}

		::System::String* get_OriginalSharedMaterialsCacheStatus()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_GET_ORIGINALSHAREDMATERIALSCACHESTATUS_OFFSET))(this);
		}

		::System::Boolean TryGetSavedOriginalSharedMaterials(::Il2CppArray<::UnityEngine::Material*>*& originalMaterials)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_TRYGETSAVEDORIGINALSHAREDMATERIALS_OFFSET))(this, originalMaterials);
		}

		::System::Void CacheOriginalSharedMaterials(::Il2CppArray<::UnityEngine::Material*>* originalMaterials, ::System::Boolean overwriteExisting)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_CACHEORIGINALSHAREDMATERIALS_OFFSET))(this, originalMaterials, overwriteExisting);
		}

		::System::Boolean RestoreSavedOriginalSharedMaterials()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_RESTORESAVEDORIGINALSHAREDMATERIALS_OFFSET))(this);
		}

		static ::System::Boolean AreMaterialArraysEqual(::Il2CppArray<::UnityEngine::Material*>* lhs, ::Il2CppArray<::UnityEngine::Material*>* rhs)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_AREMATERIALARRAYSEQUAL_OFFSET))(lhs, rhs);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_RESET_OFFSET))(this);
		}

		::System::Void EnsureDefaultBillboardMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_ENSUREDEFAULTBILLBOARDMESH_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_ONDESTROY_OFFSET))(this);
		}

		::System::String* GetRuntimeBindingKeyForProxy()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_GETRUNTIMEBINDINGKEYFORPROXY_OFFSET))(this);
		}

		::System::String* GetLegacyBindingKeyForProxy()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_GETLEGACYBINDINGKEYFORPROXY_OFFSET))(this);
		}

		::System::String* GetBillboardBindingKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_GETBILLBOARDBINDINGKEY_OFFSET))(this);
		}

		static ::System::String* BuildBillboardBindingKey(::UnityEngine::Transform* targetTransform)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_BUILDBILLBOARDBINDINGKEY_OFFSET))(targetTransform);
		}

		static ::System::String* BuildLegacyBillboardBindingKey(::UnityEngine::Transform* targetTransform)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_BUILDLEGACYBILLBOARDBINDINGKEY_OFFSET))(targetTransform);
		}

		static ::System::String* BuildTransformPath(::UnityEngine::Transform* targetTransform)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_BUILDTRANSFORMPATH_OFFSET))(targetTransform);
		}

		static ::System::String* BuildTransformPath_1(::UnityEngine::Transform* targetTransform, ::System::Boolean includeSiblingIndex)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_BUILDTRANSFORMPATH_1_OFFSET))(targetTransform, includeSiblingIndex);
		}

		static ::System::String* BuildTransformPathSegment(::UnityEngine::Transform* targetTransform, ::System::Boolean includeSiblingIndex)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDTARGET_BUILDTRANSFORMPATHSEGMENT_OFFSET))(targetTransform, includeSiblingIndex);
		}
	};
}
