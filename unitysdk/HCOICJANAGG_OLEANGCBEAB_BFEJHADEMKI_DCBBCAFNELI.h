#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

#define HCOICJANAGG_OLEANGCBEAB_BFEJHADEMKI_DCBBCAFNELI_COMPARE_OFFSET UNITYSDK_OFFSET(0x146EF810)
#define HCOICJANAGG_OLEANGCBEAB_BFEJHADEMKI_DCBBCAFNELI__CTOR_OFFSET UNITYSDK_OFFSET(0x146EF880)

inline static constexpr unsigned int HCOICJANAGG_OLEANGCBEAB_BFEJHADEMKI_DCBBCAFNELI_TypeDefinitionIndex = 46398;

class HCOICJANAGG_OLEANGCBEAB_BFEJHADEMKI_DCBBCAFNELI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOICJANAGG_OLEANGCBEAB_BFEJHADEMKI_DCBBCAFNELI__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*> HAAEBCOBKFF, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*> BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>))((::PBYTE)hIl2Cpp + HCOICJANAGG_OLEANGCBEAB_BFEJHADEMKI_DCBBCAFNELI_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
