#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AJMJMMEAIDI__CTOR_OFFSET UNITYSDK_OFFSET(0x12D007A0)

inline static constexpr unsigned int AJMJMMEAIDI_TypeDefinitionIndex = 72734;

class AJMJMMEAIDI : public ::System::Object
{
public:
	::System::String* HJMOFMLMAOE; // 0x10
	::System::String* MGEDBKBHJPM; // 0x18
	::System::String* FCEJJAKCBHF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMJMMEAIDI__CTOR_OFFSET))(this);
	}
};
