#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextureFormat.h"
#include "unitysdk/Spine/Unity/AttachmentTools/AtlasUtilities_BlendModeAtlasPages.h"
#include "unitysdk/Spine/Unity/AttachmentTools/AtlasUtilities_RepackAttachmentsOutput.h"
#include "unitysdk/Spine/Unity/AttachmentTools/AtlasUtilities_RepackAttachmentsSettings.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace Spine { class AtlasPage; }
namespace Spine { class AtlasRegion; }
namespace Spine { class Attachment; }
namespace Spine { class Skin; }
namespace Spine { class TextureRegion; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture2D; }

#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_ADDREGIONTEXTURESTOPACK_OFFSET UNITYSDK_OFFSET(0x1FB4AC50)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_ASSIGNBLENDMODE_OFFSET UNITYSDK_OFFSET(0x1FB4B590)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x1FB46630)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTUREAPPLYPMA_OFFSET UNITYSDK_OFFSET(0x1FB4DA30)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTUREATTRIBUTESFROM_OFFSET UNITYSDK_OFFSET(0x1FB4AF50)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FB4DC00)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETBLENDMODEPAGE_OFFSET UNITYSDK_OFFSET(0x1FB4C000)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETCLONE_OFFSET UNITYSDK_OFFSET(0x1FB47470)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETMAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FB4D7A0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDATTACHMENTS_1_OFFSET UNITYSDK_OFFSET(0x1FB4BB10)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDATTACHMENTS_2_OFFSET UNITYSDK_OFFSET(0x1FB4BE30)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDATTACHMENTS_OFFSET UNITYSDK_OFFSET(0x1FB48860)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDSKIN_1_OFFSET UNITYSDK_OFFSET(0x1FB4D230)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDSKIN_2_OFFSET UNITYSDK_OFFSET(0x1FB4D450)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDSKIN_OFFSET UNITYSDK_OFFSET(0x1FB4C970)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETSPINEATLASRECT_OFFSET UNITYSDK_OFFSET(0x1FB4DF20)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1FB4D980)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FB4E060)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETUNITYRECT_1_OFFSET UNITYSDK_OFFSET(0x1FB4DF80)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETUNITYRECT_OFFSET UNITYSDK_OFFSET(0x1FB4D8A0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INIT_OFFSET UNITYSDK_OFFSET(0x1FB465D0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INVERSELERP_OFFSET UNITYSDK_OFFSET(0x1FB46F20)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_ISRENDERABLE_OFFSET UNITYSDK_OFFSET(0x1FB4DEE0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_SPINEUNITYFLIPRECT_OFFSET UNITYSDK_OFFSET(0x1FB48770)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TEXTURERECTTOUVRECT_OFFSET UNITYSDK_OFFSET(0x1FB48790)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONWITHNEWPMATEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1FB46FC0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONWITHNEWPMATEXTURE_2_OFFSET UNITYSDK_OFFSET(0x1FB47CE0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONWITHNEWPMATEXTURE_3_OFFSET UNITYSDK_OFFSET(0x1FB47D70)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONWITHNEWPMATEXTURE_OFFSET UNITYSDK_OFFSET(0x1FB46F30)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_1_OFFSET UNITYSDK_OFFSET(0x1FB46940)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_2_OFFSET UNITYSDK_OFFSET(0x1FB47680)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_3_OFFSET UNITYSDK_OFFSET(0x1FB47C70)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_4_OFFSET UNITYSDK_OFFSET(0x1FB47710)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_OFFSET UNITYSDK_OFFSET(0x1FB468C0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOSPINEATLASPAGE_OFFSET UNITYSDK_OFFSET(0x1FB46D00)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOSPRITE_OFFSET UNITYSDK_OFFSET(0x1FB4D610)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1FB48210)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FB4C310)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_UVRECTTOATLASREGION_OFFSET UNITYSDK_OFFSET(0x1FB4AFE0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_UVRECTTOTEXTURERECT_OFFSET UNITYSDK_OFFSET(0x1FB4E030)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB4E120)

