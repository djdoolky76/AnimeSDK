#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define B1FA37A43945D4C3__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B1FA37A43945D4C3_TypeDefinitionIndex = 9366;

class B1FA37A43945D4C3 : public ::E379DE61A548837D
{
public:
	::System::String* A6592F4404D4B6B3; // 0x38
	::System::Single AFAB926A8A73B899; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1FA37A43945D4C3__CTOR_OFFSET))(this);
	}
};
