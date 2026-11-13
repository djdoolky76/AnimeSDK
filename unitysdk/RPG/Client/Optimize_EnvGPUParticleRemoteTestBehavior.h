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

#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_BPBDDPHJNIJ_OFFSET UNITYSDK_OFFSET(0x1BF0C330)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF0DB20)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x1BF0B640)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF0DB10)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x1BF0B830)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_GOIOHECFANB_OFFSET UNITYSDK_OFFSET(0x1BF0B8B0)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_GPLLONMEDAC_OFFSET UNITYSDK_OFFSET(0x1BF0B540)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_HOGNLODOIMF_OFFSET UNITYSDK_OFFSET(0x1BF0D230)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_KEPMMNEBKCD_OFFSET UNITYSDK_OFFSET(0x1BF0B060)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1BF0AF60)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x1BF0C2E0)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_LJPHJNKNGIN_OFFSET UNITYSDK_OFFSET(0x1BF0C450)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_MDCLOMBLHNO_OFFSET UNITYSDK_OFFSET(0x1BF0CD30)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x1BF0B4D0)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x1BF0AFF0)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_PKBEGJBNHGO_OFFSET UNITYSDK_OFFSET(0x1BF0C070)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0x1BF0C2A0)
#define RPG_CLIENT_OPTIMIZE_ENVGPUPARTICLEREMOTETESTBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x1BF0B6B0)

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
			return (::Il2CppArray<::UnityEngine::Matrix4x4>**)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x1F680);
		}

		static ::System::Int32* StaticGet__SizeID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x6A10);
		}

		static ::System::Int32* StaticGet__WindID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x6A14);
		}

		static ::System::Int32* StaticGet__WindScaleID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x6A18);
		}

		static ::System::Int32* StaticGet__SpeedTexID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x6A1C);
		}

		static ::System::Int32* StaticGet__DensityScaleID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x6A20);
		}

		static ::System::Int32* StaticGet__NoiseTillingID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x6A24);
		}

		static ::System::Int32* StaticGet__DeltaTimeID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x6A28);
		}

		static ::System::Int32* StaticGet__OccluderMatrixID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x6A2C);
		}

		static ::System::Int32* StaticGet__PosTexID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x6A30);
		}

		static ::System::Int32* StaticGet__NoiseTexID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x6A34);
		}

		static ::System::Int32* StaticGet__StencilOpID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x6A38);
		}

		static ::System::Int32* StaticGet__NoiseScaleID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x6A3C);
		}

		static ::System::Int32* StaticGet__FadingRateID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x6A40);
		}

		static ::System::Int32* StaticGet__RangeMinID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x6A44);
		}

		static ::System::Int32* StaticGet__OccluderAsVolumeID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x6A48);
		}

		static ::System::Int32* StaticGet__RangeMaxOldID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x6A4C);
		}

		static ::System::Int32* StaticGet__TimeID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x6A50);
		}

		static ::System::Int32* StaticGet__EmissionScaleID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x6A54);
		}

		static ::System::Int32* StaticGet__RangeMaxID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x6A58);
		}

		static ::System::Int32* StaticGet__RangeMinOldID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Optimize_EnvGPUParticleRemoteTestBehavior")->GetStaticField(0x6A5C);
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