namespace Spine::Unity::AttachmentTools
{
	inline static constexpr unsigned int AtlasUtilities_TypeDefinitionIndex = 38229;

	class AtlasUtilities : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::Spine::AtlasRegion*>** StaticGet_repackedRegions()
		{
			return (::System::Collections::Generic::List_1<::Spine::AtlasRegion*>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x2DD40);
		}
		static ::System::Collections::Generic::Dictionary_2<::Spine::AtlasRegion*, ::System::Int32>** StaticGet_existingRegions()
		{
			return (::System::Collections::Generic::Dictionary_2<::Spine::AtlasRegion*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x2DD48);
		}
		static ::Il2CppArray<::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*>** StaticGet_texturesToPackAtParam()
		{
			return (::Il2CppArray<::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x2DD50);
		}
		static ::System::Collections::Generic::List_1<::Spine::Attachment*>** StaticGet_inoutAttachments()
		{
			return (::System::Collections::Generic::List_1<::Spine::Attachment*>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x2DD58);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>** StaticGet_CachedRegionTexturesList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x2DD60);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_regionIndices()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x2DD68);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::Texture2D*>** StaticGet_CachedRegionTextures()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x2DD70);
		}
		static ::System::Collections::Generic::List_1<::Spine::AtlasRegion*>** StaticGet_originalRegions()
		{
			return (::System::Collections::Generic::List_1<::Spine::AtlasRegion*>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x2DD78);
		}
		// static const ::UnityEngine::TextureFormat SpineTextureFormat = 0x4; // 0x0
		// static const ::System::Single DefaultMipmapBias; // 0x0
		// static const ::System::Boolean UseMipMaps = 0x0; // 0x0
		// static const ::System::Single DefaultScale; // 0x0
		// static const ::System::Int32 NonrenderingRegion = -0x1; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES__CCTOR_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INIT_OFFSET))();
		}

		static ::Spine::AtlasRegion* ToAtlasRegion(::UnityEngine::Texture2D* t, ::UnityEngine::Material* materialPropertySource, ::System::Single scale)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_OFFSET))(t, materialPropertySource, scale);
		}

		static ::Spine::AtlasRegion* ToAtlasRegion_1(::UnityEngine::Texture2D* t, ::UnityEngine::Shader* shader, ::System::Single scale, ::UnityEngine::Material* materialPropertySource)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Shader*, ::System::Single, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_1_OFFSET))(t, shader, scale, materialPropertySource);
		}

		static ::Spine::AtlasRegion* ToAtlasRegionWithNewPMATexture(::UnityEngine::Texture2D* t, ::UnityEngine::Material* materialPropertySource, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Material*, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONWITHNEWPMATEXTURE_OFFSET))(t, materialPropertySource, textureFormat, mipmaps);
		}

		static ::Spine::AtlasRegion* ToAtlasRegionWithNewPMATexture_1(::UnityEngine::Texture2D* t, ::UnityEngine::Shader* shader, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::UnityEngine::Material* materialPropertySource)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Shader*, ::UnityEngine::TextureFormat, ::System::Boolean, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONWITHNEWPMATEXTURE_1_OFFSET))(t, shader, textureFormat, mipmaps, materialPropertySource);
		}

		static ::Spine::AtlasPage* ToSpineAtlasPage(::UnityEngine::Material* m)
		{
			return ((::Spine::AtlasPage*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOSPINEATLASPAGE_OFFSET))(m);
		}

		static ::Spine::AtlasRegion* ToAtlasRegion_2(::UnityEngine::Sprite* s, ::Spine::AtlasPage* page)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Sprite*, ::Spine::AtlasPage*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_2_OFFSET))(s, page);
		}

		static ::Spine::AtlasRegion* ToAtlasRegion_3(::UnityEngine::Sprite* s, ::UnityEngine::Material* material)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Sprite*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_3_OFFSET))(s, material);
		}

		static ::Spine::AtlasRegion* ToAtlasRegionWithNewPMATexture_2(::UnityEngine::Sprite* s, ::UnityEngine::Material* materialPropertySource, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Sprite*, ::UnityEngine::Material*, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONWITHNEWPMATEXTURE_2_OFFSET))(s, materialPropertySource, textureFormat, mipmaps);
		}

		static ::Spine::AtlasRegion* ToAtlasRegionWithNewPMATexture_3(::UnityEngine::Sprite* s, ::UnityEngine::Shader* shader, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::UnityEngine::Material* materialPropertySource)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Sprite*, ::UnityEngine::Shader*, ::UnityEngine::TextureFormat, ::System::Boolean, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONWITHNEWPMATEXTURE_3_OFFSET))(s, shader, textureFormat, mipmaps, materialPropertySource);
		}

		static ::Spine::AtlasRegion* ToAtlasRegion_4(::UnityEngine::Sprite* s, ::System::Boolean isolatedTexture)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Sprite*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_4_OFFSET))(s, isolatedTexture);
		}

		static ::System::Void GetRepackedAttachments(::System::Collections::Generic::List_1<::Spine::Attachment*>* sourceAttachments, ::System::Collections::Generic::List_1<::Spine::Attachment*>* outputAttachments, ::Spine::Unity::AttachmentTools::AtlasUtilities_RepackAttachmentsSettings settings, ::Spine::Unity::AttachmentTools::AtlasUtilities_RepackAttachmentsOutput& output)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Spine::Attachment*>*, ::System::Collections::Generic::List_1<::Spine::Attachment*>*, ::Spine::Unity::AttachmentTools::AtlasUtilities_RepackAttachmentsSettings, ::Spine::Unity::AttachmentTools::AtlasUtilities_RepackAttachmentsOutput&))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDATTACHMENTS_OFFSET))(sourceAttachments, outputAttachments, settings, output);
		}

		static ::System::Void GetRepackedAttachments_1(::System::Collections::Generic::List_1<::Spine::Attachment*>* sourceAttachments, ::System::Collections::Generic::List_1<::Spine::Attachment*>* outputAttachments, ::UnityEngine::Material* materialPropertySource, ::UnityEngine::Material*& outputMaterial, ::UnityEngine::Texture2D*& outputTexture, ::System::Int32 maxAtlasSize, ::System::Int32 padding, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::System::String* newAssetName, ::System::Boolean clearCache, ::System::Boolean useOriginalNonrenderables, ::Il2CppArray<::System::Int32>* additionalTexturePropertyIDsToCopy, ::Il2CppArray<::UnityEngine::Texture2D*>* additionalOutputTextures, ::Il2CppArray<::UnityEngine::TextureFormat>* additionalTextureFormats, ::Il2CppArray<::System::Boolean>* additionalTextureIsLinear)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Spine::Attachment*>*, ::System::Collections::Generic::List_1<::Spine::Attachment*>*, ::UnityEngine::Material*, ::UnityEngine::Material*&, ::UnityEngine::Texture2D*&, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::Il2CppArray<::UnityEngine::TextureFormat>*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDATTACHMENTS_1_OFFSET))(sourceAttachments, outputAttachments, materialPropertySource, outputMaterial, outputTexture, maxAtlasSize, padding, textureFormat, mipmaps, newAssetName, clearCache, useOriginalNonrenderables, additionalTexturePropertyIDsToCopy, additionalOutputTextures, additionalTextureFormats, additionalTextureIsLinear);
		}

		static ::System::Void GetRepackedAttachments_2(::System::Collections::Generic::List_1<::Spine::Attachment*>* sourceAttachments, ::System::Collections::Generic::List_1<::Spine::Attachment*>* outputAttachments, ::UnityEngine::Shader* shader, ::UnityEngine::Material*& outputMaterial, ::UnityEngine::Texture2D*& outputTexture, ::System::Int32 maxAtlasSize, ::System::Int32 padding, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::System::String* newAssetName, ::UnityEngine::Material* materialPropertySource, ::System::Boolean clearCache, ::System::Boolean useOriginalNonrenderables, ::Il2CppArray<::System::Int32>* additionalTexturePropertyIDsToCopy, ::Il2CppArray<::UnityEngine::Texture2D*>* additionalOutputTextures, ::Il2CppArray<::UnityEngine::TextureFormat>* additionalTextureFormats, ::Il2CppArray<::System::Boolean>* additionalTextureIsLinear)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Spine::Attachment*>*, ::System::Collections::Generic::List_1<::Spine::Attachment*>*, ::UnityEngine::Shader*, ::UnityEngine::Material*&, ::UnityEngine::Texture2D*&, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::String*, ::UnityEngine::Material*, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::Il2CppArray<::UnityEngine::TextureFormat>*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDATTACHMENTS_2_OFFSET))(sourceAttachments, outputAttachments, shader, outputMaterial, outputTexture, maxAtlasSize, padding, textureFormat, mipmaps, newAssetName, materialPropertySource, clearCache, useOriginalNonrenderables, additionalTexturePropertyIDsToCopy, additionalOutputTextures, additionalTextureFormats, additionalTextureIsLinear);
		}

		static ::System::Void AssignBlendMode(::Spine::TextureRegion*& repackedRegion, ::Spine::TextureRegion* originalRegion, ::UnityEngine::Shader* normalShader, ::Spine::Unity::AttachmentTools::AtlasUtilities_BlendModeAtlasPages& blendModePages, ::UnityEngine::Material* additiveMaterialSource, ::UnityEngine::Material* multiplyMaterialSource, ::UnityEngine::Material* screenMaterialSource)
		{
			return ((::System::Void(*)(::Spine::TextureRegion*&, ::Spine::TextureRegion*, ::UnityEngine::Shader*, ::Spine::Unity::AttachmentTools::AtlasUtilities_BlendModeAtlasPages&, ::UnityEngine::Material*, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_ASSIGNBLENDMODE_OFFSET))(repackedRegion, originalRegion, normalShader, blendModePages, additiveMaterialSource, multiplyMaterialSource, screenMaterialSource);
		}

		static ::Spine::AtlasPage* GetBlendModePage(::Spine::AtlasPage*& targetPage, ::Spine::AtlasPage* normalReferencePage, ::UnityEngine::Material* materialSource, ::System::String* nameSuffix)
		{
			return ((::Spine::AtlasPage*(*)(::Spine::AtlasPage*&, ::Spine::AtlasPage*, ::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETBLENDMODEPAGE_OFFSET))(targetPage, normalReferencePage, materialSource, nameSuffix);
		}

		static ::System::Void AddRegionTexturesToPack(::System::Int32 numTextureParamsToRepack, ::Spine::AtlasRegion* region, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::Il2CppArray<::UnityEngine::TextureFormat>* additionalTextureFormats, ::Il2CppArray<::System::Int32>* additionalTexturePropertyIDsToCopy, ::Il2CppArray<::System::Boolean>* additionalTextureIsLinear)
		{
			return ((::System::Void(*)(::System::Int32, ::Spine::AtlasRegion*, ::UnityEngine::TextureFormat, ::System::Boolean, ::Il2CppArray<::UnityEngine::TextureFormat>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_ADDREGIONTEXTURESTOPACK_OFFSET))(numTextureParamsToRepack, region, textureFormat, mipmaps, additionalTextureFormats, additionalTexturePropertyIDsToCopy, additionalTextureIsLinear);
		}

		static ::Spine::Skin* GetRepackedSkin(::Spine::Skin* o, ::System::String* newName, ::Spine::Unity::AttachmentTools::AtlasUtilities_RepackAttachmentsSettings settings, ::Spine::Unity::AttachmentTools::AtlasUtilities_RepackAttachmentsOutput& output)
		{
			return ((::Spine::Skin*(*)(::Spine::Skin*, ::System::String*, ::Spine::Unity::AttachmentTools::AtlasUtilities_RepackAttachmentsSettings, ::Spine::Unity::AttachmentTools::AtlasUtilities_RepackAttachmentsOutput&))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDSKIN_OFFSET))(o, newName, settings, output);
		}

		static ::Spine::Skin* GetRepackedSkin_1(::Spine::Skin* o, ::System::String* newName, ::UnityEngine::Material* materialPropertySource, ::UnityEngine::Material*& outputMaterial, ::UnityEngine::Texture2D*& outputTexture, ::System::Int32 maxAtlasSize, ::System::Int32 padding, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::System::Boolean useOriginalNonrenderables, ::System::Boolean clearCache, ::Il2CppArray<::System::Int32>* additionalTexturePropertyIDsToCopy, ::Il2CppArray<::UnityEngine::Texture2D*>* additionalOutputTextures, ::Il2CppArray<::UnityEngine::TextureFormat>* additionalTextureFormats, ::Il2CppArray<::System::Boolean>* additionalTextureIsLinear)
		{
			return ((::Spine::Skin*(*)(::Spine::Skin*, ::System::String*, ::UnityEngine::Material*, ::UnityEngine::Material*&, ::UnityEngine::Texture2D*&, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::Il2CppArray<::UnityEngine::TextureFormat>*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDSKIN_1_OFFSET))(o, newName, materialPropertySource, outputMaterial, outputTexture, maxAtlasSize, padding, textureFormat, mipmaps, useOriginalNonrenderables, clearCache, additionalTexturePropertyIDsToCopy, additionalOutputTextures, additionalTextureFormats, additionalTextureIsLinear);
		}

		static ::Spine::Skin* GetRepackedSkin_2(::Spine::Skin* o, ::System::String* newName, ::UnityEngine::Shader* shader, ::UnityEngine::Material*& outputMaterial, ::UnityEngine::Texture2D*& outputTexture, ::System::Int32 maxAtlasSize, ::System::Int32 padding, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::UnityEngine::Material* materialPropertySource, ::System::Boolean clearCache, ::System::Boolean useOriginalNonrenderables, ::Il2CppArray<::System::Int32>* additionalTexturePropertyIDsToCopy, ::Il2CppArray<::UnityEngine::Texture2D*>* additionalOutputTextures, ::Il2CppArray<::UnityEngine::TextureFormat>* additionalTextureFormats, ::Il2CppArray<::System::Boolean>* additionalTextureIsLinear)
		{
			return ((::Spine::Skin*(*)(::Spine::Skin*, ::System::String*, ::UnityEngine::Shader*, ::UnityEngine::Material*&, ::UnityEngine::Texture2D*&, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::UnityEngine::Material*, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::Il2CppArray<::UnityEngine::TextureFormat>*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDSKIN_2_OFFSET))(o, newName, shader, outputMaterial, outputTexture, maxAtlasSize, padding, textureFormat, mipmaps, materialPropertySource, clearCache, useOriginalNonrenderables, additionalTexturePropertyIDsToCopy, additionalOutputTextures, additionalTextureFormats, additionalTextureIsLinear);
		}

		static ::UnityEngine::Sprite* ToSprite(::Spine::AtlasRegion* ar, ::System::Single pixelsPerUnit)
		{
			return ((::UnityEngine::Sprite*(*)(::Spine::AtlasRegion*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOSPRITE_OFFSET))(ar, pixelsPerUnit);
		}

		static ::System::Void ClearCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_CLEARCACHE_OFFSET))();
		}

		static ::UnityEngine::Texture2D* ToTexture(::Spine::AtlasRegion* ar, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::System::Int32 texturePropertyId, ::System::Boolean linear, ::System::Boolean applyPMA)
		{
			return ((::UnityEngine::Texture2D*(*)(::Spine::AtlasRegion*, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOTEXTURE_OFFSET))(ar, textureFormat, mipmaps, texturePropertyId, linear, applyPMA);
		}

		static ::UnityEngine::Texture2D* ToTexture_1(::UnityEngine::Sprite* s, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::System::Boolean linear, ::System::Boolean applyPMA)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Sprite*, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOTEXTURE_1_OFFSET))(s, textureFormat, mipmaps, linear, applyPMA);
		}

		static ::UnityEngine::Texture2D* GetClone(::UnityEngine::Texture2D* t, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::System::Boolean linear, ::System::Boolean applyPMA)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Texture2D*, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETCLONE_OFFSET))(t, textureFormat, mipmaps, linear, applyPMA);
		}

		static ::System::Void CopyTexture(::UnityEngine::Texture2D* source, ::UnityEngine::Rect sourceRect, ::UnityEngine::Texture2D* destination)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTURE_OFFSET))(source, sourceRect, destination);
		}

		static ::System::Void CopyTextureApplyPMA(::UnityEngine::Texture2D* source, ::UnityEngine::Rect sourceRect, ::UnityEngine::Texture2D* destination)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTUREAPPLYPMA_OFFSET))(source, sourceRect, destination);
		}

		static ::System::Boolean IsRenderable(::Spine::Attachment* a)
		{
			return ((::System::Boolean(*)(::Spine::Attachment*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_ISRENDERABLE_OFFSET))(a);
		}

		static ::UnityEngine::Rect SpineUnityFlipRect(::UnityEngine::Rect rect, ::System::Int32 textureHeight)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_SPINEUNITYFLIPRECT_OFFSET))(rect, textureHeight);
		}

		static ::UnityEngine::Rect GetUnityRect(::Spine::AtlasRegion* region)
		{
			return ((::UnityEngine::Rect(*)(::Spine::AtlasRegion*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETUNITYRECT_OFFSET))(region);
		}

		static ::UnityEngine::Rect GetUnityRect_1(::Spine::AtlasRegion* region, ::System::Int32 textureHeight)
		{
			return ((::UnityEngine::Rect(*)(::Spine::AtlasRegion*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETUNITYRECT_1_OFFSET))(region, textureHeight);
		}

		static ::UnityEngine::Rect GetSpineAtlasRect(::Spine::AtlasRegion* region, ::System::Boolean includeRotate)
		{
			return ((::UnityEngine::Rect(*)(::Spine::AtlasRegion*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETSPINEATLASRECT_OFFSET))(region, includeRotate);
		}

		static ::UnityEngine::Rect UVRectToTextureRect(::UnityEngine::Rect uvRect, ::System::Int32 texWidth, ::System::Int32 texHeight)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_UVRECTTOTEXTURERECT_OFFSET))(uvRect, texWidth, texHeight);
		}

		static ::UnityEngine::Rect TextureRectToUVRect(::UnityEngine::Rect textureRect, ::System::Int32 texWidth, ::System::Int32 texHeight)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TEXTURERECTTOUVRECT_OFFSET))(textureRect, texWidth, texHeight);
		}

		static ::Spine::AtlasRegion* UVRectToAtlasRegion(::UnityEngine::Rect uvRect, ::Spine::AtlasRegion* referenceRegion, ::Spine::AtlasPage* page)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Rect, ::Spine::AtlasRegion*, ::Spine::AtlasPage*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_UVRECTTOATLASREGION_OFFSET))(uvRect, referenceRegion, page);
		}

		static ::UnityEngine::Texture2D* GetMainTexture(::Spine::AtlasRegion* region)
		{
			return ((::UnityEngine::Texture2D*(*)(::Spine::AtlasRegion*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETMAINTEXTURE_OFFSET))(region);
		}

		static ::UnityEngine::Texture2D* GetTexture(::Spine::AtlasRegion* region, ::System::String* texturePropertyName)
		{
			return ((::UnityEngine::Texture2D*(*)(::Spine::AtlasRegion*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETTEXTURE_OFFSET))(region, texturePropertyName);
		}

		static ::UnityEngine::Texture2D* GetTexture_1(::Spine::AtlasRegion* region, ::System::Int32 texturePropertyId)
		{
			return ((::UnityEngine::Texture2D*(*)(::Spine::AtlasRegion*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETTEXTURE_1_OFFSET))(region, texturePropertyId);
		}

		static ::System::Void CopyTextureAttributesFrom(::UnityEngine::Texture2D* destination, ::UnityEngine::Texture2D* source)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTUREATTRIBUTESFROM_OFFSET))(destination, source);
		}

		static ::System::Single InverseLerp(::System::Single a, ::System::Single b, ::System::Single value)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INVERSELERP_OFFSET))(a, b, value);
		}
	};
}
