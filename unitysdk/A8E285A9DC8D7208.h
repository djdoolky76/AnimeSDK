#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB07E24B584983C1.h"

class AEC55C46F36C727A;

#define A8E285A9DC8D7208_A3C2F655C6B4F5E2_OFFSET UNITYSDK_OFFSET(0x1E131F0)
#define A8E285A9DC8D7208_AFD5178090BD77F2_OFFSET UNITYSDK_OFFSET(0x1E12FF0)
#define A8E285A9DC8D7208_FFC355AFC7DBA618_OFFSET UNITYSDK_OFFSET(0x1E12F80)
#define A8E285A9DC8D7208__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A8E285A9DC8D7208_TypeDefinitionIndex = 9446;

class A8E285A9DC8D7208 : public ::AB07E24B584983C1
{
public:
	static ::System::Int32* StaticGet_A9DD11D41622F396()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(A8E285A9DC8D7208_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::AEC55C46F36C727A* F3597127D1687748; // 0x50
	::System::Int32 F41330DC8BA10154; // 0x58

	static ::System::Int32 FFC355AFC7DBA618()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + A8E285A9DC8D7208_FFC355AFC7DBA618_OFFSET))();
	}

	::System::Void A3C2F655C6B4F5E2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A8E285A9DC8D7208_A3C2F655C6B4F5E2_OFFSET))(this);
	}

	::System::Void AFD5178090BD77F2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A8E285A9DC8D7208_AFD5178090BD77F2_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A8E285A9DC8D7208__CTOR_OFFSET))(this);
	}
};
