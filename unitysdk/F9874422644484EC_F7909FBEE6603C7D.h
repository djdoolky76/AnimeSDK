#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define F9874422644484EC_F7909FBEE6603C7D_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x292CF00)
#define F9874422644484EC_F7909FBEE6603C7D__CTOR_OFFSET UNITYSDK_OFFSET(0x292CF70)

inline static constexpr unsigned int F9874422644484EC_F7909FBEE6603C7D_TypeDefinitionIndex = 15331;

class F9874422644484EC_F7909FBEE6603C7D : public ::System::Object
{
public:
	::System::Int32 AB8BE3440CEB1F11; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* EFCC378D42892A51; // 0x18

	::System::Void _ctor(::System::String* F1BF0FE85E9DD584)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F9874422644484EC_F7909FBEE6603C7D__CTOR_OFFSET))(this, F1BF0FE85E9DD584);
	}

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F9874422644484EC_F7909FBEE6603C7D_EA28CF291EBB2931_OFFSET))(this);
	}
};
