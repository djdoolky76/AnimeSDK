#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define EA157072F676E200__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EA157072F676E200_TypeDefinitionIndex = 217;

class EA157072F676E200 : public ::E379DE61A548837D
{
public:
	::System::String* E31845CE1465720D; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA157072F676E200__CTOR_OFFSET))(this);
	}
};
