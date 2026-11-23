#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class AA44E6D54A2800A1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E91C83C386372C88_A2B0FB8D9A114C71_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define E91C83C386372C88_B428C9D2FE95F6A7_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E91C83C386372C88_F349B6E1B0C4ADBE_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define E91C83C386372C88_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26D1920)
#define E91C83C386372C88__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E91C83C386372C88_TypeDefinitionIndex = 6646;

class E91C83C386372C88 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AA44E6D54A2800A1*>* F443D31D5F67EC3D; // 0x10

	static ::System::UInt32 A2B0FB8D9A114C71(::AA44E6D54A2800A1* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::AA44E6D54A2800A1*))((::PBYTE)hIl2Cpp + E91C83C386372C88_A2B0FB8D9A114C71_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void F349B6E1B0C4ADBE(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AA44E6D54A2800A1*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AA44E6D54A2800A1*>*))((::PBYTE)hIl2Cpp + E91C83C386372C88_F349B6E1B0C4ADBE_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AA44E6D54A2800A1*>* B428C9D2FE95F6A7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AA44E6D54A2800A1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E91C83C386372C88_B428C9D2FE95F6A7_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E91C83C386372C88__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E91C83C386372C88*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E91C83C386372C88*&))((::PBYTE)hIl2Cpp + E91C83C386372C88_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
