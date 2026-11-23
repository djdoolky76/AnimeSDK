#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define E212968BE63468D3__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E212968BE63468D3_TypeDefinitionIndex = 2097;

class E212968BE63468D3 : public ::E379DE61A548837D
{
public:
	::System::UInt32 B289D9A1F114D305; // 0x38
	::System::UInt32 F562DA1C00CE60C6; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E212968BE63468D3__CTOR_OFFSET))(this);
	}
};
