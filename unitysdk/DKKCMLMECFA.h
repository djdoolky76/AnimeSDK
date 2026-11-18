#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"

class GFGJIGOLMOC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
template <typename T1, typename T2> class CNKGGMABMGE_2;

#define DKKCMLMECFA_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x148B0CC0)
#define DKKCMLMECFA_EFEIKHIHING_OFFSET UNITYSDK_OFFSET(0x148B0CD0)
#define DKKCMLMECFA_ENLLCBGDHNM_1_OFFSET UNITYSDK_OFFSET(0x148B0FA0)
#define DKKCMLMECFA_ENLLCBGDHNM_OFFSET UNITYSDK_OFFSET(0x148B0CF0)
#define DKKCMLMECFA_GONGHOPLHBD_OFFSET UNITYSDK_OFFSET(0x148B10C0)
#define DKKCMLMECFA_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x148B1730)
#define DKKCMLMECFA_KECGBPNOFNJ_OFFSET UNITYSDK_OFFSET(0x148B11A0)
#define DKKCMLMECFA_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0x148B1190)
#define DKKCMLMECFA_MDJFHJNHEBL_OFFSET UNITYSDK_OFFSET(0x148B1180)
#define DKKCMLMECFA_MLMLEKKJJID_OFFSET UNITYSDK_OFFSET(0x148B0CE0)
#define DKKCMLMECFA_MNNIBDNHPDD_OFFSET UNITYSDK_OFFSET(0x148B0A50)
#define DKKCMLMECFA_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x148B0130)
#define DKKCMLMECFA_ONDETACH_OFFSET UNITYSDK_OFFSET(0x148B0280)
#define DKKCMLMECFA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x148B0660)
#define DKKCMLMECFA_ONREADY_OFFSET UNITYSDK_OFFSET(0x148B02D0)
#define DKKCMLMECFA_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x148B0020)
#define DKKCMLMECFA_PFFEGBDEBLM_OFFSET UNITYSDK_OFFSET(0x148B10D0)
#define DKKCMLMECFA__CTOR_OFFSET UNITYSDK_OFFSET(0x148B0A10)

inline static constexpr unsigned int DKKCMLMECFA_TypeDefinitionIndex = 76431;

class DKKCMLMECFA
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GFGJIGOLMOC*>* KJLNDHGKALE; // 0x28
	::System::Collections::Generic::List_1<::GFGJIGOLMOC*>* BCHDDCFLJDL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::GFGJIGOLMOC*, ::System::Threading::CancellationTokenSource*>>* LCIAEENKLID; // 0x38
	::CNKGGMABMGE_2<::System::UInt32, ::System::UInt32>* KHINMBNKKBN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKCMLMECFA__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKCMLMECFA_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKCMLMECFA_ONAWAKE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKCMLMECFA_ONDETACH_OFFSET))(this);
	}

	::System::Void OnReady()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKCMLMECFA_ONREADY_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKCMLMECFA_ONDISABLE_OFFSET))(this);
	}

	::System::Void MNNIBDNHPDD(::System::UInt32 OMDIPCJNPJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKKCMLMECFA_MNNIBDNHPDD_OFFSET))(this, OMDIPCJNPJC);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKCMLMECFA_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::ValueTuple_2<::GFGJIGOLMOC*, ::System::Threading::CancellationTokenSource*>>* EFEIKHIHING()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::ValueTuple_2<::GFGJIGOLMOC*, ::System::Threading::CancellationTokenSource*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKCMLMECFA_EFEIKHIHING_OFFSET))(this);
	}

	::System::Void MLMLEKKJJID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKCMLMECFA_MLMLEKKJJID_OFFSET))(this);
	}

	::System::Void ENLLCBGDHNM(::System::UInt32 OMDIPCJNPJC, ::System::String* INHDAAAMAAL, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* INAFPBGPAMP, ::System::Collections::Generic::HashSet_1<::System::Int32>* KLFMNJLANEK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + DKKCMLMECFA_ENLLCBGDHNM_OFFSET))(this, OMDIPCJNPJC, INHDAAAMAAL, INAFPBGPAMP, KLFMNJLANEK);
	}

	::System::Void GONGHOPLHBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKCMLMECFA_GONGHOPLHBD_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTask ENLLCBGDHNM_1(::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI, ::System::String* INHDAAAMAAL, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* INAFPBGPAMP, ::System::UInt32 OMDIPCJNPJC, ::System::Collections::Generic::HashSet_1<::System::Int32>* KLFMNJLANEK)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>*, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + DKKCMLMECFA_ENLLCBGDHNM_1_OFFSET))(AMNIHACKELI, INHDAAAMAAL, INAFPBGPAMP, OMDIPCJNPJC, KLFMNJLANEK);
	}

	::System::Boolean PFFEGBDEBLM(::System::UInt32 OMDIPCJNPJC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKKCMLMECFA_PFFEGBDEBLM_OFFSET))(this, OMDIPCJNPJC);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::GFGJIGOLMOC*>* MDJFHJNHEBL()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::GFGJIGOLMOC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKCMLMECFA_MDJFHJNHEBL_OFFSET))(this);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKCMLMECFA_LIBFEFEJOCF_OFFSET))(this);
	}

	::System::Void KECGBPNOFNJ(::System::UInt32 CLACNEMIOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKKCMLMECFA_KECGBPNOFNJ_OFFSET))(this, CLACNEMIOBA);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKCMLMECFA_ILHIIDBCNEC_OFFSET))(this);
	}
};
