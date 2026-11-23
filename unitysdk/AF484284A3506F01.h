#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define AF484284A3506F01__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AF484284A3506F01_TypeDefinitionIndex = 7074;

class AF484284A3506F01 : public ::E379DE61A548837D
{
public:
	::System::Boolean F112A45B9CBFA7BB; // 0x38
	::System::Boolean B9610F1F33218EC2; // 0x39
	::System::Boolean E822FC9BEA2A3E06; // 0x3A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AF484284A3506F01__CTOR_OFFSET))(this);
	}
};
