#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class HCOICJANAGG_OLEANGCBEAB_BFEJHADEMKI_BCMJBBLDFAJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCOICJANAGG_OLEANGCBEAB_BFEJHADEMKI_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x17E37070)
#define HCOICJANAGG_OLEANGCBEAB_BFEJHADEMKI_GMJHLNGNEKK_OFFSET UNITYSDK_OFFSET(0x17E37270)
#define HCOICJANAGG_OLEANGCBEAB_BFEJHADEMKI__CTOR_OFFSET UNITYSDK_OFFSET(0x17E36FF0)

inline static constexpr unsigned int HCOICJANAGG_OLEANGCBEAB_BFEJHADEMKI_TypeDefinitionIndex = 46396;

class HCOICJANAGG_OLEANGCBEAB_BFEJHADEMKI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>>* FMDAJKOKECG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOICJANAGG_OLEANGCBEAB_BFEJHADEMKI__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Collections::Generic::List_1<::System::Object*>* LACLDOEMBNH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HCOICJANAGG_OLEANGCBEAB_BFEJHADEMKI_BBOMJDBNHIC_OFFSET))(this, LACLDOEMBNH);
	}

	::HCOICJANAGG_OLEANGCBEAB_BFEJHADEMKI_BCMJBBLDFAJ* GMJHLNGNEKK(::System::Int32 HFAFFNLNAJE)
	{
		return ((::HCOICJANAGG_OLEANGCBEAB_BFEJHADEMKI_BCMJBBLDFAJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HCOICJANAGG_OLEANGCBEAB_BFEJHADEMKI_GMJHLNGNEKK_OFFSET))(this, HFAFFNLNAJE);
	}
};
