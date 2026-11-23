#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E70E1FCEC7F05069.h"
#include "unitysdk/System/ValueType.h"

#define AAB8086139CB27E0_AA41588074A88E20_OFFSET UNITYSDK_OFFSET(0x1E93420)
#define AAB8086139CB27E0_E109375EFB10FD3C_OFFSET UNITYSDK_OFFSET(0x1E93390)

inline static constexpr unsigned int AAB8086139CB27E0_TypeDefinitionIndex = 19637;

struct alignas(4) AAB8086139CB27E0
{
	::E70E1FCEC7F05069 F05DC6E596730492; // 0x10

	::System::UInt32 E109375EFB10FD3C()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAB8086139CB27E0_E109375EFB10FD3C_OFFSET))(this);
	}

	::System::Void AA41588074A88E20(::System::UInt32 F30FF8AC8D10A5F4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAB8086139CB27E0_AA41588074A88E20_OFFSET))(this, F30FF8AC8D10A5F4);
	}
};
