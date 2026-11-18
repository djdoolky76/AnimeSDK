#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine { class AtlasRegion; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define SPINE_UNITY_BLENDMODEMATERIALS_CREATEFORREGIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F803000)
#define SPINE_UNITY_BLENDMODEMATERIALS_CREATEFORREGIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F8030C0)
#define SPINE_UNITY_BLENDMODEMATERIALS_CREATEFORREGIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F802BD0)
#define SPINE_UNITY_BLENDMODEMATERIALS_CREATEFORREGIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F802BC0)

namespace Spine::Unity
{
	inline static constexpr unsigned int BlendModeMaterials_CreateForRegionDelegate_TypeDefinitionIndex = 38099;

	class BlendModeMaterials_CreateForRegionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_CREATEFORREGIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::Collections::Generic::List_1<::System::Object*>*& replacementMaterials, ::System::Boolean& anyReplacementMaterialsChanged, ::Spine::AtlasRegion* originalRegion, ::UnityEngine::Material* materialTemplate, ::System::String* materialSuffix, ::Spine::Unity::SkeletonDataAsset* skeletonDataAsset)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*&, ::System::Boolean&, ::Spine::AtlasRegion*, ::UnityEngine::Material*, ::System::String*, ::Spine::Unity::SkeletonDataAsset*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_CREATEFORREGIONDELEGATE_INVOKE_OFFSET))(this, replacementMaterials, anyReplacementMaterialsChanged, originalRegion, materialTemplate, materialSuffix, skeletonDataAsset);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::System::Object*>*& replacementMaterials, ::System::Boolean& anyReplacementMaterialsChanged, ::Spine::AtlasRegion* originalRegion, ::UnityEngine::Material* materialTemplate, ::System::String* materialSuffix, ::Spine::Unity::SkeletonDataAsset* skeletonDataAsset, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*&, ::System::Boolean&, ::Spine::AtlasRegion*, ::UnityEngine::Material*, ::System::String*, ::Spine::Unity::SkeletonDataAsset*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_CREATEFORREGIONDELEGATE_BEGININVOKE_OFFSET))(this, replacementMaterials, anyReplacementMaterialsChanged, originalRegion, materialTemplate, materialSuffix, skeletonDataAsset, callback, object);
		}

		::System::Boolean EndInvoke(::System::Collections::Generic::List_1<::System::Object*>*& replacementMaterials, ::System::Boolean& anyReplacementMaterialsChanged, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*&, ::System::Boolean&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BLENDMODEMATERIALS_CREATEFORREGIONDELEGATE_ENDINVOKE_OFFSET))(this, replacementMaterials, anyReplacementMaterialsChanged, result);
		}
	};
}
