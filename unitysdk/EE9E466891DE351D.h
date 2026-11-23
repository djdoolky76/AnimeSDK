#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A32B12A2A9CBC358.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B01110579939C0C4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EE9E466891DE351D_A16766947B3604D6_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define EE9E466891DE351D_EB9CFBEA7204CAF5_OFFSET UNITYSDK_OFFSET(0x1BF9BA0)
#define EE9E466891DE351D_F559792823009A48_OFFSET UNITYSDK_OFFSET(0x1962CA0)
#define EE9E466891DE351D_FADABE45FE283DB3_OFFSET UNITYSDK_OFFSET(0x169C070)
#define EE9E466891DE351D_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2479280)
#define EE9E466891DE351D__CTOR_OFFSET UNITYSDK_OFFSET(0x2479470)

inline static constexpr unsigned int EE9E466891DE351D_TypeDefinitionIndex = 4525;

class EE9E466891DE351D : public ::A32B12A2A9CBC358
{
public:
	::B01110579939C0C4* E2A1B383F67F86C3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* FDE6D0934BC1ADD6; // 0x30

	::System::Void EB9CFBEA7204CAF5(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + EE9E466891DE351D_EB9CFBEA7204CAF5_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE9E466891DE351D__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* A16766947B3604D6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EE9E466891DE351D_A16766947B3604D6_OFFSET))(this);
	}

	::B01110579939C0C4* FADABE45FE283DB3()
	{
		return ((::B01110579939C0C4*(*)(::PVOID))((::PBYTE)hIl2Cpp + EE9E466891DE351D_FADABE45FE283DB3_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::EE9E466891DE351D*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::EE9E466891DE351D*&))((::PBYTE)hIl2Cpp + EE9E466891DE351D_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void F559792823009A48(::B01110579939C0C4* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::B01110579939C0C4*))((::PBYTE)hIl2Cpp + EE9E466891DE351D_F559792823009A48_OFFSET))(this, E937D4885DAA1AE8);
	}
};
