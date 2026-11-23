#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define BE7A7568D6A10B39__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BE7A7568D6A10B39_TypeDefinitionIndex = 9108;

class BE7A7568D6A10B39 : public ::E379DE61A548837D
{
public:
	::System::UInt32 B38B643A39354C7A; // 0x38
	::System::UInt32 FBBB0B49CA2C4C8E; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BE7A7568D6A10B39__CTOR_OFFSET))(this);
	}
};
