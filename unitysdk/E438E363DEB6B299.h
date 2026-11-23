#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B948128747F26FFA.h"
#include "unitysdk/E68AA4EB51923C98/B92BBABCE5ECD236.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E438E363DEB6B299_A8E8A35A4C60A3F2_OFFSET UNITYSDK_OFFSET(0x16BD3B0)
#define E438E363DEB6B299_B70A8C08C2818F45_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define E438E363DEB6B299_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2385BC0)
#define E438E363DEB6B299__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int E438E363DEB6B299_TypeDefinitionIndex = 3407;

class E438E363DEB6B299 : public ::B948128747F26FFA
{
public:
	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::B92BBABCE5ECD236, ::System::UInt32>* A2B7D588B2EBA4A5; // 0x20

	::System::Void A8E8A35A4C60A3F2(::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::B92BBABCE5ECD236, ::System::UInt32>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::B92BBABCE5ECD236, ::System::UInt32>*))((::PBYTE)hIl2Cpp + E438E363DEB6B299_A8E8A35A4C60A3F2_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::B92BBABCE5ECD236, ::System::UInt32>* B70A8C08C2818F45()
	{
		return ((::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::B92BBABCE5ECD236, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E438E363DEB6B299_B70A8C08C2818F45_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E438E363DEB6B299*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E438E363DEB6B299*&))((::PBYTE)hIl2Cpp + E438E363DEB6B299_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E438E363DEB6B299__CTOR_OFFSET))(this);
	}
};
