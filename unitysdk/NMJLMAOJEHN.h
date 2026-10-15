#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/FailedType.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class CDPCDCCGEJN;
class EJLIOMPMHHI;
class HGCEOEHGPPE;
class HIAMBDKHMIJ;
class JIAFOPELMJJ;
class KGPCBBIOGLB;
class NMJLMAOJEHN;
class PFKBJGECBDE;
namespace RPG::Client { template <typename T1, typename T2, typename T3, typename T4> class ActionEvent_4; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class ActionEvent_3; }
namespace RPG::Client { template <typename T> class ActionEvent_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NMJLMAOJEHN_ABNOOIBPKIL_OFFSET UNITYSDK_OFFSET(0xBC889C0)
#define NMJLMAOJEHN_CTOR_OFFSET UNITYSDK_OFFSET(0xBC887E0)
#define NMJLMAOJEHN_DCAACILHAOG_OFFSET UNITYSDK_OFFSET(0xBC89E80)
#define NMJLMAOJEHN_DOFAILED_OFFSET UNITYSDK_OFFSET(0xBC89B60)
#define NMJLMAOJEHN_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0xBC899F0)
#define NMJLMAOJEHN_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBC89620)
#define NMJLMAOJEHN_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xBC885D0)
#define NMJLMAOJEHN_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0xBC88670)
#define NMJLMAOJEHN_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0xBC886C0)
#define NMJLMAOJEHN_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0xBC886E0)
#define NMJLMAOJEHN_GET_ID_OFFSET UNITYSDK_OFFSET(0xBC88640)
#define NMJLMAOJEHN_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xBC88740)
#define NMJLMAOJEHN_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0xBC88760)
#define NMJLMAOJEHN_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0xBC887C0)
#define NMJLMAOJEHN_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0xBC88780)
#define NMJLMAOJEHN_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0xBC887A0)
#define NMJLMAOJEHN_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0xBC88700)
#define NMJLMAOJEHN_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0xBC88720)
#define NMJLMAOJEHN_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0xBC88660)
#define NMJLMAOJEHN_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0xBC886A0)
#define NMJLMAOJEHN_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xBC88680)
#define NMJLMAOJEHN_HOGLGBBBFJM_OFFSET UNITYSDK_OFFSET(0xBC89D50)
#define NMJLMAOJEHN_MBJMFAKNPAI_OFFSET UNITYSDK_OFFSET(0xBC895D0)
#define NMJLMAOJEHN_OPALKEIMPFB_OFFSET UNITYSDK_OFFSET(0xBC88F90)
#define NMJLMAOJEHN_SET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0xBC886D0)
#define NMJLMAOJEHN_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0xBC886F0)
#define NMJLMAOJEHN_SET_ID_OFFSET UNITYSDK_OFFSET(0xBC88650)
#define NMJLMAOJEHN_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xBC88750)
#define NMJLMAOJEHN_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0xBC88770)
#define NMJLMAOJEHN_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0xBC887D0)
#define NMJLMAOJEHN_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0xBC88790)
#define NMJLMAOJEHN_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0xBC887B0)
#define NMJLMAOJEHN_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0xBC88710)
#define NMJLMAOJEHN_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0xBC88730)
#define NMJLMAOJEHN_SET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0xBC886B0)
#define NMJLMAOJEHN_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xBC88690)
#define NMJLMAOJEHN_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0xBC89CF0)

