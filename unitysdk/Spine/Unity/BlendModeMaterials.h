#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/BlendMode.h"
#include "unitysdk/System/Object.h"

namespace Spine { class AtlasRegion; }
namespace Spine { class SkeletonData; }
namespace Spine::Unity { class BlendModeMaterials_CreateForRegionDelegate; }
namespace Spine::Unity { class BlendModeMaterials_ReplacementMaterial; }
namespace Spine::Unity { class BlendModeMaterials_TemplateMaterials; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define SPINE_UNITY_BLENDMODEMATERIALS_APPLYMATERIALS_OFFSET UNITYSDK_OFFSET(0x1FDC9530)
#define SPINE_UNITY_BLENDMODEMATERIALS_BLENDMODEFORMATERIAL_OFFSET UNITYSDK_OFFSET(0x1FDC7020)
#define SPINE_UNITY_BLENDMODEMATERIALS_CLONEATLASREGIONWITHMATERIAL_OFFSET UNITYSDK_OFFSET(0x1FDC9BC0)
#define SPINE_UNITY_BLENDMODEMATERIALS_CREATEANDASSIGNMATERIALS_1_OFFSET UNITYSDK_OFFSET(0x1FDC8130)
#define SPINE_UNITY_BLENDMODEMATERIALS_CREATEANDASSIGNMATERIALS_OFFSET UNITYSDK_OFFSET(0x1FDC7FF0)
#define SPINE_UNITY_BLENDMODEMATERIALS_CREATEFORREGION_OFFSET UNITYSDK_OFFSET(0x1FDC8E20)
#define SPINE_UNITY_BLENDMODEMATERIALS_CREATEREPLACEMENTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1FDC9100)
#define SPINE_UNITY_BLENDMODEMATERIALS_GET_REQUIRESBLENDMODEMATERIALS_OFFSET UNITYSDK_OFFSET(0x1FDC7000)
#define SPINE_UNITY_BLENDMODEMATERIALS_SET_REQUIRESBLENDMODEMATERIALS_OFFSET UNITYSDK_OFFSET(0x1FDC7010)
#define SPINE_UNITY_BLENDMODEMATERIALS_UPDATEBLENDMODEMATERIALSREQUIREDSTATE_OFFSET UNITYSDK_OFFSET(0x1FDC7760)
#define SPINE_UNITY_BLENDMODEMATERIALS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDC9D80)

namespace Spine::Unity
{
	inline static constexpr unsigned int BlendModeMaterials_TypeDefinitionIndex = 38096;

