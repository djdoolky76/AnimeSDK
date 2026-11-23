#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB893667BB6F371B.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/E9CBC96A1978B308.h"

#define FFD0386CCEF99D47__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FFD0386CCEF99D47_TypeDefinitionIndex = 9946;

class FFD0386CCEF99D47 : public ::E379DE61A548837D
{
public:
	::System::UInt64 AE21947EB8F19FF8; // 0x38
	::E68AA4EB51923C98::E9CBC96A1978B308 A789F9D2BB60040C; // 0x40
	::System::Byte _padding0[0x4];
	::AB893667BB6F371B AD13C6A9CD32769F; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFD0386CCEF99D47__CTOR_OFFSET))(this);
	}
};
