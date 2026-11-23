#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define E343D07AFC6164BD__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E343D07AFC6164BD_TypeDefinitionIndex = 8074;

class E343D07AFC6164BD : public ::E379DE61A548837D
{
public:
	::System::UInt32 E21B3114ADEEE8A1; // 0x38
	::System::UInt32 E9A255A45B16A21D; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E343D07AFC6164BD__CTOR_OFFSET))(this);
	}
};
