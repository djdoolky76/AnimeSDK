#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::FullBody { class IKSolverFullBody; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_ACDPBPKPKGE_OFFSET UNITYSDK_OFFSET(0xD062F00)
#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_CTOR_1_OFFSET UNITYSDK_OFFSET(0xD072290)
#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_CTOR_OFFSET UNITYSDK_OFFSET(0xD0620B0)
#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0xD072270)
#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_GLOKDICMKJA_OFFSET UNITYSDK_OFFSET(0xD0723C0)
#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_JBBHEIBJEAO_OFFSET UNITYSDK_OFFSET(0xD0728B0)
#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_KBFGMNLDELH_OFFSET UNITYSDK_OFFSET(0xD0725F0)
#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_KGCBBNEFDOB_OFFSET UNITYSDK_OFFSET(0xD062E90)
#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xD071E90)
#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_LDMNMPAJOKH_OFFSET UNITYSDK_OFFSET(0xD0724E0)
#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_NHDFLDHJFPA_OFFSET UNITYSDK_OFFSET(0xD064810)
#define RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_SET_INITIATED_OFFSET UNITYSDK_OFFSET(0xD072280)

namespace RPG::Client::FullBody
{
	class IKConstraintBend : public ::System::Object
	{
	public:
		::UnityEngine::Transform* bone1; // 0x10
		::UnityEngine::Transform* bone2; // 0x18
		::UnityEngine::Transform* bone3; // 0x20
		::UnityEngine::Transform* bendGoal; // 0x28
		::UnityEngine::Vector3 direction; // 0x30
		::UnityEngine::Quaternion rotationOffset; // 0x3C
		::System::Single weight; // 0x4C
		::UnityEngine::Vector3 defaultLocalDirection; // 0x50
		::UnityEngine::Vector3 defaultChildDirection; // 0x5C
		::System::Single clampF; // 0x68
		::System::Int32 chainIndex1; // 0x6C
		::System::Int32 nodeIndex1; // 0x70
		::System::Int32 chainIndex2; // 0x74
		::System::Int32 nodeIndex2; // 0x78
		::System::Int32 chainIndex3; // 0x7C
		::System::Int32 nodeIndex3; // 0x80
		::System::Boolean _initiated_k__BackingField; // 0x84
		::System::Boolean limbOrientationsSet; // 0x85
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean KKKIONIDKFA(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_KKKIONIDKFA_OFFSET))(this, a1);
		}

		::System::Boolean get_initiated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_GET_INITIATED_OFFSET))(this);
		}

		::System::Void set_initiated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_SET_INITIATED_OFFSET))(this, a1);
		}

		::System::Void KGCBBNEFDOB(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_KGCBBNEFDOB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ACDPBPKPKGE(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_ACDPBPKPKGE_OFFSET))(this, a1);
		}

		::System::Void KBFGMNLDELH(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_KBFGMNLDELH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JBBHEIBJEAO(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_JBBHEIBJEAO_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 NHDFLDHJFPA(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_NHDFLDHJFPA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GLOKDICMKJA(::RPG::Client::FullBody::IKSolverFullBody* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_GLOKDICMKJA_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 LDMNMPAJOKH(::RPG::Client::FullBody::IKSolverFullBody* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKCONSTRAINTBEND_LDMNMPAJOKH_OFFSET))(this, a1, a2);
		}

	};
}
