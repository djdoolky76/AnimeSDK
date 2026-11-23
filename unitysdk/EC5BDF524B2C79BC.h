#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define EC5BDF524B2C79BC__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EC5BDF524B2C79BC_TypeDefinitionIndex = 2268;

class EC5BDF524B2C79BC : public ::E379DE61A548837D
{
public:
	::System::String* BC24C5C1A8EB99B3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC5BDF524B2C79BC__CTOR_OFFSET))(this);
	}
};
