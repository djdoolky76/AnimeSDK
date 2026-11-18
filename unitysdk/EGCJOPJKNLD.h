#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/Coroutine/Segment.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EGCJOPJKNLD_DGKAJGELFII_OFFSET UNITYSDK_OFFSET(0x148DB710)
#define EGCJOPJKNLD_DMLHOGAMCJK_OFFSET UNITYSDK_OFFSET(0x148DBB30)
#define EGCJOPJKNLD_EPNKLBJMGFI_OFFSET UNITYSDK_OFFSET(0x148DBD20)
#define EGCJOPJKNLD_GHPCKMGLPPO_OFFSET UNITYSDK_OFFSET(0x148DB390)
#define EGCJOPJKNLD_JFKKGAJLGOE_OFFSET UNITYSDK_OFFSET(0x148DB4B0)
#define EGCJOPJKNLD_KAAAPJMBOAP_OFFSET UNITYSDK_OFFSET(0x148DB210)
#define EGCJOPJKNLD_KGKHPDGGJEA_OFFSET UNITYSDK_OFFSET(0x148DB7B0)
#define EGCJOPJKNLD_LMBGEPBIMGA_OFFSET UNITYSDK_OFFSET(0x148DBCB0)
#define EGCJOPJKNLD_LOAKFHLAMKN_OFFSET UNITYSDK_OFFSET(0x148DBDE0)
#define EGCJOPJKNLD_MNADFLJCGGO_OFFSET UNITYSDK_OFFSET(0x148DBE70)
#define EGCJOPJKNLD_NCHCMCHNKKE_OFFSET UNITYSDK_OFFSET(0x148DB860)
#define EGCJOPJKNLD__CTOR_OFFSET UNITYSDK_OFFSET(0x148DB200)

inline static constexpr unsigned int EGCJOPJKNLD_TypeDefinitionIndex = 75246;

class EGCJOPJKNLD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Coroutine::CoroutineHandle>* KMALLAPLLDO; // 0x10
	::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* IEOKNIEHIED; // 0x18
	::Foundation::Coroutine::CoroutineHandle AHKDDHAGBIG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCJOPJKNLD__CTOR_OFFSET))(this);
	}

	::System::Void KAAAPJMBOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCJOPJKNLD_KAAAPJMBOAP_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Coroutine::CoroutineHandle>* GHPCKMGLPPO()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Coroutine::CoroutineHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCJOPJKNLD_GHPCKMGLPPO_OFFSET))(this);
	}

	::System::Void JFKKGAJLGOE(::Foundation::Coroutine::CoroutineHandle PHHDHIBOCKA, ::System::Single DLBFEAOALML, ::System::Action* GJBHEJGENMI, ::Foundation::Coroutine::Segment FCIHNAHJJBB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle, ::System::Single, ::System::Action*, ::Foundation::Coroutine::Segment))((::PBYTE)hIl2Cpp + EGCJOPJKNLD_JFKKGAJLGOE_OFFSET))(this, PHHDHIBOCKA, DLBFEAOALML, GJBHEJGENMI, FCIHNAHJJBB);
	}

	::Foundation::Coroutine::CoroutineHandle NCHCMCHNKKE(::System::Nullable_1<::System::Int32> AELLPLBJELA, ::System::Single DLBFEAOALML, ::System::Action* GJBHEJGENMI, ::Foundation::Coroutine::Segment FCIHNAHJJBB, ::System::Boolean LNMMNCGGKKC)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Nullable_1<::System::Int32>, ::System::Single, ::System::Action*, ::Foundation::Coroutine::Segment, ::System::Boolean))((::PBYTE)hIl2Cpp + EGCJOPJKNLD_NCHCMCHNKKE_OFFSET))(this, AELLPLBJELA, DLBFEAOALML, GJBHEJGENMI, FCIHNAHJJBB, LNMMNCGGKKC);
	}

	::System::Void LMBGEPBIMGA(::System::Single DLBFEAOALML, ::System::Action* HJDAGGLKOGH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + EGCJOPJKNLD_LMBGEPBIMGA_OFFSET))(this, DLBFEAOALML, HJDAGGLKOGH);
	}

	::System::Void EPNKLBJMGFI(::System::Int32 AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EGCJOPJKNLD_EPNKLBJMGFI_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void DGKAJGELFII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCJOPJKNLD_DGKAJGELFII_OFFSET))(this);
	}

	::System::Void LOAKFHLAMKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCJOPJKNLD_LOAKFHLAMKN_OFFSET))(this);
	}

	::System::Void KGKHPDGGJEA(::Foundation::Coroutine::CoroutineHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + EGCJOPJKNLD_KGKHPDGGJEA_OFFSET))(this, PHHDHIBOCKA);
	}

	::Foundation::Coroutine::CoroutineHandle MNADFLJCGGO(::System::Collections::Generic::IEnumerator_1<::System::Single>* CBDKNCFKENJ)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Single>*))((::PBYTE)hIl2Cpp + EGCJOPJKNLD_MNADFLJCGGO_OFFSET))(this, CBDKNCFKENJ);
	}

	::Foundation::Coroutine::CoroutineHandle DMLHOGAMCJK(::System::Single DLBFEAOALML, ::System::Action* GJBHEJGENMI, ::Foundation::Coroutine::Segment FCIHNAHJJBB)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Single, ::System::Action*, ::Foundation::Coroutine::Segment))((::PBYTE)hIl2Cpp + EGCJOPJKNLD_DMLHOGAMCJK_OFFSET))(this, DLBFEAOALML, GJBHEJGENMI, FCIHNAHJJBB);
	}
};
