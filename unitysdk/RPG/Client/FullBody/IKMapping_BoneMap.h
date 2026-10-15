#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::FullBody { class IKMapping_BoneMap; }
namespace RPG::Client::FullBody { class IKSolverFullBody; }
namespace RPG::Client::FullBody { class IKSolver_Node; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_ACDPBPKPKGE_OFFSET UNITYSDK_OFFSET(0xD075310)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_AMCIPPGOFPL_OFFSET UNITYSDK_OFFSET(0xD076BF0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_BJPDBJFMBDA_1_OFFSET UNITYSDK_OFFSET(0xD075850)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_BJPDBJFMBDA_OFFSET UNITYSDK_OFFSET(0xD0757F0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_CTOR_OFFSET UNITYSDK_OFFSET(0xD0778B0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_DLPHBBLFDJP_OFFSET UNITYSDK_OFFSET(0xD077610)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_DPECFDGDKIE_OFFSET UNITYSDK_OFFSET(0xD076470)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_EALGLOMCMFI_OFFSET UNITYSDK_OFFSET(0xD075600)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_FIKMKFDHKOL_OFFSET UNITYSDK_OFFSET(0xD075B60)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_GAKIPIFIJDD_OFFSET UNITYSDK_OFFSET(0xD075E50)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_GELMHCEJDFF_OFFSET UNITYSDK_OFFSET(0xD076980)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_GET_ISNODEBONE_OFFSET UNITYSDK_OFFSET(0xD0756A0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_GET_LASTANIMATEDTARGETROTATION_OFFSET UNITYSDK_OFFSET(0xD0761C0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_GET_SWINGDIRECTION_OFFSET UNITYSDK_OFFSET(0xD075390)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_JIDPJJLOAOB_OFFSET UNITYSDK_OFFSET(0xD077270)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_LLFCNLEAGLP_OFFSET UNITYSDK_OFFSET(0xD0764F0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_LLNAPPLEBEL_OFFSET UNITYSDK_OFFSET(0xD075540)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_MIPPKCKDDJE_OFFSET UNITYSDK_OFFSET(0xD075D60)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_NCCFBEHADDE_OFFSET UNITYSDK_OFFSET(0xD0756B0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_NFPPDKANPBA_1_OFFSET UNITYSDK_OFFSET(0xD076ED0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_NFPPDKANPBA_OFFSET UNITYSDK_OFFSET(0xD076DE0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_NHJLPHDKABA_OFFSET UNITYSDK_OFFSET(0xD076740)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_NJGGBGHAHLN_OFFSET UNITYSDK_OFFSET(0xD076B60)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_NMBMNOJDDCI_OFFSET UNITYSDK_OFFSET(0xD0765D0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_OAFBLHICELO_OFFSET UNITYSDK_OFFSET(0xD077700)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_ONBKFPCDMBP_OFFSET UNITYSDK_OFFSET(0xD076560)

namespace RPG::Client::FullBody
{
	class IKMapping_BoneMap : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::System::Int32 chainIndex; // 0x18
		::System::Int32 nodeIndex; // 0x1C
		::UnityEngine::Vector3 defaultLocalPosition; // 0x20
		::UnityEngine::Quaternion defaultLocalRotation; // 0x2C
		::UnityEngine::Vector3 localSwingAxis; // 0x3C
		::UnityEngine::Vector3 localTwistAxis; // 0x48
		::UnityEngine::Vector3 planePosition; // 0x54
		::UnityEngine::Vector3 ikPosition; // 0x60
		::UnityEngine::Quaternion defaultLocalTargetRotation; // 0x6C
		::UnityEngine::Quaternion maintainRotation; // 0x7C
		::System::Single length; // 0x8C
		::UnityEngine::Quaternion animatedRotation; // 0x90
		::UnityEngine::Transform* planeBone1; // 0xA0
		::UnityEngine::Transform* planeBone2; // 0xA8
		::UnityEngine::Transform* planeBone3; // 0xB0
		::System::Int32 plane1ChainIndex; // 0xB8
		::System::Int32 plane1NodeIndex; // 0xBC
		::System::Int32 plane2ChainIndex; // 0xC0
		::System::Int32 plane2NodeIndex; // 0xC4
		::System::Int32 plane3ChainIndex; // 0xC8
		::System::Int32 plane3NodeIndex; // 0xCC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_CTOR_OFFSET))(this);
		}

		::System::Void ACDPBPKPKGE(::UnityEngine::Transform* a1, ::RPG::Client::FullBody::IKSolverFullBody* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_ACDPBPKPKGE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 get_swingDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_GET_SWINGDIRECTION_OFFSET))(this);
		}

		::System::Void LLNAPPLEBEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_LLNAPPLEBEL_OFFSET))(this);
		}

		::System::Void EALGLOMCMFI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_EALGLOMCMFI_OFFSET))(this, a1);
		}

		::System::Boolean get_isNodeBone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_GET_ISNODEBONE_OFFSET))(this);
		}

		::System::Void NCCFBEHADDE(::RPG::Client::FullBody::IKMapping_BoneMap* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKMapping_BoneMap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_NCCFBEHADDE_OFFSET))(this, a1);
		}

		::System::Void BJPDBJFMBDA(::RPG::Client::FullBody::IKMapping_BoneMap* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKMapping_BoneMap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_BJPDBJFMBDA_OFFSET))(this, a1);
		}

		::System::Void BJPDBJFMBDA_1(::RPG::Client::FullBody::IKMapping_BoneMap* a1, ::RPG::Client::FullBody::IKMapping_BoneMap* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKMapping_BoneMap*, ::RPG::Client::FullBody::IKMapping_BoneMap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_BJPDBJFMBDA_1_OFFSET))(this, a1, a2);
		}

		::System::Void FIKMKFDHKOL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_FIKMKFDHKOL_OFFSET))(this, a1, a2);
		}

		::System::Void MIPPKCKDDJE(::RPG::Client::FullBody::IKSolverFullBody* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_MIPPKCKDDJE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GAKIPIFIJDD(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_GAKIPIFIJDD_OFFSET))(this, a1, a2);
		}

		::System::Void DPECFDGDKIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_DPECFDGDKIE_OFFSET))(this);
		}

		::System::Void LLFCNLEAGLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_LLFCNLEAGLP_OFFSET))(this);
		}

		::System::Void ONBKFPCDMBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_ONBKFPCDMBP_OFFSET))(this);
		}

		::System::Void NMBMNOJDDCI(::RPG::Client::FullBody::IKSolverFullBody* a1, ::System::Single a2, ::RPG::Client::FullBody::IKSolver_Node* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*, ::System::Single, ::RPG::Client::FullBody::IKSolver_Node*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_NMBMNOJDDCI_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 NHJLPHDKABA(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_NHJLPHDKABA_OFFSET))(this, a1);
		}

		::System::Void NJGGBGHAHLN(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_NJGGBGHAHLN_OFFSET))(this, a1);
		}

		::System::Void AMCIPPGOFPL(::RPG::Client::FullBody::IKSolverFullBody* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_AMCIPPGOFPL_OFFSET))(this, a1, a2);
		}

		::System::Void NFPPDKANPBA(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_NFPPDKANPBA_OFFSET))(this, a1, a2);
		}

		::System::Void NFPPDKANPBA_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_NFPPDKANPBA_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JIDPJJLOAOB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_JIDPJJLOAOB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DLPHBBLFDJP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_DLPHBBLFDJP_OFFSET))(this, a1);
		}

		::System::Void OAFBLHICELO(::RPG::Client::FullBody::IKSolverFullBody* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_OAFBLHICELO_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Quaternion GELMHCEJDFF(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_GELMHCEJDFF_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_lastAnimatedTargetRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BONEMAP_GET_LASTANIMATEDTARGETROTATION_OFFSET))(this);
		}

	};
}
