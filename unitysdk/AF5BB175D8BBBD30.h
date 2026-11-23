#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F3FB13A95779C17C.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ABC/Config/WwiseEvent.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }

#define AF5BB175D8BBBD30_A4A1CC3BB05C6254_OFFSET UNITYSDK_OFFSET(0x2534210)
#define AF5BB175D8BBBD30_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2534250)

inline static constexpr unsigned int AF5BB175D8BBBD30_TypeDefinitionIndex = 5472;

struct alignas(8) AF5BB175D8BBBD30
{
	::System::String* EE1F6B2D64076FFA; // 0x10
	::F3FB13A95779C17C A710CF18226F1C15; // 0x18

	/*
	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::AF5BB175D8BBBD30& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::AF5BB175D8BBBD30&))((::PBYTE)hIl2Cpp + AF5BB175D8BBBD30_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
	*/

	::System::Void A4A1CC3BB05C6254(::ABC::Config::WwiseEvent& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Config::WwiseEvent&))((::PBYTE)hIl2Cpp + AF5BB175D8BBBD30_A4A1CC3BB05C6254_OFFSET))(this, E937D4885DAA1AE8);
	}
};
