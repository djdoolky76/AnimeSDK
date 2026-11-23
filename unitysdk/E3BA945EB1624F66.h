#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/F52D7D0423C392F6/E897A7ADC8D7067E.h"
#include "unitysdk/F52D7D0423C392F6/FE43B487E06BE721.h"

#define E3BA945EB1624F66__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E3BA945EB1624F66_TypeDefinitionIndex = 5403;

class E3BA945EB1624F66 : public ::E379DE61A548837D
{
public:
	::System::UInt32 EF0122FCE8B57425; // 0x38
	::System::UInt32 E43E467F516F27D3; // 0x3C
	::F52D7D0423C392F6::FE43B487E06BE721 AC60FAB685A3EFCC; // 0x40
	::System::Byte _padding0[0x4];
	::System::UInt64 E78B938A8FE54C64; // 0x48
	::F52D7D0423C392F6::E897A7ADC8D7067E F470EEE9DD393A9F; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3BA945EB1624F66__CTOR_OFFSET))(this);
	}
};
