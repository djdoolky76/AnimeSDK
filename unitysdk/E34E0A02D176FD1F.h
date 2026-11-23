#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AF69BF3B1319FD97/BBB37A5BD03B4152.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define E34E0A02D176FD1F__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E34E0A02D176FD1F_TypeDefinitionIndex = 9800;

class E34E0A02D176FD1F : public ::E379DE61A548837D
{
public:
	::AF69BF3B1319FD97::BBB37A5BD03B4152 B238578C13D086A6; // 0x38
	::System::Byte _padding0[0x4];
	::System::String* A6592F4404D4B6B3; // 0x40
	::System::Single AFAB926A8A73B899; // 0x48
	::System::Single B2D0F54D55E35C7E; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E34E0A02D176FD1F__CTOR_OFFSET))(this);
	}
};
