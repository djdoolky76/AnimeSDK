#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/IKMapping.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::FullBody { class IKMapping_BoneMap; }
namespace RPG::Client::FullBody { class IKSolver; }
namespace RPG::Client::FullBody { class IKSolverFullBody; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_AAPLEELCIKI_OFFSET UNITYSDK_OFFSET(0xD07AE30)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_ACDPBPKPKGE_OFFSET UNITYSDK_OFFSET(0xD0798D0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_CFEMBBNLLDC_OFFSET UNITYSDK_OFFSET(0xD07A9A0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_CTOR_1_OFFSET UNITYSDK_OFFSET(0xD0795A0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_CTOR_OFFSET UNITYSDK_OFFSET(0xD0794B0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_KGCBBNEFDOB_OFFSET UNITYSDK_OFFSET(0xD079710)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_KKANJACCOGM_OFFSET UNITYSDK_OFFSET(0xD07A510)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xD0791E0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_KPKDAIGMCHM_OFFSET UNITYSDK_OFFSET(0xD079830)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_LLNAPPLEBEL_OFFSET UNITYSDK_OFFSET(0xD0797A0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_MJPKCBNFIHJ_OFFSET UNITYSDK_OFFSET(0xD07A4B0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_NAOJLDMMHMP_OFFSET UNITYSDK_OFFSET(0xD07AFF0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_PIOOMLJFAIK_OFFSET UNITYSDK_OFFSET(0xD07B160)

namespace RPG::Client::FullBody
{
	class IKMappingSpine : public ::RPG::Client::FullBody::IKMapping
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* spineBones; // 0x10
		::UnityEngine::Transform* leftUpperArmBone; // 0x18
		::UnityEngine::Transform* rightUpperArmBone; // 0x20
		::UnityEngine::Transform* leftThighBone; // 0x28
		::UnityEngine::Transform* rightThighBone; // 0x30
		::System::Int32 iterations; // 0x38
		::System::Single twistWeight; // 0x3C
		::System::Int32 rootNodeIndex; // 0x40
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* spine; // 0x48
		::RPG::Client::FullBody::IKMapping_BoneMap* leftUpperArm; // 0x50
		::RPG::Client::FullBody::IKMapping_BoneMap* rightUpperArm; // 0x58
		::RPG::Client::FullBody::IKMapping_BoneMap* leftThigh; // 0x60
		::RPG::Client::FullBody::IKMapping_BoneMap* rightThigh; // 0x68
		::System::Boolean useFABRIK; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::UnityEngine::Transform*>* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4, ::UnityEngine::Transform* a5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean KKKIONIDKFA(::RPG::Client::FullBody::IKSolver* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FullBody::IKSolver*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_KKKIONIDKFA_OFFSET))(this, a1, a2);
		}

		::System::Void KGCBBNEFDOB(::Il2CppArray<::UnityEngine::Transform*>* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4, ::UnityEngine::Transform* a5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_KGCBBNEFDOB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LLNAPPLEBEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_LLNAPPLEBEL_OFFSET))(this);
		}

		::System::Void KPKDAIGMCHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_KPKDAIGMCHM_OFFSET))(this);
		}

		::System::Void ACDPBPKPKGE(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_ACDPBPKPKGE_OFFSET))(this, a1);
		}

		::System::Boolean MJPKCBNFIHJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_MJPKCBNFIHJ_OFFSET))(this);
		}

		::System::Void KKANJACCOGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_KKANJACCOGM_OFFSET))(this);
		}

		::System::Void CFEMBBNLLDC(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_CFEMBBNLLDC_OFFSET))(this, a1);
		}

		::System::Void AAPLEELCIKI(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_AAPLEELCIKI_OFFSET))(this, a1);
		}

		::System::Void NAOJLDMMHMP(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_NAOJLDMMHMP_OFFSET))(this, a1);
		}

		::System::Void PIOOMLJFAIK(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGSPINE_PIOOMLJFAIK_OFFSET))(this, a1);
		}

	};
}
