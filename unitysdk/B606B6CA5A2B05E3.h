#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/System/Nullable_1.h"

#define B606B6CA5A2B05E3_A4A1CC3BB05C6254_OFFSET UNITYSDK_OFFSET(0x233E650)
#define B606B6CA5A2B05E3_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x233E6D0)

inline static constexpr unsigned int B606B6CA5A2B05E3_TypeDefinitionIndex = 2338;

struct alignas(4) B606B6CA5A2B05E3
{
	::System::Boolean AF842D3C459B3691; // 0x10
	::System::Byte _padding0[0x3];
	::System::Single A35E61455FB5F910; // 0x14

	/*
	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B606B6CA5A2B05E3& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B606B6CA5A2B05E3&))((::PBYTE)hIl2Cpp + B606B6CA5A2B05E3_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
	*/

	::System::Void A4A1CC3BB05C6254(::System::Nullable_1<::System::Single>& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>&))((::PBYTE)hIl2Cpp + B606B6CA5A2B05E3_A4A1CC3BB05C6254_OFFSET))(this, E937D4885DAA1AE8);
	}
};
