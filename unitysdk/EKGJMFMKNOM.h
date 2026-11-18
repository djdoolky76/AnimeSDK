#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EKGJMFMKNOM_CFPPJLIAJHB_OFFSET UNITYSDK_OFFSET(0xFE1CA00)
#define EKGJMFMKNOM_JKHFEJJKJCC_OFFSET UNITYSDK_OFFSET(0xFE1C720)
#define EKGJMFMKNOM_NGICMPIFOCF_OFFSET UNITYSDK_OFFSET(0x6025E0)
#define EKGJMFMKNOM__CTOR_OFFSET UNITYSDK_OFFSET(0x3944E0)

inline static constexpr unsigned int EKGJMFMKNOM_TypeDefinitionIndex = 79340;

struct alignas(4) EKGJMFMKNOM
{
	::System::Int32 HFPCJJLPEBD; // 0x10
	::System::Boolean BPHCKFAMMKO; // 0x14

	::System::Void _ctor(::System::Int32 OIKFFGKDHME, ::System::Boolean BHDACEJJMEF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + EKGJMFMKNOM__CTOR_OFFSET))(this, OIKFFGKDHME, BHDACEJJMEF);
	}

	::System::Boolean NGICMPIFOCF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGJMFMKNOM_NGICMPIFOCF_OFFSET))(this);
	}

	/*
	static ::System::Collections::Generic::List_1<::EKGJMFMKNOM>* JKHFEJJKJCC(::System::String* LCEGOBBEECM)
	{
		return ((::System::Collections::Generic::List_1<::EKGJMFMKNOM>*(*)(::System::String*))((::PBYTE)hIl2Cpp + EKGJMFMKNOM_JKHFEJJKJCC_OFFSET))(LCEGOBBEECM);
	}
	*/

	static ::System::Boolean CFPPJLIAJHB(::System::String* LCEGOBBEECM)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + EKGJMFMKNOM_CFPPJLIAJHB_OFFSET))(LCEGOBBEECM);
	}
};
