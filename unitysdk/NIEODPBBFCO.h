#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameEntityPosAdaptionResultFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/JKLPFLJEPCH.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/AI/NavMeshHit.h"
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace UnityEngine { class Collider; }
namespace UnityEngine::AI { class NavMeshPath; }

#define NIEODPBBFCO_ADBPJCAGPPC_OFFSET UNITYSDK_OFFSET(0xC4C6810)
#define NIEODPBBFCO_ANFELDIEJKH_OFFSET UNITYSDK_OFFSET(0xC4CACF0)
#define NIEODPBBFCO_CCTOR_OFFSET UNITYSDK_OFFSET(0xC4CBF20)
#define NIEODPBBFCO_CNKCEHKIMLN_OFFSET UNITYSDK_OFFSET(0xC4C75E0)
#define NIEODPBBFCO_DBJMLDDHBBH_OFFSET UNITYSDK_OFFSET(0xC4C98A0)
#define NIEODPBBFCO_DJHAMGOIFEM_OFFSET UNITYSDK_OFFSET(0xC4C6700)
#define NIEODPBBFCO_EKJADDMNIFK_OFFSET UNITYSDK_OFFSET(0xC4C58F0)
#define NIEODPBBFCO_FFFMLOOKNOC_OFFSET UNITYSDK_OFFSET(0xC4CB880)
#define NIEODPBBFCO_FKBLDMIADMM_OFFSET UNITYSDK_OFFSET(0xC4CABA0)
#define NIEODPBBFCO_FLHODNMCDMM_OFFSET UNITYSDK_OFFSET(0xC4C8140)
#define NIEODPBBFCO_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xC4C7590)
#define NIEODPBBFCO_LBEFFDLKNLC_OFFSET UNITYSDK_OFFSET(0xC4CB6F0)
#define NIEODPBBFCO_LDILIGLIGMI_OFFSET UNITYSDK_OFFSET(0xC4C7240)
#define NIEODPBBFCO_LHJODLJJIGK_OFFSET UNITYSDK_OFFSET(0xC4C9BF0)
#define NIEODPBBFCO_LIJOIBFBDJK_OFFSET UNITYSDK_OFFSET(0xC4CA080)
#define NIEODPBBFCO_MPONJNGHCIO_OFFSET UNITYSDK_OFFSET(0xC4CBE10)
#define NIEODPBBFCO_PLJKBJPECBN_OFFSET UNITYSDK_OFFSET(0xC4C9130)

