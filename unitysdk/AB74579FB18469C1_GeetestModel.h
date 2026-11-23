#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AB74579FB18469C1_GEETESTMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x39E8ED0)

inline static constexpr unsigned int AB74579FB18469C1_GeetestModel_TypeDefinitionIndex = 11884;

class AB74579FB18469C1_GeetestModel : public ::System::Object
{
public:
	::System::String* challenge; // 0x10
	::System::String* gt; // 0x18
	::System::String* new_captcha; // 0x20
	::System::String* success; // 0x28
	::System::String* lang; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB74579FB18469C1_GEETESTMODEL__CTOR_OFFSET))(this);
	}
};
