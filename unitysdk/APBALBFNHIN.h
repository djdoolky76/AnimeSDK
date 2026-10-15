#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class APBALBFNHIN;
class CFAFCENLLLD;
class EJLIOMPMHHI;
class HGCEOEHGPPE;
class HIAMBDKHMIJ;
class JIAFOPELMJJ;
class KGPCBBIOGLB;
class KJHGBANLEIC;
class PFKBJGECBDE;
namespace RPG::Client { template <typename T1, typename T2, typename T3, typename T4> class ActionEvent_4; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class ActionEvent_3; }
namespace RPG::Client { template <typename T> class ActionEvent_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define APBALBFNHIN_CTOR_OFFSET UNITYSDK_OFFSET(0x158BE630)
#define APBALBFNHIN_DOFAILED_OFFSET UNITYSDK_OFFSET(0x158BF7A0)
#define APBALBFNHIN_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0x158BF5C0)
#define APBALBFNHIN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x158BEBE0)
#define APBALBFNHIN_FIPDBFMPEKH_1_OFFSET UNITYSDK_OFFSET(0x158BE9E0)
#define APBALBFNHIN_FIPDBFMPEKH_OFFSET UNITYSDK_OFFSET(0x158BE7D0)
#define APBALBFNHIN_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x158BE420)
#define APBALBFNHIN_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x158BE4C0)
#define APBALBFNHIN_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x158BE510)
#define APBALBFNHIN_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x158BE530)
#define APBALBFNHIN_GET_ID_OFFSET UNITYSDK_OFFSET(0x158BE490)
#define APBALBFNHIN_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x158BE590)
#define APBALBFNHIN_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x158BE5B0)
#define APBALBFNHIN_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x158BE610)
#define APBALBFNHIN_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x158BE5D0)
#define APBALBFNHIN_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x158BE5F0)
#define APBALBFNHIN_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x158BE550)
#define APBALBFNHIN_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x158BE570)
#define APBALBFNHIN_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0x158BE4B0)
#define APBALBFNHIN_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x158BE4F0)
#define APBALBFNHIN_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x158BE4D0)
#define APBALBFNHIN_HOGLGBBBFJM_OFFSET UNITYSDK_OFFSET(0x158BF950)
#define APBALBFNHIN_OGBECCFABIP_OFFSET UNITYSDK_OFFSET(0x158BF730)
#define APBALBFNHIN_SET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x158BE520)
#define APBALBFNHIN_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x158BE540)
#define APBALBFNHIN_SET_ID_OFFSET UNITYSDK_OFFSET(0x158BE4A0)
#define APBALBFNHIN_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x158BE5A0)
#define APBALBFNHIN_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x158BE5C0)
#define APBALBFNHIN_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x158BE620)
#define APBALBFNHIN_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x158BE5E0)
#define APBALBFNHIN_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x158BE600)
#define APBALBFNHIN_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x158BE560)
#define APBALBFNHIN_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x158BE580)
#define APBALBFNHIN_SET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x158BE500)
#define APBALBFNHIN_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x158BE4E0)
#define APBALBFNHIN_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x158BFA50)

inline static constexpr unsigned int APBALBFNHIN_TypeDefinitionIndex = 59544;

