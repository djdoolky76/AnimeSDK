#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define FBNKMKDOKFL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA14A10)

inline static constexpr unsigned int FBNKMKDOKFL_TypeDefinitionIndex = 94890;

class FBNKMKDOKFL : public ::System::Attribute
{
public:
	::System::String* GFKCABHFFEE; // 0x10

	::System::Void _ctor(::System::String* GFKCABHFFEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FBNKMKDOKFL__CTOR_OFFSET))(this, GFKCABHFFEE);
	}
};
