#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E4D2CA852CC7D0A3.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BA3C6625CF6A9747_A0A39F31F3557DE1_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define BA3C6625CF6A9747_A5770149EC764D5E_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define BA3C6625CF6A9747_EDDC83EB18060F73_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define BA3C6625CF6A9747_F6696792C4A7E8D6_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define BA3C6625CF6A9747_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2636E90)
#define BA3C6625CF6A9747__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BA3C6625CF6A9747_TypeDefinitionIndex = 6024;

class BA3C6625CF6A9747 : public ::E4D2CA852CC7D0A3
{
public:
	::System::UInt32 F78CFA0C288DDEF6; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* EB523C92C46C5CE8; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA3C6625CF6A9747__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* A0A39F31F3557DE1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BA3C6625CF6A9747_A0A39F31F3557DE1_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BA3C6625CF6A9747*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BA3C6625CF6A9747*&))((::PBYTE)hIl2Cpp + BA3C6625CF6A9747_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void A5770149EC764D5E(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + BA3C6625CF6A9747_A5770149EC764D5E_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void F6696792C4A7E8D6(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BA3C6625CF6A9747_F6696792C4A7E8D6_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::UInt32 EDDC83EB18060F73()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BA3C6625CF6A9747_EDDC83EB18060F73_OFFSET))(this);
	}
};
