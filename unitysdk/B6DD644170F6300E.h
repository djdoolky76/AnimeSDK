#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class A66CB426EF0AAF27;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B6DD644170F6300E_ACB842197E13C99A_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B6DD644170F6300E_B4EFB9A3A5885F29_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B6DD644170F6300E_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define B6DD644170F6300E_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23A4B00)
#define B6DD644170F6300E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B6DD644170F6300E_TypeDefinitionIndex = 3540;

class B6DD644170F6300E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A66CB426EF0AAF27*>* F790435B0DB92E42; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B6DD644170F6300E*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B6DD644170F6300E*&))((::PBYTE)hIl2Cpp + B6DD644170F6300E_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::A66CB426EF0AAF27* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::A66CB426EF0AAF27*))((::PBYTE)hIl2Cpp + B6DD644170F6300E_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B6DD644170F6300E__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A66CB426EF0AAF27*>* B4EFB9A3A5885F29()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A66CB426EF0AAF27*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B6DD644170F6300E_B4EFB9A3A5885F29_OFFSET))(this);
	}

	::System::Void ACB842197E13C99A(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A66CB426EF0AAF27*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A66CB426EF0AAF27*>*))((::PBYTE)hIl2Cpp + B6DD644170F6300E_ACB842197E13C99A_OFFSET))(this, E937D4885DAA1AE8);
	}
};
