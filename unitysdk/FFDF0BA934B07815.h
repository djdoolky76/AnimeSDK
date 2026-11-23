#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class EAC019ECEAD88578;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FFDF0BA934B07815_B58696A3BD731E71_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define FFDF0BA934B07815_B90213A476F49AE8_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define FFDF0BA934B07815_F25DB468F9B71DDE_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define FFDF0BA934B07815_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x265DDC0)
#define FFDF0BA934B07815__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FFDF0BA934B07815_TypeDefinitionIndex = 6211;

class FFDF0BA934B07815 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::EAC019ECEAD88578*>* AAD87413198837AD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDF0BA934B07815__CTOR_OFFSET))(this);
	}

	::System::Void F25DB468F9B71DDE(::System::Collections::Generic::Dictionary_2<::System::Int32, ::EAC019ECEAD88578*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::EAC019ECEAD88578*>*))((::PBYTE)hIl2Cpp + FFDF0BA934B07815_F25DB468F9B71DDE_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Int32 B90213A476F49AE8(::EAC019ECEAD88578* E937D4885DAA1AE8)
	{
		return ((::System::Int32(*)(::EAC019ECEAD88578*))((::PBYTE)hIl2Cpp + FFDF0BA934B07815_B90213A476F49AE8_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FFDF0BA934B07815*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FFDF0BA934B07815*&))((::PBYTE)hIl2Cpp + FFDF0BA934B07815_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::EAC019ECEAD88578*>* B58696A3BD731E71()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::EAC019ECEAD88578*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDF0BA934B07815_B58696A3BD731E71_OFFSET))(this);
	}
};
