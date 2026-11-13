#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
class DBNGNLBAOAG;
class PAGLMEAGPPC;
namespace Proto { class ItemList; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define PKBDEEGKBLK_ADD_ONCLAIMREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0x147AEED0)
#define PKBDEEGKBLK_ADD_ONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0x147AEC70)
#define PKBDEEGKBLK_ADD_ONGETDATAFINISHED_OFFSET UNITYSDK_OFFSET(0x147AEA10)
#define PKBDEEGKBLK_BJKOJJLOKCI_OFFSET UNITYSDK_OFFSET(0x147AE8D0)
#define PKBDEEGKBLK_CTOR_OFFSET UNITYSDK_OFFSET(0x147AE8C0)
#define PKBDEEGKBLK_LNFJOJJFCJD_OFFSET UNITYSDK_OFFSET(0x147AEAD0)
#define PKBDEEGKBLK_OPPMBJGAOGD_OFFSET UNITYSDK_OFFSET(0x147AED30)
#define PKBDEEGKBLK_REMOVE_ONCLAIMREWARDFINISHED_OFFSET UNITYSDK_OFFSET(0x147AEF30)
#define PKBDEEGKBLK_REMOVE_ONDRAWFINISHED_OFFSET UNITYSDK_OFFSET(0x147AECD0)
#define PKBDEEGKBLK_REMOVE_ONGETDATAFINISHED_OFFSET UNITYSDK_OFFSET(0x147AEA70)
#define PKBDEEGKBLK__REQUESTGETDATA_B__3_0_OFFSET UNITYSDK_OFFSET(0x147AEF90)

inline static constexpr unsigned int PKBDEEGKBLK_TypeDefinitionIndex = 62782;

	class PKBDEEGKBLK : public ::BHPMNMMGLHI
	{
	public:
		::System::Action* OnGetDataFinished; // 0x20
		::System::Action_1<::System::Int32>* OnDrawFinished; // 0x28
		::System::Action_2<::System::Int32, ::Proto::ItemList*>* OnClaimRewardFinished; // 0x30
		::DBNGNLBAOAG* GKBFBLOIDAL; // 0x38
		// static const ::System::Object AGGMHCAANML; // 0x0
		// static const ::System::Object PKJNMNHJIEF; // 0x0
		// static const ::System::Object DMLFEJBOAOD; // 0x0
		::System::Void _ctor(::DBNGNLBAOAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBNGNLBAOAG*))((::PBYTE)hIl2Cpp + PKBDEEGKBLK_CTOR_OFFSET))(this, a1);
		}

		::System::Void BJKOJJLOKCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDEEGKBLK_BJKOJJLOKCI_OFFSET))(this);
		}

		::System::Void add_OnGetDataFinished(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PKBDEEGKBLK_ADD_ONGETDATAFINISHED_OFFSET))(this, a1);
		}

		::System::Void remove_OnGetDataFinished(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PKBDEEGKBLK_REMOVE_ONGETDATAFINISHED_OFFSET))(this, a1);
		}

		::System::Void LNFJOJJFCJD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PKBDEEGKBLK_LNFJOJJFCJD_OFFSET))(this, a1);
		}

		::System::Void add_OnDrawFinished(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + PKBDEEGKBLK_ADD_ONDRAWFINISHED_OFFSET))(this, a1);
		}

		::System::Void remove_OnDrawFinished(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + PKBDEEGKBLK_REMOVE_ONDRAWFINISHED_OFFSET))(this, a1);
		}

		::System::Void OPPMBJGAOGD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PKBDEEGKBLK_OPPMBJGAOGD_OFFSET))(this, a1);
		}

		::System::Void add_OnClaimRewardFinished(::System::Action_2<::System::Int32, ::Proto::ItemList*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::Proto::ItemList*>*))((::PBYTE)hIl2Cpp + PKBDEEGKBLK_ADD_ONCLAIMREWARDFINISHED_OFFSET))(this, a1);
		}

		::System::Void remove_OnClaimRewardFinished(::System::Action_2<::System::Int32, ::Proto::ItemList*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::Proto::ItemList*>*))((::PBYTE)hIl2Cpp + PKBDEEGKBLK_REMOVE_ONCLAIMREWARDFINISHED_OFFSET))(this, a1);
		}

		::System::Void _RequestGetData_b__3_0(::PAGLMEAGPPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAGLMEAGPPC*))((::PBYTE)hIl2Cpp + PKBDEEGKBLK__REQUESTGETDATA_B__3_0_OFFSET))(this, a1);
		}

	};
