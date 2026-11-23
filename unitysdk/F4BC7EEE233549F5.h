#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDC595893C6EE433/B32ECBA95F3CEE0C.h"
#include "unitysdk/System/Object.h"

#define F4BC7EEE233549F5__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F4BC7EEE233549F5_TypeDefinitionIndex = 16672;

class F4BC7EEE233549F5 : public ::System::Object
{
public:
	::System::Boolean BEEC921FD8B71AAC; // 0x10
	::System::Boolean A6CA87F47F555C4E; // 0x11
	::System::Byte _padding0[0x2];
	::System::Int32 AC5454241FD89C5E; // 0x14
	::System::Single AC15B89808B3E7D1; // 0x18
	::System::Single A074212908A13874; // 0x1C
	::System::Boolean E428ACA18B980574; // 0x20
	::System::Byte _padding1[0x7];
	::BDC595893C6EE433::B32ECBA95F3CEE0C A0CB58530CB323A8; // 0x28
	::System::Boolean A72DB54AAF3336BD; // 0x148

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F4BC7EEE233549F5__CTOR_OFFSET))(this);
	}
};
