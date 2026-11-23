#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define B87E524B89BFBCD6_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x3B85970)
#define B87E524B89BFBCD6_FC3208D7B8C7EE04_1_OFFSET UNITYSDK_OFFSET(0x3B858E0)
#define B87E524B89BFBCD6_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x3B858C0)
#define B87E524B89BFBCD6__CTOR_OFFSET UNITYSDK_OFFSET(0x22631D0)

inline static constexpr unsigned int B87E524B89BFBCD6_TypeDefinitionIndex = 11044;

struct alignas(8) B87E524B89BFBCD6
{
	::System::Object* F11569ACE95E71A9; // 0x10
	::System::Int32 E48160CEFDABB98F; // 0x18

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + B87E524B89BFBCD6_B996A70283B60FAC_OFFSET))(this);
	}

	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::Int32 F017CAF169EDD463)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + B87E524B89BFBCD6__CTOR_OFFSET))(this, A351543A0362EB15, F017CAF169EDD463);
	}

	/*
	::System::Boolean FC3208D7B8C7EE04(::B87E524B89BFBCD6 BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::B87E524B89BFBCD6))((::PBYTE)hIl2Cpp + B87E524B89BFBCD6_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}
	*/

	::System::Boolean FC3208D7B8C7EE04_1(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + B87E524B89BFBCD6_FC3208D7B8C7EE04_1_OFFSET))(this, A86A90C31A146E9C);
	}
};
