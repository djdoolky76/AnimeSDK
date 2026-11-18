#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ExitPerform/ExitPerformEvent.h"

namespace System { class String; }

#define ECLCDANNNPF__CTOR_OFFSET UNITYSDK_OFFSET(0x158906D0)

inline static constexpr unsigned int ECLCDANNNPF_TypeDefinitionIndex = 42447;

class ECLCDANNNPF : public ::MoleMole::ExitPerform::ExitPerformEvent
{
public:
	::System::String* EBAKBLBDMFD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLCDANNNPF__CTOR_OFFSET))(this);
	}
};
