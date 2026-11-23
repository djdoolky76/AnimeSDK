#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class A7BB1E41BF037ECE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AE6C4776A26F5FE1_B8BA358DEFC030F7_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define AE6C4776A26F5FE1_BE4E90A6A466324B_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define AE6C4776A26F5FE1_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define AE6C4776A26F5FE1_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2405D20)
#define AE6C4776A26F5FE1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AE6C4776A26F5FE1_TypeDefinitionIndex = 4060;

class AE6C4776A26F5FE1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A7BB1E41BF037ECE*>* E9172D067EF13A58; // 0x10

	static ::System::UInt32 EB8DF78C1D71130D(::A7BB1E41BF037ECE* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::A7BB1E41BF037ECE*))((::PBYTE)hIl2Cpp + AE6C4776A26F5FE1_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::AE6C4776A26F5FE1*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::AE6C4776A26F5FE1*&))((::PBYTE)hIl2Cpp + AE6C4776A26F5FE1_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void BE4E90A6A466324B(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A7BB1E41BF037ECE*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A7BB1E41BF037ECE*>*))((::PBYTE)hIl2Cpp + AE6C4776A26F5FE1_BE4E90A6A466324B_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE6C4776A26F5FE1__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A7BB1E41BF037ECE*>* B8BA358DEFC030F7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A7BB1E41BF037ECE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AE6C4776A26F5FE1_B8BA358DEFC030F7_OFFSET))(this);
	}
};
