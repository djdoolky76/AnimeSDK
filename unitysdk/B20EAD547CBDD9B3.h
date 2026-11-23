#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/F152E08CA8D89FD1.h"

#define B20EAD547CBDD9B3__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B20EAD547CBDD9B3_TypeDefinitionIndex = 8858;

class B20EAD547CBDD9B3 : public ::E379DE61A548837D
{
public:
	::System::UInt32 B38B643A39354C7A; // 0x38
	::System::UInt32 FBBB0B49CA2C4C8E; // 0x3C
	::System::Boolean A930C0AF458B1938; // 0x40
	::System::Boolean A5D6AFA0DA0FD9C8; // 0x41
	::System::Byte _padding0[0x2];
	::E68AA4EB51923C98::F152E08CA8D89FD1 F14A288DDF121624; // 0x44
	::E68AA4EB51923C98::F152E08CA8D89FD1 E7F33CA11D3790EE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B20EAD547CBDD9B3__CTOR_OFFSET))(this);
	}
};
