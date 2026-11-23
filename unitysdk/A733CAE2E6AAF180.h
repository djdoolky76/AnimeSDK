#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class A172D5535E34E382;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A733CAE2E6AAF180_A8F54EE92A5AADB5_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define A733CAE2E6AAF180_AEB274EBCE54FCD9_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define A733CAE2E6AAF180_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define A733CAE2E6AAF180_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24622D0)
#define A733CAE2E6AAF180__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A733CAE2E6AAF180_TypeDefinitionIndex = 4418;

class A733CAE2E6AAF180 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A172D5535E34E382*>* A3796DED766ADC7A; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A733CAE2E6AAF180__CTOR_OFFSET))(this);
	}

	::System::Void A8F54EE92A5AADB5(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A172D5535E34E382*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A172D5535E34E382*>*))((::PBYTE)hIl2Cpp + A733CAE2E6AAF180_A8F54EE92A5AADB5_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::A172D5535E34E382* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::A172D5535E34E382*))((::PBYTE)hIl2Cpp + A733CAE2E6AAF180_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A733CAE2E6AAF180*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A733CAE2E6AAF180*&))((::PBYTE)hIl2Cpp + A733CAE2E6AAF180_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A172D5535E34E382*>* AEB274EBCE54FCD9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A172D5535E34E382*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A733CAE2E6AAF180_AEB274EBCE54FCD9_OFFSET))(this);
	}
};
