#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_REPACKATTACHMENTSOUTPUT_DESTROYGENERATEDASSETS_OFFSET UNITYSDK_OFFSET(0x9C13D0)

namespace Spine::Unity::AttachmentTools
{
	inline static constexpr unsigned int AtlasUtilities_RepackAttachmentsOutput_TypeDefinitionIndex = 38230;

	struct alignas(8) AtlasUtilities_RepackAttachmentsOutput
	{
		::UnityEngine::Material* outputMaterial; // 0x10
		::UnityEngine::Texture2D* outputTexture; // 0x18
		::Il2CppArray<::UnityEngine::Texture2D*>* additionalOutputTextures; // 0x20
		::UnityEngine::Material* outputAdditiveMaterial; // 0x28
		::UnityEngine::Material* outputMultiplyMaterial; // 0x30
		::UnityEngine::Material* outputScreenMaterial; // 0x38

		::System::Void DestroyGeneratedAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_REPACKATTACHMENTSOUTPUT_DESTROYGENERATEDASSETS_OFFSET))(this);
		}
	};
}
