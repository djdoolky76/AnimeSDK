#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define F553597EE739E8C7__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F553597EE739E8C7_TypeDefinitionIndex = 11483;

class F553597EE739E8C7 : public ::System::Attribute
{
public:
	::System::Void _ctor(::System::Type* BBCFEC7DB309E927)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + F553597EE739E8C7__CTOR_OFFSET))(this, BBCFEC7DB309E927);
	}
};
