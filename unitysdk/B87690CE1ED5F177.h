#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B62BB6DAF7FE7329.h"

namespace System { class String; }

#define B87690CE1ED5F177_BD61D7D0FA32E14B_OFFSET UNITYSDK_OFFSET(0x1AB1C30)
#define B87690CE1ED5F177_E486AC3618341781_OFFSET UNITYSDK_OFFSET(0x18485C0)
#define B87690CE1ED5F177_E80B44C1BB4AEBF8_OFFSET UNITYSDK_OFFSET(0x1678550)
#define B87690CE1ED5F177_EBA88EC1174C309A_OFFSET UNITYSDK_OFFSET(0x1AB1BD0)
#define B87690CE1ED5F177__CTOR_OFFSET UNITYSDK_OFFSET(0x1848540)

inline static constexpr unsigned int B87690CE1ED5F177_TypeDefinitionIndex = 1896;

class B87690CE1ED5F177 : public ::B62BB6DAF7FE7329
{
public:
	::System::Boolean BD2A8B417D0AD656; // 0x38
	::System::Boolean B9B32909C476B53D; // 0x39

	::System::String* EBA88EC1174C309A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + B87690CE1ED5F177_EBA88EC1174C309A_OFFSET))(this);
	}

	::System::Boolean E486AC3618341781()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B87690CE1ED5F177_E486AC3618341781_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B87690CE1ED5F177__CTOR_OFFSET))(this);
	}

	::System::Boolean E80B44C1BB4AEBF8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B87690CE1ED5F177_E80B44C1BB4AEBF8_OFFSET))(this);
	}

	::System::Boolean BD61D7D0FA32E14B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B87690CE1ED5F177_BD61D7D0FA32E14B_OFFSET))(this);
	}
};
