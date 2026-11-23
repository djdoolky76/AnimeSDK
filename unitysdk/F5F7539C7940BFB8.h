#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;
namespace System { class String; }

#define F5F7539C7940BFB8__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F5F7539C7940BFB8_TypeDefinitionIndex = 8831;

class F5F7539C7940BFB8 : public ::E379DE61A548837D
{
public:
	::AB642D1382756991* E63E0F25F251B753; // 0x38
	::System::String* B42892AA6D02BBC0; // 0x40
	::System::Single E333DE2499C4E56C; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F5F7539C7940BFB8__CTOR_OFFSET))(this);
	}
};
