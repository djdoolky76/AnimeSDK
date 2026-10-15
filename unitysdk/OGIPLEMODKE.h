#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/System/Object.h"
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
namespace System { template <typename T1, typename T2> class Func_2; }

#define OGIPLEMODKE_CTOR_1_OFFSET UNITYSDK_OFFSET(0xBE502E0)
#define OGIPLEMODKE_CTOR_OFFSET UNITYSDK_OFFSET(0xBE50150)
#define OGIPLEMODKE_DOFAILED_OFFSET UNITYSDK_OFFSET(0xBE510D0)
#define OGIPLEMODKE_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0xBE50DC0)
#define OGIPLEMODKE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBE50460)
#define OGIPLEMODKE_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xBE4FEE0)
#define OGIPLEMODKE_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0xBE4FFE0)
#define OGIPLEMODKE_GET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0xBE4FF80)
#define OGIPLEMODKE_GET_CONTENTHASH_OFFSET UNITYSDK_OFFSET(0xBE4FFA0)
#define OGIPLEMODKE_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0xBE50030)
#define OGIPLEMODKE_GET_FILESIZE_OFFSET UNITYSDK_OFFSET(0xBE4FFC0)
#define OGIPLEMODKE_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0xBE50050)
#define OGIPLEMODKE_GET_ID_OFFSET UNITYSDK_OFFSET(0xBE4FF50)
#define OGIPLEMODKE_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xBE500B0)
#define OGIPLEMODKE_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0xBE500D0)
#define OGIPLEMODKE_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0xBE50130)
#define OGIPLEMODKE_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0xBE500F0)
#define OGIPLEMODKE_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0xBE50110)
#define OGIPLEMODKE_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0xBE50070)
#define OGIPLEMODKE_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0xBE50090)
#define OGIPLEMODKE_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0xBE4FF70)
#define OGIPLEMODKE_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0xBE50010)
#define OGIPLEMODKE_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xBE4FFF0)
#define OGIPLEMODKE_OGBECCFABIP_OFFSET UNITYSDK_OFFSET(0xBE51250)
#define OGIPLEMODKE_SET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0xBE4FF90)
#define OGIPLEMODKE_SET_CONTENTHASH_OFFSET UNITYSDK_OFFSET(0xBE4FFB0)
#define OGIPLEMODKE_SET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0xBE50040)
#define OGIPLEMODKE_SET_FILESIZE_OFFSET UNITYSDK_OFFSET(0xBE4FFD0)
#define OGIPLEMODKE_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0xBE50060)
#define OGIPLEMODKE_SET_ID_OFFSET UNITYSDK_OFFSET(0xBE4FF60)
#define OGIPLEMODKE_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xBE500C0)
#define OGIPLEMODKE_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0xBE500E0)
#define OGIPLEMODKE_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0xBE50140)
#define OGIPLEMODKE_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0xBE50100)
#define OGIPLEMODKE_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0xBE50120)
#define OGIPLEMODKE_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0xBE50080)
#define OGIPLEMODKE_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0xBE500A0)
#define OGIPLEMODKE_SET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0xBE50020)
#define OGIPLEMODKE_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xBE50000)
#define OGIPLEMODKE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBE51300)
#define OGIPLEMODKE_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0xBE512C0)

