#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define B118C331569A031B__CTOR_OFFSET UNITYSDK_OFFSET(0x3865790)

inline static constexpr unsigned int B118C331569A031B_TypeDefinitionIndex = 17970;

class B118C331569A031B : public ::System::Object
{
public:
	::System::String* A6398F4F137F1037; // 0x10
	::System::String* B6200148A503562C; // 0x18
	::System::Int32 F0F170740DE60F44; // 0x20

	::System::Void _ctor(::System::String* A1AA7F640D04D8B3, ::System::String* F46A0F322CA95933, ::System::Int32 B4C16C8797205302)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + B118C331569A031B__CTOR_OFFSET))(this, A1AA7F640D04D8B3, F46A0F322CA95933, B4C16C8797205302);
	}
};
