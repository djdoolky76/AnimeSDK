#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/F152E08CA8D89FD1.h"

#define F655DF6FD413350D__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F655DF6FD413350D_TypeDefinitionIndex = 1172;

class F655DF6FD413350D : public ::E379DE61A548837D
{
public:
	::System::UInt32 FBBB0B49CA2C4C8E; // 0x38
	::E68AA4EB51923C98::F152E08CA8D89FD1 BE6699B8432A15F0; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F655DF6FD413350D__CTOR_OFFSET))(this);
	}
};
