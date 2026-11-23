#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B62BB6DAF7FE7329.h"

namespace System { class String; }

#define A21B8EAABB988431_BD61D7D0FA32E14B_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define A21B8EAABB988431_E486AC3618341781_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define A21B8EAABB988431_E80B44C1BB4AEBF8_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define A21B8EAABB988431_EBA88EC1174C309A_OFFSET UNITYSDK_OFFSET(0x197B2A0)
#define A21B8EAABB988431__CTOR_OFFSET UNITYSDK_OFFSET(0x1848540)

inline static constexpr unsigned int A21B8EAABB988431_TypeDefinitionIndex = 1642;

class A21B8EAABB988431 : public ::B62BB6DAF7FE7329
{
public:
	::System::UInt32 F9472F49492D10C5; // 0x38

	::System::Boolean E80B44C1BB4AEBF8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A21B8EAABB988431_E80B44C1BB4AEBF8_OFFSET))(this);
	}

	::System::String* EBA88EC1174C309A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + A21B8EAABB988431_EBA88EC1174C309A_OFFSET))(this);
	}

	::System::Boolean BD61D7D0FA32E14B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A21B8EAABB988431_BD61D7D0FA32E14B_OFFSET))(this);
	}

	::System::Boolean E486AC3618341781()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A21B8EAABB988431_E486AC3618341781_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A21B8EAABB988431__CTOR_OFFSET))(this);
	}
};
