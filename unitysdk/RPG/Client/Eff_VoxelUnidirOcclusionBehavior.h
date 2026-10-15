#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Eff_VoxelUnidirOcclusionBehavior_RuntimeState.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::Client { class Eff_VoxelUnidirOcclusionMonoPlugin; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GPUParticlesAsset; }
namespace UnityEngine { class GPUParticlesRenderer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_ACAGCCEGDKF_OFFSET UNITYSDK_OFFSET(0xCD0B2C0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_AGGFHFNFNIF_OFFSET UNITYSDK_OFFSET(0xCD06970)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_BFOPPPBPDEE_OFFSET UNITYSDK_OFFSET(0xCD078F0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_BHGBAILAIEG_OFFSET UNITYSDK_OFFSET(0xCD07840)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_CACPCDLIJIL_OFFSET UNITYSDK_OFFSET(0xCD077E0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD0B5A0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_CEIOIINALNJ_OFFSET UNITYSDK_OFFSET(0xCD09C60)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCD06C40)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_CKDKKJJANHE_OFFSET UNITYSDK_OFFSET(0xCD08C50)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCD0B570)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_DDNPEGBBBJE_OFFSET UNITYSDK_OFFSET(0xCD09D50)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_DLKPBKMDCHG_OFFSET UNITYSDK_OFFSET(0xCD0AF80)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_EFAKLJNFPFC_OFFSET UNITYSDK_OFFSET(0xCD07AC0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_EGCEEFPDFNM_OFFSET UNITYSDK_OFFSET(0xCD083B0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_FBKMDDKDADG_OFFSET UNITYSDK_OFFSET(0xCD07240)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xCD07A80)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_GFOPEKDMNOI_OFFSET UNITYSDK_OFFSET(0xCD07360)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_GIKJOELJAHH_OFFSET UNITYSDK_OFFSET(0xCD09E10)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_GPLLONMEDAC_OFFSET UNITYSDK_OFFSET(0xCD06FC0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_HHEPIAKLJEK_OFFSET UNITYSDK_OFFSET(0xCD072F0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_IIOAFGDGLIF_OFFSET UNITYSDK_OFFSET(0xCD0A3B0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_IJJOBDCKFPA_OFFSET UNITYSDK_OFFSET(0xCD0B130)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0xCD07120)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_JEBKAPPCCJE_OFFSET UNITYSDK_OFFSET(0xCD084C0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_JJIPGIICKCB_OFFSET UNITYSDK_OFFSET(0xCD07890)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xCD06CB0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_KEPMMNEBKCD_OFFSET UNITYSDK_OFFSET(0xCD06E80)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCD06870)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_LBHCPLDHAIJ_OFFSET UNITYSDK_OFFSET(0xCD07B70)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_LBNKIONLNEO_OFFSET UNITYSDK_OFFSET(0xCD079E0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_LDMKIMBGHED_OFFSET UNITYSDK_OFFSET(0xCD0A260)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_LEHNCBDEMNP_OFFSET UNITYSDK_OFFSET(0xCD073C0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_MAPDMMJCPBI_OFFSET UNITYSDK_OFFSET(0xCD076C0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCD06A80)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xCD06E10)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_MHGKEPIFCCP_OFFSET UNITYSDK_OFFSET(0xCD09150)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_MLBLKDCMEEF_OFFSET UNITYSDK_OFFSET(0xCD0A4F0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_MLLPEEPCJAK_OFFSET UNITYSDK_OFFSET(0xCD0A610)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_MONFGIJIBAD_OFFSET UNITYSDK_OFFSET(0xCD06AF0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_NCKOAAAEAFC_OFFSET UNITYSDK_OFFSET(0xCD08E40)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xCD06D90)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_OELLPHKLNKK_OFFSET UNITYSDK_OFFSET(0xCD09740)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xCD06D00)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_OJKGGAJEKPO_OFFSET UNITYSDK_OFFSET(0xCD09330)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCD06900)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_PDDBOEJMBDF_OFFSET UNITYSDK_OFFSET(0xCD0AE40)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_PKNGOIOIPEC_OFFSET UNITYSDK_OFFSET(0xCD09F50)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xCD06D50)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_PPAHJKPFJLN_OFFSET UNITYSDK_OFFSET(0xCD08940)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xCD070C0)

namespace RPG::Client
{
	inline static constexpr unsigned int Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex = 70404;

	class Eff_VoxelUnidirOcclusionBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Boolean _Inited; // 0x38
		::System::Byte _padding0[0x7];
		::UnityEngine::GPUParticlesAsset* _GPUParticlesAssetInstance; // 0x40
		::UnityEngine::GPUParticlesRenderer* _GPUParticlesRenderer; // 0x48
		::UnityEngine::Transform* VoxelTransform; // 0x50
		::UnityEngine::Vector4 _ParticleSpawnScale; // 0x58
		::System::Int32 ParticleNumber; // 0x68
		::System::Boolean _Initialized; // 0x6C
		::System::Boolean _Spawned; // 0x6D
		::System::Byte _padding1[0x2];
		::UnityEngine::Vector3 spawnScale; // 0x70
		::UnityEngine::Vector3 spawnCenterWS; // 0x7C
		::UnityEngine::Camera* _Camera; // 0x88
		::UnityEngine::Vector3 _cachedParticleScale; // 0x90
		::System::Byte _padding2[0x4];
		::Il2CppArray<::UnityEngine::Collider*>* _ignoreColliders; // 0xA0
		::Il2CppArray<::UnityEngine::Collider*>* _EffectTargetColliders; // 0xA8
		::UnityEngine::GameObject* _TargetGO; // 0xB0
		::System::Single heightOffset; // 0xB8
		::System::Single raycastDistance; // 0xBC
		::UnityEngine::Transform* targetObject; // 0xC0
		::System::Boolean _paused; // 0xC8
		::System::Byte _padding3[0x3];
		::System::Int32 _groundCheckCounter; // 0xCC
		::UnityEngine::Vector3 _lastGroundPosition; // 0xD0
		::System::Boolean _hasGroundPosition; // 0xDC
		::System::Byte _padding4[0x3];
		::System::Single _lastAppliedDisappear; // 0xE0
		::System::Single _lastAppliedFlyHeight; // 0xE4
		::UnityEngine::Coroutine* _DelaySpawnParticleCoroutine; // 0xE8
		::UnityEngine::ComputeShader* _ComputeShaderInstance; // 0xF0
		::UnityEngine::Material* _MaterialInstance; // 0xF8
		::System::Boolean _OwnsGPUParticlesAssetInstance; // 0x100
		::System::Boolean _OwnsComputeShaderInstance; // 0x101
		::System::Boolean _OwnsMaterialInstance; // 0x102
		::System::Byte _padding5[0x1];
		::RPG::Client::Eff_VoxelUnidirOcclusionBehavior_RuntimeState _state; // 0x104
		::System::Int32 _lastRebuildFrame; // 0x108
		static ::System::Int32* StaticGet__VoxelUnitScaleProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Eff_VoxelUnidirOcclusionBehavior")->GetStaticField(0x9E50);
		}

		static ::System::Int32* StaticGet__SeparationPatternTillingScaleYProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Eff_VoxelUnidirOcclusionBehavior")->GetStaticField(0x9E54);
		}

		static ::System::Int32* StaticGet__CurrentWSRotationProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Eff_VoxelUnidirOcclusionBehavior")->GetStaticField(0x9E58);
		}

