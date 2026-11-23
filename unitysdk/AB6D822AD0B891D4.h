#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define AB6D822AD0B891D4__CTOR_OFFSET UNITYSDK_OFFSET(0x2759260)

inline static constexpr unsigned int AB6D822AD0B891D4_TypeDefinitionIndex = 10299;

class AB6D822AD0B891D4 : public ::System::Attribute
{
public:
	::System::String* ACA86EAE42FE1F10; // 0x10

	::System::Void _ctor(::System::String* B39E63237AEF81D6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AB6D822AD0B891D4__CTOR_OFFSET))(this, B39E63237AEF81D6);
	}
};
