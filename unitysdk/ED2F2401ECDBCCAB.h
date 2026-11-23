#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define ED2F2401ECDBCCAB__CTOR_OFFSET UNITYSDK_OFFSET(0x2759260)

inline static constexpr unsigned int ED2F2401ECDBCCAB_TypeDefinitionIndex = 11440;

class ED2F2401ECDBCCAB : public ::System::Attribute
{
public:
	::System::String* B3EDD3214E38F5E4; // 0x10

	::System::Void _ctor(::System::String* FA01EC0C56CB1DBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ED2F2401ECDBCCAB__CTOR_OFFSET))(this, FA01EC0C56CB1DBC);
	}
};
