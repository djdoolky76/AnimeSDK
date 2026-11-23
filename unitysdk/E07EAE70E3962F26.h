#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define E07EAE70E3962F26__CTOR_OFFSET UNITYSDK_OFFSET(0x2759260)

inline static constexpr unsigned int E07EAE70E3962F26_TypeDefinitionIndex = 11571;

class E07EAE70E3962F26 : public ::System::Attribute
{
public:
	::System::String* B1F3249C58F03ADC; // 0x10

	::System::Void _ctor(::System::String* ED6187AE74CD752F)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E07EAE70E3962F26__CTOR_OFFSET))(this, ED6187AE74CD752F);
	}
};
