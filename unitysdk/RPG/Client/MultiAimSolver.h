#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/KFPPDLJEJJA.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class AimSolverMultiAimer; }
namespace RPG::Client { template <typename T1, typename T2> class AimEvaluator_2; }
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MULTIAIMSOLVER_BMEKHLDCKEP_OFFSET UNITYSDK_OFFSET(0xD8C8F60)
#define RPG_CLIENT_MULTIAIMSOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0xD8CB8F0)
#define RPG_CLIENT_MULTIAIMSOLVER_CIJDJDICMMM_OFFSET UNITYSDK_OFFSET(0xD8C90D0)
#define RPG_CLIENT_MULTIAIMSOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0xD8CB890)
#define RPG_CLIENT_MULTIAIMSOLVER_ENGKMNOALGK_OFFSET UNITYSDK_OFFSET(0xD8C9DB0)
#define RPG_CLIENT_MULTIAIMSOLVER_FFGNEJIMBKN_OFFSET UNITYSDK_OFFSET(0xD8CA5B0)
#define RPG_CLIENT_MULTIAIMSOLVER_GET_AIMERCOUNT_OFFSET UNITYSDK_OFFSET(0xD8C8560)
#define RPG_CLIENT_MULTIAIMSOLVER_GFFMKKGJEKA_1_OFFSET UNITYSDK_OFFSET(0xD8C9FF0)
#define RPG_CLIENT_MULTIAIMSOLVER_GFFMKKGJEKA_OFFSET UNITYSDK_OFFSET(0xD8C9ED0)
#define RPG_CLIENT_MULTIAIMSOLVER_IICCFDAANGF_OFFSET UNITYSDK_OFFSET(0xD8C9BC0)
#define RPG_CLIENT_MULTIAIMSOLVER_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xD8CB690)
#define RPG_CLIENT_MULTIAIMSOLVER_KMENBMHOGFH_OFFSET UNITYSDK_OFFSET(0xD8C8C10)
#define RPG_CLIENT_MULTIAIMSOLVER_LEJANEEOEEE_OFFSET UNITYSDK_OFFSET(0xD8CA0B0)
#define RPG_CLIENT_MULTIAIMSOLVER_MEILFKECFAA_OFFSET UNITYSDK_OFFSET(0xD8C8CC0)
#define RPG_CLIENT_MULTIAIMSOLVER_NNPCBCEBPKB_OFFSET UNITYSDK_OFFSET(0xD8C9E30)
#define RPG_CLIENT_MULTIAIMSOLVER_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xD8C85B0)
#define RPG_CLIENT_MULTIAIMSOLVER_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xD8CB610)
#define RPG_CLIENT_MULTIAIMSOLVER_PKELPMDKHCB_OFFSET UNITYSDK_OFFSET(0xD8C9500)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiAimSolver_TypeDefinitionIndex = 68492;

	class MultiAimSolver : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::AimSolverMultiAimer*>* Aimers; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* _SolveStepBatch; // 0x18
		static ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>** StaticGet__QuaternionCache()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Quaternion>**)UnitySDK::FromName("RPG.Client", "MultiAimSolver")->GetStaticField(0x6B3F0);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet__BoneIdxAndDepth()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("RPG.Client", "MultiAimSolver")->GetStaticField(0x6B3F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_CCTOR_OFFSET))();
		}

		::System::Int32 get_AimerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_GET_AIMERCOUNT_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Void MEILFKECFAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_MEILFKECFAA_OFFSET))(this);
		}

		::System::Boolean CIJDJDICMMM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_CIJDJDICMMM_OFFSET))(this);
		}

		::System::Int32 IICCFDAANGF(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_IICCFDAANGF_OFFSET))(this, a1);
		}

		::System::Single ENGKMNOALGK(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_ENGKMNOALGK_OFFSET))(this, a1);
		}

		::System::Void NNPCBCEBPKB(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_NNPCBCEBPKB_OFFSET))(this, a1, a2);
		}

		::System::Void GFFMKKGJEKA(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_GFFMKKGJEKA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GFFMKKGJEKA_1(::System::Int32 a1, ::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>* a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_GFFMKKGJEKA_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BMEKHLDCKEP(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_BMEKHLDCKEP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LEJANEEOEEE(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_LEJANEEOEEE_OFFSET))(this, a1);
		}

		::System::Void FFGNEJIMBKN(::RootMotion::IKJob::IKThreadProxyContext* a1, ::KFPPDLJEJJA a2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::KFPPDLJEJJA))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_FFGNEJIMBKN_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_PJPFIHFAHGO_OFFSET))(this, a1);
		}

		::System::Boolean KKKIONIDKFA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_KKKIONIDKFA_OFFSET))(this, a1);
		}

		::System::Void PKELPMDKHCB(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_PKELPMDKHCB_OFFSET))(this, a1);
		}

		static ::System::Int32 KMENBMHOGFH(::UnityEngine::Transform* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_KMENBMHOGFH_OFFSET))(a1);
		}

	};
}
