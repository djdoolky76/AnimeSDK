#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;

#define E8E6F6589218D7C3__CTOR_OFFSET UNITYSDK_OFFSET(0x1677AC0)

inline static constexpr unsigned int E8E6F6589218D7C3_TypeDefinitionIndex = 1366;

class E8E6F6589218D7C3 : public ::E379DE61A548837D
{
public:
	::System::Boolean B914347753C98251; // 0x38
	::System::Byte _padding0[0x7];
	::AB642D1382756991* ED86FBC5C5B2F222; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8E6F6589218D7C3__CTOR_OFFSET))(this);
	}
};
