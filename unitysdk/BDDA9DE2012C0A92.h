#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/E918F2EBE74B0CF7.h"

#define BDDA9DE2012C0A92__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BDDA9DE2012C0A92_TypeDefinitionIndex = 3356;

class BDDA9DE2012C0A92 : public ::E379DE61A548837D
{
public:
	::E68AA4EB51923C98::E918F2EBE74B0CF7 F258E36C00C06AD2; // 0x38
	::System::Byte _padding0[0x4];
	::System::UInt64 EA57F12B88B6EE6A; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDA9DE2012C0A92__CTOR_OFFSET))(this);
	}
};
