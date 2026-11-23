#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/EBBFE554897B6EE2/E3B0DE2D6F895DD0.h"

class AB642D1382756991;

#define AB9359546F6CA650__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AB9359546F6CA650_TypeDefinitionIndex = 1859;

class AB9359546F6CA650 : public ::E379DE61A548837D
{
public:
	::System::UInt64 B70991CAB8C4B95E; // 0x38
	::EBBFE554897B6EE2::E3B0DE2D6F895DD0 F115FA1EDA6D1617; // 0x40
	::System::Byte _padding0[0x4];
	::AB642D1382756991* E3BB753F088D29E3; // 0x48
	::System::Single F62AA09BAFF40A9D; // 0x50
	::System::Single FF588765AE3752D1; // 0x54
	::System::Boolean BB14E9CF431F0975; // 0x58
	::System::Boolean AB647BF5882A7670; // 0x59
	::System::Boolean BAF82BA911450307; // 0x5A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB9359546F6CA650__CTOR_OFFSET))(this);
	}
};
