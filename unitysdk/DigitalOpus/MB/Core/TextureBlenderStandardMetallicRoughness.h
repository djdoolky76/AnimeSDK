#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/TextureBlenderStandardMetallicRoughness_Prop.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace DigitalOpus::MB::Core { class TextureBlenderMaterialPropertyCacheHelper; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_DOESSHADERNAMEMATCH_OFFSET UNITYSDK_OFFSET(0x1E9F3330)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_GETCOLORIFNOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E9F4B40)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_NONTEXTUREPROPERTIESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x1E9F3B70)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_ONBEFORETINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E9F33C0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_ONBLENDTEXTUREPIXEL_OFFSET UNITYSDK_OFFSET(0x1E9F3A30)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E9F4260)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9F56A0)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9F5580)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderStandardMetallicRoughness_TypeDefinitionIndex = 96206;

	class TextureBlenderStandardMetallicRoughness : public ::System::Object
	{
	public:
		static ::UnityEngine::Color* StaticGet_NeutralNormalMap()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(TextureBlenderStandardMetallicRoughness_TypeDefinitionIndex)->GetStaticField(0x140E0);
		}
		::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* sourceMaterialPropertyCache; // 0x10
		::System::Single m_notGeneratingAtlasDefaultMetallic; // 0x18
		::System::Single m_metallic; // 0x1C
		::System::Boolean m_shaderDoesEmission; // 0x20
		::System::Boolean m_hasSpecGlossMap; // 0x21
		::System::Boolean m_hasMetallicGlossMap; // 0x22
		::System::Byte _padding0[0x1];
		::UnityEngine::Color m_generatingTintedAtlasEmission; // 0x24
		::System::Single m_roughness; // 0x34
		::System::Single m_generatingTintedAtlasBumpScale; // 0x38
		::System::Single m_generatingTintedAtlasRoughness; // 0x3C
		::UnityEngine::Color m_notGeneratingAtlasDefaultEmisionColor; // 0x40
		::UnityEngine::Color m_emissionColor; // 0x50
		::DigitalOpus::MB::Core::TextureBlenderStandardMetallicRoughness_Prop propertyToDo; // 0x60
		::UnityEngine::Color m_notGeneratingAtlasDefaultColor; // 0x64
		::System::Single m_bumpScale; // 0x74
		::System::Single m_notGeneratingAtlasDefaultGlossiness; // 0x78
		::System::Single m_generatingTintedAtlasMetallic; // 0x7C
		::UnityEngine::Color m_generatingTintedAtlasColor; // 0x80
		::UnityEngine::Color m_tintColor; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS__CCTOR_OFFSET))();
		}

		::System::Boolean DoesShaderNameMatch(::System::String* shaderName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_DOESSHADERNAMEMATCH_OFFSET))(this, shaderName);
		}

		::System::Void OnBeforeTintTexture(::UnityEngine::Material* sourceMat, ::System::String* shaderTexturePropertyName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_ONBEFORETINTTEXTURE_OFFSET))(this, sourceMat, shaderTexturePropertyName);
		}

		::UnityEngine::Color OnBlendTexturePixel(::System::String* propertyToDoshaderPropertyName, ::UnityEngine::Color pixelColor)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_ONBLENDTEXTUREPIXEL_OFFSET))(this, propertyToDoshaderPropertyName, pixelColor);
		}

		::System::Boolean NonTexturePropertiesAreEqual(::UnityEngine::Material* a, ::UnityEngine::Material* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_NONTEXTUREPROPERTIESAREEQUAL_OFFSET))(this, a, b);
		}

		::System::Void SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material* resultMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_SETNONTEXTUREPROPERTYVALUESONRESULTMATERIAL_OFFSET))(this, resultMaterial);
		}

		::UnityEngine::Color GetColorIfNoTexture(::UnityEngine::Material* mat, ::DigitalOpus::MB::Core::ShaderTextureProperty* texPropertyName)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERSTANDARDMETALLICROUGHNESS_GETCOLORIFNOTEXTURE_OFFSET))(this, mat, texPropertyName);
		}
	};
}
