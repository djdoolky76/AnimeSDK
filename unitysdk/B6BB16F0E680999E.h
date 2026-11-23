#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E5B682DC02863C72.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace ABC::Splines::CatmullRom { class Spline; }
template <typename T> class FA9B773E8C9B97E9;

#define B6BB16F0E680999E_A4A1CC3BB05C6254_OFFSET UNITYSDK_OFFSET(0x240AB20)
#define B6BB16F0E680999E_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x240AF60)

inline static constexpr unsigned int B6BB16F0E680999E_TypeDefinitionIndex = 4186;

struct alignas(8) B6BB16F0E680999E
{
	::FA9B773E8C9B97E9<::E5B682DC02863C72>* AA2BD764A0AF62E7; // 0x10
	::System::Boolean ADC22DCD5212D2BC; // 0x18
	::System::Byte _padding0[0x3];
	::System::Single A3AEC97BDD129C12; // 0x1C
	::System::Single E3B38F9F54E3C4B1; // 0x20

	/*
	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B6BB16F0E680999E& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B6BB16F0E680999E&))((::PBYTE)hIl2Cpp + B6BB16F0E680999E_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
	*/

	::System::Void A4A1CC3BB05C6254(::ABC::Splines::CatmullRom::Spline*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Splines::CatmullRom::Spline*&))((::PBYTE)hIl2Cpp + B6BB16F0E680999E_A4A1CC3BB05C6254_OFFSET))(this, E937D4885DAA1AE8);
	}
};
