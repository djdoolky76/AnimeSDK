#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IBHGDJGJLEI_OCKBOPKNBLK_LNFDHLEHAIA_OFFSET UNITYSDK_OFFSET(0xF835AE0)
#define IBHGDJGJLEI_OCKBOPKNBLK__CTOR_OFFSET UNITYSDK_OFFSET(0xF835AD0)

inline static constexpr unsigned int IBHGDJGJLEI_OCKBOPKNBLK_TypeDefinitionIndex = 55771;

class IBHGDJGJLEI_OCKBOPKNBLK : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_OCKBOPKNBLK__CTOR_OFFSET))(this);
	}

	::System::Void LNFDHLEHAIA(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_OCKBOPKNBLK_LNFDHLEHAIA_OFFSET))(this, GLAOEHCGCFO);
	}
};
