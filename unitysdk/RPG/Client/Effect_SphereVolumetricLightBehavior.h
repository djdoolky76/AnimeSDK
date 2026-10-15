#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
namespace RPG::Client { class Effect_SphereVolumetricLightMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_BGAJNGOCKKL_OFFSET UNITYSDK_OFFSET(0xCD69490)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD6C2A0)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCD6C150)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCD6C290)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_EIBCDACOEMC_OFFSET UNITYSDK_OFFSET(0xCD69180)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0xCD695F0)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_GET_CURRENTRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xCD69170)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0xCD695E0)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_GET_VOLUMETRICLIGHTMATERIAL_OFFSET UNITYSDK_OFFSET(0xCD69160)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xCD69410)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xCD6C1B0)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCD6B570)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_MAPDKBLKFMH_OFFSET UNITYSDK_OFFSET(0xCD69540)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCD6BD50)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_NOEGKFFFLKA_OFFSET UNITYSDK_OFFSET(0xCD6AD70)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xCD6C220)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCD6B620)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xCD6B4E0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_SphereVolumetricLightBehavior_TypeDefinitionIndex = 70557;

	class Effect_SphereVolumetricLightBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _InstantiatedBlockers; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _InstantiatedHoles; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _InstantiatedForceBlockers; // 0x48
		::UnityEngine::Material* _SphereDepthMaterial; // 0x50
		::UnityEngine::Material* _SphereHoleMaterial; // 0x58
		::UnityEngine::Material* _SphereForceBlockerMaterial; // 0x60
		::UnityEngine::Material* _SphereFilterMaterial_01; // 0x68
		::UnityEngine::Material* _SphereFilterMaterial_02; // 0x70
		::UnityEngine::Material* _VolumetricLightMaterial; // 0x78
		::UnityEngine::RenderTexture* _CurrentRenderTexture; // 0x80
		::UnityEngine::RenderTexture* _FilteringRenderTexture; // 0x88
		::UnityEngine::RenderTexture* _HistoryRenderTexture; // 0x90
		::UnityEngine::Vector2Int _HalfResolution; // 0x98
		::UnityEngine::Matrix4x4 _LastFrameViewProj; // 0xA0
		::System::Int32 _IndexWrite; // 0xE0
		::UnityEngine::RenderTextureDescriptor _RenderTextureDesc; // 0xE4
		static ::System::Int32* StaticGet__LayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_SphereVolumetricLightBehavior")->GetStaticField(0xD770);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_CCTOR_OFFSET))();
		}

		::UnityEngine::Material* get_VolumetricLightMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_GET_VOLUMETRICLIGHTMATERIAL_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* get_CurrentRenderTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_GET_CURRENTRENDERTEXTURE_OFFSET))(this);
		}

		::System::Void EIBCDACOEMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_EIBCDACOEMC_OFFSET))(this);
		}

		::System::Void BGAJNGOCKKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_BGAJNGOCKKL_OFFSET))(this);
		}

		::System::Void MAPDKBLKFMH(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_MAPDKBLKFMH_OFFSET))(this, a1);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void NOEGKFFFLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_NOEGKFFFLKA_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::RPG::Client::Effect_SphereVolumetricLightMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Effect_SphereVolumetricLightMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
