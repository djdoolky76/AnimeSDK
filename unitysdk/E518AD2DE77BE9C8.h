#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B62BB6DAF7FE7329.h"

namespace System { class String; }

#define E518AD2DE77BE9C8_BD61D7D0FA32E14B_OFFSET UNITYSDK_OFFSET(0x1848550)
#define E518AD2DE77BE9C8_E486AC3618341781_OFFSET UNITYSDK_OFFSET(0x18485C0)
#define E518AD2DE77BE9C8_E80B44C1BB4AEBF8_OFFSET UNITYSDK_OFFSET(0x1678550)
#define E518AD2DE77BE9C8_EBA88EC1174C309A_OFFSET UNITYSDK_OFFSET(0x18484E0)
#define E518AD2DE77BE9C8__CTOR_OFFSET UNITYSDK_OFFSET(0x1848540)

inline static constexpr unsigned int E518AD2DE77BE9C8_TypeDefinitionIndex = 1186;

class E518AD2DE77BE9C8 : public ::B62BB6DAF7FE7329
{
public:
	::System::Boolean B9B32909C476B53D; // 0x38
	::System::Byte _padding0[0x3];
	::System::UInt32 BBF016E9CDF7AB56; // 0x3C

	::System::Boolean E486AC3618341781()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E518AD2DE77BE9C8_E486AC3618341781_OFFSET))(this);
	}

	::System::String* EBA88EC1174C309A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + E518AD2DE77BE9C8_EBA88EC1174C309A_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E518AD2DE77BE9C8__CTOR_OFFSET))(this);
	}

	::System::Boolean E80B44C1BB4AEBF8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E518AD2DE77BE9C8_E80B44C1BB4AEBF8_OFFSET))(this);
	}

	::System::Boolean BD61D7D0FA32E14B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E518AD2DE77BE9C8_BD61D7D0FA32E14B_OFFSET))(this);
	}
};
