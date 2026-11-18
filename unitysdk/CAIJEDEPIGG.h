#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNNEJDFNEGP.h"
#include "unitysdk/MEMDIFHDIAC.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CAIJEDEPIGG_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14C6E720)
#define CAIJEDEPIGG_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x14C6EA40)
#define CAIJEDEPIGG_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x14C6E9B0)
#define CAIJEDEPIGG_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14C6E2E0)
#define CAIJEDEPIGG__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C6E770)
#define CAIJEDEPIGG__CTOR_OFFSET UNITYSDK_OFFSET(0x14C6E7F0)

inline static constexpr unsigned int CAIJEDEPIGG_TypeDefinitionIndex = 59189;

class CAIJEDEPIGG : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xE1; // 0x0
	::System::Collections::Generic::Dictionary_2<::MEMDIFHDIAC, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* FLLMBAKEIFL; // 0x48
	::System::Collections::Generic::Dictionary_2<::MEMDIFHDIAC, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* IGNLFNKMOLB; // 0x50
	::System::Collections::Generic::Dictionary_2<::MEMDIFHDIAC, ::JNNEJDFNEGP>* LOJFPDHFFGE; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAIJEDEPIGG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIJEDEPIGG__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIJEDEPIGG_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIJEDEPIGG_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIJEDEPIGG_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::CAIJEDEPIGG* JFDOOELFAOA()
	{
		return ((::CAIJEDEPIGG*(*)())((::PBYTE)hIl2Cpp + CAIJEDEPIGG_JFDOOELFAOA_OFFSET))();
	}
};
