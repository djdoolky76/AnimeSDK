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
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NMJLMAOJEHN_ABNOOIBPKIL_OFFSET UNITYSDK_OFFSET(0xC571180)
#define NMJLMAOJEHN_CTOR_OFFSET UNITYSDK_OFFSET(0xC570FA0)
#define NMJLMAOJEHN_DCAACILHAOG_OFFSET UNITYSDK_OFFSET(0xC572640)
#define NMJLMAOJEHN_DOFAILED_OFFSET UNITYSDK_OFFSET(0xC572320)
#define NMJLMAOJEHN_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0xC5721B0)
#define NMJLMAOJEHN_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC571DE0)
#define NMJLMAOJEHN_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xC570D90)
#define NMJLMAOJEHN_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0xC570E30)
#define NMJLMAOJEHN_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0xC570E80)
#define NMJLMAOJEHN_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0xC570EA0)
#define NMJLMAOJEHN_GET_ID_OFFSET UNITYSDK_OFFSET(0xC570E00)
#define NMJLMAOJEHN_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xC570F00)
#define NMJLMAOJEHN_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0xC570F20)
#define NMJLMAOJEHN_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0xC570F80)
#define NMJLMAOJEHN_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0xC570F40)
#define NMJLMAOJEHN_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0xC570F60)
#define NMJLMAOJEHN_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0xC570EC0)
#define NMJLMAOJEHN_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0xC570EE0)
#define NMJLMAOJEHN_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0xC570E20)
#define NMJLMAOJEHN_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0xC570E60)
#define NMJLMAOJEHN_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xC570E40)
#define NMJLMAOJEHN_HOGLGBBBFJM_OFFSET UNITYSDK_OFFSET(0xC572510)
#define NMJLMAOJEHN_MBJMFAKNPAI_OFFSET UNITYSDK_OFFSET(0xC571D90)
#define NMJLMAOJEHN_OPALKEIMPFB_OFFSET UNITYSDK_OFFSET(0xC571750)
#define NMJLMAOJEHN_SET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0xC570E90)
#define NMJLMAOJEHN_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0xC570EB0)
#define NMJLMAOJEHN_SET_ID_OFFSET UNITYSDK_OFFSET(0xC570E10)
#define NMJLMAOJEHN_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xC570F10)
#define NMJLMAOJEHN_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0xC570F30)
#define NMJLMAOJEHN_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0xC570F90)
#define NMJLMAOJEHN_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0xC570F50)
#define NMJLMAOJEHN_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0xC570F70)
#define NMJLMAOJEHN_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0xC570ED0)
#define NMJLMAOJEHN_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0xC570EF0)
#define NMJLMAOJEHN_SET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0xC570E70)
#define NMJLMAOJEHN_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xC570E50)
#define NMJLMAOJEHN_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0xC5724B0)

inline static constexpr unsigned int NMJLMAOJEHN_TypeDefinitionIndex = 60825;

	class NMJLMAOJEHN : public ::System::Object
	{
	public:
		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x10
		::JIAFOPELMJJ* MIPPNCGOJNM; // 0x18
		::System::String* MNFCECOFEHK; // 0x20
		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* _OnStarting_k__BackingField; // 0x28
		::System::String* EMKBAECEJEP; // 0x30
		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x38
		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* _OnFailed_k__BackingField; // 0x40
		::CDPCDCCGEJN* HLPMFMHBAMP; // 0x48
		::System::String* HLINKIGMFMH; // 0x50
		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* _OnSucceed_k__BackingField; // 0x58
		::EJLIOMPMHHI* FEICCPBBIHG; // 0x60
		::System::Collections::Generic::List_1<::System::String*>* GCIKKMGIPIO; // 0x68
		::System::Action_1<::System::String*>* MIBHJHBOPNM; // 0x70
		::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x78
		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* _OnItemFailed_k__BackingField; // 0x80
		::System::String* JOBNMJHAJIF; // 0x88
		::RPG::Client::FailedType OAMKPPGDDIM; // 0x90
		::RPG::Client::NotifyType DFIHEOOHNPO; // 0x94
		::RPG::Client::ProgressID _ID_k__BackingField; // 0x98
		::System::Int32 _SuccessCount_k__BackingField; // 0x9C
		::System::Int32 _FailureCount_k__BackingField; // 0xA0
		::RPG::Client::NotifyType BBMGOLIHLMD; // 0xA4
		::RPG::Client::TextID OFFMEOODAED; // 0xA8
		::System::Int32 ECNABJDGLFH; // 0xB8
		::System::Int32 _TotalCount_k__BackingField; // 0xBC
		::System::Int32 _FinishCount_k__BackingField; // 0xC0
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID EMPDPJLAHHG; // 0xC8
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

		::NMJLMAOJEHN* MBJMFAKNPAI(::System::Action_1<::System::String*>* a1)
		{
			return ((::NMJLMAOJEHN*(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + NMJLMAOJEHN_MBJMFAKNPAI_OFFSET))(this, a1);
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
