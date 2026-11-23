#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AE27555029C18F7E.h"

namespace System { class String; }

#define E5B047866A948ABA_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x27474C0)
#define E5B047866A948ABA__CTOR_OFFSET UNITYSDK_OFFSET(0x261C020)

inline static constexpr unsigned int E5B047866A948ABA_TypeDefinitionIndex = 3046;

class E5B047866A948ABA : public ::AE27555029C18F7E
{
public:
	::System::Void _ctor(::System::String* B4F5ACC1795A1E8D)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E5B047866A948ABA__CTOR_OFFSET))(this, B4F5ACC1795A1E8D);
	}

	::System::Void A1E97155B145443C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5B047866A948ABA_A1E97155B145443C_OFFSET))(this);
	}
};
