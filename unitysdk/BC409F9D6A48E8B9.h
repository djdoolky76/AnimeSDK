#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BC409F9D6A48E8B9_A29D85F9FBDE96B2_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define BC409F9D6A48E8B9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BC409F9D6A48E8B9_TypeDefinitionIndex = 21431;

class BC409F9D6A48E8B9 : public ::System::Object
{
public:
	::System::String* FC6830DC20A7DAE6; // 0x10

	::System::String* A29D85F9FBDE96B2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BC409F9D6A48E8B9_A29D85F9FBDE96B2_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BC409F9D6A48E8B9__CTOR_OFFSET))(this);
	}
};
