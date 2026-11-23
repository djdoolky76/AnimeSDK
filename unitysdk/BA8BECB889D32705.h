#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define BA8BECB889D32705__CTOR_OFFSET UNITYSDK_OFFSET(0x3BA0D50)

inline static constexpr unsigned int BA8BECB889D32705_TypeDefinitionIndex = 11111;

class BA8BECB889D32705 : public ::System::Attribute
{
public:
	::System::String* B2D8E59F84ECF160; // 0x10

	::System::Void _ctor(::System::String* EBDD08B044E6BE63)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BA8BECB889D32705__CTOR_OFFSET))(this, EBDD08B044E6BE63);
	}
};
