#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/F52D7D0423C392F6/E897A7ADC8D7067E.h"

class AB642D1382756991;

#define FC55CEB010437420__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FC55CEB010437420_TypeDefinitionIndex = 9729;

class FC55CEB010437420 : public ::E379DE61A548837D
{
public:
	::System::Int32 E8A1A1345CE071C9; // 0x38
	::System::Byte _padding0[0x4];
	::AB642D1382756991* E99C1CEF85982973; // 0x40
	::AB642D1382756991* E63E0F25F251B753; // 0x48
	::System::UInt32 EF0122FCE8B57425; // 0x50
	::System::UInt32 E43E467F516F27D3; // 0x54
	::F52D7D0423C392F6::E897A7ADC8D7067E EC7B8BE2C4CD4B7C; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC55CEB010437420__CTOR_OFFSET))(this);
	}
};
