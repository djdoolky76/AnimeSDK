#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNJDGHBEMLK;
namespace System { class String; }

#define PNJDGHBEMLK_LHOCOLDKCBK_NMJEFMILEAN_OFFSET UNITYSDK_OFFSET(0x1D9D71C0)
#define PNJDGHBEMLK_LHOCOLDKCBK_PAHHMJEPJFH_OFFSET UNITYSDK_OFFSET(0x1D9D7180)
#define PNJDGHBEMLK_LHOCOLDKCBK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D7170)

inline static constexpr unsigned int PNJDGHBEMLK_LHOCOLDKCBK_TypeDefinitionIndex = 64986;

class PNJDGHBEMLK_LHOCOLDKCBK : public ::System::Object
{
public:
	::PNJDGHBEMLK* KLHPEBKNIFB; // 0x10
	::System::String* FCBDPCEKHOM; // 0x18
	::System::Int32 FDMEJOLFMLF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_LHOCOLDKCBK__CTOR_OFFSET))(this);
	}

	::System::Void PAHHMJEPJFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_LHOCOLDKCBK_PAHHMJEPJFH_OFFSET))(this);
	}

	::System::Void NMJEFMILEAN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_LHOCOLDKCBK_NMJEFMILEAN_OFFSET))(this);
	}
};
