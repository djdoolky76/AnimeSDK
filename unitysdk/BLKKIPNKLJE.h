#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define BLKKIPNKLJE__CTOR_OFFSET UNITYSDK_OFFSET(0x1857C260)

inline static constexpr unsigned int BLKKIPNKLJE_TypeDefinitionIndex = 57375;

class BLKKIPNKLJE : public ::System::Attribute
{
public:
	::System::String* IKGGPCFAEND; // 0x10

	::System::Void _ctor(::System::String* FHCKJMMOFJG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BLKKIPNKLJE__CTOR_OFFSET))(this, FHCKJMMOFJG);
	}
};
