#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E59E9C75513E5E2D.h"
#include "unitysdk/E68AA4EB51923C98/F140AB59DDFE659D.h"

#define A24C15855F0453D4__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A24C15855F0453D4_TypeDefinitionIndex = 9312;

class A24C15855F0453D4 : public ::E379DE61A548837D
{
public:
	::E59E9C75513E5E2D BF591CE2531CA8C6; // 0x38
	::System::UInt64 F1795B35773A25E1; // 0x50
	::System::UInt32 F14B016F726AE773; // 0x58
	::System::Int32 E8A1A1345CE071C9; // 0x5C
	::E68AA4EB51923C98::F140AB59DDFE659D E2FD51EF7DD24E38; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A24C15855F0453D4__CTOR_OFFSET))(this);
	}
};
