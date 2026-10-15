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

#define APBALBFNHIN_CTOR_OFFSET UNITYSDK_OFFSET(0x158CA350)
#define APBALBFNHIN_DOFAILED_OFFSET UNITYSDK_OFFSET(0x158CB4C0)
#define APBALBFNHIN_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0x158CB2E0)
#define APBALBFNHIN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x158CA900)
#define APBALBFNHIN_FIPDBFMPEKH_1_OFFSET UNITYSDK_OFFSET(0x158CA700)
#define APBALBFNHIN_FIPDBFMPEKH_OFFSET UNITYSDK_OFFSET(0x158CA4F0)
#define APBALBFNHIN_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x158CA140)
#define APBALBFNHIN_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x158CA1E0)
#define APBALBFNHIN_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x158CA230)
#define APBALBFNHIN_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x158CA250)
#define APBALBFNHIN_GET_ID_OFFSET UNITYSDK_OFFSET(0x158CA1B0)
#define APBALBFNHIN_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x158CA2B0)
#define APBALBFNHIN_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x158CA2D0)
#define APBALBFNHIN_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x158CA330)
#define APBALBFNHIN_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x158CA2F0)
#define APBALBFNHIN_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x158CA310)
#define APBALBFNHIN_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x158CA270)
#define APBALBFNHIN_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x158CA290)
#define APBALBFNHIN_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0x158CA1D0)
#define APBALBFNHIN_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x158CA210)
#define APBALBFNHIN_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x158CA1F0)
#define APBALBFNHIN_HOGLGBBBFJM_OFFSET UNITYSDK_OFFSET(0x158CB670)
#define APBALBFNHIN_OGBECCFABIP_OFFSET UNITYSDK_OFFSET(0x158CB450)
#define APBALBFNHIN_SET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x158CA240)
#define APBALBFNHIN_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x158CA260)
#define APBALBFNHIN_SET_ID_OFFSET UNITYSDK_OFFSET(0x158CA1C0)
#define APBALBFNHIN_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x158CA2C0)
#define APBALBFNHIN_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x158CA2E0)
#define APBALBFNHIN_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x158CA340)
#define APBALBFNHIN_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x158CA300)
#define APBALBFNHIN_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x158CA320)
#define APBALBFNHIN_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x158CA280)
#define APBALBFNHIN_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x158CA2A0)
#define APBALBFNHIN_SET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x158CA220)
#define APBALBFNHIN_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x158CA200)
#define APBALBFNHIN_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x158CB770)

inline static constexpr unsigned int APBALBFNHIN_TypeDefinitionIndex = 59544;

	class APBALBFNHIN : public ::System::Object
	{
	public:
		::System::String* MNFCECOFEHK; // 0x10
		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x18
		::EJLIOMPMHHI* FEICCPBBIHG; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* AALBFNGDCGI; // 0x28
		::JIAFOPELMJJ* MIPPNCGOJNM; // 0x30
		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* _OnFailed_k__BackingField; // 0x38
		::KJHGBANLEIC* HLPMFMHBAMP; // 0x40
		::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x48
		::System::String* EMKBAECEJEP; // 0x50
		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* _OnStarting_k__BackingField; // 0x58
		::System::String* LPEEGPIGBDG; // 0x60
		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x68
		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* _OnItemFailed_k__BackingField; // 0x70
		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* _OnSucceed_k__BackingField; // 0x78
		::System::Int32 _SuccessCount_k__BackingField; // 0x80
		::RPG::Client::NotifyType DFIHEOOHNPO; // 0x84
		::RPG::Client::NotifyType BBMGOLIHLMD; // 0x88
		::System::Int32 _FailureCount_k__BackingField; // 0x8C
		::System::Boolean HIMMHPOOGID; // 0x90
		::System::Byte _padding0[0x3];
		::RPG::Client::ProgressID _ID_k__BackingField; // 0x94
		::System::Int64 AMGIJIELHFI; // 0x98
		::System::Int32 _FinishCount_k__BackingField; // 0xA0
		::System::Int32 _TotalCount_k__BackingField; // 0xA4
		::RPG::Client::TextID EMPDPJLAHHG; // 0xA8
		::RPG::Client::TextID OFFMEOODAED; // 0xB8
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
