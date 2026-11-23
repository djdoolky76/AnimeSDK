#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define F14081B085A13F80__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F14081B085A13F80_TypeDefinitionIndex = 1459;

class F14081B085A13F80 : public ::E379DE61A548837D
{
public:
	::System::String* AEDF565CE654EE81; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F14081B085A13F80__CTOR_OFFSET))(this);
	}
};
