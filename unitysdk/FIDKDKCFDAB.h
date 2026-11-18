#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define FIDKDKCFDAB__CTOR_OFFSET UNITYSDK_OFFSET(0x174FCFF0)

inline static constexpr unsigned int FIDKDKCFDAB_TypeDefinitionIndex = 83457;

class FIDKDKCFDAB : public ::System::Attribute
{
public:
	::System::String* EMCPPBMEKKK; // 0x10
	::System::String* JMDEKPONKMF; // 0x18

	::System::Void _ctor(::System::String* MLPMJOAKPFN, ::System::String* ANBMCAMNBBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FIDKDKCFDAB__CTOR_OFFSET))(this, MLPMJOAKPFN, ANBMCAMNBBE);
	}
};
