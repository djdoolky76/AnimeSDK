#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class EDIKPOPFJCM;
class EJLIOMPMHHI;
class HGCEOEHGPPE;
class HGDELEAHIJO;
class HIAMBDKHMIJ;
class JIAFOPELMJJ;
class KGPCBBIOGLB;
class KJHGBANLEIC;
class PFKBJGECBDE;
namespace RPG::Client { class VersionUpdateProgressInfo; }
namespace RPG::Client { template <typename T1, typename T2, typename T3, typename T4> class ActionEvent_4; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class ActionEvent_3; }
namespace RPG::Client { template <typename T> class ActionEvent_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EDIKPOPFJCM_CHMFHIFJJDO_OFFSET UNITYSDK_OFFSET(0x1331ED30)
#define EDIKPOPFJCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1331EEC0)
#define EDIKPOPFJCM_DOFAILED_OFFSET UNITYSDK_OFFSET(0x133209B0)
#define EDIKPOPFJCM_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0x13320420)
#define EDIKPOPFJCM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1331F2B0)
#define EDIKPOPFJCM_FIPDBFMPEKH_OFFSET UNITYSDK_OFFSET(0x1331F070)
#define EDIKPOPFJCM_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x1331ECA0)
#define EDIKPOPFJCM_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x1331ED50)
#define EDIKPOPFJCM_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x1331EDA0)
#define EDIKPOPFJCM_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x1331EDC0)
#define EDIKPOPFJCM_GET_ID_OFFSET UNITYSDK_OFFSET(0x1331ED10)
#define EDIKPOPFJCM_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x1331EE20)
#define EDIKPOPFJCM_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1331EE40)
#define EDIKPOPFJCM_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x1331EEA0)
#define EDIKPOPFJCM_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x1331EE60)
#define EDIKPOPFJCM_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x1331EE80)
#define EDIKPOPFJCM_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x1331EDE0)
#define EDIKPOPFJCM_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x1331EE00)
#define EDIKPOPFJCM_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0x1331ED40)
#define EDIKPOPFJCM_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x1331ED80)
#define EDIKPOPFJCM_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1331ED60)
#define EDIKPOPFJCM_GGGPEKKMBHP_OFFSET UNITYSDK_OFFSET(0x13320D60)
#define EDIKPOPFJCM_HOGLGBBBFJM_OFFSET UNITYSDK_OFFSET(0x13320B60)
#define EDIKPOPFJCM_LCAMBEMBCBB_OFFSET UNITYSDK_OFFSET(0x13320590)
#define EDIKPOPFJCM_OGBECCFABIP_OFFSET UNITYSDK_OFFSET(0x13320820)
#define EDIKPOPFJCM_PHIDJEINBFH_OFFSET UNITYSDK_OFFSET(0x13320890)
#define EDIKPOPFJCM_SET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x1331EDB0)
#define EDIKPOPFJCM_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x1331EDD0)
#define EDIKPOPFJCM_SET_ID_OFFSET UNITYSDK_OFFSET(0x1331ED20)
#define EDIKPOPFJCM_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x1331EE30)
#define EDIKPOPFJCM_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1331EE50)
#define EDIKPOPFJCM_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x1331EEB0)
#define EDIKPOPFJCM_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x1331EE70)
#define EDIKPOPFJCM_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x1331EE90)
#define EDIKPOPFJCM_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x1331EDF0)
#define EDIKPOPFJCM_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x1331EE10)
#define EDIKPOPFJCM_SET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x1331ED90)
#define EDIKPOPFJCM_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1331ED70)
#define EDIKPOPFJCM_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x13320D00)

