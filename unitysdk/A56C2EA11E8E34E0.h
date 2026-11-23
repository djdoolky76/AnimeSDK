#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB893667BB6F371B.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;

#define A56C2EA11E8E34E0__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A56C2EA11E8E34E0_TypeDefinitionIndex = 5528;

class A56C2EA11E8E34E0 : public ::E379DE61A548837D
{
public:
	::System::UInt32 E43E467F516F27D3; // 0x38
	::System::Byte _padding0[0x4];
	::AB642D1382756991* E99C1CEF85982973; // 0x40
	::AB893667BB6F371B B1DF549D286AB9FD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A56C2EA11E8E34E0__CTOR_OFFSET))(this);
	}
};