inline static constexpr unsigned int NIEODPBBFCO_TypeDefinitionIndex = 59040;

	class NIEODPBBFCO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Quaternion>** StaticGet_IEDBDPKEGHA()
		{
			return (::Il2CppArray<::UnityEngine::Quaternion>**)UnitySDK::FromName("", "NIEODPBBFCO")->GetStaticField(0x38A80);
		}

		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_HGEJCFJANNM()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)UnitySDK::FromName("", "NIEODPBBFCO")->GetStaticField(0x38A88);
		}

		static ::UnityEngine::AI::NavMeshPath** StaticGet_KLHJCLLFKEI()
		{
			return (::UnityEngine::AI::NavMeshPath**)UnitySDK::FromName("", "NIEODPBBFCO")->GetStaticField(0x38A90);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_NKODDEFFCBB()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("", "NIEODPBBFCO")->GetStaticField(0x38A98);
		}

		static ::RPG::GameCore::EntityPosAdaptionConfig** StaticGet_OKGHMKEOPNB()
		{
			return (::RPG::GameCore::EntityPosAdaptionConfig**)UnitySDK::FromName("", "NIEODPBBFCO")->GetStaticField(0x38AA0);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_NBOJGJECNMK()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("", "NIEODPBBFCO")->GetStaticField(0x38AA8);
		}

		static ::System::Int32* StaticGet_LICKEEGLHKH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NIEODPBBFCO")->GetStaticField(0xC4F0);
		}

		// static const ::System::Object DAHJLBFAANH; // 0x0
		// static const ::System::Object DPBHDHBCBFP; // 0x0
		// static const ::System::Object OCHDHELDICE; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIEODPBBFCO_CCTOR_OFFSET))();
		}

		static ::JKLPFLJEPCH EKJADDMNIFK(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::RPG::GameCore::EntityPosAdaptionConfig* a4, ::UnityEngine::Collider* a5, ::System::Single a6)
		{
			return ((::JKLPFLJEPCH(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::EntityPosAdaptionConfig*, ::UnityEngine::Collider*, ::System::Single))((::PBYTE)hIl2Cpp + NIEODPBBFCO_EKJADDMNIFK_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean JJNFOPNOPBF(::RPG::GameCore::GameEntityPosAdaptionResultFlag a1, ::RPG::GameCore::GameEntityPosAdaptionResultFlag a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntityPosAdaptionResultFlag, ::RPG::GameCore::GameEntityPosAdaptionResultFlag))((::PBYTE)hIl2Cpp + NIEODPBBFCO_JJNFOPNOPBF_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntityPosAdaptionResultFlag LDILIGLIGMI(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3)
		{
			return ((::RPG::GameCore::GameEntityPosAdaptionResultFlag(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + NIEODPBBFCO_LDILIGLIGMI_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::GameEntityPosAdaptionResultFlag PLJKBJPECBN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::RPG::GameCore::GameEntityPosAdaptionResultFlag(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NIEODPBBFCO_PLJKBJPECBN_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::GameEntityPosAdaptionResultFlag CNKCEHKIMLN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::RPG::GameCore::GameEntityPosAdaptionResultFlag(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NIEODPBBFCO_CNKCEHKIMLN_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::ValueTuple_2<::RPG::GameCore::GameEntityPosAdaptionResultFlag, ::UnityEngine::Vector3> FKBLDMIADMM(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::GameEntityPosAdaptionResultFlag, ::UnityEngine::Vector3>(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NIEODPBBFCO_FKBLDMIADMM_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::GameEntityPosAdaptionResultFlag ADBPJCAGPPC(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5, ::System::Int32 a6, ::System::Boolean a7)
		{
			return ((::RPG::GameCore::GameEntityPosAdaptionResultFlag(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NIEODPBBFCO_ADBPJCAGPPC_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::RPG::GameCore::GameEntityPosAdaptionResultFlag FLHODNMCDMM(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Boolean a8, ::System::Single a9, ::UnityEngine::Collider* a10, ::System::Int32 a11)
		{
			return ((::RPG::GameCore::GameEntityPosAdaptionResultFlag(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Single, ::UnityEngine::Collider*, ::System::Int32))((::PBYTE)hIl2Cpp + NIEODPBBFCO_FLHODNMCDMM_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Int32> ANFELDIEJKH(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Boolean a8, ::System::Single a9, ::UnityEngine::Collider* a10, ::System::Int32 a11)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Int32>(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Single, ::UnityEngine::Collider*, ::System::Int32))((::PBYTE)hIl2Cpp + NIEODPBBFCO_ANFELDIEJKH_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		static ::RPG::GameCore::GameEntityPosAdaptionResultFlag LHJODLJJIGK(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::RPG::GameCore::GameEntityPosAdaptionResultFlag(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NIEODPBBFCO_LHJODLJJIGK_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::GameCore::GameEntityPosAdaptionResultFlag DBJMLDDHBBH(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5)
		{
			return ((::RPG::GameCore::GameEntityPosAdaptionResultFlag(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NIEODPBBFCO_DBJMLDDHBBH_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean FFFMLOOKNOC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NIEODPBBFCO_FFFMLOOKNOC_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::GameCore::GameEntityPosAdaptionResultFlag LIJOIBFBDJK(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Int32 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::RPG::GameCore::GameEntityPosAdaptionResultFlag(*)(::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NIEODPBBFCO_LIJOIBFBDJK_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean LBEFFDLKNLC(::UnityEngine::Vector3 a1, ::UnityEngine::AI::NavMeshHit a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshHit, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NIEODPBBFCO_LBEFFDLKNLC_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single MPONJNGHCIO(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Single(*)(::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + NIEODPBBFCO_MPONJNGHCIO_OFFSET))(a1);
		}

		static ::RPG::GameCore::EntityPosAdaptionConfig* DJHAMGOIFEM()
		{
			return ((::RPG::GameCore::EntityPosAdaptionConfig*(*)())((::PBYTE)hIl2Cpp + NIEODPBBFCO_DJHAMGOIFEM_OFFSET))();
		}

	};
