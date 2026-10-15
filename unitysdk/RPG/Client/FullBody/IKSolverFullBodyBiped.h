#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/FullBodyBipedChain.h"
#include "unitysdk/RPG/Client/FullBody/FullBodyBipedEffector.h"
#include "unitysdk/RPG/Client/FullBody/IKSolverFullBody.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/FullBodyIKBoneReferences.h"
namespace RPG::Client::FullBody { class FBIKChain; }
namespace RPG::Client::FullBody { class IKConstraintBend; }
namespace RPG::Client::FullBody { class IKEffector; }
namespace RPG::Client::FullBody { class IKMappingBone; }
namespace RPG::Client::FullBody { class IKMappingLimb; }
namespace RPG::Client::FullBody { class IKMappingSpine; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_AJJLKFACAHB_OFFSET UNITYSDK_OFFSET(0xD07B8C0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_ANJKBAFGKKK_OFFSET UNITYSDK_OFFSET(0xD07AC90)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_BPKJEFFOLJP_OFFSET UNITYSDK_OFFSET(0xD07B610)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_CFEMBBNLLDC_OFFSET UNITYSDK_OFFSET(0xD07BFF0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_CGBAMHBJPBK_OFFSET UNITYSDK_OFFSET(0xD076EE0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_CHNANJDJMLG_OFFSET UNITYSDK_OFFSET(0xD077A10)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_CTOR_OFFSET UNITYSDK_OFFSET(0xD07C0F0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_FGBCKOMLAJF_OFFSET UNITYSDK_OFFSET(0xD077C60)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_FNDIIHMBJJL_OFFSET UNITYSDK_OFFSET(0xD07A630)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_BODYEFFECTOR_OFFSET UNITYSDK_OFFSET(0xD076E50)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_HEADMAPPING_OFFSET UNITYSDK_OFFSET(0xD077820)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_LEFTARMCHAIN_OFFSET UNITYSDK_OFFSET(0xD077520)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_LEFTARMMAPPING_OFFSET UNITYSDK_OFFSET(0xD0776A0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_LEFTFOOTEFFECTOR_OFFSET UNITYSDK_OFFSET(0xD077400)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_LEFTHANDEFFECTOR_OFFSET UNITYSDK_OFFSET(0xD0772E0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_LEFTLEGCHAIN_OFFSET UNITYSDK_OFFSET(0xD0775E0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_LEFTLEGMAPPING_OFFSET UNITYSDK_OFFSET(0xD077760)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_LEFTSHOULDEREFFECTOR_OFFSET UNITYSDK_OFFSET(0xD0770A0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_LEFTTHIGHEFFECTOR_OFFSET UNITYSDK_OFFSET(0xD0771C0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_PULLBODYOFFSET_OFFSET UNITYSDK_OFFSET(0xD07AF80)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_RIGHTARMCHAIN_OFFSET UNITYSDK_OFFSET(0xD077580)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_RIGHTARMMAPPING_OFFSET UNITYSDK_OFFSET(0xD077700)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_RIGHTFOOTEFFECTOR_OFFSET UNITYSDK_OFFSET(0xD077490)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_RIGHTHANDEFFECTOR_OFFSET UNITYSDK_OFFSET(0xD077370)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_RIGHTLEGCHAIN_OFFSET UNITYSDK_OFFSET(0xD077640)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_RIGHTLEGMAPPING_OFFSET UNITYSDK_OFFSET(0xD0777C0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_RIGHTSHOULDEREFFECTOR_OFFSET UNITYSDK_OFFSET(0xD077130)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_RIGHTTHIGHEFFECTOR_OFFSET UNITYSDK_OFFSET(0xD077250)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GKIAMADONGP_OFFSET UNITYSDK_OFFSET(0xD07BB00)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_HEHLABPHMFN_OFFSET UNITYSDK_OFFSET(0xD078350)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_HHDKLKNHIDI_1_OFFSET UNITYSDK_OFFSET(0xD077AF0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_HHDKLKNHIDI_OFFSET UNITYSDK_OFFSET(0xD077920)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_IKDFKPMNLJJ_OFFSET UNITYSDK_OFFSET(0xD077FE0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_JGHGADMBHKK_OFFSET UNITYSDK_OFFSET(0xD07AC00)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_JNAFLCCLCGF_OFFSET UNITYSDK_OFFSET(0xD077FA0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_JOMHDJJEOIH_OFFSET UNITYSDK_OFFSET(0xD077880)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_KKANJACCOGM_OFFSET UNITYSDK_OFFSET(0xD07B090)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xD078160)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0xD07AFC0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_MJBCAADDHHH_OFFSET UNITYSDK_OFFSET(0xD078040)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_NOBADLNKBAM_OFFSET UNITYSDK_OFFSET(0xD07B1D0)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_PFHNGICHMCH_1_OFFSET UNITYSDK_OFFSET(0xD077E40)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_PFHNGICHMCH_OFFSET UNITYSDK_OFFSET(0xD077D40)
#define RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_SET_PULLBODYOFFSET_OFFSET UNITYSDK_OFFSET(0xD07AFA0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKSolverFullBodyBiped_TypeDefinitionIndex = 74263;

	class IKSolverFullBodyBiped : public ::RPG::Client::FullBody::IKSolverFullBody
	{
	public:
		::UnityEngine::Transform* rootNode; // 0xD0
		::System::Single spineStiffness; // 0xD8
		::System::Single pullBodyVertical; // 0xDC
		::System::Single pullBodyHorizontal; // 0xE0
		::UnityEngine::Vector3 _pullBodyOffset_k__BackingField; // 0xE4
		::UnityEngine::Vector3 offset; // 0xF0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_CTOR_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKEffector* get_bodyEffector()
		{
			return ((::RPG::Client::FullBody::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_BODYEFFECTOR_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKEffector* get_leftShoulderEffector()
		{
			return ((::RPG::Client::FullBody::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_LEFTSHOULDEREFFECTOR_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKEffector* get_rightShoulderEffector()
		{
			return ((::RPG::Client::FullBody::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_RIGHTSHOULDEREFFECTOR_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKEffector* get_leftThighEffector()
		{
			return ((::RPG::Client::FullBody::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_LEFTTHIGHEFFECTOR_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKEffector* get_rightThighEffector()
		{
			return ((::RPG::Client::FullBody::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_RIGHTTHIGHEFFECTOR_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKEffector* get_leftHandEffector()
		{
			return ((::RPG::Client::FullBody::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_LEFTHANDEFFECTOR_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKEffector* get_rightHandEffector()
		{
			return ((::RPG::Client::FullBody::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_RIGHTHANDEFFECTOR_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKEffector* get_leftFootEffector()
		{
			return ((::RPG::Client::FullBody::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_LEFTFOOTEFFECTOR_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKEffector* get_rightFootEffector()
		{
			return ((::RPG::Client::FullBody::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_RIGHTFOOTEFFECTOR_OFFSET))(this);
		}

		::RPG::Client::FullBody::FBIKChain* get_leftArmChain()
		{
			return ((::RPG::Client::FullBody::FBIKChain*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_LEFTARMCHAIN_OFFSET))(this);
		}

		::RPG::Client::FullBody::FBIKChain* get_rightArmChain()
		{
			return ((::RPG::Client::FullBody::FBIKChain*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_RIGHTARMCHAIN_OFFSET))(this);
		}

		::RPG::Client::FullBody::FBIKChain* get_leftLegChain()
		{
			return ((::RPG::Client::FullBody::FBIKChain*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_LEFTLEGCHAIN_OFFSET))(this);
		}

		::RPG::Client::FullBody::FBIKChain* get_rightLegChain()
		{
			return ((::RPG::Client::FullBody::FBIKChain*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_RIGHTLEGCHAIN_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKMappingLimb* get_leftArmMapping()
		{
			return ((::RPG::Client::FullBody::IKMappingLimb*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_LEFTARMMAPPING_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKMappingLimb* get_rightArmMapping()
		{
			return ((::RPG::Client::FullBody::IKMappingLimb*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_RIGHTARMMAPPING_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKMappingLimb* get_leftLegMapping()
		{
			return ((::RPG::Client::FullBody::IKMappingLimb*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_LEFTLEGMAPPING_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKMappingLimb* get_rightLegMapping()
		{
			return ((::RPG::Client::FullBody::IKMappingLimb*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_RIGHTLEGMAPPING_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKMappingBone* get_headMapping()
		{
			return ((::RPG::Client::FullBody::IKMappingBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_HEADMAPPING_OFFSET))(this);
		}

		::System::Void JOMHDJJEOIH(::RPG::Client::FullBody::FullBodyBipedChain a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::FullBodyBipedChain, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_JOMHDJJEOIH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CHNANJDJMLG(::RPG::Client::FullBody::FullBodyBipedEffector a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::FullBodyBipedEffector, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_CHNANJDJMLG_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::FullBody::FBIKChain* HHDKLKNHIDI(::RPG::Client::FullBody::FullBodyBipedChain a1)
		{
			return ((::RPG::Client::FullBody::FBIKChain*(*)(::PVOID, ::RPG::Client::FullBody::FullBodyBipedChain))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_HHDKLKNHIDI_OFFSET))(this, a1);
		}

		::RPG::Client::FullBody::FBIKChain* HHDKLKNHIDI_1(::RPG::Client::FullBody::FullBodyBipedEffector a1)
		{
			return ((::RPG::Client::FullBody::FBIKChain*(*)(::PVOID, ::RPG::Client::FullBody::FullBodyBipedEffector))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_HHDKLKNHIDI_1_OFFSET))(this, a1);
		}

		::RPG::Client::FullBody::IKEffector* CGBAMHBJPBK(::RPG::Client::FullBody::FullBodyBipedEffector a1)
		{
			return ((::RPG::Client::FullBody::IKEffector*(*)(::PVOID, ::RPG::Client::FullBody::FullBodyBipedEffector))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_CGBAMHBJPBK_OFFSET))(this, a1);
		}

		::RPG::Client::FullBody::IKEffector* FGBCKOMLAJF(::RPG::Client::FullBody::FullBodyBipedChain a1)
		{
			return ((::RPG::Client::FullBody::IKEffector*(*)(::PVOID, ::RPG::Client::FullBody::FullBodyBipedChain))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_FGBCKOMLAJF_OFFSET))(this, a1);
		}

		::RPG::Client::FullBody::IKMappingLimb* PFHNGICHMCH(::RPG::Client::FullBody::FullBodyBipedChain a1)
		{
			return ((::RPG::Client::FullBody::IKMappingLimb*(*)(::PVOID, ::RPG::Client::FullBody::FullBodyBipedChain))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_PFHNGICHMCH_OFFSET))(this, a1);
		}

		::RPG::Client::FullBody::IKMappingLimb* PFHNGICHMCH_1(::RPG::Client::FullBody::FullBodyBipedEffector a1)
		{
			return ((::RPG::Client::FullBody::IKMappingLimb*(*)(::PVOID, ::RPG::Client::FullBody::FullBodyBipedEffector))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_PFHNGICHMCH_1_OFFSET))(this, a1);
		}

		::RPG::Client::FullBody::IKMappingSpine* JNAFLCCLCGF()
		{
			return ((::RPG::Client::FullBody::IKMappingSpine*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_JNAFLCCLCGF_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKMappingBone* IKDFKPMNLJJ()
		{
			return ((::RPG::Client::FullBody::IKMappingBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_IKDFKPMNLJJ_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKConstraintBend* MJBCAADDHHH(::RPG::Client::FullBody::FullBodyBipedChain a1)
		{
			return ((::RPG::Client::FullBody::IKConstraintBend*(*)(::PVOID, ::RPG::Client::FullBody::FullBodyBipedChain))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_MJBCAADDHHH_OFFSET))(this, a1);
		}

		::System::Boolean KKKIONIDKFA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_KKKIONIDKFA_OFFSET))(this, a1);
		}

		::System::Void HEHLABPHMFN(::RPG::Client::FullBodyIKBoneReferences a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBodyIKBoneReferences, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_HEHLABPHMFN_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Transform* FNDIIHMBJJL(::RPG::Client::FullBodyIKBoneReferences a1)
		{
			return ((::UnityEngine::Transform*(*)(::RPG::Client::FullBodyIKBoneReferences))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_FNDIIHMBJJL_OFFSET))(a1);
		}

		::UnityEngine::Vector3 get_pullBodyOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GET_PULLBODYOFFSET_OFFSET))(this);
		}

		::System::Void set_pullBodyOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_SET_PULLBODYOFFSET_OFFSET))(this, a1);
		}

		static ::UnityEngine::Transform* JGHGADMBHKK(::RPG::Client::FullBodyIKBoneReferences a1)
		{
			return ((::UnityEngine::Transform*(*)(::RPG::Client::FullBodyIKBoneReferences))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_JGHGADMBHKK_OFFSET))(a1);
		}

		static ::UnityEngine::Transform* ANJKBAFGKKK(::RPG::Client::FullBodyIKBoneReferences a1)
		{
			return ((::UnityEngine::Transform*(*)(::RPG::Client::FullBodyIKBoneReferences))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_ANJKBAFGKKK_OFFSET))(a1);
		}

		static ::System::Boolean LCJMKJPECAP(::Il2CppArray<::UnityEngine::Transform*>* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Transform*>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_LCJMKJPECAP_OFFSET))(a1, a2);
		}

		::System::Void KKANJACCOGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_KKANJACCOGM_OFFSET))(this);
		}

		::System::Void NOBADLNKBAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_NOBADLNKBAM_OFFSET))(this);
		}

		::UnityEngine::Vector3 BPKJEFFOLJP()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_BPKJEFFOLJP_OFFSET))(this);
		}

		::UnityEngine::Vector3 AJJLKFACAHB(::RPG::Client::FullBody::IKEffector* a1, ::RPG::Client::FullBody::FBIKChain* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::FullBody::IKEffector*, ::RPG::Client::FullBody::FBIKChain*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_AJJLKFACAHB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GKIAMADONGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_GKIAMADONGP_OFFSET))(this);
		}

		::System::Void CFEMBBNLLDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERFULLBODYBIPED_CFEMBBNLLDC_OFFSET))(this);
		}

	};
}
