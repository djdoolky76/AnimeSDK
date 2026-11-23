#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/F76D857DEDB76FD5.h"

#define FFDEAB837AF42BCC__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FFDEAB837AF42BCC_TypeDefinitionIndex = 26;

class FFDEAB837AF42BCC : public ::E379DE61A548837D
{
public:
	::System::UInt32 EF0122FCE8B57425; // 0x38
	::System::UInt32 E43E467F516F27D3; // 0x3C
	::System::UInt32 EFFDCBCC6A392D6D; // 0x40
	::E68AA4EB51923C98::F76D857DEDB76FD5 E8A596AC44E741A9; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDEAB837AF42BCC__CTOR_OFFSET))(this);
	}
};
