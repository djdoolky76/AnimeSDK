#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOINMHNNHJE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOJOAEEPKAK_BAOLLMIKCNE_OFFSET UNITYSDK_OFFSET(0x14D971E0)
#define MOJOAEEPKAK_EKOCKMJBGMN_OFFSET UNITYSDK_OFFSET(0x14D97360)
#define MOJOAEEPKAK_IKIDNIAMNBA_OFFSET UNITYSDK_OFFSET(0x14D97340)
#define MOJOAEEPKAK_NKHMDNLBGLP_OFFSET UNITYSDK_OFFSET(0x14D97070)
#define MOJOAEEPKAK_PGFPKBPOPOA_OFFSET UNITYSDK_OFFSET(0x14D97350)
#define MOJOAEEPKAK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14D97100)
#define MOJOAEEPKAK__CTOR_OFFSET UNITYSDK_OFFSET(0x14D96F80)

inline static constexpr unsigned int MOJOAEEPKAK_TypeDefinitionIndex = 86970;

class MOJOAEEPKAK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::AOINMHNNHJE*>* OPAJJGIDIKP; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::AOINMHNNHJE*>* PPEFKLGOLPB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJOAEEPKAK__CTOR_OFFSET))(this);
	}

	::System::Void NKHMDNLBGLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJOAEEPKAK_NKHMDNLBGLP_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJOAEEPKAK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BAOLLMIKCNE(::AOINMHNNHJE* HMDKKCKDOFP)
	{
		return ((::System::Void(*)(::PVOID, ::AOINMHNNHJE*))((::PBYTE)hIl2Cpp + MOJOAEEPKAK_BAOLLMIKCNE_OFFSET))(this, HMDKKCKDOFP);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::AOINMHNNHJE*>* IKIDNIAMNBA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::AOINMHNNHJE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJOAEEPKAK_IKIDNIAMNBA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::AOINMHNNHJE*>* PGFPKBPOPOA()
	{
		return ((::System::Collections::Generic::List_1<::AOINMHNNHJE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJOAEEPKAK_PGFPKBPOPOA_OFFSET))(this);
	}

	::System::Void EKOCKMJBGMN(::AOINMHNNHJE* HMDKKCKDOFP)
	{
		return ((::System::Void(*)(::PVOID, ::AOINMHNNHJE*))((::PBYTE)hIl2Cpp + MOJOAEEPKAK_EKOCKMJBGMN_OFFSET))(this, HMDKKCKDOFP);
	}
};