	class APBALBFNHIN : public ::System::Object
	{
	public:
		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* _OnStarting_k__BackingField; // 0x10
		::KJHGBANLEIC* HLPMFMHBAMP; // 0x18
		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* _OnItemFailed_k__BackingField; // 0x20
		::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x28
		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* _OnFailed_k__BackingField; // 0x30
		::EJLIOMPMHHI* FEICCPBBIHG; // 0x38
		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x40
		::System::String* LPEEGPIGBDG; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* AALBFNGDCGI; // 0x50
		::JIAFOPELMJJ* MIPPNCGOJNM; // 0x58
		::System::String* MNFCECOFEHK; // 0x60
		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x68
		::System::String* EMKBAECEJEP; // 0x70
		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* _OnSucceed_k__BackingField; // 0x78
		::System::Int64 AMGIJIELHFI; // 0x80
		::RPG::Client::TextID EMPDPJLAHHG; // 0x88
		::System::Int32 _TotalCount_k__BackingField; // 0x98
		::System::Int32 _SuccessCount_k__BackingField; // 0x9C
		::RPG::Client::NotifyType BBMGOLIHLMD; // 0xA0
		::System::Int32 _FailureCount_k__BackingField; // 0xA4
		::RPG::Client::TextID OFFMEOODAED; // 0xA8
		::System::Int32 _FinishCount_k__BackingField; // 0xB8
		::RPG::Client::ProgressID _ID_k__BackingField; // 0xBC
		::System::Boolean HIMMHPOOGID; // 0xC0
		::System::Byte _padding0[0x3];
		::RPG::Client::NotifyType DFIHEOOHNPO; // 0xC4
		::System::Void _ctor(::RPG::Client::ProgressID a1, ::EJLIOMPMHHI* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID, ::EJLIOMPMHHI*, ::System::Boolean))((::PBYTE)hIl2Cpp + APBALBFNHIN_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APBALBFNHIN_GETTYPENAME_OFFSET))(this);
		}

		::RPG::Client::ProgressID get_ID()
		{
			return ((::RPG::Client::ProgressID(*)(::PVOID))((::PBYTE)hIl2Cpp + APBALBFNHIN_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::RPG::Client::ProgressID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID))((::PBYTE)hIl2Cpp + APBALBFNHIN_SET_ID_OFFSET))(this, a1);
		}

		::EJLIOMPMHHI* get_RootQueue()
		{
			return ((::EJLIOMPMHHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + APBALBFNHIN_GET_ROOTQUEUE_OFFSET))(this);
		}

		::PFKBJGECBDE* get_ActionSystem()
		{
			return ((::PFKBJGECBDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + APBALBFNHIN_GET_ACTIONSYSTEM_OFFSET))(this);
		}

		::System::Int32 get_TotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APBALBFNHIN_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APBALBFNHIN_SET_TOTALCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_SuccessCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APBALBFNHIN_GET_SUCCESSCOUNT_OFFSET))(this);
		}

		::System::Void set_SuccessCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APBALBFNHIN_SET_SUCCESSCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_FailureCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APBALBFNHIN_GET_FAILURECOUNT_OFFSET))(this);
		}

		::System::Void set_FailureCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APBALBFNHIN_SET_FAILURECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_FinishCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APBALBFNHIN_GET_FINISHCOUNT_OFFSET))(this);
		}

		::System::Void set_FinishCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APBALBFNHIN_SET_FINISHCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* get_OnStarting()
		{
			return ((::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APBALBFNHIN_GET_ONSTARTING_OFFSET))(this);
		}

		::System::Void set_OnStarting(::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>*))((::PBYTE)hIl2Cpp + APBALBFNHIN_SET_ONSTARTING_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* get_OnSucceed()
		{
			return ((::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APBALBFNHIN_GET_ONSUCCEED_OFFSET))(this);
		}

		::System::Void set_OnSucceed(::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>*))((::PBYTE)hIl2Cpp + APBALBFNHIN_SET_ONSUCCEED_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* get_OnFailed()
		{
			return ((::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APBALBFNHIN_GET_ONFAILED_OFFSET))(this);
		}

		::System::Void set_OnFailed(::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>*))((::PBYTE)hIl2Cpp + APBALBFNHIN_SET_ONFAILED_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>* get_OnFinish()
		{
			return ((::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APBALBFNHIN_GET_ONFINISH_OFFSET))(this);
		}

		::System::Void set_OnFinish(::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>*))((::PBYTE)hIl2Cpp + APBALBFNHIN_SET_ONFINISH_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* get_OnItemStarting()
		{
			return ((::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APBALBFNHIN_GET_ONITEMSTARTING_OFFSET))(this);
		}

		::System::Void set_OnItemStarting(::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>*))((::PBYTE)hIl2Cpp + APBALBFNHIN_SET_ONITEMSTARTING_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* get_OnItemSucceed()
		{
			return ((::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APBALBFNHIN_GET_ONITEMSUCCEED_OFFSET))(this);
		}

		::System::Void set_OnItemSucceed(::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>*))((::PBYTE)hIl2Cpp + APBALBFNHIN_SET_ONITEMSUCCEED_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* get_OnItemFailed()
		{
			return ((::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APBALBFNHIN_GET_ONITEMFAILED_OFFSET))(this);
		}

		::System::Void set_OnItemFailed(::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>*))((::PBYTE)hIl2Cpp + APBALBFNHIN_SET_ONITEMFAILED_OFFSET))(this, a1);
		}

		::APBALBFNHIN* FIPDBFMPEKH(::System::String* a1, ::KGPCBBIOGLB* a2)
		{
			return ((::APBALBFNHIN*(*)(::PVOID, ::System::String*, ::KGPCBBIOGLB*))((::PBYTE)hIl2Cpp + APBALBFNHIN_FIPDBFMPEKH_OFFSET))(this, a1, a2);
		}

		::APBALBFNHIN* FIPDBFMPEKH_1(::CFAFCENLLLD* a1, ::KGPCBBIOGLB* a2)
		{
			return ((::APBALBFNHIN*(*)(::PVOID, ::CFAFCENLLLD*, ::KGPCBBIOGLB*))((::PBYTE)hIl2Cpp + APBALBFNHIN_FIPDBFMPEKH_1_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APBALBFNHIN_EXECUTE_OFFSET))(this);
		}

		::System::Void OGBECCFABIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APBALBFNHIN_OGBECCFABIP_OFFSET))(this);
		}

		::System::Void DoFailed(::HIAMBDKHMIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIAMBDKHMIJ*))((::PBYTE)hIl2Cpp + APBALBFNHIN_DOFAILED_OFFSET))(this, a1);
		}

		::System::Void DoSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APBALBFNHIN_DOSUCCEED_OFFSET))(this);
		}

		::System::Void UpdateProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APBALBFNHIN_UPDATEPROGRESS_OFFSET))(this);
		}

		::System::Void HOGLGBBBFJM(::RPG::Client::NotifyType a1, ::System::String* a2, ::RPG::Client::TextID a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::String*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + APBALBFNHIN_HOGLGBBBFJM_OFFSET))(this, a1, a2, a3);
		}

	};
