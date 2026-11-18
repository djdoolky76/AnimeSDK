#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextureFormat.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Spine { class AtlasPage; }
namespace Spine { class AtlasRegion; }
namespace Spine { class Attachment; }
namespace Spine { class RegionAttachment; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Sprite; }

#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETPOSITIONOFFSET_1_OFFSET UNITYSDK_OFFSET(0x2001C0E0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x2001C0B0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETREGION_1_OFFSET UNITYSDK_OFFSET(0x2001C500)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETREGION_OFFSET UNITYSDK_OFFSET(0x2001C120)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETROTATION_OFFSET UNITYSDK_OFFSET(0x2001C100)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETSCALE_1_OFFSET UNITYSDK_OFFSET(0x2001C090)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETSCALE_OFFSET UNITYSDK_OFFSET(0x2001C060)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENTWITHNEWPMATEXTURE_1_OFFSET UNITYSDK_OFFSET(0x2001BFF0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENTWITHNEWPMATEXTURE_OFFSET UNITYSDK_OFFSET(0x2001BC90)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_1_OFFSET UNITYSDK_OFFSET(0x2001B7A0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_2_OFFSET UNITYSDK_OFFSET(0x2001BA70)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_OFFSET UNITYSDK_OFFSET(0x2001B720)

namespace Spine::Unity::AttachmentTools
{
	inline static constexpr unsigned int AttachmentRegionExtensions_TypeDefinitionIndex = 38234;

	class AttachmentRegionExtensions : public ::System::Object
	{
	public:
		static ::Spine::RegionAttachment* ToRegionAttachment(::UnityEngine::Sprite* sprite, ::UnityEngine::Material* material, ::System::Single rotation)
		{
			return ((::Spine::RegionAttachment*(*)(::UnityEngine::Sprite*, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_OFFSET))(sprite, material, rotation);
		}

		static ::Spine::RegionAttachment* ToRegionAttachment_1(::UnityEngine::Sprite* sprite, ::Spine::AtlasPage* page, ::System::Single rotation)
		{
			return ((::Spine::RegionAttachment*(*)(::UnityEngine::Sprite*, ::Spine::AtlasPage*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_1_OFFSET))(sprite, page, rotation);
		}

		static ::Spine::RegionAttachment* ToRegionAttachmentWithNewPMATexture(::UnityEngine::Sprite* sprite, ::UnityEngine::Shader* shader, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::UnityEngine::Material* materialPropertySource, ::System::Single rotation)
		{
			return ((::Spine::RegionAttachment*(*)(::UnityEngine::Sprite*, ::UnityEngine::Shader*, ::UnityEngine::TextureFormat, ::System::Boolean, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENTWITHNEWPMATEXTURE_OFFSET))(sprite, shader, textureFormat, mipmaps, materialPropertySource, rotation);
		}

		static ::Spine::RegionAttachment* ToRegionAttachmentWithNewPMATexture_1(::UnityEngine::Sprite* sprite, ::UnityEngine::Material* materialPropertySource, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::System::Single rotation)
		{
			return ((::Spine::RegionAttachment*(*)(::UnityEngine::Sprite*, ::UnityEngine::Material*, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENTWITHNEWPMATEXTURE_1_OFFSET))(sprite, materialPropertySource, textureFormat, mipmaps, rotation);
		}

		static ::Spine::RegionAttachment* ToRegionAttachment_2(::Spine::AtlasRegion* region, ::System::String* attachmentName, ::System::Single scale, ::System::Single rotation)
		{
			return ((::Spine::RegionAttachment*(*)(::Spine::AtlasRegion*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_TOREGIONATTACHMENT_2_OFFSET))(region, attachmentName, scale, rotation);
		}

		static ::System::Void SetScale(::Spine::RegionAttachment* regionAttachment, ::UnityEngine::Vector2 scale)
		{
			return ((::System::Void(*)(::Spine::RegionAttachment*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETSCALE_OFFSET))(regionAttachment, scale);
		}

		static ::System::Void SetScale_1(::Spine::RegionAttachment* regionAttachment, ::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::Spine::RegionAttachment*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETSCALE_1_OFFSET))(regionAttachment, x, y);
		}

		static ::System::Void SetPositionOffset(::Spine::RegionAttachment* regionAttachment, ::UnityEngine::Vector2 offset)
		{
			return ((::System::Void(*)(::Spine::RegionAttachment*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETPOSITIONOFFSET_OFFSET))(regionAttachment, offset);
		}

		static ::System::Void SetPositionOffset_1(::Spine::RegionAttachment* regionAttachment, ::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::Spine::RegionAttachment*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETPOSITIONOFFSET_1_OFFSET))(regionAttachment, x, y);
		}

		static ::System::Void SetRotation(::Spine::RegionAttachment* regionAttachment, ::System::Single rotation)
		{
			return ((::System::Void(*)(::Spine::RegionAttachment*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETROTATION_OFFSET))(regionAttachment, rotation);
		}

		static ::System::Void SetRegion(::Spine::Attachment* attachment, ::UnityEngine::Sprite* sprite, ::UnityEngine::Material* sourceMaterial, ::System::Boolean premultiplyAlpha, ::System::Boolean useOriginalRegionSize, ::System::Boolean pivotShiftsMeshUVCoords, ::System::Boolean useOriginalRegionScale, ::UnityEngine::TextureFormat pmaTextureFormat, ::System::Boolean pmaMipmaps)
		{
			return ((::System::Void(*)(::Spine::Attachment*, ::UnityEngine::Sprite*, ::UnityEngine::Material*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETREGION_OFFSET))(attachment, sprite, sourceMaterial, premultiplyAlpha, useOriginalRegionSize, pivotShiftsMeshUVCoords, useOriginalRegionScale, pmaTextureFormat, pmaMipmaps);
		}

		static ::System::Void SetRegion_1(::Spine::Attachment* attachment, ::Spine::AtlasRegion* atlasRegion, ::System::Boolean useOriginalRegionSize, ::System::Single scale)
		{
			return ((::System::Void(*)(::Spine::Attachment*, ::Spine::AtlasRegion*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATTACHMENTREGIONEXTENSIONS_SETREGION_1_OFFSET))(attachment, atlasRegion, useOriginalRegionSize, scale);
		}
	};
}
