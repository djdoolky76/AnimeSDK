#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define A1BD865193364A55__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A1BD865193364A55_TypeDefinitionIndex = 8368;

class A1BD865193364A55 : public ::E379DE61A548837D
{
public:
	::System::UInt32 FCBE047F1AF02D04; // 0x38
	::System::Byte _padding0[0x4];
	::System::String* A6592F4404D4B6B3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1BD865193364A55__CTOR_OFFSET))(this);
	}
};
