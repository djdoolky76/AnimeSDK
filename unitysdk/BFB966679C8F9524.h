#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FB0D64B103BB2404.h"

class AB642D1382756991;
namespace System { class String; }

#define BFB966679C8F9524__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BFB966679C8F9524_TypeDefinitionIndex = 8217;

class BFB966679C8F9524 : public ::FB0D64B103BB2404
{
public:
	::AB642D1382756991* AED5FB118F18A2A3; // 0x10
	::System::String* FC96E5B15DE8A200; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFB966679C8F9524__CTOR_OFFSET))(this);
	}
};
