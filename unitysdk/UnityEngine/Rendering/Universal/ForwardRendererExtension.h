#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class ForwardRendererData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C97C2B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_GET_DEFAULTDECALMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C97C230)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_GET_DEFAULTVOLUMETRICFOGMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C97C240)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_GET_SHADOWPROXYMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C97C250)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C97C260)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ForwardRendererExtension_TypeDefinitionIndex = 26969;

	class ForwardRendererExtension : public ::System::Object
	{
	public:
		static ::UnityEngine::Material** StaticGet_s_DefaultDecalMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(ForwardRendererExtension_TypeDefinitionIndex)->GetStaticField(0x24020);
		}
		static ::UnityEngine::Material** StaticGet_s_DefaultVolumetricFogMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(ForwardRendererExtension_TypeDefinitionIndex)->GetStaticField(0x24028);
		}
		static ::UnityEngine::Material** StaticGet_s_ShadowProxyMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(ForwardRendererExtension_TypeDefinitionIndex)->GetStaticField(0x24030);
		}

		::System::Void _ctor(::UnityEngine::Rendering::Universal::ForwardRendererData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ForwardRendererData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION__CTOR_OFFSET))(this, data);
		}

		static ::UnityEngine::Material* get_defaultDecalMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_GET_DEFAULTDECALMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_defaultVolumetricFogMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_GET_DEFAULTVOLUMETRICFOGMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_shadowProxyMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_GET_SHADOWPROXYMATERIAL_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDEREREXTENSION_DISPOSE_OFFSET))(this);
		}
	};
}
