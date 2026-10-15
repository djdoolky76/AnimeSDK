#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/FBIKChain_Smoothing.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::FullBody { class IKConstraintBend; }
namespace RPG::Client::FullBody { class IKSolverFullBody; }
namespace RPG::Client::FullBody { class IKSolver_Node; }
namespace RPG::Client::FullBody { class IKSolver_Point; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_FBIKCHAIN_AAPLEELCIKI_OFFSET UNITYSDK_OFFSET(0xD05D820)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_ACDPBPKPKGE_OFFSET UNITYSDK_OFFSET(0xD05A1B0)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_BEODLOHJIHE_OFFSET UNITYSDK_OFFSET(0xD05DA70)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_CCMNJKGIEOC_OFFSET UNITYSDK_OFFSET(0xD05E140)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_COMPOBEBLAL_OFFSET UNITYSDK_OFFSET(0xD05CF90)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_CTOR_1_OFFSET UNITYSDK_OFFSET(0xD059D80)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_CTOR_OFFSET UNITYSDK_OFFSET(0xD059CD0)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_FIAONGLEABM_OFFSET UNITYSDK_OFFSET(0xD059E60)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_FIEGJAGADAO_OFFSET UNITYSDK_OFFSET(0xD05DC10)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_FKALLBFJFOP_OFFSET UNITYSDK_OFFSET(0xD05D9D0)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_IDBHODEMBLF_OFFSET UNITYSDK_OFFSET(0xD05C120)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_KHADLAOMKMK_OFFSET UNITYSDK_OFFSET(0xD05D310)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_KKANJACCOGM_OFFSET UNITYSDK_OFFSET(0xD05B140)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_KKCOGGHGIEH_OFFSET UNITYSDK_OFFSET(0xD05BA20)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xD05A0F0)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_KNEALPCCCFD_OFFSET UNITYSDK_OFFSET(0xD05A440)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_LANKJCGAEML_OFFSET UNITYSDK_OFFSET(0xD05BD70)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_LFKDJGHOKAN_OFFSET UNITYSDK_OFFSET(0xD05DFB0)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_NAOJLDMMHMP_OFFSET UNITYSDK_OFFSET(0xD05DDB0)
#define RPG_CLIENT_FULLBODY_FBIKCHAIN_NOBJLCHIOMI_OFFSET UNITYSDK_OFFSET(0xD059FD0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int FBIKChain_TypeDefinitionIndex = 74226;

	class FBIKChain : public ::System::Object
	{
	public:
		::System::Single pin; // 0x10
		::System::Single pull; // 0x14
		::System::Single push; // 0x18
		::System::Single pushParent; // 0x1C
		::System::Single reach; // 0x20
		::RPG::Client::FullBody::FBIKChain_Smoothing reachSmoothing; // 0x24
		::RPG::Client::FullBody::FBIKChain_Smoothing pushSmoothing; // 0x28
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* nodes; // 0x30
		::Il2CppArray<::System::Int32>* children; // 0x38
		::Il2CppArray<::System::Object*>* childConstraints; // 0x40
		::RPG::Client::FullBody::IKConstraintBend* bendConstraint; // 0x48
		::System::Single rootLength; // 0x50
		::System::Boolean initiated; // 0x54
		::System::Byte _padding1[0x3];
		::System::Single length; // 0x58
		::System::Single distance; // 0x5C
		::RPG::Client::FullBody::IKSolver_Point* p; // 0x60
		::System::Single reachForce; // 0x68
		::System::Single pullParentSum; // 0x6C
		::Il2CppArray<::System::Single>* crossFades; // 0x70
		::System::Single sqrMag1; // 0x78
		::System::Single sqrMag2; // 0x7C
		::System::Single sqrMagDif; // 0x80
		// static const ::System::Object maxLimbLength; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single a1, ::System::Single a2, ::Il2CppArray<::UnityEngine::Transform*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FIAONGLEABM(::Il2CppArray<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_FIAONGLEABM_OFFSET))(this, a1);
		}

		::System::Int32 NOBJLCHIOMI(::UnityEngine::Transform* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_NOBJLCHIOMI_OFFSET))(this, a1);
		}

		::System::Boolean KKKIONIDKFA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_KKKIONIDKFA_OFFSET))(this, a1);
		}

		::System::Void ACDPBPKPKGE(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_ACDPBPKPKGE_OFFSET))(this, a1);
		}

		::System::Void KKANJACCOGM(::RPG::Client::FullBody::IKSolverFullBody* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_KKANJACCOGM_OFFSET))(this, a1, a2);
		}

		::System::Void KNEALPCCCFD(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_KNEALPCCCFD_OFFSET))(this, a1);
		}

		::System::Void KKCOGGHGIEH(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_KKCOGGHGIEH_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 LANKJCGAEML(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_LANKJCGAEML_OFFSET))(this, a1);
		}

		::System::Void IDBHODEMBLF(::RPG::Client::FullBody::IKSolverFullBody* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_IDBHODEMBLF_OFFSET))(this, a1, a2);
		}

		::System::Void KHADLAOMKMK(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_KHADLAOMKMK_OFFSET))(this, a1);
		}

		::System::Void FIEGJAGADAO(::RPG::Client::FullBody::IKSolverFullBody* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_FIEGJAGADAO_OFFSET))(this, a1, a2);
		}

		::System::Void LFKDJGHOKAN(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_LFKDJGHOKAN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 BEODLOHJIHE(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_BEODLOHJIHE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 COMPOBEBLAL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_COMPOBEBLAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FKALLBFJFOP(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_FKALLBFJFOP_OFFSET))(this, a1);
		}

		::System::Void CCMNJKGIEOC(::RPG::Client::FullBody::IKSolver_Node* a1, ::RPG::Client::FullBody::IKSolver_Node* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolver_Node*, ::RPG::Client::FullBody::IKSolver_Node*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_CCMNJKGIEOC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AAPLEELCIKI(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_AAPLEELCIKI_OFFSET))(this, a1);
		}

		::System::Void NAOJLDMMHMP(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_FBIKCHAIN_NAOJLDMMHMP_OFFSET))(this, a1);
		}

	};
}
