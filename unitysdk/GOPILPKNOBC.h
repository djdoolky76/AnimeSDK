#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFCDHIKKIBB.h"

namespace System { class String; }

#define GOPILPKNOBC__CTOR_OFFSET UNITYSDK_OFFSET(0x10FF9CA0)

inline static constexpr unsigned int GOPILPKNOBC_TypeDefinitionIndex = 76018;

class GOPILPKNOBC : public ::EFCDHIKKIBB
{
public:
	::System::Void _ctor(::System::String* LCMLOOJLFBD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOPILPKNOBC__CTOR_OFFSET))(this, LCMLOOJLFBD);
	}
};
