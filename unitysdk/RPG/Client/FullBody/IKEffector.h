#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::FullBody { class IKSolver; }
namespace RPG::Client::FullBody { class IKSolverFullBody; }
namespace RPG::Client::FullBody { class IKSolver_Node; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKEFFECTOR_ACDPBPKPKGE_OFFSET UNITYSDK_OFFSET(0xD073900)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_CHCELAOICIF_OFFSET UNITYSDK_OFFSET(0xD073B90)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_CTOR_1_OFFSET UNITYSDK_OFFSET(0xD0733C0)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD073300)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_GET_ISENDEFFECTOR_OFFSET UNITYSDK_OFFSET(0xD0731B0)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_GKKOMBNGCKM_OFFSET UNITYSDK_OFFSET(0xD0731D0)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_HAFFHEFMJEA_OFFSET UNITYSDK_OFFSET(0xD073D60)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_HDHPLAEMGCO_OFFSET UNITYSDK_OFFSET(0xD0744D0)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xD073490)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_LLIELFKEBME_OFFSET UNITYSDK_OFFSET(0xD074520)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_LNLAFDJLIIF_OFFSET UNITYSDK_OFFSET(0xD073CB0)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_MBFECCIOMGB_OFFSET UNITYSDK_OFFSET(0xD073110)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_NINDHOGICJD_OFFSET UNITYSDK_OFFSET(0xD074AC0)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xD074710)
#define RPG_CLIENT_FULLBODY_IKEFFECTOR_SET_ISENDEFFECTOR_OFFSET UNITYSDK_OFFSET(0xD0731C0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKEffector_TypeDefinitionIndex = 74248;

	class IKEffector : public ::System::Object
	{
	public:
		::UnityEngine::Transform* bone; // 0x10
		::UnityEngine::Transform* target; // 0x18
		::System::Single positionWeight; // 0x20
		::System::Single rotationWeight; // 0x24
		::UnityEngine::Vector3 position; // 0x28
		::UnityEngine::Quaternion rotation; // 0x34
		::UnityEngine::Vector3 positionOffset; // 0x44
		::System::Boolean _isEndEffector_k__BackingField; // 0x50
		::System::Boolean effectChildNodes; // 0x51
		::System::Byte _padding0[0x2];
		::System::Single maintainRelativePositionWeight; // 0x54
		::Il2CppArray<::UnityEngine::Transform*>* childBones; // 0x58
		::UnityEngine::Transform* planeBone1; // 0x60
		::UnityEngine::Transform* planeBone2; // 0x68
		::UnityEngine::Transform* planeBone3; // 0x70
		::UnityEngine::Quaternion planeRotationOffset; // 0x78
		::System::Single posW; // 0x88
		::System::Single rotW; // 0x8C
		::Il2CppArray<::UnityEngine::Vector3>* localPositions; // 0x90
		::System::Boolean usePlaneNodes; // 0x98
		::System::Byte _padding1[0x3];
		::UnityEngine::Quaternion animatedPlaneRotation; // 0x9C
		::UnityEngine::Vector3 animatedPosition; // 0xAC
		::System::Boolean firstUpdate; // 0xB8
		::System::Byte _padding2[0x3];
		::System::Int32 chainIndex; // 0xBC
		::System::Int32 nodeIndex; // 0xC0
		::System::Int32 plane1ChainIndex; // 0xC4
		::System::Int32 plane1NodeIndex; // 0xC8
		::System::Int32 plane2ChainIndex; // 0xCC
		::System::Int32 plane2NodeIndex; // 0xD0
		::System::Int32 plane3ChainIndex; // 0xD4
		::System::Int32 plane3NodeIndex; // 0xD8
		::System::Byte _padding3[0x4];
		::Il2CppArray<::System::Int32>* childChainIndexes; // 0xE0
		::Il2CppArray<::System::Int32>* childNodeIndexes; // 0xE8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* a1, ::Il2CppArray<::UnityEngine::Transform*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_CTOR_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FullBody::IKSolver_Node* MBFECCIOMGB(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::RPG::Client::FullBody::IKSolver_Node*(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_MBFECCIOMGB_OFFSET))(this, a1);
		}

		::System::Boolean get_isEndEffector()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_GET_ISENDEFFECTOR_OFFSET))(this);
		}

		::System::Void set_isEndEffector(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_SET_ISENDEFFECTOR_OFFSET))(this, a1);
		}

		::System::Void GKKOMBNGCKM(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_GKKOMBNGCKM_OFFSET))(this, a1, a2);
		}

		::System::Boolean KKKIONIDKFA(::RPG::Client::FullBody::IKSolver* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FullBody::IKSolver*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_KKKIONIDKFA_OFFSET))(this, a1, a2);
		}

		::System::Void ACDPBPKPKGE(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_ACDPBPKPKGE_OFFSET))(this, a1);
		}

		::System::Void CHCELAOICIF(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_CHCELAOICIF_OFFSET))(this, a1);
		}

		::System::Void LNLAFDJLIIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_LNLAFDJLIIF_OFFSET))(this);
		}

		::System::Void HAFFHEFMJEA(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_HAFFHEFMJEA_OFFSET))(this, a1);
		}

		::System::Void HDHPLAEMGCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_HDHPLAEMGCO_OFFSET))(this);
		}

		::UnityEngine::Quaternion LLIELFKEBME(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_LLIELFKEBME_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NINDHOGICJD(::RPG::Client::FullBody::IKSolverFullBody* a1, ::UnityEngine::Quaternion a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKEFFECTOR_NINDHOGICJD_OFFSET))(this, a1, a2);
		}

	};
}
