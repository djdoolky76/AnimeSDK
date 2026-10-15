#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/System/Object.h"
class DDBLIDNKEAD;
class EJLIOMPMHHI;
class HGCEOEHGPPE;
class HIAMBDKHMIJ;
class KBFAONGCPGI;
class KGPCBBIOGLB;
class PFKBJGECBDE;
namespace RPG::Client { template <typename T1, typename T2, typename T3, typename T4> class ActionEvent_4; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class ActionEvent_3; }
namespace RPG::Client { template <typename T1, typename T2> class ActionEvent_2; }
namespace RPG::Client { template <typename T> class ActionEvent_1; }
namespace System { class Delegate; }
namespace System { class Exception; }
namespace System { class IDisposable; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }

#define EMILHGPLJHC_AJDFCJPLKMF_OFFSET UNITYSDK_OFFSET(0x1553C450)
#define EMILHGPLJHC_BNBHHHOOCAE_1_OFFSET UNITYSDK_OFFSET(0x1553CE00)
#define EMILHGPLJHC_BNBHHHOOCAE_OFFSET UNITYSDK_OFFSET(0x1553CD30)
#define EMILHGPLJHC_CANMIEJNFCE_OFFSET UNITYSDK_OFFSET(0x1553DB00)
#define EMILHGPLJHC_CJODBEJGFLH_OFFSET UNITYSDK_OFFSET(0x1553CC10)
#define EMILHGPLJHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1553C4C0)
#define EMILHGPLJHC_DOFAILED_OFFSET UNITYSDK_OFFSET(0x1553C400)
#define EMILHGPLJHC_DOSUCCEED_OFFSET UNITYSDK_OFFSET(0x1553C3C0)
#define EMILHGPLJHC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1553C380)
#define EMILHGPLJHC_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x1553C130)
#define EMILHGPLJHC_GET_ACTIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x1553C1D0)
#define EMILHGPLJHC_GET_FAILURECOUNT_OFFSET UNITYSDK_OFFSET(0x1553C1B0)
#define EMILHGPLJHC_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x1553C1C0)
#define EMILHGPLJHC_GET_ID_OFFSET UNITYSDK_OFFSET(0x1553C180)
#define EMILHGPLJHC_GET_ONDATAFAILED_OFFSET UNITYSDK_OFFSET(0x1553C280)
#define EMILHGPLJHC_GET_ONDATASTARTING_OFFSET UNITYSDK_OFFSET(0x1553C240)
#define EMILHGPLJHC_GET_ONDATASUCCEED_OFFSET UNITYSDK_OFFSET(0x1553C260)
#define EMILHGPLJHC_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x1553C2A0)
#define EMILHGPLJHC_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1553C2C0)
#define EMILHGPLJHC_GET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x1553C320)
#define EMILHGPLJHC_GET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x1553C2E0)
#define EMILHGPLJHC_GET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x1553C300)
#define EMILHGPLJHC_GET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x1553C200)
#define EMILHGPLJHC_GET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x1553C220)
#define EMILHGPLJHC_GET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0x1553C1E0)
#define EMILHGPLJHC_GET_SUCCESSCOUNT_OFFSET UNITYSDK_OFFSET(0x1553C1A0)
#define EMILHGPLJHC_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1553C190)
#define EMILHGPLJHC_HHBMBAJFIGD_OFFSET UNITYSDK_OFFSET(0x1553C840)
#define EMILHGPLJHC_IBEOCLKEIKO_OFFSET UNITYSDK_OFFSET(0x1553DA00)
#define EMILHGPLJHC_KDEJOBNCPIJ_OFFSET UNITYSDK_OFFSET(0x1553C9D0)
#define EMILHGPLJHC_LBBCLGMKKMO_OFFSET UNITYSDK_OFFSET(0x1553C740)
#define EMILHGPLJHC_LCHGLLKKAJC_OFFSET UNITYSDK_OFFSET(0x1553C890)
#define EMILHGPLJHC_LNJCPCFDGBJ_OFFSET UNITYSDK_OFFSET(0x1553C7D0)
#define EMILHGPLJHC_LPFCJMHMKAE_OFFSET UNITYSDK_OFFSET(0x1553CC60)
#define EMILHGPLJHC_MDEGPBIKPML_OFFSET UNITYSDK_OFFSET(0x1553C950)
#define EMILHGPLJHC_MMBPPOPEKOD_OFFSET UNITYSDK_OFFSET(0x1553D630)
#define EMILHGPLJHC_SET_ONDATAFAILED_OFFSET UNITYSDK_OFFSET(0x1553C290)
#define EMILHGPLJHC_SET_ONDATASTARTING_OFFSET UNITYSDK_OFFSET(0x1553C250)
#define EMILHGPLJHC_SET_ONDATASUCCEED_OFFSET UNITYSDK_OFFSET(0x1553C270)
#define EMILHGPLJHC_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0x1553C2B0)
#define EMILHGPLJHC_SET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1553C2D0)
#define EMILHGPLJHC_SET_ONITEMFAILED_OFFSET UNITYSDK_OFFSET(0x1553C330)
#define EMILHGPLJHC_SET_ONITEMSTARTING_OFFSET UNITYSDK_OFFSET(0x1553C2F0)
#define EMILHGPLJHC_SET_ONITEMSUCCEED_OFFSET UNITYSDK_OFFSET(0x1553C310)
#define EMILHGPLJHC_SET_ONSTARTING_OFFSET UNITYSDK_OFFSET(0x1553C210)
#define EMILHGPLJHC_SET_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x1553C230)
#define EMILHGPLJHC_SET_ROOTQUEUE_OFFSET UNITYSDK_OFFSET(0x1553C1F0)
#define EMILHGPLJHC_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1553C340)
#define EMILHGPLJHC__ADDERRORLOG_B__89_0_OFFSET UNITYSDK_OFFSET(0x1553EDF0)
#define EMILHGPLJHC__ADDPROGRESSLOG_B__90_0_OFFSET UNITYSDK_OFFSET(0x1553FF50)
#define EMILHGPLJHC__ADDPROGRESSLOG_B__90_1_OFFSET UNITYSDK_OFFSET(0x1553FF60)
#define EMILHGPLJHC__ADDPROGRESSLOG_B__90_2_OFFSET UNITYSDK_OFFSET(0x15540D90)
#define EMILHGPLJHC__ADDPROGRESSLOG_B__90_3_OFFSET UNITYSDK_OFFSET(0x155427C0)
#define EMILHGPLJHC__ADDPROGRESSLOG_B__90_4_OFFSET UNITYSDK_OFFSET(0x15542B50)

