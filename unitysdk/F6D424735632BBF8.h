#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define F6D424735632BBF8__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F6D424735632BBF8_TypeDefinitionIndex = 1949;

class F6D424735632BBF8 : public ::E379DE61A548837D
{
public:
	::System::UInt64 A392A66D8BDD2FBB; // 0x38
	::System::UInt64 B839EAAC14C38F8D; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6D424735632BBF8__CTOR_OFFSET))(this);
	}
};
