#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/IKSolver.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::FullBody { class IKSolverTrigonometric_TrigonometricBone; }
namespace RPG::Client::FullBody { class IKSolver_Point; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_AGHABIKPPNO_OFFSET UNITYSDK_OFFSET(0xD0806C0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_BGIANHJAPKE_OFFSET UNITYSDK_OFFSET(0xD080400)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_BIJIFIAJLPO_OFFSET UNITYSDK_OFFSET(0xD07EF40)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_BMOMBCHEEEI_OFFSET UNITYSDK_OFFSET(0xD07F190)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_CIJDJDICMMM_OFFSET UNITYSDK_OFFSET(0xD07F750)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_CPHOCCHLJOJ_OFFSET UNITYSDK_OFFSET(0xD081910)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_CTOR_OFFSET UNITYSDK_OFFSET(0xD07E650)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_DEALNNNAHPB_OFFSET UNITYSDK_OFFSET(0xD0805A0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_EKKLACELNCB_OFFSET UNITYSDK_OFFSET(0xD07EE60)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_EOLJDHMJCAA_OFFSET UNITYSDK_OFFSET(0xD07EFA0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_GPFKNLHFEMD_OFFSET UNITYSDK_OFFSET(0xD0812C0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_IELOPFIKFBB_OFFSET UNITYSDK_OFFSET(0xD081890)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_IHGBABEACON_OFFSET UNITYSDK_OFFSET(0xD080220)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_KBONOCPCNPJ_OFFSET UNITYSDK_OFFSET(0xD07EEC0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_KILIAOFAAEH_OFFSET UNITYSDK_OFFSET(0xD07FE90)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xD07F3E0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_KPKDAIGMCHM_OFFSET UNITYSDK_OFFSET(0xD07F350)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_LAKJEIDOCAE_OFFSET UNITYSDK_OFFSET(0xD0818D0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_LJKBJACLMLI_OFFSET UNITYSDK_OFFSET(0xD07EBF0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_LLNAPPLEBEL_OFFSET UNITYSDK_OFFSET(0xD07F2D0)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_LOLICLIHFHJ_OFFSET UNITYSDK_OFFSET(0xD07F690)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_OMIKPKNBOPO_OFFSET UNITYSDK_OFFSET(0xD07E990)
#define RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_OMILLJFFGPC_OFFSET UNITYSDK_OFFSET(0xD07EFF0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKSolverTrigonometric_TypeDefinitionIndex = 74267;

	class IKSolverTrigonometric : public ::RPG::Client::FullBody::IKSolver
	{
	public:
		::UnityEngine::Transform* target; // 0x58
		::System::Single IKRotationWeight; // 0x60
		::UnityEngine::Quaternion IKRotation; // 0x64
		::UnityEngine::Vector3 bendNormal; // 0x74
		::RPG::Client::FullBody::IKSolverTrigonometric_TrigonometricBone* bone1; // 0x80
		::RPG::Client::FullBody::IKSolverTrigonometric_TrigonometricBone* bone2; // 0x88
		::RPG::Client::FullBody::IKSolverTrigonometric_TrigonometricBone* bone3; // 0x90
		::UnityEngine::Vector3 weightIKPosition; // 0x98
		::System::Boolean directHierarchy; // 0xA4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_CTOR_OFFSET))(this);
		}

		::System::Void OMIKPKNBOPO(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_OMIKPKNBOPO_OFFSET))(this, a1, a2);
		}

		::System::Void LJKBJACLMLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_LJKBJACLMLI_OFFSET))(this);
		}

		::System::Void EKKLACELNCB(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_EKKLACELNCB_OFFSET))(this, a1);
		}

		::System::Void KBONOCPCNPJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_KBONOCPCNPJ_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion BIJIFIAJLPO()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_BIJIFIAJLPO_OFFSET))(this);
		}

		::System::Single EOLJDHMJCAA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_EOLJDHMJCAA_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* OMILLJFFGPC()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_OMILLJFFGPC_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKSolver_Point* BMOMBCHEEEI(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::FullBody::IKSolver_Point*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_BMOMBCHEEEI_OFFSET))(this, a1);
		}

		::System::Void LLNAPPLEBEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_LLNAPPLEBEL_OFFSET))(this);
		}

		::System::Void KPKDAIGMCHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_KPKDAIGMCHM_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_KKKIONIDKFA_OFFSET))(this, a1);
		}

		::System::Boolean LOLICLIHFHJ(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_LOLICLIHFHJ_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void CIJDJDICMMM(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_CIJDJDICMMM_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::Vector3 KILIAOFAAEH(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_KILIAOFAAEH_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void IHGBABEACON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_IHGBABEACON_OFFSET))(this);
		}

		::System::Boolean DEALNNNAHPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_DEALNNNAHPB_OFFSET))(this);
		}

		::System::Void BGIANHJAPKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_BGIANHJAPKE_OFFSET))(this);
		}

		::System::Void AGHABIKPPNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_AGHABIKPPNO_OFFSET))(this);
		}

		::System::Void IELOPFIKFBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_IELOPFIKFBB_OFFSET))(this);
		}

		::System::Void LAKJEIDOCAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_LAKJEIDOCAE_OFFSET))(this);
		}

		::System::Void CPHOCCHLJOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_CPHOCCHLJOJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 GPFKNLHFEMD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVERTRIGONOMETRIC_GPFKNLHFEMD_OFFSET))(this, a1, a2);
		}

	};
}
