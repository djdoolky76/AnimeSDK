#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Core/ChessSeed.h"
#include "unitysdk/B3E072792CB8B7F2.h"
#include "unitysdk/System/Object.h"

#define B00DC7FE7AF127D0_ECFD265A6CBC4204_OFFSET UNITYSDK_OFFSET(0x1D997D0)
#define B00DC7FE7AF127D0_FEFD5298862EC8D2_OFFSET UNITYSDK_OFFSET(0x1D99700)
#define B00DC7FE7AF127D0_FFB212A13C8D581B_OFFSET UNITYSDK_OFFSET(0x1D99390)
#define B00DC7FE7AF127D0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D99690)

inline static constexpr unsigned int B00DC7FE7AF127D0_TypeDefinitionIndex = 10118;

class B00DC7FE7AF127D0 : public ::System::Object
{
public:
	::System::Boolean E77FA6D0EEACD2BF; // 0x10
	::System::Byte _padding0[0x7];
	::B3E072792CB8B7F2<::ABC::Core::ChessSeed> BBDF1C75DB3518F8; // 0x18

	::ABC::Core::ChessSeed FEFD5298862EC8D2(::System::UInt32 B48C66E5FB2449C6)
	{
		return ((::ABC::Core::ChessSeed(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + B00DC7FE7AF127D0_FEFD5298862EC8D2_OFFSET))(this, B48C66E5FB2449C6);
	}

	::System::Void _ctor(::System::Int32 F54AF627638DE3C9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + B00DC7FE7AF127D0__CTOR_OFFSET))(this, F54AF627638DE3C9);
	}

	::System::Void FFB212A13C8D581B(::ABC::Core::ChessSeed AF9A63638B456161)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Core::ChessSeed))((::PBYTE)hIl2Cpp + B00DC7FE7AF127D0_FFB212A13C8D581B_OFFSET))(this, AF9A63638B456161);
	}

	::System::Int32 ECFD265A6CBC4204()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + B00DC7FE7AF127D0_ECFD265A6CBC4204_OFFSET))(this);
	}
};
