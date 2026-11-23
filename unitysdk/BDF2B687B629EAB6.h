#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/System/Nullable_1.h"

#define BDF2B687B629EAB6_A4A1CC3BB05C6254_OFFSET UNITYSDK_OFFSET(0x2353010)
#define BDF2B687B629EAB6_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2353080)

inline static constexpr unsigned int BDF2B687B629EAB6_TypeDefinitionIndex = 3228;

struct alignas(4) BDF2B687B629EAB6
{
	::System::Boolean AF842D3C459B3691; // 0x10
	::System::Boolean A35E61455FB5F910; // 0x11

	/*
	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BDF2B687B629EAB6& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BDF2B687B629EAB6&))((::PBYTE)hIl2Cpp + BDF2B687B629EAB6_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
	*/

	::System::Void A4A1CC3BB05C6254(::System::Nullable_1<::System::Boolean>& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>&))((::PBYTE)hIl2Cpp + BDF2B687B629EAB6_A4A1CC3BB05C6254_OFFSET))(this, E937D4885DAA1AE8);
	}
};
