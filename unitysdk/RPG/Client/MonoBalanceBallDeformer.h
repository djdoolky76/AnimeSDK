#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLCPFJBFKNO.h"
#include "unitysdk/RPG/Client/MonoBalanceBallDeformer_DeformationMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOBALANCEBALLDEFORMER_AWAKE_OFFSET UNITYSDK_OFFSET(0x14005010)
#define RPG_CLIENT_MONOBALANCEBALLDEFORMER_CHBJIIHPKHE_OFFSET UNITYSDK_OFFSET(0x140056A0)
#define RPG_CLIENT_MONOBALANCEBALLDEFORMER_CKEDGPJDMPC_OFFSET UNITYSDK_OFFSET(0x14005950)
#define RPG_CLIENT_MONOBALANCEBALLDEFORMER_CTOR_OFFSET UNITYSDK_OFFSET(0x14008210)
#define RPG_CLIENT_MONOBALANCEBALLDEFORMER_EEJHEEEDICB_OFFSET UNITYSDK_OFFSET(0x14005D80)
#define RPG_CLIENT_MONOBALANCEBALLDEFORMER_EGFBOEIPIEK_OFFSET UNITYSDK_OFFSET(0x14005B30)
#define RPG_CLIENT_MONOBALANCEBALLDEFORMER_EGHNOOPCHCA_OFFSET UNITYSDK_OFFSET(0x14005060)
#define RPG_CLIENT_MONOBALANCEBALLDEFORMER_HALGPCKNNLB_OFFSET UNITYSDK_OFFSET(0x14007660)
#define RPG_CLIENT_MONOBALANCEBALLDEFORMER_ILKEBMIFKON_1_OFFSET UNITYSDK_OFFSET(0x140066F0)
#define RPG_CLIENT_MONOBALANCEBALLDEFORMER_ILKEBMIFKON_OFFSET UNITYSDK_OFFSET(0x140064F0)
#define RPG_CLIENT_MONOBALANCEBALLDEFORMER_JMDHOOKDOIE_OFFSET UNITYSDK_OFFSET(0x140080E0)
#define RPG_CLIENT_MONOBALANCEBALLDEFORMER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x140057F0)
#define RPG_CLIENT_MONOBALANCEBALLDEFORMER_NFIHPGGNLDD_OFFSET UNITYSDK_OFFSET(0x14006810)
#define RPG_CLIENT_MONOBALANCEBALLDEFORMER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14007F40)
#define RPG_CLIENT_MONOBALANCEBALLDEFORMER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x14007DC0)
#define RPG_CLIENT_MONOBALANCEBALLDEFORMER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14005520)
#define RPG_CLIENT_MONOBALANCEBALLDEFORMER_SETMOVEMENTSAMPLE_OFFSET UNITYSDK_OFFSET(0x14007540)
#define RPG_CLIENT_MONOBALANCEBALLDEFORMER_TRYPLAYCOLLISIONIMPACT_OFFSET UNITYSDK_OFFSET(0x14007B70)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoBalanceBallDeformer_TypeDefinitionIndex = 70595;

	class MonoBalanceBallDeformer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MonoBalanceBallDeformer_DeformationMode Mode; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* MotionRoot; // 0x20
		::System::Single MinSpeed; // 0x28
		::System::Single DeformStartSpeed; // 0x2C
		::System::Single MaxSpeedForStretch; // 0x30
		::System::Single SpeedResponse; // 0x34
		::System::Single SpeedStretch; // 0x38
		::System::Single SpeedSquash; // 0x3C
		::System::Single MaxStretch; // 0x40
		::System::Single MaxSquash; // 0x44
		::System::Single ImpactMinSpeed; // 0x48
		::System::Single ImpactMaxSpeed; // 0x4C
		::System::Single ImpactCooldown; // 0x50
		::System::Single ImpactSquash; // 0x54
		::System::Single ImpactVerticalStretch; // 0x58
		::System::Single ImpactSideBulge; // 0x5C
		::System::Single ImpactRecoverSpeed; // 0x60
		::System::Single DeformResponse; // 0x64
		::System::Single DirectionResponse; // 0x68
		::System::Single GameplayDeformationScale; // 0x6C
		::System::Single AccelerationReference; // 0x70
		::System::Single BrakingAccelerationReference; // 0x74
		::System::Single BrakeSquash; // 0x78
		::System::Single InertialLean; // 0x7C
		::System::Single AccelerationResponse; // 0x80
		::System::Single ElasticFrequency; // 0x84
		::System::Single ElasticDamping; // 0x88
		::System::Single PerformanceMinVerticalSpeed; // 0x8C
		::System::Single PerformanceMaxVerticalSpeed; // 0x90
		::System::Single PerformanceUpStretch; // 0x94
		::System::Single PerformanceDownSquash; // 0x98
		::System::Single PerformanceResponse; // 0x9C
		::System::Single PerformanceTeleportDistance; // 0xA0
		::UnityEngine::Vector3 LocalCenterOffset; // 0xA4
		::System::Boolean RecalculateNormals; // 0xB0
		::System::Byte _padding1[0x7];
		::UnityEngine::MeshFilter* PCCCPJJFIJN; // 0xB8
		::UnityEngine::SkinnedMeshRenderer* MABNKFABDNO; // 0xC0
		::UnityEngine::Mesh* AADNDMJMNAP; // 0xC8
		::UnityEngine::Mesh* BBOFPKGKGMG; // 0xD0
		::UnityEngine::Transform* ILEKEHHOOBM; // 0xD8
		::Il2CppArray<::UnityEngine::Vector3>* GMBDMOBKIEB; // 0xE0
		::Il2CppArray<::UnityEngine::Vector3>* MGOOMKJABII; // 0xE8
		::UnityEngine::Vector3 PKIEHMCMPIA; // 0xF0
		::UnityEngine::Vector3 PFPBLBFOIJG; // 0xFC
		::UnityEngine::Vector3 DFJDOGGOLOK; // 0x108
		::UnityEngine::Vector3 EKMEEPIPJDM; // 0x114
		::System::Single LCOADHMCBHJ; // 0x120
		::System::Single DMGJBHIPKIB; // 0x124
		::System::Single IKMILHDIFAM; // 0x128
		::UnityEngine::Vector3 POJGFHHDBAH; // 0x12C
		::UnityEngine::Vector3 JEKAGPGJIMJ; // 0x138
		::System::Int32 BLHHMOJFNIF; // 0x144
		::UnityEngine::Vector3 NFBPMPPOBIM; // 0x148
		::System::Single EHFOKNLEDPB; // 0x154
		::UnityEngine::Vector3 GHGGNECGJEH; // 0x158
		::UnityEngine::Vector3 FKLDIAIHFDP; // 0x164
		::CLCPFJBFKNO MGLJNEKLDIO; // 0x170
		::System::Single KIBKHLKEPPA; // 0x194
		::System::Boolean FAFPDIOEENF; // 0x198
		::System::Boolean PKHJBLAJJAL; // 0x199
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBALANCEBALLDEFORMER_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBALANCEBALLDEFORMER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBALANCEBALLDEFORMER_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBALANCEBALLDEFORMER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void EEJHEEEDICB(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBALANCEBALLDEFORMER_EEJHEEEDICB_OFFSET))(this, a1, a2);
		}

		::System::Void SetMovementSample(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::CLCPFJBFKNO a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::CLCPFJBFKNO))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBALANCEBALLDEFORMER_SETMOVEMENTSAMPLE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void ILKEBMIFKON(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBALANCEBALLDEFORMER_ILKEBMIFKON_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void ILKEBMIFKON_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBALANCEBALLDEFORMER_ILKEBMIFKON_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Void EGFBOEIPIEK(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBALANCEBALLDEFORMER_EGFBOEIPIEK_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryPlayCollisionImpact(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBALANCEBALLDEFORMER_TRYPLAYCOLLISIONIMPACT_OFFSET))(this, a1, a2);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBALANCEBALLDEFORMER_ONDISABLE_OFFSET))(this);
		}

		::System::Void CHBJIIHPKHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBALANCEBALLDEFORMER_CHBJIIHPKHE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBALANCEBALLDEFORMER_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean EGHNOOPCHCA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBALANCEBALLDEFORMER_EGHNOOPCHCA_OFFSET))(this);
		}

		::System::Void NFIHPGGNLDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBALANCEBALLDEFORMER_NFIHPGGNLDD_OFFSET))(this);
		}

		::System::Void HALGPCKNNLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBALANCEBALLDEFORMER_HALGPCKNNLB_OFFSET))(this);
		}

		::System::Void CKEDGPJDMPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBALANCEBALLDEFORMER_CKEDGPJDMPC_OFFSET))(this);
		}

		::System::Void JMDHOOKDOIE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBALANCEBALLDEFORMER_JMDHOOKDOIE_OFFSET))(this, a1);
		}

	};
}
