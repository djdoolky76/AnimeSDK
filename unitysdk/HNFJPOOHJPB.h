#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLLLACFEBJF.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/EOAHOOCNDHM.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define HNFJPOOHJPB_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x10121540)
#define HNFJPOOHJPB_APEEIKLAFMB_OFFSET UNITYSDK_OFFSET(0x10121560)
#define HNFJPOOHJPB_BEIFOCPIDGB_OFFSET UNITYSDK_OFFSET(0x10121510)
#define HNFJPOOHJPB_FJEMCJJOEND_1_OFFSET UNITYSDK_OFFSET(0x10120F60)
#define HNFJPOOHJPB_FNFEOFDGGJP_OFFSET UNITYSDK_OFFSET(0x10120A00)
#define HNFJPOOHJPB_GONGHOPLHBD_OFFSET UNITYSDK_OFFSET(0x10121530)
#define HNFJPOOHJPB_HEBCONNFCDN_OFFSET UNITYSDK_OFFSET(0x101214F0)
#define HNFJPOOHJPB_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x10121500)
#define HNFJPOOHJPB_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x101214E0)
#define HNFJPOOHJPB_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0x10121520)
#define HNFJPOOHJPB_MLMLEKKJJID_OFFSET UNITYSDK_OFFSET(0x10121550)
#define HNFJPOOHJPB_NAPNNHMIGIJ_OFFSET UNITYSDK_OFFSET(0x101205B0)
#define HNFJPOOHJPB_ODCEJKEOLIA_1_OFFSET UNITYSDK_OFFSET(0x10120B40)
#define HNFJPOOHJPB_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x101203F0)
#define HNFJPOOHJPB_ONDETACH_OFFSET UNITYSDK_OFFSET(0x10120700)
#define HNFJPOOHJPB_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10120AC0)
#define HNFJPOOHJPB_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10120890)
#define HNFJPOOHJPB_ONREADY_OFFSET UNITYSDK_OFFSET(0x10120E20)
#define HNFJPOOHJPB_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x101206B0)
#define HNFJPOOHJPB_RECEIVEGRAPHCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x10121250)
#define HNFJPOOHJPB_RECEIVEGRAPHEVENT_OFFSET UNITYSDK_OFFSET(0x101211E0)
#define HNFJPOOHJPB__CTOR_OFFSET UNITYSDK_OFFSET(0x10121460)

inline static constexpr unsigned int HNFJPOOHJPB_TypeDefinitionIndex = 52692;

class HNFJPOOHJPB
{
public:
	::System::Threading::CancellationTokenSource* PJNJEBFCCAM; // 0x38
	::System::String* KMEBJPAEBCK; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* LKAEJGAPLMJ; // 0x48
	::System::Threading::CancellationTokenSource* KGDDIGFIPDK; // 0x50
	::System::Int32 NALFHCHDLHD; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFJPOOHJPB__CTOR_OFFSET))(this);
	}

	::System::Void OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_ONAWAKE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnReady()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_ONREADY_OFFSET))(this);
	}

	::System::Void ReceiveGraphEvent(::DLLLACFEBJF KPIAFDELPJL, ::System::Boolean BAIHKLNIOHN)
	{
		return ((::System::Void(*)(::PVOID, ::DLLLACFEBJF, ::System::Boolean))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_RECEIVEGRAPHEVENT_OFFSET))(this, KPIAFDELPJL, BAIHKLNIOHN);
	}

	::System::Void ReceiveGraphCustomEvent(::System::String* KPIAFDELPJL, ::System::Collections::Generic::List_1<::EOAHOOCNDHM>* DJLOKMMLFJC, ::System::Boolean BAIHKLNIOHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::EOAHOOCNDHM>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_RECEIVEGRAPHCUSTOMEVENT_OFFSET))(this, KPIAFDELPJL, DJLOKMMLFJC, BAIHKLNIOHN);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void HEBCONNFCDN(::DLLLACFEBJF MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::DLLLACFEBJF, ::System::Boolean))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_HEBCONNFCDN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void ODCEJKEOLIA_1(::DLLLACFEBJF KPIAFDELPJL)
	{
		return ((::System::Void(*)(::PVOID, ::DLLLACFEBJF))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_ODCEJKEOLIA_1_OFFSET))(this, KPIAFDELPJL);
	}

	::System::Void BEIFOCPIDGB(::System::String* MIALFKCCCPI, ::System::Collections::Generic::List_1<::EOAHOOCNDHM>* KMGKAIDEIBA, ::System::Boolean FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::EOAHOOCNDHM>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_BEIFOCPIDGB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_LIBFEFEJOCF_OFFSET))(this);
	}

	::System::Void FJEMCJJOEND_1(::DLLLACFEBJF KPIAFDELPJL)
	{
		return ((::System::Void(*)(::PVOID, ::DLLLACFEBJF))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_FJEMCJJOEND_1_OFFSET))(this, KPIAFDELPJL);
	}

	::System::Void GONGHOPLHBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_GONGHOPLHBD_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void MLMLEKKJJID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_MLMLEKKJJID_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTask NAPNNHMIGIJ(::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI, ::System::String* INHDAAAMAAL, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* INAFPBGPAMP, ::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_NAPNNHMIGIJ_OFFSET))(AMNIHACKELI, INHDAAAMAAL, INAFPBGPAMP, OMMEALOOOOD);
	}

	static ::Cysharp::Threading::Tasks::UniTask FNFEOFDGGJP(::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI, ::System::String* MHEGPBDHBMF, ::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_FNFEOFDGGJP_OFFSET))(AMNIHACKELI, MHEGPBDHBMF, OMMEALOOOOD);
	}

	static ::System::Boolean APEEIKLAFMB(::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_APEEIKLAFMB_OFFSET))(AMNIHACKELI);
	}
};