inline static constexpr unsigned int OGIPLEMODKE_TypeDefinitionIndex = 59560;

	class OGIPLEMODKE : public ::System::Object
	{
	public:
		::System::String* _AssetName_k__BackingField; // 0x10
		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* _OnFailed_k__BackingField; // 0x18
		::CFAFCENLLLD* NMONANBKHDM; // 0x20
		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* _OnStarting_k__BackingField; // 0x28
		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x30
		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x38
		::System::Func_2<::JIAFOPELMJJ*, ::RPG::Client::ExeCode>* AHPAGHBCLIL; // 0x40
		::EJLIOMPMHHI* FEICCPBBIHG; // 0x48
		::KGPCBBIOGLB* APPIHABBCGK; // 0x50
		::KJHGBANLEIC* HLPMFMHBAMP; // 0x58
		::JIAFOPELMJJ* MIPPNCGOJNM; // 0x60
		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* _OnItemFailed_k__BackingField; // 0x68
		::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x70
		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* _OnSucceed_k__BackingField; // 0x78
		::System::Int32 _FailureCount_k__BackingField; // 0x80
		::System::Int32 _TotalCount_k__BackingField; // 0x84
		::System::Int64 _FileSize_k__BackingField; // 0x88
		::System::Int32 _SuccessCount_k__BackingField; // 0x90
		::RPG::Client::ProgressID _ID_k__BackingField; // 0x94
		::RPG::Client::ByteHash16 _ContentHash_k__BackingField; // 0x98
		::System::Int32 _FinishCount_k__BackingField; // 0xA8
		::System::Void _ctor(::RPG::Client::ProgressID a1, ::EJLIOMPMHHI* a2, ::KGPCBBIOGLB* a3, ::System::String* a4, ::RPG::Client::ByteHash16 a5, ::System::Int64 a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID, ::EJLIOMPMHHI*, ::KGPCBBIOGLB*, ::System::String*, ::RPG::Client::ByteHash16, ::System::Int64))((::PBYTE)hIl2Cpp + OGIPLEMODKE_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_1(::RPG::Client::ProgressID a1, ::EJLIOMPMHHI* a2, ::KGPCBBIOGLB* a3, ::CFAFCENLLLD* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID, ::EJLIOMPMHHI*, ::KGPCBBIOGLB*, ::CFAFCENLLLD*))((::PBYTE)hIl2Cpp + OGIPLEMODKE_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_GETTYPENAME_OFFSET))(this);
		}

		::RPG::Client::ProgressID get_ID()
		{
			return ((::RPG::Client::ProgressID(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::RPG::Client::ProgressID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ProgressID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_SET_ID_OFFSET))(this, a1);
		}

		::EJLIOMPMHHI* get_RootQueue()
		{
			return ((::EJLIOMPMHHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_GET_ROOTQUEUE_OFFSET))(this);
		}

		::System::String* get_AssetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_GET_ASSETNAME_OFFSET))(this);
		}

		::System::Void set_AssetName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OGIPLEMODKE_SET_ASSETNAME_OFFSET))(this, a1);
		}

		::RPG::Client::ByteHash16 get_ContentHash()
		{
			return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_GET_CONTENTHASH_OFFSET))(this);
		}

		::System::Void set_ContentHash(::RPG::Client::ByteHash16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ByteHash16))((::PBYTE)hIl2Cpp + OGIPLEMODKE_SET_CONTENTHASH_OFFSET))(this, a1);
		}

		::System::Int64 get_FileSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_GET_FILESIZE_OFFSET))(this);
		}

		::System::Void set_FileSize(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + OGIPLEMODKE_SET_FILESIZE_OFFSET))(this, a1);
		}

		::PFKBJGECBDE* get_ActionSystem()
		{
			return ((::PFKBJGECBDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_GET_ACTIONSYSTEM_OFFSET))(this);
		}

		::System::Int32 get_TotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OGIPLEMODKE_SET_TOTALCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_SuccessCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_GET_SUCCESSCOUNT_OFFSET))(this);
		}

		::System::Void set_SuccessCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OGIPLEMODKE_SET_SUCCESSCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_FailureCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_GET_FAILURECOUNT_OFFSET))(this);
		}

		::System::Void set_FailureCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OGIPLEMODKE_SET_FAILURECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_FinishCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_GET_FINISHCOUNT_OFFSET))(this);
		}

		::System::Void set_FinishCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OGIPLEMODKE_SET_FINISHCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* get_OnStarting()
		{
			return ((::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_GET_ONSTARTING_OFFSET))(this);
		}

		::System::Void set_OnStarting(::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>*))((::PBYTE)hIl2Cpp + OGIPLEMODKE_SET_ONSTARTING_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* get_OnSucceed()
		{
			return ((::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_GET_ONSUCCEED_OFFSET))(this);
		}

		::System::Void set_OnSucceed(::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>*))((::PBYTE)hIl2Cpp + OGIPLEMODKE_SET_ONSUCCEED_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* get_OnFailed()
		{
			return ((::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_GET_ONFAILED_OFFSET))(this);
		}

		::System::Void set_OnFailed(::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>*))((::PBYTE)hIl2Cpp + OGIPLEMODKE_SET_ONFAILED_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>* get_OnFinish()
		{
			return ((::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_GET_ONFINISH_OFFSET))(this);
		}

		::System::Void set_OnFinish(::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>*))((::PBYTE)hIl2Cpp + OGIPLEMODKE_SET_ONFINISH_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* get_OnItemStarting()
		{
			return ((::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_GET_ONITEMSTARTING_OFFSET))(this);
		}

		::System::Void set_OnItemStarting(::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>*))((::PBYTE)hIl2Cpp + OGIPLEMODKE_SET_ONITEMSTARTING_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* get_OnItemSucceed()
		{
			return ((::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_GET_ONITEMSUCCEED_OFFSET))(this);
		}

		::System::Void set_OnItemSucceed(::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>*))((::PBYTE)hIl2Cpp + OGIPLEMODKE_SET_ONITEMSUCCEED_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* get_OnItemFailed()
		{
			return ((::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_GET_ONITEMFAILED_OFFSET))(this);
		}

		::System::Void set_OnItemFailed(::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>*))((::PBYTE)hIl2Cpp + OGIPLEMODKE_SET_ONITEMFAILED_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_EXECUTE_OFFSET))(this);
		}

		::System::Void OGBECCFABIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_OGBECCFABIP_OFFSET))(this);
		}

		::System::Void UpdateProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_UPDATEPROGRESS_OFFSET))(this);
		}

		::System::Void DoFailed(::HIAMBDKHMIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIAMBDKHMIJ*))((::PBYTE)hIl2Cpp + OGIPLEMODKE_DOFAILED_OFFSET))(this, a1);
		}

		::System::Void DoSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_DOSUCCEED_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIPLEMODKE_TOSTRING_OFFSET))(this);
		}

	};
