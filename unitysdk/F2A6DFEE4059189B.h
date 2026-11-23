#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ABC/Config/WwiseSwitch.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }

#define F2A6DFEE4059189B_A4A1CC3BB05C6254_OFFSET UNITYSDK_OFFSET(0x25D6940)
#define F2A6DFEE4059189B_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25D6980)

inline static constexpr unsigned int F2A6DFEE4059189B_TypeDefinitionIndex = 2895;

struct alignas(8) F2A6DFEE4059189B
{
	::System::String* F83876C56388B94D; // 0x10
	::System::String* E0E996618FE677E6; // 0x18

	/*
	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F2A6DFEE4059189B& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F2A6DFEE4059189B&))((::PBYTE)hIl2Cpp + F2A6DFEE4059189B_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
	*/

	::System::Void A4A1CC3BB05C6254(::ABC::Config::WwiseSwitch& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Config::WwiseSwitch&))((::PBYTE)hIl2Cpp + F2A6DFEE4059189B_A4A1CC3BB05C6254_OFFSET))(this, E937D4885DAA1AE8);
	}
};
