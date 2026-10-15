#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerLogicOperator.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BBHJHADOEID;
class NCELBOIBLCL;
class PFBLMLOGGOK;
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CIEHGAHJDFN_AMCLLKNEKFA_OFFSET UNITYSDK_OFFSET(0xCF69040)
#define CIEHGAHJDFN_BHHLAMDGCFA_OFFSET UNITYSDK_OFFSET(0xCF68920)
#define CIEHGAHJDFN_BNKEIKCHFHE_OFFSET UNITYSDK_OFFSET(0xCF67A50)
#define CIEHGAHJDFN_CTOR_OFFSET UNITYSDK_OFFSET(0xCF67640)
#define CIEHGAHJDFN_DABIKEEMBJM_OFFSET UNITYSDK_OFFSET(0xCF68010)
#define CIEHGAHJDFN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF676F0)
#define CIEHGAHJDFN_FBPPDGCHEDA_OFFSET UNITYSDK_OFFSET(0xCF68A70)
#define CIEHGAHJDFN_FJCNBBJBBLM_OFFSET UNITYSDK_OFFSET(0xCF68EF0)
#define CIEHGAHJDFN_GET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xCF69C10)
#define CIEHGAHJDFN_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xCF69C30)
#define CIEHGAHJDFN_GET_FLAGNAME_OFFSET UNITYSDK_OFFSET(0xCF69C50)
#define CIEHGAHJDFN_GET_PHOTOGRAPHCONDITIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0xCF69C70)
#define CIEHGAHJDFN_GET_TIPINFO_OFFSET UNITYSDK_OFFSET(0xCF69C90)
#define CIEHGAHJDFN_HNLLFOIDGGE_OFFSET UNITYSDK_OFFSET(0xCF69370)
#define CIEHGAHJDFN_HPEHNKBIAEM_OFFSET UNITYSDK_OFFSET(0xCF680D0)
#define CIEHGAHJDFN_IKPOCJMNBBB_OFFSET UNITYSDK_OFFSET(0xCF69220)
#define CIEHGAHJDFN_KEPGKFPJEDO_OFFSET UNITYSDK_OFFSET(0xCF678C0)
#define CIEHGAHJDFN_KIHMJMMOENK_OFFSET UNITYSDK_OFFSET(0xCF685D0)
#define CIEHGAHJDFN_LFMOBHJHAPO_OFFSET UNITYSDK_OFFSET(0xCF682B0)
#define CIEHGAHJDFN_LOAMGLHLGBC_OFFSET UNITYSDK_OFFSET(0xCF681C0)
#define CIEHGAHJDFN_LOPPBKHPABN_OFFSET UNITYSDK_OFFSET(0xCF69120)
#define CIEHGAHJDFN_MOKCJHFOAGP_OFFSET UNITYSDK_OFFSET(0xCF69520)
#define CIEHGAHJDFN_NFEMLIMEELL_OFFSET UNITYSDK_OFFSET(0xCF69AA0)
#define CIEHGAHJDFN_OOODAPGBPPG_OFFSET UNITYSDK_OFFSET(0xCF695A0)
#define CIEHGAHJDFN_PCGNPFHJHHE_OFFSET UNITYSDK_OFFSET(0xCF68740)
#define CIEHGAHJDFN_PKFGLNEFLIK_OFFSET UNITYSDK_OFFSET(0xCF68420)
#define CIEHGAHJDFN_PNEMIIODAPG_OFFSET UNITYSDK_OFFSET(0xCF69B50)
#define CIEHGAHJDFN_PNNOCKBDFCN_OFFSET UNITYSDK_OFFSET(0xCF68A00)
#define CIEHGAHJDFN_POEEOHNJEHO_OFFSET UNITYSDK_OFFSET(0xCF68060)
#define CIEHGAHJDFN_SET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xCF69C20)
#define CIEHGAHJDFN_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xCF69C40)
#define CIEHGAHJDFN_SET_FLAGNAME_OFFSET UNITYSDK_OFFSET(0xCF69C60)
#define CIEHGAHJDFN_SET_PHOTOGRAPHCONDITIONCOMPLETE_OFFSET UNITYSDK_OFFSET(0xCF69C80)
#define CIEHGAHJDFN_SET_TIPINFO_OFFSET UNITYSDK_OFFSET(0xCF69CA0)

	class CIEHGAHJDFN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::BBHJHADOEID*>* AHIDEFJGLLG; // 0x10
		::BBHJHADOEID* MNFJKONKFJB; // 0x18
		::NCELBOIBLCL* NNNBOEHIPCK; // 0x20
		::RPG::GameCore::PhotoGraphAimContainerConfig* _Config_k__BackingField; // 0x28
		::PFBLMLOGGOK* _TipInfo_k__BackingField; // 0x30
		::RPG::GameCore::StringHash _FlagName_k__BackingField; // 0x38
		::System::Int32 ADEKJDAPHFL; // 0x3C
		::System::Int32 JPLDMLLPHOL; // 0x40
		::RPG::GameCore::PhotoGraphAimIdentifyType _AimIdentifyType_k__BackingField; // 0x44
		::System::Int32 MCDMCCIBPIG; // 0x48
		::System::Boolean OIEDKAHIMGF; // 0x4C
		::System::Boolean IKBKMPGFDPF; // 0x4D
		::System::Boolean _PhotoGraphConditionComplete_k__BackingField; // 0x4E
		::System::Void _ctor(::RPG::GameCore::PhotoGraphAimIdentifyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_DISPOSE_OFFSET))(this);
		}

		::System::Void KEPGKFPJEDO(::RPG::GameCore::PhotoGraphAimContainerConfig* a1, ::RPG::GameCore::TaskContext* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::RPG::GameCore::TaskContext*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_KEPGKFPJEDO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DABIKEEMBJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_DABIKEEMBJM_OFFSET))(this);
		}

		::System::Boolean POEEOHNJEHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_POEEOHNJEHO_OFFSET))(this);
		}

		::System::Boolean HPEHNKBIAEM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_HPEHNKBIAEM_OFFSET))(this);
		}

		::System::Boolean LOAMGLHLGBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_LOAMGLHLGBC_OFFSET))(this);
		}

		::System::Boolean KIHMJMMOENK(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_KIHMJMMOENK_OFFSET))(this, a1, a2);
		}

		::System::Int32 BHHLAMDGCFA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_BHHLAMDGCFA_OFFSET))(this);
		}

		::System::Int32 PNNOCKBDFCN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_PNNOCKBDFCN_OFFSET))(this);
		}

		::PFBLMLOGGOK* FBPPDGCHEDA(::UnityEngine::Vector3 a1)
		{
			return ((::PFBLMLOGGOK*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_FBPPDGCHEDA_OFFSET))(this, a1);
		}

		::System::Int32 IKPOCJMNBBB(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_IKPOCJMNBBB_OFFSET))(this, a1, a2);
		}

		::BBHJHADOEID* BNKEIKCHFHE(::RPG::GameCore::PhotoGraphAimContainerConfig* a1, ::RPG::GameCore::TaskContext* a2, ::BBHJHADOEID* a3)
		{
			return ((::BBHJHADOEID*(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::RPG::GameCore::TaskContext*, ::BBHJHADOEID*))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_BNKEIKCHFHE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FJCNBBJBBLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_FJCNBBJBBLM_OFFSET))(this);
		}

		::System::Void AMCLLKNEKFA(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_AMCLLKNEKFA_OFFSET))(this, a1, a2);
		}

		::System::Boolean LOPPBKHPABN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_LOPPBKHPABN_OFFSET))(this);
		}

		::System::Boolean MOKCJHFOAGP(::RPG::GameCore::PhotoGraphTargetSize* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_MOKCJHFOAGP_OFFSET))(this, a1, a2);
		}

		::System::Boolean OOODAPGBPPG(::RPG::GameCore::PhotoGraphTargetSize* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_OOODAPGBPPG_OFFSET))(this, a1, a2);
		}

		::System::Void NFEMLIMEELL(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_NFEMLIMEELL_OFFSET))(this, a1, a2);
		}

		::System::Void PNEMIIODAPG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_PNEMIIODAPG_OFFSET))(this, a1);
		}

		::System::Boolean HNLLFOIDGGE(::Il2CppArray<::BBHJHADOEID*>* a1, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::BBHJHADOEID*>*, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_HNLLFOIDGGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean LFMOBHJHAPO(::Il2CppArray<::BBHJHADOEID*>* a1, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::BBHJHADOEID*>*, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_LFMOBHJHAPO_OFFSET))(this, a1, a2);
		}

		::System::Boolean PKFGLNEFLIK(::Il2CppArray<::BBHJHADOEID*>* a1, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::BBHJHADOEID*>*, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_PKFGLNEFLIK_OFFSET))(this, a1, a2);
		}

		::System::Boolean PCGNPFHJHHE(::UnityEngine::Vector3 a1, ::System::Single a2, ::Il2CppArray<::BBHJHADOEID*>* a3, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::BBHJHADOEID*>*, ::RPG::GameCore::PhotoGraphAimContainerLogicOperator))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_PCGNPFHJHHE_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::PhotoGraphAimIdentifyType get_AimIdentifyType()
		{
			return ((::RPG::GameCore::PhotoGraphAimIdentifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_GET_AIMIDENTIFYTYPE_OFFSET))(this);
		}

		::System::Void set_AimIdentifyType(::RPG::GameCore::PhotoGraphAimIdentifyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_SET_AIMIDENTIFYTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::PhotoGraphAimContainerConfig* get_Config()
		{
			return ((::RPG::GameCore::PhotoGraphAimContainerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::PhotoGraphAimContainerConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimContainerConfig*))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_SET_CONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::StringHash get_FlagName()
		{
			return ((::RPG::GameCore::StringHash(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_GET_FLAGNAME_OFFSET))(this);
		}

		::System::Void set_FlagName(::RPG::GameCore::StringHash a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_SET_FLAGNAME_OFFSET))(this, a1);
		}

		::System::Boolean get_PhotoGraphConditionComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_GET_PHOTOGRAPHCONDITIONCOMPLETE_OFFSET))(this);
		}

		::System::Void set_PhotoGraphConditionComplete(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_SET_PHOTOGRAPHCONDITIONCOMPLETE_OFFSET))(this, a1);
		}

		::PFBLMLOGGOK* get_TipInfo()
		{
			return ((::PFBLMLOGGOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_GET_TIPINFO_OFFSET))(this);
		}

		::System::Void set_TipInfo(::PFBLMLOGGOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFBLMLOGGOK*))((::PBYTE)hIl2Cpp + CIEHGAHJDFN_SET_TIPINFO_OFFSET))(this, a1);
		}

	};
