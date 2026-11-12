#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class Optimize_EnvGPUParticleRemoteTestMonoPlugin; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class RenderTexture; }

#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_BPBDDPHJNIJ_OFFSET UNITYSDK_OFFSET(0xE4AE850)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xE4B0040)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE4ADB60)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE4B0030)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE4ADD50)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_GOIOHECFANB_OFFSET UNITYSDK_OFFSET(0xE4ADDD0)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_GPLLONMEDAC_OFFSET UNITYSDK_OFFSET(0xE4ADA60)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_HOGNLODOIMF_OFFSET UNITYSDK_OFFSET(0xE4AF750)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_KEPMMNEBKCD_OFFSET UNITYSDK_OFFSET(0xE4AD580)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE4AD480)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xE4AE800)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_LJPHJNKNGIN_OFFSET UNITYSDK_OFFSET(0xE4AE970)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_MDCLOMBLHNO_OFFSET UNITYSDK_OFFSET(0xE4AF250)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE4AD9F0)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE4AD510)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_PKBEGJBNHGO_OFFSET UNITYSDK_OFFSET(0xE4AE590)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xE4AE7C0)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xE4ADBD0)

namespace RPG::Client
{
	inline static constexpr unsigned int Optimize_EnvGPUParticleRemoteTestBehavior_TypeDefinitionIndex = 72812;

	class Optimize_EnvGPUParticleRemoteTestBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Boolean _initialized; // 0x38
		::System::Byte _padding0[0x3];
		::System::Int32 _texSide; // 0x3C
		::System::Int32 _activeCount; // 0x40
		::UnityEngine::Vector3 _boundsMin; // 0x44
		::UnityEngine::Vector3 _boundsMax; // 0x50
		::System::Byte _padding1[0x4];
		::UnityEngine::RenderTexture* _positionRT; // 0x60
		::UnityEngine::RenderTexture* _speedRT; // 0x68
		::UnityEngine::MeshRenderer* _meshRenderer; // 0x70
		::UnityEngine::MeshFilter* _meshFilter; // 0x78
		::UnityEngine::Material* _matInstance; // 0x80
		static ::Il2CppArray<::UnityEngine::Matrix4x4>** StaticGet_s_EmptyOccluders()
		{
			return (::Il2CppArray<::UnityEngine::Matrix4x4>**)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x1C900);
		}

		static ::System::Int32* StaticGet__NoiseScaleID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x5D60);
		}

		static ::System::Int32* StaticGet__RangeMaxID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x5D64);
		}

		static ::System::Int32* StaticGet__SpeedTexID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x5D68);
		}

		static ::System::Int32* StaticGet__DeltaTimeID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x5D6C);
		}

		static ::System::Int32* StaticGet__WindID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x5D70);
		}

		static ::System::Int32* StaticGet__RangeMinID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x5D74);
		}

		static ::System::Int32* StaticGet__StencilOpID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x5D78);
		}

		static ::System::Int32* StaticGet__OccluderAsVolumeID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x5D7C);
		}

		static ::System::Int32* StaticGet__RangeMinOldID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x5D80);
		}

		static ::System::Int32* StaticGet__DensityScaleID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x5D84);
		}

		static ::System::Int32* StaticGet__EmissionScaleID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x5D88);
		}

		static ::System::Int32* StaticGet__NoiseTexID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x5D8C);
		}

		static ::System::Int32* StaticGet__TimeID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x5D90);
		}

		static ::System::Int32* StaticGet__PosTexID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x5D94);
		}

		static ::System::Int32* StaticGet__NoiseTillingID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x5D98);
		}

		static ::System::Int32* StaticGet__FadingRateID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x5D9C);
		}

		static ::System::Int32* StaticGet__OccluderMatrixID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x5DA0);
		}

		static ::System::Int32* StaticGet__RangeMaxOldID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x5DA4);
		}

		static ::System::Int32* StaticGet__WindScaleID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x5DA8);
		}

		static ::System::Int32* StaticGet__SizeID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x5DAC);
		}

		// static const ::System::Object KernelSpawn; // 0x0
		// static const ::System::Object KernelUpdate; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_LJBCDJNNBJH_OFFSET))(this);
		}

		::System::Void KEPMMNEBKCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_KEPMMNEBKCD_OFFSET))(this);
		}

		::System::Void GPLLONMEDAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_GPLLONMEDAC_OFFSET))(this);
		}

		::System::Void MDCLOMBLHNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_MDCLOMBLHNO_OFFSET))(this);
		}

		::System::Void GOIOHECFANB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_GOIOHECFANB_OFFSET))(this);
		}

		::System::Void PKBEGJBNHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_PKBEGJBNHGO_OFFSET))(this);
		}

		static ::UnityEngine::RenderTexture* BPBDDPHJNIJ(::System::Int32 a1, ::UnityEngine::RenderTextureFormat a2, ::System::String* a3)
		{
			return ((::UnityEngine::RenderTexture*(*)(::System::Int32, ::UnityEngine::RenderTextureFormat, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_BPBDDPHJNIJ_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Mesh* LJPHJNKNGIN(::System::Int32 a1)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_LJPHJNKNGIN_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::Matrix4x4>* HOGNLODOIMF()
		{
			return ((::Il2CppArray<::UnityEngine::Matrix4x4>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_HOGNLODOIMF_OFFSET))();
		}

		::RPG::Client::Optimize_EnvGPUParticleRemoteTestMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Optimize_EnvGPUParticleRemoteTestMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
