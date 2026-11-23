#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F0705120A21F74F0;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B3A39D517839FAD8_B490B20922902B26_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B3A39D517839FAD8_BB09D5D776170276_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B3A39D517839FAD8_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define B3A39D517839FAD8_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26685F0)
#define B3A39D517839FAD8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B3A39D517839FAD8_TypeDefinitionIndex = 6275;

class B3A39D517839FAD8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F0705120A21F74F0*>* A6F1223B75A2121C; // 0x10

	static ::System::UInt32 EB8DF78C1D71130D(::F0705120A21F74F0* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::F0705120A21F74F0*))((::PBYTE)hIl2Cpp + B3A39D517839FAD8_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B3A39D517839FAD8__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F0705120A21F74F0*>* BB09D5D776170276()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F0705120A21F74F0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B3A39D517839FAD8_BB09D5D776170276_OFFSET))(this);
	}

	::System::Void B490B20922902B26(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F0705120A21F74F0*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F0705120A21F74F0*>*))((::PBYTE)hIl2Cpp + B3A39D517839FAD8_B490B20922902B26_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B3A39D517839FAD8*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B3A39D517839FAD8*&))((::PBYTE)hIl2Cpp + B3A39D517839FAD8_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
