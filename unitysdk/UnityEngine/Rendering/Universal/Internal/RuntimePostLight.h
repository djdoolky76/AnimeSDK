#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/RuntimePostLight_PostLightShape.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/RuntimePostLight_PostLightType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_BAKEPOSTRAMPTEXTURESINGLE_OFFSET UNITYSDK_OFFSET(0x1E8EC570)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_GET_LIGHTCOLORRAMPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E8EC140)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E8ED3C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E8ED870)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E8ED720)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E8ED9C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_REFRESHMATPROPERTY_OFFSET UNITYSDK_OFFSET(0x1E8ECCA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_SETMATERIALBYTYPE_OFFSET UNITYSDK_OFFSET(0x1E8EC100)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_START_OFFSET UNITYSDK_OFFSET(0x1E8EC150)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8EDC30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8EDB40)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int RuntimePostLight_TypeDefinitionIndex = 26479;

	class RuntimePostLight : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__PostLightClipMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RuntimePostLight_TypeDefinitionIndex)->GetStaticField(0x7020);
		}
		static ::System::Int32* StaticGet__PostLightColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RuntimePostLight_TypeDefinitionIndex)->GetStaticField(0x7024);
		}
		static ::System::Int32* StaticGet__SpotParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RuntimePostLight_TypeDefinitionIndex)->GetStaticField(0x7028);
		}
		static ::System::Int32* StaticGet__PostLightClipMin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RuntimePostLight_TypeDefinitionIndex)->GetStaticField(0x702C);
		}
		static ::System::Int32* StaticGet__PostLightParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RuntimePostLight_TypeDefinitionIndex)->GetStaticField(0x7030);
		}
		static ::System::Int32* StaticGet__PostLightRampTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RuntimePostLight_TypeDefinitionIndex)->GetStaticField(0x7034);
		}
		static ::System::Int32* StaticGet__SpotLightAtten()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RuntimePostLight_TypeDefinitionIndex)->GetStaticField(0x7038);
		}
		static ::System::Int32* StaticGet__PostLightCookieTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RuntimePostLight_TypeDefinitionIndex)->GetStaticField(0x703C);
		}
		::UnityEngine::Rendering::Universal::Internal::RuntimePostLight_PostLightShape m_Shape; // 0x18
		::UnityEngine::Rendering::Universal::Internal::RuntimePostLight_PostLightType m_Type; // 0x1C
		::UnityEngine::Gradient* LightColorRamp; // 0x20
		::System::Single m_LightIntensity; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* LightIntensityCurve; // 0x30
		::UnityEngine::Texture2D* m_LightColorRampTexture; // 0x38
		::System::Single m_LightColorRampRampID; // 0x40
		::System::Boolean UsedInTimeline; // 0x44
		::System::Byte _padding1[0x3];
		::UnityEngine::Texture2D* m_LightCookieTexture; // 0x48
		::UnityEngine::Vector2 m_ClipRangeX; // 0x50
		::UnityEngine::Vector2 m_ClipRangeY; // 0x58
		::UnityEngine::Vector2 m_ClipRangeZ; // 0x60
		::System::Boolean SpotlightAttenuation; // 0x68
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector2 SpotAngle; // 0x6C
		::System::Single SoftRange; // 0x74
		::UnityEngine::MeshRenderer* m_MeshRenderer; // 0x78
		::UnityEngine::Material* m_Material; // 0x80
		::UnityEngine::MaterialPropertyBlock* m_PropertyBlock; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT__CCTOR_OFFSET))();
		}

		::System::Void SetMaterialByType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_SETMATERIALBYTYPE_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_LightColorRampTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_GET_LIGHTCOLORRAMPTEXTURE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_ONUPDATE_OFFSET))(this);
		}

		::System::Void RefreshMatProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_REFRESHMATPROPERTY_OFFSET))(this);
		}

		::System::Void BakePostRampTextureSingle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_RUNTIMEPOSTLIGHT_BAKEPOSTRAMPTEXTURESINGLE_OFFSET))(this);
		}
	};
}
