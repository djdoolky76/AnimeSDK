#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define AA29078CBB927CE0__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AA29078CBB927CE0_TypeDefinitionIndex = 14768;

class AA29078CBB927CE0 : public ::System::Attribute
{
public:
	::System::Void _ctor(::System::Type* BBCFEC7DB309E927)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + AA29078CBB927CE0__CTOR_OFFSET))(this, BBCFEC7DB309E927);
	}
};
