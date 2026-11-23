#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/WwiseState.h"
#include "unitysdk/E68AA4EB51923C98/F96B7FFFA42C1582.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B42B7E1AA9B9370C_BF2C766C0B3E9FCE_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B42B7E1AA9B9370C_E2AAC5E98C0DBD29_OFFSET UNITYSDK_OFFSET(0x235C7F0)
#define B42B7E1AA9B9370C_EEE4E5F19F24A7D7_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B42B7E1AA9B9370C_FA5A6B9D882905E4_OFFSET UNITYSDK_OFFSET(0x21AD3E0)
#define B42B7E1AA9B9370C_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26D30E0)
#define B42B7E1AA9B9370C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B42B7E1AA9B9370C_TypeDefinitionIndex = 6603;

class B42B7E1AA9B9370C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::F96B7FFFA42C1582, ::ABC::Config::WwiseState>* F6BC10B6A63A2D99; // 0x10
	::ABC::Config::WwiseState AC818280F8A8608F; // 0x18

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B42B7E1AA9B9370C*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B42B7E1AA9B9370C*&))((::PBYTE)hIl2Cpp + B42B7E1AA9B9370C_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::ABC::Config::WwiseState FA5A6B9D882905E4()
	{
		return ((::ABC::Config::WwiseState(*)(::PVOID))((::PBYTE)hIl2Cpp + B42B7E1AA9B9370C_FA5A6B9D882905E4_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::F96B7FFFA42C1582, ::ABC::Config::WwiseState>* EEE4E5F19F24A7D7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::F96B7FFFA42C1582, ::ABC::Config::WwiseState>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B42B7E1AA9B9370C_EEE4E5F19F24A7D7_OFFSET))(this);
	}

	::System::Void E2AAC5E98C0DBD29(::ABC::Config::WwiseState E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Config::WwiseState))((::PBYTE)hIl2Cpp + B42B7E1AA9B9370C_E2AAC5E98C0DBD29_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void BF2C766C0B3E9FCE(::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::F96B7FFFA42C1582, ::ABC::Config::WwiseState>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::F96B7FFFA42C1582, ::ABC::Config::WwiseState>*))((::PBYTE)hIl2Cpp + B42B7E1AA9B9370C_BF2C766C0B3E9FCE_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B42B7E1AA9B9370C__CTOR_OFFSET))(this);
	}
};
