#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ABC/Config/WwiseBank.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }

#define A2D8DCC4CAB99197_A4A1CC3BB05C6254_OFFSET UNITYSDK_OFFSET(0x25A8340)
#define A2D8DCC4CAB99197_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25A8360)

inline static constexpr unsigned int A2D8DCC4CAB99197_TypeDefinitionIndex = 5514;

struct alignas(8) A2D8DCC4CAB99197
{
	::System::String* FE55F29D9377714A; // 0x10

	::System::Void A4A1CC3BB05C6254(::ABC::Config::WwiseBank& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Config::WwiseBank&))((::PBYTE)hIl2Cpp + A2D8DCC4CAB99197_A4A1CC3BB05C6254_OFFSET))(this, E937D4885DAA1AE8);
	}

	/*
	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A2D8DCC4CAB99197& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A2D8DCC4CAB99197&))((::PBYTE)hIl2Cpp + A2D8DCC4CAB99197_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
	*/
};
