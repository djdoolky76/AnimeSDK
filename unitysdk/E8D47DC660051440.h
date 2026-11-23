#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define E8D47DC660051440__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E8D47DC660051440_TypeDefinitionIndex = 7894;

class E8D47DC660051440 : public ::E379DE61A548837D
{
public:
	::System::UInt32 B54C64F71A67AC28; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8D47DC660051440__CTOR_OFFSET))(this);
	}
};
