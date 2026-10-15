#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BoneChain;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define SOFTBODYIK_ADDFORCE_1_OFFSET UNITYSDK_OFFSET(0xE97D590)
#define SOFTBODYIK_ADDFORCE_OFFSET UNITYSDK_OFFSET(0xE97D230)
#define SOFTBODYIK_AHGEHEHNLNA_OFFSET UNITYSDK_OFFSET(0xE97AEB0)
#define SOFTBODYIK_BPJIKODHOJK_OFFSET UNITYSDK_OFFSET(0xE97A560)
#define SOFTBODYIK_CHECKCURRENTOFFSET_OFFSET UNITYSDK_OFFSET(0xE97E110)
#define SOFTBODYIK_CTOR_OFFSET UNITYSDK_OFFSET(0xE97EF80)
#define SOFTBODYIK_DBFNODHJGAF_OFFSET UNITYSDK_OFFSET(0xE97D030)
#define SOFTBODYIK_DKGCEPPCBHN_OFFSET UNITYSDK_OFFSET(0xE97B870)
#define SOFTBODYIK_DOIICGCOJJO_OFFSET UNITYSDK_OFFSET(0xE97A810)
#define SOFTBODYIK_GDLKHEAMHKE_OFFSET UNITYSDK_OFFSET(0xE97D620)
#define SOFTBODYIK_IBGDFGAILAE_OFFSET UNITYSDK_OFFSET(0xE97A290)
#define SOFTBODYIK_ICKKNLFACOK_OFFSET UNITYSDK_OFFSET(0xE97C9F0)
#define SOFTBODYIK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE97A0B0)
#define SOFTBODYIK_MMOCFMJPFLF_OFFSET UNITYSDK_OFFSET(0xE97ACA0)
#define SOFTBODYIK_NDFKKPNHFDK_OFFSET UNITYSDK_OFFSET(0xE97B620)
#define SOFTBODYIK_NOFCAOIEALH_OFFSET UNITYSDK_OFFSET(0xE979240)
#define SOFTBODYIK_OBOIMDGNLFD_OFFSET UNITYSDK_OFFSET(0xE97C110)
#define SOFTBODYIK_REINITIALIZE_OFFSET UNITYSDK_OFFSET(0xE97DF20)
#define SOFTBODYIK_RESETTOORIGINALSTATE_OFFSET UNITYSDK_OFFSET(0xE97DA70)
#define SOFTBODYIK_START_OFFSET UNITYSDK_OFFSET(0xE9791F0)
#define SOFTBODYIK_TESTFORCE_OFFSET UNITYSDK_OFFSET(0xE97DF70)

inline static constexpr unsigned int SoftBodyIK_TypeDefinitionIndex = 47260;

	class SoftBodyIK : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* rootNode; // 0x18
		::System::Collections::Generic::List_1<::BoneChain*>* boneChains; // 0x20
		::System::Single weight; // 0x28
		::System::Single deformationMultiplier; // 0x2C
		::UnityEngine::AnimationCurve* distanceFalloff; // 0x30
		::System::Single stiffness; // 0x38
		::System::Single elasticity; // 0x3C
		::System::Single damping; // 0x40
		::System::Single maxBounceBack; // 0x44
		::System::Single rotationWeight; // 0x48
		::System::Single rotationStiffness; // 0x4C
		::System::Single cascadeStrength; // 0x50
		::System::Single externalForceMultiplier; // 0x54
		::System::Single externalForceFalloff; // 0x58
		::System::Single MoveStateRatio; // 0x5C
		::UnityEngine::Vector3 OPPKAHNEILK; // 0x60
		::UnityEngine::Quaternion IKAHJHCHNMJ; // 0x6C
		::UnityEngine::Vector3 ODGGMCKDEBO; // 0x7C
		::UnityEngine::Vector3 JIOKOFADBKI; // 0x88
		::System::Boolean HGLEGIJBIMA; // 0x94
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK_START_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK_LATEUPDATE_OFFSET))(this);
		}

		::System::Void NOFCAOIEALH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK_NOFCAOIEALH_OFFSET))(this);
		}

		::System::Void IBGDFGAILAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK_IBGDFGAILAE_OFFSET))(this);
		}

		::System::Void BPJIKODHOJK(::BoneChain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_BPJIKODHOJK_OFFSET))(this, a1);
		}

		::System::Void AHGEHEHNLNA(::BoneChain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_AHGEHEHNLNA_OFFSET))(this, a1);
		}

		::System::Void DOIICGCOJJO(::BoneChain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_DOIICGCOJJO_OFFSET))(this, a1);
		}

		::System::Void MMOCFMJPFLF(::BoneChain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_MMOCFMJPFLF_OFFSET))(this, a1);
		}

		::System::Void DBFNODHJGAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK_DBFNODHJGAF_OFFSET))(this);
		}

		::System::Void AddForce(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + SOFTBODYIK_ADDFORCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddForce_1(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + SOFTBODYIK_ADDFORCE_1_OFFSET))(this, a1, a2);
		}

		::System::Void ICKKNLFACOK(::BoneChain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_ICKKNLFACOK_OFFSET))(this, a1);
		}

		::System::Void OBOIMDGNLFD(::BoneChain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_OBOIMDGNLFD_OFFSET))(this, a1);
		}

		::System::Void GDLKHEAMHKE(::BoneChain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_GDLKHEAMHKE_OFFSET))(this, a1);
		}

		::System::Void NDFKKPNHFDK(::BoneChain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_NDFKKPNHFDK_OFFSET))(this, a1);
		}

		::System::Void DKGCEPPCBHN(::BoneChain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BoneChain*))((::PBYTE)hIl2Cpp + SOFTBODYIK_DKGCEPPCBHN_OFFSET))(this, a1);
		}

		::System::Void ResetToOriginalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK_RESETTOORIGINALSTATE_OFFSET))(this);
		}

		::System::Void Reinitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK_REINITIALIZE_OFFSET))(this);
		}

		::System::Void TestForce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK_TESTFORCE_OFFSET))(this);
		}

		::System::Void CheckCurrentOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFTBODYIK_CHECKCURRENTOFFSET_OFFSET))(this);
		}

	};
