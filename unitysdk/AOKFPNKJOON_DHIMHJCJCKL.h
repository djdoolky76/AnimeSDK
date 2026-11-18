#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AOKFPNKJOON_DHIMHJCJCKL_MBNPDFANMEL_OFFSET UNITYSDK_OFFSET(0x113C8460)
#define AOKFPNKJOON_DHIMHJCJCKL__CTOR_OFFSET UNITYSDK_OFFSET(0x113C8450)

inline static constexpr unsigned int AOKFPNKJOON_DHIMHJCJCKL_TypeDefinitionIndex = 51460;

class AOKFPNKJOON_DHIMHJCJCKL : public ::System::Object
{
public:
	::System::Boolean PLCJLHLIMGG; // 0x10
	::System::Byte _padding0[0x3];
	::System::Single HHMMKIAFHOC; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_DHIMHJCJCKL__CTOR_OFFSET))(this);
	}

	::System::Void MBNPDFANMEL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_DHIMHJCJCKL_MBNPDFANMEL_OFFSET))(this);
	}
};
