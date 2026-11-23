#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class FCCBA236732571F3;
namespace ABC::CustomRenderPipeline { class RendererData_ABCRPTextureResources; }
namespace ABC::CustomRenderPipeline { class RendererData_ShaderResources; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define ABC_CUSTOMRENDERPIPELINE_RENDERERDATA_CHECKANDGETUIDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x27C52E0)
#define ABC_CUSTOMRENDERPIPELINE_RENDERERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x27C53A0)
#define ABC_CUSTOMRENDERPIPELINE_RENDERERDATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define ABC_CUSTOMRENDERPIPELINE_RENDERERDATA_RELOADALLNULLPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define ABC_CUSTOMRENDERPIPELINE_RENDERERDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x27C5420)
#define ABC_CUSTOMRENDERPIPELINE_RENDERERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F270C0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int RendererData_TypeDefinitionIndex = 16660;

	class RendererData : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::System::String** StaticGet_sPackagePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RendererData_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::ABC::CustomRenderPipeline::RendererData_ShaderResources* shaders; // 0x18
		::ABC::CustomRenderPipeline::RendererData_ABCRPTextureResources* textures; // 0x20
		::UnityEngine::Material* uiDefaultMaterial; // 0x28

		::UnityEngine::Material* CheckAndGetUIDefaultMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_RENDERERDATA_CHECKANDGETUIDEFAULTMATERIAL_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_RENDERERDATA__CCTOR_OFFSET))();
		}

		::System::Void ReloadAllNullProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_RENDERERDATA_RELOADALLNULLPROPERTIES_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_RENDERERDATA__CTOR_OFFSET))(this);
		}

		::FCCBA236732571F3* Create()
		{
			return ((::FCCBA236732571F3*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_RENDERERDATA_CREATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_RENDERERDATA_ONENABLE_OFFSET))(this);
		}
	};
}
