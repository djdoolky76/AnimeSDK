#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class InfiniteSymbolGPUParticleMonoPlugin; }
namespace System { class String; }
namespace UnityEngine { class GPUParticlesAsset; }
namespace UnityEngine { class GPUParticlesRenderer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_BEHAFDKFFOA_OFFSET UNITYSDK_OFFSET(0xD345730)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xD346750)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_CEIOIINALNJ_OFFSET UNITYSDK_OFFSET(0xD345E00)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xD344D30)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD346730)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_DDNPEGBBBJE_OFFSET UNITYSDK_OFFSET(0xD345FA0)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_EHBLCEMBGBP_OFFSET UNITYSDK_OFFSET(0xD345BC0)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD344EF0)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_EPHMCHCPGKC_OFFSET UNITYSDK_OFFSET(0xD345000)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xD345D80)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_GET__SPAWNKERNELNAME_OFFSET UNITYSDK_OFFSET(0xD345C20)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_GET__UPDATEKERNELNAME_OFFSET UNITYSDK_OFFSET(0xD346570)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_GIKJOELJAHH_OFFSET UNITYSDK_OFFSET(0xD346110)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_GPIDPKOBNIJ_OFFSET UNITYSDK_OFFSET(0xD3466D0)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_GPLLONMEDAC_OFFSET UNITYSDK_OFFSET(0xD344CE0)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0xD344F50)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_JLHNCMDFAAF_OFFSET UNITYSDK_OFFSET(0xD3462B0)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xD344D90)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_KEPMMNEBKCD_OFFSET UNITYSDK_OFFSET(0xD344C10)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD344AF0)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_LDMKIMBGHED_OFFSET UNITYSDK_OFFSET(0xD345570)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xD344C70)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xD344E90)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xD344DF0)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xD344B60)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_PKNGOIOIPEC_OFFSET UNITYSDK_OFFSET(0xD3459E0)
#define RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xD344E50)

namespace RPG::Client
{
	inline static constexpr unsigned int InfiniteSymbolGPUParticleBehavior_TypeDefinitionIndex = 70311;

	class InfiniteSymbolGPUParticleBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::GPUParticlesRenderer* _GPUParticlesRenderer; // 0x38
		::UnityEngine::GPUParticlesAsset* _GPUParticlesAsset; // 0x40
		::UnityEngine::GPUParticlesAsset* _GPUParticlesAssetInstance; // 0x48
		::System::Boolean _OriginalEnabled; // 0x50
		::System::Byte _padding0[0x7];
		::UnityEngine::GPUParticlesAsset* _OriginalParticlesAsset; // 0x58
		::UnityEngine::Material* _OriginalSharedMaterial; // 0x60
		::System::Boolean _Inited; // 0x68
		::System::Boolean _Spawned; // 0x69
		::System::Boolean _PendingSpawn; // 0x6A
		::System::Byte _padding1[0x1];
		::System::Int32 _EnableFrame; // 0x6C
		::System::Int32 _SpawnDelayFrames; // 0x70
		static ::System::Int32* StaticGet__CurrentWSScaleProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "InfiniteSymbolGPUParticleBehavior")->GetStaticField(0x46F0);
		}

		static ::System::Int32* StaticGet__CurrentWSRotationProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "InfiniteSymbolGPUParticleBehavior")->GetStaticField(0x46F4);
		}

		static ::System::Int32* StaticGet__CurrentWPProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "InfiniteSymbolGPUParticleBehavior")->GetStaticField(0x46F8);
		}

		static ::System::Int32* StaticGet__WSEulerRotationProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "InfiniteSymbolGPUParticleBehavior")->GetStaticField(0x46FC);
		}

		// static const ::System::Object THREAD_GROUP_SIZE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void KEPMMNEBKCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_KEPMMNEBKCD_OFFSET))(this);
		}

		::System::Void IKOHLHDGFKH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_IKOHLHDGFKH_OFFSET))(this, a1);
		}

		::System::Void GPLLONMEDAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_GPLLONMEDAC_OFFSET))(this);
		}

		::System::Void LDMKIMBGHED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_LDMKIMBGHED_OFFSET))(this);
		}

		::System::Boolean EPHMCHCPGKC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_EPHMCHCPGKC_OFFSET))(this);
		}

		::System::Void BEHAFDKFFOA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_BEHAFDKFFOA_OFFSET))(this, a1);
		}

		::System::Void PKNGOIOIPEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_PKNGOIOIPEC_OFFSET))(this);
		}

		static ::System::Int32 EHBLCEMBGBP(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_EHBLCEMBGBP_OFFSET))(a1);
		}

		::System::Void CEIOIINALNJ(::UnityEngine::GPUParticlesAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GPUParticlesAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_CEIOIINALNJ_OFFSET))(this, a1);
		}

		::System::Void DDNPEGBBBJE(::UnityEngine::GPUParticlesAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GPUParticlesAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_DDNPEGBBBJE_OFFSET))(this, a1);
		}

		::System::Void GIKJOELJAHH(::UnityEngine::GPUParticlesAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GPUParticlesAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_GIKJOELJAHH_OFFSET))(this, a1);
		}

		::System::Void JLHNCMDFAAF(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_JLHNCMDFAAF_OFFSET))(this, a1);
		}

		::RPG::Client::InfiniteSymbolGPUParticleMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::InfiniteSymbolGPUParticleMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

		::System::String* get__SpawnKernelName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_GET__SPAWNKERNELNAME_OFFSET))(this);
		}

		::System::String* get__UpdateKernelName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_GET__UPDATEKERNELNAME_OFFSET))(this);
		}

		static ::System::Void GPIDPKOBNIJ(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFINITESYMBOLGPUPARTICLEBEHAVIOR_GPIDPKOBNIJ_OFFSET))(a1);
		}

	};
}