	class NMJLMAOJEHN : public ::System::Object
	{
	public:
		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* _OnFailed_k__BackingField; // 0x10
		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* _OnItemFailed_k__BackingField; // 0x18
		::System::Action* MIBHJHBOPNM; // 0x20
		::System::String* HLINKIGMFMH; // 0x28
		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* GCIKKMGIPIO; // 0x38
		::System::String* EMKBAECEJEP; // 0x40
		::System::String* MNFCECOFEHK; // 0x48
		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* _OnStarting_k__BackingField; // 0x50
		::EJLIOMPMHHI* FEICCPBBIHG; // 0x58
		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* _OnSucceed_k__BackingField; // 0x60
		::CDPCDCCGEJN* HLPMFMHBAMP; // 0x68
		::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x70
		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x78
		::System::String* JOBNMJHAJIF; // 0x80
		::JIAFOPELMJJ* MIPPNCGOJNM; // 0x88
		::RPG::Client::TextID EMPDPJLAHHG; // 0x90
		::System::Int32 _FailureCount_k__BackingField; // 0xA0
		::System::Int32 _SuccessCount_k__BackingField; // 0xA4
		::RPG::Client::NotifyType BBMGOLIHLMD; // 0xA8
		::System::Int32 ECNABJDGLFH; // 0xAC
		::RPG::Client::FailedType OAMKPPGDDIM; // 0xB0
		::RPG::Client::ProgressID _ID_k__BackingField; // 0xB4
		::System::Int32 _TotalCount_k__BackingField; // 0xB8
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID OFFMEOODAED; // 0xC0
		::RPG::Client::NotifyType DFIHEOOHNPO; // 0xD0
		::System::Int32 _FinishCount_k__BackingField; // 0xD4
		::System::Void _ctor(::RPG::Client::ProgressID a1, ::EJLIOMPMHHI* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID, ::EJLIOMPMHHI*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_GETTYPENAME_OFFSET))(this);
		}

		::RPG::Client::ProgressID get_ID()
		{
			return ((::RPG::Client::ProgressID(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::RPG::Client::ProgressID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_SET_ID_OFFSET))(this, a1);
		}

		::EJLIOMPMHHI* get_RootQueue()
		{
			return ((::EJLIOMPMHHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_GET_ROOTQUEUE_OFFSET))(this);
		}

		::PFKBJGECBDE* get_ActionSystem()
		{
			return ((::PFKBJGECBDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_GET_ACTIONSYSTEM_OFFSET))(this);
		}

		::System::Int32 get_TotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_SET_TOTALCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_SuccessCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_GET_SUCCESSCOUNT_OFFSET))(this);
		}

		::System::Void set_SuccessCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_SET_SUCCESSCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_FailureCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_GET_FAILURECOUNT_OFFSET))(this);
		}

		::System::Void set_FailureCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_SET_FAILURECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_FinishCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_GET_FINISHCOUNT_OFFSET))(this);
		}

		::System::Void set_FinishCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_SET_FINISHCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* get_OnStarting()
		{
			return ((::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_GET_ONSTARTING_OFFSET))(this);
		}

		::System::Void set_OnStarting(::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>*))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_SET_ONSTARTING_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* get_OnSucceed()
		{
			return ((::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_GET_ONSUCCEED_OFFSET))(this);
		}

		::System::Void set_OnSucceed(::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>*))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_SET_ONSUCCEED_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* get_OnFailed()
		{
			return ((::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_GET_ONFAILED_OFFSET))(this);
		}

		::System::Void set_OnFailed(::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>*))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_SET_ONFAILED_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>* get_OnFinish()
		{
			return ((::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_GET_ONFINISH_OFFSET))(this);
		}

		::System::Void set_OnFinish(::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>*))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_SET_ONFINISH_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* get_OnItemStarting()
		{
			return ((::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_GET_ONITEMSTARTING_OFFSET))(this);
		}

		::System::Void set_OnItemStarting(::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>*))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_SET_ONITEMSTARTING_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* get_OnItemSucceed()
		{
			return ((::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_GET_ONITEMSUCCEED_OFFSET))(this);
		}

		::System::Void set_OnItemSucceed(::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>*))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_SET_ONITEMSUCCEED_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* get_OnItemFailed()
		{
			return ((::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_GET_ONITEMFAILED_OFFSET))(this);
		}

		::System::Void set_OnItemFailed(::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>*))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_SET_ONITEMFAILED_OFFSET))(this, a1);
		}

		::NMJLMAOJEHN* ABNOOIBPKIL(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::IList_1<::System::String*>* a3)
		{
			return ((::NMJLMAOJEHN*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_ABNOOIBPKIL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OPALKEIMPFB(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2, ::System::Collections::Generic::IList_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_OPALKEIMPFB_OFFSET))(this, a1, a2, a3);
		}

		::NMJLMAOJEHN* MBJMFAKNPAI(::System::Action* a1)
		{
			return ((::NMJLMAOJEHN*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_MBJMFAKNPAI_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_EXECUTE_OFFSET))(this);
		}

		::System::Void UpdateProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_UPDATEPROGRESS_OFFSET))(this);
		}

		::System::Void HOGLGBBBFJM(::RPG::Client::NotifyType a1, ::System::String* a2, ::RPG::Client::TextID a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::String*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_HOGLGBBBFJM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DCAACILHAOG(::KGPCBBIOGLB* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KGPCBBIOGLB*, ::System::Object*))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_DCAACILHAOG_OFFSET))(this, a1, a2);
		}

		::System::Void DoSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_DOSUCCEED_OFFSET))(this);
		}

		::System::Void DoFailed(::HIAMBDKHMIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIAMBDKHMIJ*))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_DOFAILED_OFFSET))(this, a1);
		}

	};
