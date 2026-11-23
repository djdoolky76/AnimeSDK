#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AACFC915B3A87430.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E54DF5A49C0FEEFD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BB04BA41C47E109E_BC2451F1F9390772_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define BB04BA41C47E109E_E1A52D8039D2601F_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define BB04BA41C47E109E_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24C07B0)
#define BB04BA41C47E109E__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BB04BA41C47E109E_TypeDefinitionIndex = 4911;

class BB04BA41C47E109E : public ::AACFC915B3A87430
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E54DF5A49C0FEEFD*>* AF71854D247171F6; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB04BA41C47E109E__CTOR_OFFSET))(this);
	}

	::System::Void E1A52D8039D2601F(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E54DF5A49C0FEEFD*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E54DF5A49C0FEEFD*>*))((::PBYTE)hIl2Cpp + BB04BA41C47E109E_E1A52D8039D2601F_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E54DF5A49C0FEEFD*>* BC2451F1F9390772()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E54DF5A49C0FEEFD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BB04BA41C47E109E_BC2451F1F9390772_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BB04BA41C47E109E*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BB04BA41C47E109E*&))((::PBYTE)hIl2Cpp + BB04BA41C47E109E_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
