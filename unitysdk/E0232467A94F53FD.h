#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define E0232467A94F53FD__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E0232467A94F53FD_TypeDefinitionIndex = 860;

class E0232467A94F53FD : public ::E379DE61A548837D
{
public:
	::System::String* A4B22767FFD7678A; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E0232467A94F53FD__CTOR_OFFSET))(this);
	}
};
