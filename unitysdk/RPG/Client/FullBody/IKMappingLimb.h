#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/IKMapping.h"
#include "unitysdk/RPG/Client/FullBody/IKMappingLimb_BoneMapType.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::FullBody { class IKMapping_BoneMap; }
namespace RPG::Client::FullBody { class IKSolver; }
namespace RPG::Client::FullBody { class IKSolverFullBody; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_ACDPBPKPKGE_OFFSET UNITYSDK_OFFSET(0xD078AC0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_CFEMBBNLLDC_OFFSET UNITYSDK_OFFSET(0xD079040)
#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_CTOR_1_OFFSET UNITYSDK_OFFSET(0xD078600)
#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_CTOR_OFFSET UNITYSDK_OFFSET(0xD078520)
#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_KBFGMNLDELH_OFFSET UNITYSDK_OFFSET(0xD077E30)
#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_KGCBBNEFDOB_OFFSET UNITYSDK_OFFSET(0xD078740)
#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_KKANJACCOGM_OFFSET UNITYSDK_OFFSET(0xD078F40)
#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xD077CF0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_KPKDAIGMCHM_OFFSET UNITYSDK_OFFSET(0xD078860)
#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_LLNAPPLEBEL_OFFSET UNITYSDK_OFFSET(0xD0787C0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_PPJFHLIHJCC_OFFSET UNITYSDK_OFFSET(0xD077DC0)

namespace RPG::Client::FullBody
{
	class IKMappingLimb : public ::RPG::Client::FullBody::IKMapping
	{
	public:
		::UnityEngine::Transform* parentBone; // 0x10
		::UnityEngine::Transform* bone1; // 0x18
		::UnityEngine::Transform* bone2; // 0x20
		::UnityEngine::Transform* bone3; // 0x28
		::System::Single maintainRotationWeight; // 0x30
		::System::Single weight; // 0x34
		::System::Boolean updatePlaneRotations; // 0x38
		::System::Byte _padding0[0x7];
		::RPG::Client::FullBody::IKMapping_BoneMap* boneMapParent; // 0x40
		::RPG::Client::FullBody::IKMapping_BoneMap* boneMap1; // 0x48
		::RPG::Client::FullBody::IKMapping_BoneMap* boneMap2; // 0x50
		::RPG::Client::FullBody::IKMapping_BoneMap* boneMap3; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean KKKIONIDKFA(::RPG::Client::FullBody::IKSolver* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FullBody::IKSolver*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_KKKIONIDKFA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FullBody::IKMapping_BoneMap* PPJFHLIHJCC(::RPG::Client::FullBody::IKMappingLimb_BoneMapType a1)
		{
			return ((::RPG::Client::FullBody::IKMapping_BoneMap*(*)(::PVOID, ::RPG::Client::FullBody::IKMappingLimb_BoneMapType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_PPJFHLIHJCC_OFFSET))(this, a1);
		}

		::System::Void KBFGMNLDELH(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_KBFGMNLDELH_OFFSET))(this, a1, a2);
		}

		::System::Void KGCBBNEFDOB(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_KGCBBNEFDOB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LLNAPPLEBEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_LLNAPPLEBEL_OFFSET))(this);
		}

		::System::Void KPKDAIGMCHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_KPKDAIGMCHM_OFFSET))(this);
		}

		::System::Void ACDPBPKPKGE(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_ACDPBPKPKGE_OFFSET))(this, a1);
		}

		::System::Void KKANJACCOGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_KKANJACCOGM_OFFSET))(this);
		}

		::System::Void CFEMBBNLLDC(::RPG::Client::FullBody::IKSolverFullBody* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGLIMB_CFEMBBNLLDC_OFFSET))(this, a1, a2);
		}

	};
}
