#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define F88B82A458EA2191_B92C0AB30F291982__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F88B82A458EA2191_B92C0AB30F291982_TypeDefinitionIndex = 2606;

class F88B82A458EA2191_B92C0AB30F291982 : public ::System::Object
{
public:
	::System::String* A963FD20EE294E1C; // 0x10
	::System::UInt64 B8C8A0A324751A9D; // 0x18
	::System::UInt64 F8117CF5374FC72E; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F88B82A458EA2191_B92C0AB30F291982__CTOR_OFFSET))(this);
	}
};
