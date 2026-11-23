#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ABC/Config/WwiseState.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }

#define E1B5127C83C658F8_A4A1CC3BB05C6254_OFFSET UNITYSDK_OFFSET(0x25D6940)
#define E1B5127C83C658F8_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25D6980)

inline static constexpr unsigned int E1B5127C83C658F8_TypeDefinitionIndex = 5698;

struct alignas(8) E1B5127C83C658F8
{
	::System::String* A4762E466AD8BEBD; // 0x10
	::System::String* B22024564E8C495E; // 0x18

	/*
	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E1B5127C83C658F8& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E1B5127C83C658F8&))((::PBYTE)hIl2Cpp + E1B5127C83C658F8_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
	*/

	::System::Void A4A1CC3BB05C6254(::ABC::Config::WwiseState& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Config::WwiseState&))((::PBYTE)hIl2Cpp + E1B5127C83C658F8_A4A1CC3BB05C6254_OFFSET))(this, E937D4885DAA1AE8);
	}
};
