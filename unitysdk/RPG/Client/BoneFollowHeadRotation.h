#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class BoneFollowHeadRotation_HeadFollowBoneEntry; }
namespace RPG::Client { class LookAtIK; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BONEFOLLOWHEADROTATION_ADNJJABIOEJ_OFFSET UNITYSDK_OFFSET(0xC8A5310)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_AWAKE_OFFSET UNITYSDK_OFFSET(0xC8A5A10)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_BIKMEFFHHBN_OFFSET UNITYSDK_OFFSET(0xC8A56E0)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_BOABFLMLKII_OFFSET UNITYSDK_OFFSET(0xC8A5160)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_CGFOJKFIAKO_OFFSET UNITYSDK_OFFSET(0xC8A6620)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_CTOR_OFFSET UNITYSDK_OFFSET(0xC8A6BB0)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_DJBNJMGCFDE_OFFSET UNITYSDK_OFFSET(0xC8A61C0)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_DPJMOOFDMEL_OFFSET UNITYSDK_OFFSET(0xC8A5180)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_EKEGDIMHMLN_OFFSET UNITYSDK_OFFSET(0xC8A5960)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_HAHCDNNPCMK_OFFSET UNITYSDK_OFFSET(0xC8A5200)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_HCBKDNFHGJG_OFFSET UNITYSDK_OFFSET(0xC8A60A0)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_JAKPOPIEBJE_OFFSET UNITYSDK_OFFSET(0xC8A5150)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_LMHDJAMKBIE_OFFSET UNITYSDK_OFFSET(0xC8A6710)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_LPBGPNLGJNL_OFFSET UNITYSDK_OFFSET(0xC8A5F00)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_MDNIIHHLKJH_OFFSET UNITYSDK_OFFSET(0xC8A5730)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_MHNCIMNFDAF_OFFSET UNITYSDK_OFFSET(0xC8A6B20)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_NAELGDNHEIL_OFFSET UNITYSDK_OFFSET(0xC8A5190)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC8A5A60)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xC8A5AC0)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_PPDJNGKNIMK_OFFSET UNITYSDK_OFFSET(0xC8A59B0)
#define RPG_CLIENT_BONEFOLLOWHEADROTATION_UPDATEFOLLOW_OFFSET UNITYSDK_OFFSET(0xC8A5B10)

namespace RPG::Client
{
	inline static constexpr unsigned int BoneFollowHeadRotation_TypeDefinitionIndex = 68442;

	class BoneFollowHeadRotation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* HeadBone; // 0x18
		::System::Boolean AutoResolveHeadFromLookAtIk; // 0x20
		::System::Byte _padding0[0x7];
		::UnityEngine::Transform* RotationReference; // 0x28
		::System::Boolean AutoFindFollowBoneByName; // 0x30
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::System::Object*>* FollowBones; // 0x38
		::System::Boolean RecaptureBindPoseOnEnable; // 0x40
		::System::Boolean EnableFollow; // 0x41
		::System::Byte _padding2[0x2];
		::System::Single GlobalCoefficientMultiplier; // 0x44
		::System::Boolean DrawRuntimeGizmos; // 0x48
		::System::Byte _padding3[0x3];
		::UnityEngine::Quaternion LHAHADFKJHH; // 0x4C
		::System::Boolean NAOAJNBMPBM; // 0x5C
		::System::Byte _padding4[0x3];
		::UnityEngine::Vector3 OCOPNMLPOAM; // 0x60
		::System::Single CDBFEOGMOAJ; // 0x6C
		::RPG::Client::LookAtIK* FEIPKPLMKDO; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_CTOR_OFFSET))(this);
		}

		::System::Boolean JAKPOPIEBJE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_JAKPOPIEBJE_OFFSET))(this);
		}

		::UnityEngine::Vector3 BOABFLMLKII()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_BOABFLMLKII_OFFSET))(this);
		}

		::System::Single DPJMOOFDMEL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_DPJMOOFDMEL_OFFSET))(this);
		}

		::System::Void NAELGDNHEIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_NAELGDNHEIL_OFFSET))(this);
		}

		::System::Void BIKMEFFHHBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_BIKMEFFHHBN_OFFSET))(this);
		}

		::System::Void EKEGDIMHMLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_EKEGDIMHMLN_OFFSET))(this);
		}

		::UnityEngine::Transform* PPDJNGKNIMK()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_PPDJNGKNIMK_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_ONVALIDATE_OFFSET))(this);
		}

		::System::Void UpdateFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_UPDATEFOLLOW_OFFSET))(this);
		}

		::System::Void LPBGPNLGJNL(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_LPBGPNLGJNL_OFFSET))(this, a1);
		}

		::System::Void HCBKDNFHGJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_HCBKDNFHGJG_OFFSET))(this);
		}

		::System::Void MDNIIHHLKJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_MDNIIHHLKJH_OFFSET))(this);
		}

		::System::Void ADNJJABIOEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_ADNJJABIOEJ_OFFSET))(this);
		}

		::System::Void HAHCDNNPCMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_HAHCDNNPCMK_OFFSET))(this);
		}

		::System::Void DJBNJMGCFDE(::RPG::Client::BoneFollowHeadRotation_HeadFollowBoneEntry* a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BoneFollowHeadRotation_HeadFollowBoneEntry*, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_DJBNJMGCFDE_OFFSET))(this, a1, a2, a3);
		}

		static ::UnityEngine::Quaternion LMHDJAMKBIE(::UnityEngine::Quaternion a1, ::RPG::Client::BoneFollowHeadRotation_HeadFollowBoneEntry* a2, ::System::Single a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::RPG::Client::BoneFollowHeadRotation_HeadFollowBoneEntry*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_LMHDJAMKBIE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single MHNCIMNFDAF(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_MHNCIMNFDAF_OFFSET))(a1);
		}

		static ::UnityEngine::Transform* CGFOJKFIAKO(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BONEFOLLOWHEADROTATION_CGFOJKFIAKO_OFFSET))(a1, a2);
		}

	};
}