	class BlendModeMaterials : public ::System::Object
	{
	public:
		// static const ::System::String* MATERIAL_SUFFIX_MULTIPLY; // 0x0
		// static const ::System::String* MATERIAL_SUFFIX_SCREEN; // 0x0
		// static const ::System::String* MATERIAL_SUFFIX_ADDITIVE; // 0x0
		::System::Boolean requiresBlendModeMaterials; // 0x10
		::System::Boolean applyAdditiveMaterial; // 0x11
		::System::Byte _padding0[0x6];
		::System::Collections::Generic::List_1<::System::Object*>* additiveMaterials; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* multiplyMaterials; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* screenMaterials; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_RequiresBlendModeMaterials()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_GET_REQUIRESBLENDMODEMATERIALS_OFFSET))(this);
		}

		::System::Void set_RequiresBlendModeMaterials(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_SET_REQUIRESBLENDMODEMATERIALS_OFFSET))(this, value);
		}

		::Spine::BlendMode BlendModeForMaterial(::UnityEngine::Material* material)
		{
			return ((::Spine::BlendMode(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_BLENDMODEFORMATERIAL_OFFSET))(this, material);
		}

		::System::Boolean UpdateBlendmodeMaterialsRequiredState(::Spine::SkeletonData* skeletonData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_UPDATEBLENDMODEMATERIALSREQUIREDSTATE_OFFSET))(this, skeletonData);
		}

		static ::System::Boolean CreateAndAssignMaterials(::Spine::Unity::SkeletonDataAsset* skeletonDataAsset, ::Spine::Unity::BlendModeMaterials_TemplateMaterials* templateMaterials, ::System::Boolean& anyReplacementMaterialsChanged)
		{
			return ((::System::Boolean(*)(::Spine::Unity::SkeletonDataAsset*, ::Spine::Unity::BlendModeMaterials_TemplateMaterials*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_CREATEANDASSIGNMATERIALS_OFFSET))(skeletonDataAsset, templateMaterials, anyReplacementMaterialsChanged);
		}

		static ::System::Boolean CreateAndAssignMaterials_1(::Spine::Unity::SkeletonDataAsset* skeletonDataAsset, ::Spine::Unity::BlendModeMaterials_TemplateMaterials* templateMaterials, ::System::Boolean& anyReplacementMaterialsChanged, ::System::Action_1<::Spine::Unity::SkeletonDataAsset*>* clearSkeletonDataAssetFunc, ::System::Action_1<::Spine::Unity::SkeletonDataAsset*>* afterAssetModifiedFunc, ::Spine::Unity::BlendModeMaterials_CreateForRegionDelegate* createForRegionFunc)
		{
			return ((::System::Boolean(*)(::Spine::Unity::SkeletonDataAsset*, ::Spine::Unity::BlendModeMaterials_TemplateMaterials*, ::System::Boolean&, ::System::Action_1<::Spine::Unity::SkeletonDataAsset*>*, ::System::Action_1<::Spine::Unity::SkeletonDataAsset*>*, ::Spine::Unity::BlendModeMaterials_CreateForRegionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_CREATEANDASSIGNMATERIALS_1_OFFSET))(skeletonDataAsset, templateMaterials, anyReplacementMaterialsChanged, clearSkeletonDataAssetFunc, afterAssetModifiedFunc, createForRegionFunc);
		}

		static ::System::Boolean CreateForRegion(::System::Collections::Generic::List_1<::System::Object*>*& replacementMaterials, ::System::Boolean& anyReplacementMaterialsChanged, ::Spine::AtlasRegion* originalRegion, ::UnityEngine::Material* materialTemplate, ::System::String* materialSuffix, ::Spine::Unity::SkeletonDataAsset* skeletonDataAsset)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::Object*>*&, ::System::Boolean&, ::Spine::AtlasRegion*, ::UnityEngine::Material*, ::System::String*, ::Spine::Unity::SkeletonDataAsset*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_CREATEFORREGION_OFFSET))(replacementMaterials, anyReplacementMaterialsChanged, originalRegion, materialTemplate, materialSuffix, skeletonDataAsset);
		}

		static ::Spine::Unity::BlendModeMaterials_ReplacementMaterial* CreateReplacementMaterial(::Spine::AtlasRegion* originalRegion, ::UnityEngine::Material* materialTemplate, ::System::String* materialSuffix)
		{
			return ((::Spine::Unity::BlendModeMaterials_ReplacementMaterial*(*)(::Spine::AtlasRegion*, ::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_CREATEREPLACEMENTMATERIAL_OFFSET))(originalRegion, materialTemplate, materialSuffix);
		}

		::System::Void ApplyMaterials(::Spine::SkeletonData* skeletonData)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_APPLYMATERIALS_OFFSET))(this, skeletonData);
		}

		::Spine::AtlasRegion* CloneAtlasRegionWithMaterial(::Spine::AtlasRegion* originalRegion, ::System::Collections::Generic::List_1<::System::Object*>* replacementMaterials)
		{
			return ((::Spine::AtlasRegion*(*)(::PVOID, ::Spine::AtlasRegion*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_CLONEATLASREGIONWITHMATERIAL_OFFSET))(this, originalRegion, replacementMaterials);
		}
	};
}
