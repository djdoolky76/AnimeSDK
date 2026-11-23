#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class BB19D3A3C2A457B7;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F0B6FE086C6D0086_A6C0EECB083C5C98_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F0B6FE086C6D0086_B15B2BAE07F7C232_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define F0B6FE086C6D0086_B937843D06FA2591_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F0B6FE086C6D0086_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2622D90)
#define F0B6FE086C6D0086__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F0B6FE086C6D0086_TypeDefinitionIndex = 5928;

class F0B6FE086C6D0086 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BB19D3A3C2A457B7*>* B6E8781592F2D665; // 0x10

	static ::System::UInt32 B15B2BAE07F7C232(::BB19D3A3C2A457B7* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::BB19D3A3C2A457B7*))((::PBYTE)hIl2Cpp + F0B6FE086C6D0086_B15B2BAE07F7C232_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BB19D3A3C2A457B7*>* A6C0EECB083C5C98()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BB19D3A3C2A457B7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F0B6FE086C6D0086_A6C0EECB083C5C98_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F0B6FE086C6D0086*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F0B6FE086C6D0086*&))((::PBYTE)hIl2Cpp + F0B6FE086C6D0086_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void B937843D06FA2591(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BB19D3A3C2A457B7*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BB19D3A3C2A457B7*>*))((::PBYTE)hIl2Cpp + F0B6FE086C6D0086_B937843D06FA2591_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F0B6FE086C6D0086__CTOR_OFFSET))(this);
	}
};
