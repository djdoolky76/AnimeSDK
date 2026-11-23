#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A4B0956506D3A04C.h"
#include "unitysdk/E68AA4EB51923C98/B92BBABCE5ECD236.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F211B4CDC8C3C52B_EBA55E35C9D0A6DA_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define F211B4CDC8C3C52B_F0E974CA2E5CC2A6_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define F211B4CDC8C3C52B_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2386590)
#define F211B4CDC8C3C52B__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F211B4CDC8C3C52B_TypeDefinitionIndex = 3391;

class F211B4CDC8C3C52B : public ::A4B0956506D3A04C
{
public:
	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::B92BBABCE5ECD236, ::System::UInt32>* AF7B4AFC1A82C440; // 0x18

	::System::Void EBA55E35C9D0A6DA(::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::B92BBABCE5ECD236, ::System::UInt32>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::B92BBABCE5ECD236, ::System::UInt32>*))((::PBYTE)hIl2Cpp + F211B4CDC8C3C52B_EBA55E35C9D0A6DA_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F211B4CDC8C3C52B*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F211B4CDC8C3C52B*&))((::PBYTE)hIl2Cpp + F211B4CDC8C3C52B_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F211B4CDC8C3C52B__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::B92BBABCE5ECD236, ::System::UInt32>* F0E974CA2E5CC2A6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::B92BBABCE5ECD236, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F211B4CDC8C3C52B_F0E974CA2E5CC2A6_OFFSET))(this);
	}
};
