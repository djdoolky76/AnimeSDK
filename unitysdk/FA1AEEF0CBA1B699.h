#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define FA1AEEF0CBA1B699__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FA1AEEF0CBA1B699_TypeDefinitionIndex = 772;

class FA1AEEF0CBA1B699 : public ::E379DE61A548837D
{
public:
	::System::String* E31845CE1465720D; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FA1AEEF0CBA1B699__CTOR_OFFSET))(this);
	}
};
