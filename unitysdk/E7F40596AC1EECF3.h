#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define E7F40596AC1EECF3__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E7F40596AC1EECF3_TypeDefinitionIndex = 1472;

class E7F40596AC1EECF3 : public ::E379DE61A548837D
{
public:
	::System::String* EDF310C4AD388A5F; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7F40596AC1EECF3__CTOR_OFFSET))(this);
	}
};
