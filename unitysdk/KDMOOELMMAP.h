#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLLLACFEBJF.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/EOAHOOCNDHM.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class KCCDJGBJGLD;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define KDMOOELMMAP_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x15202610)
#define KDMOOELMMAP_BEIFOCPIDGB_OFFSET UNITYSDK_OFFSET(0x15202620)
#define KDMOOELMMAP_FNFEOFDGGJP_OFFSET UNITYSDK_OFFSET(0x152019F0)
#define KDMOOELMMAP_GONGHOPLHBD_OFFSET UNITYSDK_OFFSET(0x15202510)
#define KDMOOELMMAP_HEBCONNFCDN_OFFSET UNITYSDK_OFFSET(0x15202010)
#define KDMOOELMMAP_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x15202630)
#define KDMOOELMMAP_JFCHLMAOLHP_OFFSET UNITYSDK_OFFSET(0x15202020)
#define KDMOOELMMAP_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x15202600)
#define KDMOOELMMAP_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0x15202500)
#define KDMOOELMMAP_NFIDCGGFFCB_OFFSET UNITYSDK_OFFSET(0x15202520)
#define KDMOOELMMAP_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x152011F0)
#define KDMOOELMMAP_ONDETACH_OFFSET UNITYSDK_OFFSET(0x15201C80)
#define KDMOOELMMAP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15201AD0)
#define KDMOOELMMAP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15201740)
#define KDMOOELMMAP_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x15201DF0)
#define KDMOOELMMAP_PLLIJFOMOFK_1_OFFSET UNITYSDK_OFFSET(0x15202410)
#define KDMOOELMMAP_PLLIJFOMOFK_OFFSET UNITYSDK_OFFSET(0x15202290)
#define KDMOOELMMAP_RECEIVEGRAPHCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x152014B0)
#define KDMOOELMMAP_RECEIVEGRAPHEVENT_OFFSET UNITYSDK_OFFSET(0x15201280)
#define KDMOOELMMAP__CCTOR_OFFSET UNITYSDK_OFFSET(0x15202000)
#define KDMOOELMMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x15201EE0)

inline static constexpr unsigned int KDMOOELMMAP_TypeDefinitionIndex = 76165;

class KDMOOELMMAP
{
public:
	static ::System::Boolean* StaticGet_EIGGMNIEIOG()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(KDMOOELMMAP_TypeDefinitionIndex)->GetStaticField(0xCAD0);
	}
	::System::Threading::CancellationTokenSource* KGDDIGFIPDK; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::KCCDJGBJGLD*>* CPDJFOKCIGE; // 0x40
	::System::Collections::Generic::List_1<::System::Object*>* LBNLIENJKKL; // 0x48
	::System::Threading::CancellationTokenSource* PJNJEBFCCAM; // 0x50
	::System::Int32 ABCDDKOGHEF; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOOELMMAP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMOOELMMAP__CCTOR_OFFSET))();
	}

	::System::Void OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOOELMMAP_ONAWAKE_OFFSET))(this);
	}

	::System::Void ReceiveGraphEvent(::DLLLACFEBJF KPIAFDELPJL, ::System::Boolean BAIHKLNIOHN)
	{
		return ((::System::Void(*)(::PVOID, ::DLLLACFEBJF, ::System::Boolean))((::PBYTE)hIl2Cpp + KDMOOELMMAP_RECEIVEGRAPHEVENT_OFFSET))(this, KPIAFDELPJL, BAIHKLNIOHN);
	}

	::System::Void ReceiveGraphCustomEvent(::System::String* KPIAFDELPJL, ::System::Collections::Generic::List_1<::EOAHOOCNDHM>* DJLOKMMLFJC, ::System::Boolean BAIHKLNIOHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::EOAHOOCNDHM>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KDMOOELMMAP_RECEIVEGRAPHCUSTOMEVENT_OFFSET))(this, KPIAFDELPJL, DJLOKMMLFJC, BAIHKLNIOHN);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOOELMMAP_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOOELMMAP_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOOELMMAP_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOOELMMAP_ONRECYCLE_OFFSET))(this);
	}

	::System::Void HEBCONNFCDN(::DLLLACFEBJF MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::DLLLACFEBJF, ::System::Boolean))((::PBYTE)hIl2Cpp + KDMOOELMMAP_HEBCONNFCDN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void JFCHLMAOLHP(::System::Int32 LGBBPFDBCGP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDMOOELMMAP_JFCHLMAOLHP_OFFSET))(this, LGBBPFDBCGP);
	}

	static ::Cysharp::Threading::Tasks::UniTask FNFEOFDGGJP(::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI, ::System::Int32 LCHGINFEKCG, ::System::String* HKBLIAHMFKG, ::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::Int32, ::System::String*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + KDMOOELMMAP_FNFEOFDGGJP_OFFSET))(AMNIHACKELI, LCHGINFEKCG, HKBLIAHMFKG, OMMEALOOOOD);
	}

	::System::Int32 PLLIJFOMOFK(::System::String* HKBLIAHMFKG, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* INAFPBGPAMP, ::System::Int32 AABHMLNEFDG)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*, ::System::Int32))((::PBYTE)hIl2Cpp + KDMOOELMMAP_PLLIJFOMOFK_OFFSET))(this, HKBLIAHMFKG, INAFPBGPAMP, AABHMLNEFDG);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOOELMMAP_LIBFEFEJOCF_OFFSET))(this);
	}

	::System::Void GONGHOPLHBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOOELMMAP_GONGHOPLHBD_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid PLLIJFOMOFK_1(::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI, ::System::String* HKBLIAHMFKG, ::System::Int32 LCHGINFEKCG, ::System::Threading::CancellationToken OMMEALOOOOD, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* INAFPBGPAMP, ::System::Int32 AABHMLNEFDG)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Int32, ::System::Threading::CancellationToken, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*, ::System::Int32))((::PBYTE)hIl2Cpp + KDMOOELMMAP_PLLIJFOMOFK_1_OFFSET))(AMNIHACKELI, HKBLIAHMFKG, LCHGINFEKCG, OMMEALOOOOD, INAFPBGPAMP, AABHMLNEFDG);
	}

	::KCCDJGBJGLD* NFIDCGGFFCB(::System::Int32 LCHGINFEKCG)
	{
		return ((::KCCDJGBJGLD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDMOOELMMAP_NFIDCGGFFCB_OFFSET))(this, LCHGINFEKCG);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOOELMMAP_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOOELMMAP_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void BEIFOCPIDGB(::System::String* MIALFKCCCPI, ::System::Collections::Generic::List_1<::EOAHOOCNDHM>* KMGKAIDEIBA, ::System::Boolean FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::EOAHOOCNDHM>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KDMOOELMMAP_BEIFOCPIDGB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOOELMMAP_ILHIIDBCNEC_OFFSET))(this);
	}
};