		static ::System::Int32* StaticGet__SpawnScaleProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Eff_VoxelUnidirOcclusionBehavior")->GetStaticField(0x9E5C);
		}

		static ::System::Int32* StaticGet__CurrentWPProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Eff_VoxelUnidirOcclusionBehavior")->GetStaticField(0x9E60);
		}

		static ::System::Int32* StaticGet__VoxelTotalAmountProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Eff_VoxelUnidirOcclusionBehavior")->GetStaticField(0x9E64);
		}

		static ::System::Int32* StaticGet__VoxelCountZProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Eff_VoxelUnidirOcclusionBehavior")->GetStaticField(0x9E68);
		}

		static ::System::Int32* StaticGet__SeparationOffsetProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Eff_VoxelUnidirOcclusionBehavior")->GetStaticField(0x9E6C);
		}

		static ::System::Int32* StaticGet__OffsetModeProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Eff_VoxelUnidirOcclusionBehavior")->GetStaticField(0x9E70);
		}

		static ::System::Int32* StaticGet__SpawnCenterProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Eff_VoxelUnidirOcclusionBehavior")->GetStaticField(0x9E74);
		}

		static ::System::Int32* StaticGet__VoxelCountXProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Eff_VoxelUnidirOcclusionBehavior")->GetStaticField(0x9E78);
		}

		static ::System::Int32* StaticGet__TransformScaleProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Eff_VoxelUnidirOcclusionBehavior")->GetStaticField(0x9E7C);
		}

		static ::System::Int32* StaticGet__DisappearProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Eff_VoxelUnidirOcclusionBehavior")->GetStaticField(0x9E80);
		}

		static ::System::Int32* StaticGet__SeparationPatternTillingScaleXProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Eff_VoxelUnidirOcclusionBehavior")->GetStaticField(0x9E84);
		}

		static ::System::Int32* StaticGet__WorldToObjectProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Eff_VoxelUnidirOcclusionBehavior")->GetStaticField(0x9E88);
		}

		static ::System::Int32* StaticGet__PausedProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Eff_VoxelUnidirOcclusionBehavior")->GetStaticField(0x9E8C);
		}

		static ::System::Int32* StaticGet__CurrentWSScaleProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Eff_VoxelUnidirOcclusionBehavior")->GetStaticField(0x9E90);
		}

		static ::System::Int32* StaticGet__FlyHeightProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Eff_VoxelUnidirOcclusionBehavior")->GetStaticField(0x9E94);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Void KEPMMNEBKCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_KEPMMNEBKCD_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void IKOHLHDGFKH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_IKOHLHDGFKH_OFFSET))(this, a1);
		}

		::System::Void GPLLONMEDAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_GPLLONMEDAC_OFFSET))(this);
		}

		::System::Void AGGFHFNFNIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_AGGFHFNFNIF_OFFSET))(this);
		}

		::System::Void MONFGIJIBAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_MONFGIJIBAD_OFFSET))(this);
		}

		::System::Void MAPDMMJCPBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_MAPDMMJCPBI_OFFSET))(this);
		}

		::System::Boolean FBKMDDKDADG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_FBKMDDKDADG_OFFSET))(this);
		}

		::System::Void LEHNCBDEMNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_LEHNCBDEMNP_OFFSET))(this);
		}

		::System::Void HHEPIAKLJEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_HHEPIAKLJEK_OFFSET))(this);
		}

		::System::Void CACPCDLIJIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_CACPCDLIJIL_OFFSET))(this);
		}

		::System::Void BHGBAILAIEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_BHGBAILAIEG_OFFSET))(this);
		}

		::System::Void GFOPEKDMNOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_GFOPEKDMNOI_OFFSET))(this);
		}

		::System::Collections::IEnumerator* JJIPGIICKCB()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_JJIPGIICKCB_OFFSET))(this);
		}

		::System::Void BFOPPPBPDEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_BFOPPPBPDEE_OFFSET))(this);
		}

		::System::Void LBNKIONLNEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_LBNKIONLNEO_OFFSET))(this);
		}

		::System::Void EFAKLJNFPFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_EFAKLJNFPFC_OFFSET))(this);
		}

		::System::Void LBHCPLDHAIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_LBHCPLDHAIJ_OFFSET))(this);
		}

		::System::Void EGCEEFPDFNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_EGCEEFPDFNM_OFFSET))(this);
		}

		::System::Void PPAHJKPFJLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_PPAHJKPFJLN_OFFSET))(this);
		}

		::System::Void NCKOAAAEAFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_NCKOAAAEAFC_OFFSET))(this);
		}

		::System::Void MHGKEPIFCCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_MHGKEPIFCCP_OFFSET))(this);
		}

		::System::Void OJKGGAJEKPO(::UnityEngine::Material* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_OJKGGAJEKPO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CKDKKJJANHE(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_CKDKKJJANHE_OFFSET))(this, a1);
		}

		::System::Void JEBKAPPCCJE(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_JEBKAPPCCJE_OFFSET))(this, a1);
		}

		::System::Void OELLPHKLNKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_OELLPHKLNKK_OFFSET))(this);
		}

		::System::Void PKNGOIOIPEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_PKNGOIOIPEC_OFFSET))(this);
		}

		::System::Void LDMKIMBGHED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_LDMKIMBGHED_OFFSET))(this);
		}

		::System::Void IIOAFGDGLIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_IIOAFGDGLIF_OFFSET))(this);
		}

		::System::Void CEIOIINALNJ(::UnityEngine::GPUParticlesAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GPUParticlesAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_CEIOIINALNJ_OFFSET))(this, a1);
		}

		::System::Void DDNPEGBBBJE(::UnityEngine::GPUParticlesAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GPUParticlesAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_DDNPEGBBBJE_OFFSET))(this, a1);
		}

		::System::Void GIKJOELJAHH(::UnityEngine::GPUParticlesAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GPUParticlesAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_GIKJOELJAHH_OFFSET))(this, a1);
		}

		::System::Void MLBLKDCMEEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_MLBLKDCMEEF_OFFSET))(this);
		}

		::System::Void PDDBOEJMBDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_PDDBOEJMBDF_OFFSET))(this);
		}

		::System::Void DLKPBKMDCHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_DLKPBKMDCHG_OFFSET))(this);
		}

		::UnityEngine::Vector3 MLLPEEPCJAK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_MLLPEEPCJAK_OFFSET))(this);
		}

		::System::Void IJJOBDCKFPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_IJJOBDCKFPA_OFFSET))(this);
		}

		::System::Void ACAGCCEGDKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_ACAGCCEGDKF_OFFSET))(this);
		}

		::RPG::Client::Eff_VoxelUnidirOcclusionMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Eff_VoxelUnidirOcclusionMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
