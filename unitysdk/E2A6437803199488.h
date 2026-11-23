#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB893667BB6F371B.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define E2A6437803199488__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E2A6437803199488_TypeDefinitionIndex = 10205;

class E2A6437803199488 : public ::E379DE61A548837D
{
public:
	::System::String* B2A204654E0BBFC6; // 0x38
	::AB893667BB6F371B B97E11AD8B618D88; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2A6437803199488__CTOR_OFFSET))(this);
	}
};
