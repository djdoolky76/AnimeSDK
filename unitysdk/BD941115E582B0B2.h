#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define BD941115E582B0B2__CTOR_OFFSET UNITYSDK_OFFSET(0x17F11D0)

inline static constexpr unsigned int BD941115E582B0B2_TypeDefinitionIndex = 1030;

class BD941115E582B0B2 : public ::E379DE61A548837D
{
public:
	::System::String* E31845CE1465720D; // 0x38
	::System::Boolean A780D9251A54B67F; // 0x40
	::System::Boolean EA44C569E4072AF3; // 0x41
	::System::Boolean FFB0AB5560373F15; // 0x42
	::System::Byte _padding0[0x1];
	::System::Single F8E1A58D7D9FD81C; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD941115E582B0B2__CTOR_OFFSET))(this);
	}
};
