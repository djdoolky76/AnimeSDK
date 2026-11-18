#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/AtlasAssetBase_LoadingMode.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace Spine::Unity { class MaterialOverrideSet; }
namespace Spine::Unity { class OnDemandTextureLoader; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define SPINE_UNITY_ATLASASSETBASE_ADDMATERIALOVERRIDESET_OFFSET UNITYSDK_OFFSET(0x1FBF2890)
#define SPINE_UNITY_ATLASASSETBASE_BEGINCUSTOMTEXTURELOADING_OFFSET UNITYSDK_OFFSET(0x1FBF2950)
#define SPINE_UNITY_ATLASASSETBASE_ENDCUSTOMTEXTURELOADING_OFFSET UNITYSDK_OFFSET(0x1FBF2AB0)
#define SPINE_UNITY_ATLASASSETBASE_GETMATERIALOVERRIDESET_OFFSET UNITYSDK_OFFSET(0x1FBF27E0)
#define SPINE_UNITY_ATLASASSETBASE_GET_HASMATERIALOVERRIDESETS_OFFSET UNITYSDK_OFFSET(0x1FBF27A0)
#define SPINE_UNITY_ATLASASSETBASE_GET_ONDEMANDTEXTURELOADER_OFFSET UNITYSDK_OFFSET(0x1FBF2930)
#define SPINE_UNITY_ATLASASSETBASE_GET_TEXTURELOADINGMODE_OFFSET UNITYSDK_OFFSET(0x1FBF2910)
#define SPINE_UNITY_ATLASASSETBASE_INITIALIZERUNTIMEOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1FBF2600)
#define SPINE_UNITY_ATLASASSETBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1FBF25F0)
#define SPINE_UNITY_ATLASASSETBASE_REQUIRETEXTURELOADED_OFFSET UNITYSDK_OFFSET(0x1FBF2D80)
#define SPINE_UNITY_ATLASASSETBASE_REQUIRETEXTURESLOADED_OFFSET UNITYSDK_OFFSET(0x1FBF2C10)
#define SPINE_UNITY_ATLASASSETBASE_SET_ONDEMANDTEXTURELOADER_OFFSET UNITYSDK_OFFSET(0x1FBF2940)
#define SPINE_UNITY_ATLASASSETBASE_SET_TEXTURELOADINGMODE_OFFSET UNITYSDK_OFFSET(0x1FBF2920)
#define SPINE_UNITY_ATLASASSETBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBF2EF0)

namespace Spine::Unity
{
	inline static constexpr unsigned int AtlasAssetBase_TypeDefinitionIndex = 38093;

	class AtlasAssetBase : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::Spine::Unity::MaterialOverrideSet*>* serializedMaterialOverrides; // 0x18
		::System::Collections::Generic::List_1<::Spine::Unity::MaterialOverrideSet*>* runtimeMaterialOverrides; // 0x20
		::Spine::Unity::AtlasAssetBase_LoadingMode textureLoadingMode; // 0x28
		::System::Byte _padding0[0x4];
		::Spine::Unity::OnDemandTextureLoader* onDemandTextureLoader; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_ONENABLE_OFFSET))(this);
		}

		::System::Boolean get_HasMaterialOverrideSets()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_GET_HASMATERIALOVERRIDESETS_OFFSET))(this);
		}

		::Spine::Unity::MaterialOverrideSet* GetMaterialOverrideSet(::System::String* name)
		{
			return ((::Spine::Unity::MaterialOverrideSet*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_GETMATERIALOVERRIDESET_OFFSET))(this, name);
		}

		::Spine::Unity::MaterialOverrideSet* AddMaterialOverrideSet(::System::String* name)
		{
			return ((::Spine::Unity::MaterialOverrideSet*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_ADDMATERIALOVERRIDESET_OFFSET))(this, name);
		}

		::System::Void InitializeRuntimeOverrides()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_INITIALIZERUNTIMEOVERRIDES_OFFSET))(this);
		}

		::Spine::Unity::AtlasAssetBase_LoadingMode get_TextureLoadingMode()
		{
			return ((::Spine::Unity::AtlasAssetBase_LoadingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_GET_TEXTURELOADINGMODE_OFFSET))(this);
		}

		::System::Void set_TextureLoadingMode(::Spine::Unity::AtlasAssetBase_LoadingMode value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::AtlasAssetBase_LoadingMode))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_SET_TEXTURELOADINGMODE_OFFSET))(this, value);
		}

		::Spine::Unity::OnDemandTextureLoader* get_OnDemandTextureLoader()
		{
			return ((::Spine::Unity::OnDemandTextureLoader*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_GET_ONDEMANDTEXTURELOADER_OFFSET))(this);
		}

		::System::Void set_OnDemandTextureLoader(::Spine::Unity::OnDemandTextureLoader* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::OnDemandTextureLoader*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_SET_ONDEMANDTEXTURELOADER_OFFSET))(this, value);
		}

		::System::Void BeginCustomTextureLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_BEGINCUSTOMTEXTURELOADING_OFFSET))(this);
		}

		::System::Void EndCustomTextureLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_ENDCUSTOMTEXTURELOADING_OFFSET))(this);
		}

		::System::Void RequireTexturesLoaded(::UnityEngine::Material* material, ::UnityEngine::Material*& overrideMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_REQUIRETEXTURESLOADED_OFFSET))(this, material, overrideMaterial);
		}

		::System::Void RequireTextureLoaded(::UnityEngine::Texture* placeholderTexture, ::UnityEngine::Texture*& replacementTexture, ::System::Action_1<::UnityEngine::Texture*>* onTextureLoaded)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*&, ::System::Action_1<::UnityEngine::Texture*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_REQUIRETEXTURELOADED_OFFSET))(this, placeholderTexture, replacementTexture, onTextureLoaded);
		}
	};
}
