#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define HOEMFDMINIJ_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x748C80)

inline static constexpr unsigned int HOEMFDMINIJ_TypeDefinitionIndex = 58672;

struct alignas(8) HOEMFDMINIJ
{
	::MoleMole::EntityHandle BHMLIFIKCEL; // 0x10
	::MoleMole::EntityHandle KEHECMCDLFC; // 0x20
	::System::String* BPOPIDAAKAH; // 0x30
	::System::String* CCENKPLCABG; // 0x38

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEMFDMINIJ_JDAPDDEOCEA_OFFSET))(this);
	}
};