	class EDIKPOPFJCM : public ::System::Object
	{
	public:
		::KJHGBANLEIC* HLPMFMHBAMP; // 0x10
		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* _OnSucceed_k__BackingField; // 0x18
		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* _OnItemFailed_k__BackingField; // 0x20
		::System::String* EMKBAECEJEP; // 0x28
		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* AALBFNGDCGI; // 0x38
		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* _OnFailed_k__BackingField; // 0x40
		::JIAFOPELMJJ* MIPPNCGOJNM; // 0x48
		::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x50
		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x58
		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* _OnStarting_k__BackingField; // 0x60
		::EJLIOMPMHHI* FEICCPBBIHG; // 0x68
		::System::String* MNFCECOFEHK; // 0x70
		::RPG::Client::TextID OFFMEOODAED; // 0x78
		::RPG::Client::NotifyType BBMGOLIHLMD; // 0x88
		::System::Int32 IKMIGDGILIB; // 0x8C
		::System::Int32 _FinishCount_k__BackingField; // 0x90
		::System::Int32 _TotalCount_k__BackingField; // 0x94
		::RPG::Client::NotifyType DFIHEOOHNPO; // 0x98
		::System::Byte _padding0[0x4];
		::System::Int64 AMGIJIELHFI; // 0xA0
		::RPG::Client::TextID EMPDPJLAHHG; // 0xA8
		::System::Boolean LDGJHAPDMLM; // 0xB8
		::System::Boolean EFLEIEELLLI; // 0xB9
		::System::Byte _padding1[0x2];
		::RPG::Client::ProgressID _ID_k__BackingField; // 0xBC
		::System::Int32 _FailureCount_k__BackingField; // 0xC0
		::System::Int32 _SuccessCount_k__BackingField; // 0xC4
		::System::Void _ctor(::RPG::Client::ProgressID a1, ::EJLIOMPMHHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID, ::EJLIOMPMHHI*))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_GETTYPENAME_OFFSET))(this);
		}

		::RPG::Client::ProgressID get_ID()
		{
			return ((::RPG::Client::ProgressID(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::RPG::Client::ProgressID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_SET_ID_OFFSET))(this, a1);
		}

		::System::Int64 CHMFHIFJJDO()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_CHMFHIFJJDO_OFFSET))(this);
		}

		::EJLIOMPMHHI* get_RootQueue()
		{
			return ((::EJLIOMPMHHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_GET_ROOTQUEUE_OFFSET))(this);
		}

		::PFKBJGECBDE* get_ActionSystem()
		{
			return ((::PFKBJGECBDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_GET_ACTIONSYSTEM_OFFSET))(this);
		}

		::System::Int32 get_TotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_SET_TOTALCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_SuccessCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_GET_SUCCESSCOUNT_OFFSET))(this);
		}

		::System::Void set_SuccessCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_SET_SUCCESSCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_FailureCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_GET_FAILURECOUNT_OFFSET))(this);
		}

		::System::Void set_FailureCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_SET_FAILURECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_FinishCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_GET_FINISHCOUNT_OFFSET))(this);
		}

		::System::Void set_FinishCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_SET_FINISHCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* get_OnStarting()
		{
			return ((::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_GET_ONSTARTING_OFFSET))(this);
		}

		::System::Void set_OnStarting(::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>*))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_SET_ONSTARTING_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* get_OnSucceed()
		{
			return ((::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_GET_ONSUCCEED_OFFSET))(this);
		}

		::System::Void set_OnSucceed(::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>*))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_SET_ONSUCCEED_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* get_OnFailed()
		{
			return ((::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_GET_ONFAILED_OFFSET))(this);
		}

		::System::Void set_OnFailed(::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>*))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_SET_ONFAILED_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>* get_OnFinish()
		{
			return ((::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_GET_ONFINISH_OFFSET))(this);
		}

		::System::Void set_OnFinish(::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>*))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_SET_ONFINISH_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* get_OnItemStarting()
		{
			return ((::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_GET_ONITEMSTARTING_OFFSET))(this);
		}

		::System::Void set_OnItemStarting(::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>*))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_SET_ONITEMSTARTING_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* get_OnItemSucceed()
		{
			return ((::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_GET_ONITEMSUCCEED_OFFSET))(this);
		}

		::System::Void set_OnItemSucceed(::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>*))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_SET_ONITEMSUCCEED_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* get_OnItemFailed()
		{
			return ((::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_GET_ONITEMFAILED_OFFSET))(this);
		}

		::System::Void set_OnItemFailed(::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>*))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_SET_ONITEMFAILED_OFFSET))(this, a1);
		}

		::EDIKPOPFJCM* FIPDBFMPEKH(::KGPCBBIOGLB* a1, ::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::EDIKPOPFJCM*(*)(::PVOID, ::KGPCBBIOGLB*, ::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_FIPDBFMPEKH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_EXECUTE_OFFSET))(this);
		}

		::System::Void OGBECCFABIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_OGBECCFABIP_OFFSET))(this);
		}

		::System::Boolean LCAMBEMBCBB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_LCAMBEMBCBB_OFFSET))(this);
		}

		::System::Void PHIDJEINBFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_PHIDJEINBFH_OFFSET))(this, a1);
		}

		::System::Void DoFailed(::HIAMBDKHMIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIAMBDKHMIJ*))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_DOFAILED_OFFSET))(this, a1);
		}

		::System::Void DoSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_DOSUCCEED_OFFSET))(this);
		}

		::System::Void UpdateProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_UPDATEPROGRESS_OFFSET))(this);
		}

		::System::Void HOGLGBBBFJM(::RPG::Client::NotifyType a1, ::System::String* a2, ::RPG::Client::TextID a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::String*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_HOGLGBBBFJM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GGGPEKKMBHP(::RPG::Client::VersionUpdateProgressInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VersionUpdateProgressInfo*))((::PBYTE)hIl2Cpp + EDIKPOPFJCM_GGGPEKKMBHP_OFFSET))(this, a1);
		}

	};
