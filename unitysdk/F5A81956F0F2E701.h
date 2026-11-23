#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB893667BB6F371B.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define F5A81956F0F2E701__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F5A81956F0F2E701_TypeDefinitionIndex = 433;

class F5A81956F0F2E701 : public ::E379DE61A548837D
{
public:
	::System::Int32 B8809C143ED52022; // 0x38
	::System::Byte _padding0[0x4];
	::System::String* FF725C60DC527BDF; // 0x40
	::AB893667BB6F371B A35E61455FB5F910; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F5A81956F0F2E701__CTOR_OFFSET))(this);
	}
};
