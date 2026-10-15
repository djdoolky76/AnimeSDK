#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/KFPPDLJEJJA.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class AimSolverAimer; }
namespace RPG::Client { template <typename T1, typename T2> class AimEvaluator_2; }
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIMSOLVER_BMEKHLDCKEP_OFFSET UNITYSDK_OFFSET(0xC630420)
#define RPG_CLIENT_AIMSOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0xC633100)
#define RPG_CLIENT_AIMSOLVER_CIJDJDICMMM_OFFSET UNITYSDK_OFFSET(0xC630D60)
#define RPG_CLIENT_AIMSOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0xC6330A0)
#define RPG_CLIENT_AIMSOLVER_ENGKMNOALGK_OFFSET UNITYSDK_OFFSET(0xC631F90)
#define RPG_CLIENT_AIMSOLVER_FFGNEJIMBKN_OFFSET UNITYSDK_OFFSET(0xC632600)
#define RPG_CLIENT_AIMSOLVER_GET_AIMERCOUNT_OFFSET UNITYSDK_OFFSET(0xC62FA50)
#define RPG_CLIENT_AIMSOLVER_GFFMKKGJEKA_1_OFFSET UNITYSDK_OFFSET(0xC6321D0)
#define RPG_CLIENT_AIMSOLVER_GFFMKKGJEKA_OFFSET UNITYSDK_OFFSET(0xC6320B0)
#define RPG_CLIENT_AIMSOLVER_IICCFDAANGF_OFFSET UNITYSDK_OFFSET(0xC631CD0)
#define RPG_CLIENT_AIMSOLVER_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xC632EC0)
#define RPG_CLIENT_AIMSOLVER_KMENBMHOGFH_OFFSET UNITYSDK_OFFSET(0xC6300D0)
#define RPG_CLIENT_AIMSOLVER_LEJANEEOEEE_OFFSET UNITYSDK_OFFSET(0xC632290)
#define RPG_CLIENT_AIMSOLVER_MEILFKECFAA_OFFSET UNITYSDK_OFFSET(0xC630180)
#define RPG_CLIENT_AIMSOLVER_NNPCBCEBPKB_OFFSET UNITYSDK_OFFSET(0xC632010)
#define RPG_CLIENT_AIMSOLVER_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xC62FAA0)
#define RPG_CLIENT_AIMSOLVER_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC632E40)
#define RPG_CLIENT_AIMSOLVER_PKELPMDKHCB_OFFSET UNITYSDK_OFFSET(0xC631150)

namespace RPG::Client
{
	inline static constexpr unsigned int AimSolver_TypeDefinitionIndex = 68433;

	class AimSolver : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::AimSolverAimer*>* Aimers; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* _SolveStepBatch; // 0x18
		static ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>** StaticGet__QuaternionCache()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Quaternion>**)UnitySDK::FromName("RPG.Client", "AimSolver")->GetStaticField(0x3EEB0);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet__BoneIdxAndDepth()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("RPG.Client", "AimSolver")->GetStaticField(0x3EEB8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_CCTOR_OFFSET))();
		}

		::System::Int32 get_AimerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_GET_AIMERCOUNT_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Void MEILFKECFAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_MEILFKECFAA_OFFSET))(this);
		}

		::System::Boolean CIJDJDICMMM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_CIJDJDICMMM_OFFSET))(this);
		}

		::System::Int32 IICCFDAANGF(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_IICCFDAANGF_OFFSET))(this, a1);
		}

		::System::Single ENGKMNOALGK(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_ENGKMNOALGK_OFFSET))(this, a1);
		}

		::System::Void NNPCBCEBPKB(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_NNPCBCEBPKB_OFFSET))(this, a1, a2);
		}

		::System::Void GFFMKKGJEKA(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_GFFMKKGJEKA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GFFMKKGJEKA_1(::System::Int32 a1, ::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>* a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_GFFMKKGJEKA_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BMEKHLDCKEP(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_BMEKHLDCKEP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LEJANEEOEEE(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_LEJANEEOEEE_OFFSET))(this, a1);
		}

		::System::Void FFGNEJIMBKN(::RootMotion::IKJob::IKThreadProxyContext* a1, ::KFPPDLJEJJA a2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::KFPPDLJEJJA))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_FFGNEJIMBKN_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_PJPFIHFAHGO_OFFSET))(this, a1);
		}

		::System::Boolean KKKIONIDKFA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_KKKIONIDKFA_OFFSET))(this, a1);
		}

		::System::Void PKELPMDKHCB(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_PKELPMDKHCB_OFFSET))(this, a1);
		}

		static ::System::Int32 KMENBMHOGFH(::UnityEngine::Transform* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_KMENBMHOGFH_OFFSET))(a1);
		}

	};
}
