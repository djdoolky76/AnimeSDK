#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define AC552538C88A208C__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AC552538C88A208C_TypeDefinitionIndex = 9502;

class AC552538C88A208C : public ::E379DE61A548837D
{
public:
	::System::String* BC24C5C1A8EB99B3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC552538C88A208C__CTOR_OFFSET))(this);
	}
};
