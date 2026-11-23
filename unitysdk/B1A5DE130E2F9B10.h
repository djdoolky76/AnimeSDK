#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A3A7A3FAECD154E6.h"

class AB642D1382756991;
namespace System { class String; }

#define B1A5DE130E2F9B10__CTOR_OFFSET UNITYSDK_OFFSET(0x1675150)

inline static constexpr unsigned int B1A5DE130E2F9B10_TypeDefinitionIndex = 62;

class B1A5DE130E2F9B10 : public ::A3A7A3FAECD154E6
{
public:
	::AB642D1382756991* ED86FBC5C5B2F222; // 0x28
	::System::String* EF4CBAE63AE86477; // 0x30
	::System::Single B17B9B9C54637FC1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1A5DE130E2F9B10__CTOR_OFFSET))(this);
	}
};
