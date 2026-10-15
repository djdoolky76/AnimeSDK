#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTMONOPLUGIN_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD6C5F0)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD6C380)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xCD6C330)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTMONOPLUGIN_GETVOLUMETRICLIGHTRESULTRT_OFFSET UNITYSDK_OFFSET(0xCD6C2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_SphereVolumetricLightMonoPlugin_TypeDefinitionIndex = 70558;

	class Effect_SphereVolumetricLightMonoPlugin
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Blockers; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Holes; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ForceBlockers; // 0x40
		::UnityEngine::Cubemap* PreviewCubemap; // 0x48
		::UnityEngine::RenderTexture* PreviewSphercialMap; // 0x50
		::System::Int32 CubemapSize; // 0x58
		::UnityEngine::Vector2Int SphericalMapSize; // 0x5C
		::System::Byte _padding0[0x4];
		::UnityEngine::Texture2D* RuntimeSphericalMap; // 0x68
		::System::Boolean UseRuntimeSphericalMapInEditor; // 0x70
		::System::Byte _padding1[0x7];
		::UnityEngine::Material* RenderMaterial; // 0x78
		::UnityEngine::Material* FilterMaterial; // 0x80
		::System::Int32 RayMarchingSampleCount; // 0x88
		::System::Int32 Downsample; // 0x8C
		::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>* ECKEDEABAMM; // 0x90
		::UnityEngine::Color LightColorTint; // 0x98
		::UnityEngine::Gradient* LightColorGradient; // 0xA8
		::System::Single TransparentIntensity; // 0xB0
		::System::Byte _padding2[0x4];
		::UnityEngine::Texture* LeafShakingNoiseTexture; // 0xB8
		::UnityEngine::Vector2 LeafShakingNoiseTextureTiling; // 0xC0
		::System::Single LeafShakingIntensity; // 0xC8
		::System::Single LeafShakingSpeed; // 0xCC
		::System::Boolean UsingFilters; // 0xD0
		::System::Byte _padding3[0x3];
		::System::Int32 FilteringCount; // 0xD4
		::System::Single ColorSigma; // 0xD8
		::System::Single KernelSigma; // 0xDC
		::System::Single WorldPosSigma; // 0xE0
		::System::Single SharpingFactor; // 0xE4
		static ::Il2CppArray<::System::Int32>** StaticGet_IAJGOMMCFBE()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("RPG.Client", "Effect_SphereVolumetricLightMonoPlugin")->GetStaticField(0x3EFD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTMONOPLUGIN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTMONOPLUGIN_CCTOR_OFFSET))();
		}

		::UnityEngine::RenderTexture* GetVolumetricLightResultRT()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTMONOPLUGIN_GETVOLUMETRICLIGHTRESULTRT_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
