#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

namespace Spine::Unity { class SkeletonDataAsset; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_REPACKATTACHMENTSSETTINGS_USEBLENDMODEMATERIALSFROM_OFFSET UNITYSDK_OFFSET(0x975640)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_REPACKATTACHMENTSSETTINGS_USESOURCEMATERIALSFROM_OFFSET UNITYSDK_OFFSET(0x975630)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_REPACKATTACHMENTSSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F476AF0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_REPACKATTACHMENTSSETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x975570)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_REPACKATTACHMENTSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x9754D0)

namespace Spine::Unity::AttachmentTools
{
	inline static constexpr unsigned int AtlasUtilities_RepackAttachmentsSettings_TypeDefinitionIndex = 38231;

	struct alignas(8) AtlasUtilities_RepackAttachmentsSettings
	{
		static ::Spine::Unity::AttachmentTools::AtlasUtilities_RepackAttachmentsSettings* StaticGet_Default()
		{
			return (::Spine::Unity::AttachmentTools::AtlasUtilities_RepackAttachmentsSettings*)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_RepackAttachmentsSettings_TypeDefinitionIndex)->GetStaticField(0x2DCE0);
		}
		static ::System::String** StaticGet_DefaultTextureName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_RepackAttachmentsSettings_TypeDefinitionIndex)->GetStaticField(0x2DD38);
		}
		::System::String* newAssetName; // 0x10
		::UnityEngine::Shader* shader; // 0x18
		::UnityEngine::Material* materialPropertySource; // 0x20
		::UnityEngine::Material* additiveMaterialSource; // 0x28
		::UnityEngine::Material* multiplyMaterialSource; // 0x30
		::UnityEngine::Material* screenMaterialSource; // 0x38
		::System::Int32 maxAtlasSize; // 0x40
		::System::Int32 padding; // 0x44
		::UnityEngine::TextureFormat textureFormat; // 0x48
		::System::Boolean mipmaps; // 0x4C
		::System::Boolean clearCache; // 0x4D
		::System::Boolean useOriginalNonrenderables; // 0x4E
		::System::Byte _padding0[0x1];
		::Il2CppArray<::System::Int32>* additionalTexturePropertyIDsToCopy; // 0x50
		::Il2CppArray<::UnityEngine::TextureFormat>* additionalTextureFormats; // 0x58
		::Il2CppArray<::System::Boolean>* additionalTextureIsLinear; // 0x60

		::System::Void _ctor(::System::Boolean _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_REPACKATTACHMENTSSETTINGS__CTOR_OFFSET))(this, _);
		}

		::System::Void _ctor_1(::Spine::Unity::SkeletonDataAsset* skeletonDataAsset)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonDataAsset*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_REPACKATTACHMENTSSETTINGS__CTOR_1_OFFSET))(this, skeletonDataAsset);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_REPACKATTACHMENTSSETTINGS__CCTOR_OFFSET))();
		}

		::System::Void UseSourceMaterialsFrom(::Spine::Unity::SkeletonDataAsset* skeletonDataAsset)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonDataAsset*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_REPACKATTACHMENTSSETTINGS_USESOURCEMATERIALSFROM_OFFSET))(this, skeletonDataAsset);
		}

		::System::Void UseBlendModeMaterialsFrom(::Spine::Unity::SkeletonDataAsset* skeletonDataAsset)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonDataAsset*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_REPACKATTACHMENTSSETTINGS_USEBLENDMODEMATERIALSFROM_OFFSET))(this, skeletonDataAsset);
		}
	};
}