inline static constexpr unsigned int EMILHGPLJHC_TypeDefinitionIndex = 59551;

	class EMILHGPLJHC : public ::System::Object
	{
	public:
		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* _OnItemSucceed_k__BackingField; // 0x10
		::RPG::Client::ActionEvent_2<::HGCEOEHGPPE*, ::KGPCBBIOGLB*>* _OnDataSucceed_k__BackingField; // 0x18
		::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>* _OnFinish_k__BackingField; // 0x20
		::DDBLIDNKEAD* IIJOCCPCGDN; // 0x28
		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* _OnItemFailed_k__BackingField; // 0x30
		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* _OnStarting_k__BackingField; // 0x38
		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* _OnFailed_k__BackingField; // 0x40
		::RPG::Client::ActionEvent_2<::HGCEOEHGPPE*, ::KGPCBBIOGLB*>* _OnDataStarting_k__BackingField; // 0x48
		::System::String* PHAIJPONGME; // 0x50
		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* _OnItemStarting_k__BackingField; // 0x58
		::EJLIOMPMHHI* _RootQueue_k__BackingField; // 0x60
		::DDBLIDNKEAD* HMOEAILBCEO; // 0x68
		::DDBLIDNKEAD* BINOOJJCGCP; // 0x70
		::DDBLIDNKEAD* ALOOOHIGPDK; // 0x78
		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* _OnSucceed_k__BackingField; // 0x80
		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* _OnDataFailed_k__BackingField; // 0x88
		::System::String* GILGENBPDLD; // 0x90
		::System::String* OENAMINOLLF; // 0x98
		::DDBLIDNKEAD* HKIKAACGEJA; // 0xA0
		::System::Int32 BIFLMFPJKKB; // 0xA8
		::System::Void _ctor(::EJLIOMPMHHI* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EJLIOMPMHHI*, ::System::String*))((::PBYTE)hIl2Cpp + EMILHGPLJHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_GETTYPENAME_OFFSET))(this);
		}

		::RPG::Client::ProgressID get_ID()
		{
			return ((::RPG::Client::ProgressID(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_GET_ID_OFFSET))(this);
		}

		::System::Int32 get_TotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Int32 get_SuccessCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_GET_SUCCESSCOUNT_OFFSET))(this);
		}

		::System::Int32 get_FailureCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_GET_FAILURECOUNT_OFFSET))(this);
		}

		::System::Int32 get_FinishCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_GET_FINISHCOUNT_OFFSET))(this);
		}

		::PFKBJGECBDE* get_ActionSystem()
		{
			return ((::PFKBJGECBDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_GET_ACTIONSYSTEM_OFFSET))(this);
		}

		::EJLIOMPMHHI* get_RootQueue()
		{
			return ((::EJLIOMPMHHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_GET_ROOTQUEUE_OFFSET))(this);
		}

		::System::Void set_RootQueue(::EJLIOMPMHHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJLIOMPMHHI*))((::PBYTE)hIl2Cpp + EMILHGPLJHC_SET_ROOTQUEUE_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* get_OnStarting()
		{
			return ((::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_GET_ONSTARTING_OFFSET))(this);
		}

		::System::Void set_OnStarting(::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>*))((::PBYTE)hIl2Cpp + EMILHGPLJHC_SET_ONSTARTING_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* get_OnSucceed()
		{
			return ((::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_GET_ONSUCCEED_OFFSET))(this);
		}

		::System::Void set_OnSucceed(::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::HGCEOEHGPPE*>*))((::PBYTE)hIl2Cpp + EMILHGPLJHC_SET_ONSUCCEED_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_2<::HGCEOEHGPPE*, ::KGPCBBIOGLB*>* get_OnDataStarting()
		{
			return ((::RPG::Client::ActionEvent_2<::HGCEOEHGPPE*, ::KGPCBBIOGLB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_GET_ONDATASTARTING_OFFSET))(this);
		}

		::System::Void set_OnDataStarting(::RPG::Client::ActionEvent_2<::HGCEOEHGPPE*, ::KGPCBBIOGLB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_2<::HGCEOEHGPPE*, ::KGPCBBIOGLB*>*))((::PBYTE)hIl2Cpp + EMILHGPLJHC_SET_ONDATASTARTING_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_2<::HGCEOEHGPPE*, ::KGPCBBIOGLB*>* get_OnDataSucceed()
		{
			return ((::RPG::Client::ActionEvent_2<::HGCEOEHGPPE*, ::KGPCBBIOGLB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_GET_ONDATASUCCEED_OFFSET))(this);
		}

		::System::Void set_OnDataSucceed(::RPG::Client::ActionEvent_2<::HGCEOEHGPPE*, ::KGPCBBIOGLB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_2<::HGCEOEHGPPE*, ::KGPCBBIOGLB*>*))((::PBYTE)hIl2Cpp + EMILHGPLJHC_SET_ONDATASUCCEED_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* get_OnDataFailed()
		{
			return ((::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_GET_ONDATAFAILED_OFFSET))(this);
		}

		::System::Void set_OnDataFailed(::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>*))((::PBYTE)hIl2Cpp + EMILHGPLJHC_SET_ONDATAFAILED_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* get_OnFailed()
		{
			return ((::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_GET_ONFAILED_OFFSET))(this);
		}

		::System::Void set_OnFailed(::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>*))((::PBYTE)hIl2Cpp + EMILHGPLJHC_SET_ONFAILED_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>* get_OnFinish()
		{
			return ((::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_GET_ONFINISH_OFFSET))(this);
		}

		::System::Void set_OnFinish(::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_4<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode>*))((::PBYTE)hIl2Cpp + EMILHGPLJHC_SET_ONFINISH_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* get_OnItemStarting()
		{
			return ((::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_GET_ONITEMSTARTING_OFFSET))(this);
		}

		::System::Void set_OnItemStarting(::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>*))((::PBYTE)hIl2Cpp + EMILHGPLJHC_SET_ONITEMSTARTING_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* get_OnItemSucceed()
		{
			return ((::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_GET_ONITEMSUCCEED_OFFSET))(this);
		}

		::System::Void set_OnItemSucceed(::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_3<::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*>*))((::PBYTE)hIl2Cpp + EMILHGPLJHC_SET_ONITEMSUCCEED_OFFSET))(this, a1);
		}

		::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* get_OnItemFailed()
		{
			return ((::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_GET_ONITEMFAILED_OFFSET))(this);
		}

		::System::Void set_OnItemFailed(::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionEvent_1<::HIAMBDKHMIJ*>*))((::PBYTE)hIl2Cpp + EMILHGPLJHC_SET_ONITEMFAILED_OFFSET))(this, a1);
		}

		::System::Void UpdateProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_UPDATEPROGRESS_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_EXECUTE_OFFSET))(this);
		}

		::System::Void DoSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_DOSUCCEED_OFFSET))(this);
		}

		::System::Void DoFailed(::HIAMBDKHMIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIAMBDKHMIJ*))((::PBYTE)hIl2Cpp + EMILHGPLJHC_DOFAILED_OFFSET))(this, a1);
		}

		::System::Boolean AJDFCJPLKMF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_AJDFCJPLKMF_OFFSET))(this);
		}

		::System::String* LNJCPCFDGBJ(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EMILHGPLJHC_LNJCPCFDGBJ_OFFSET))(this, a1);
		}

		::System::IDisposable* HHBMBAJFIGD(::DDBLIDNKEAD* a1)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::DDBLIDNKEAD*))((::PBYTE)hIl2Cpp + EMILHGPLJHC_HHBMBAJFIGD_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerable* LCHGLLKKAJC(::DDBLIDNKEAD* a1)
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID, ::DDBLIDNKEAD*))((::PBYTE)hIl2Cpp + EMILHGPLJHC_LCHGLLKKAJC_OFFSET))(this, a1);
		}

		::System::Boolean MDEGPBIKPML(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EMILHGPLJHC_MDEGPBIKPML_OFFSET))(this, a1);
		}

		::System::String* KDEJOBNCPIJ(::HGCEOEHGPPE* a1)
		{
			return ((::System::String*(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + EMILHGPLJHC_KDEJOBNCPIJ_OFFSET))(this, a1);
		}

		::System::IDisposable* CJODBEJGFLH(::System::Delegate* a1, ::KBFAONGCPGI* a2)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::Delegate*, ::KBFAONGCPGI*))((::PBYTE)hIl2Cpp + EMILHGPLJHC_CJODBEJGFLH_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerable* LPFCJMHMKAE(::System::Delegate* a1, ::KBFAONGCPGI* a2)
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID, ::System::Delegate*, ::KBFAONGCPGI*))((::PBYTE)hIl2Cpp + EMILHGPLJHC_LPFCJMHMKAE_OFFSET))(this, a1, a2);
		}

		::System::Void BNBHHHOOCAE(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + EMILHGPLJHC_BNBHHHOOCAE_OFFSET))(this, a1);
		}

		::System::Void BNBHHHOOCAE_1(::HIAMBDKHMIJ* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIAMBDKHMIJ*, ::System::String*))((::PBYTE)hIl2Cpp + EMILHGPLJHC_BNBHHHOOCAE_1_OFFSET))(this, a1, a2);
		}

		::System::Void LBBCLGMKKMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_LBBCLGMKKMO_OFFSET))(this);
		}

		::System::Void MMBPPOPEKOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_MMBPPOPEKOD_OFFSET))(this);
		}

		::System::Void IBEOCLKEIKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC_IBEOCLKEIKO_OFFSET))(this);
		}

		::System::Void CANMIEJNFCE(::KGPCBBIOGLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGPCBBIOGLB*))((::PBYTE)hIl2Cpp + EMILHGPLJHC_CANMIEJNFCE_OFFSET))(this, a1);
		}

		::System::Void _AddErrorLog_b__89_0(::HIAMBDKHMIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIAMBDKHMIJ*))((::PBYTE)hIl2Cpp + EMILHGPLJHC__ADDERRORLOG_B__89_0_OFFSET))(this, a1);
		}

		::System::Void _AddProgressLog_b__90_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC__ADDPROGRESSLOG_B__90_0_OFFSET))(this);
		}

		::System::Void _AddProgressLog_b__90_1(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + EMILHGPLJHC__ADDPROGRESSLOG_B__90_1_OFFSET))(this, a1);
		}

		::System::Void _AddProgressLog_b__90_2(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + EMILHGPLJHC__ADDPROGRESSLOG_B__90_2_OFFSET))(this, a1);
		}

		::System::Void _AddProgressLog_b__90_3(::HGCEOEHGPPE* a1, ::KGPCBBIOGLB* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + EMILHGPLJHC__ADDPROGRESSLOG_B__90_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _AddProgressLog_b__90_4(::HGCEOEHGPPE* a1, ::KGPCBBIOGLB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*, ::KGPCBBIOGLB*))((::PBYTE)hIl2Cpp + EMILHGPLJHC__ADDPROGRESSLOG_B__90_4_OFFSET))(this, a1, a2);
		}

	};
