#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AF69BF3B1319FD97/BBB37A5BD03B4152.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/EF2A706049267B60.h"

namespace System { class String; }

#define AA6A3CE8429E1FDE__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AA6A3CE8429E1FDE_TypeDefinitionIndex = 9302;

class AA6A3CE8429E1FDE : public ::E379DE61A548837D
{
public:
	::AF69BF3B1319FD97::BBB37A5BD03B4152 B238578C13D086A6; // 0x38
	::E68AA4EB51923C98::EF2A706049267B60 AD263CFA688A4DC8; // 0x3C
	::System::String* B124FD8302123802; // 0x40
	::System::Single AFAB926A8A73B899; // 0x48
	::System::Single F86C8BFFF6EC2113; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA6A3CE8429E1FDE__CTOR_OFFSET))(this);
	}
};
