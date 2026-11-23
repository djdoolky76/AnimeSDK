#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB893667BB6F371B.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define BABB3C91550B7A00__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BABB3C91550B7A00_TypeDefinitionIndex = 2100;

class BABB3C91550B7A00 : public ::E379DE61A548837D
{
public:
	::AB893667BB6F371B A35E61455FB5F910; // 0x38
	::System::String* ED29FB38B8C7EE70; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABB3C91550B7A00__CTOR_OFFSET))(this);
	}
};
