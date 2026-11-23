#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB893667BB6F371B.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define B3CC121B756DA8E7__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B3CC121B756DA8E7_TypeDefinitionIndex = 9847;

class B3CC121B756DA8E7 : public ::E379DE61A548837D
{
public:
	::System::String* B2A204654E0BBFC6; // 0x38
	::AB893667BB6F371B B97E11AD8B618D88; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B3CC121B756DA8E7__CTOR_OFFSET))(this);
	}
};
