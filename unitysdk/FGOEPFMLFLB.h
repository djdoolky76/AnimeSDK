#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FGOEPFMLFLB__CTOR_OFFSET UNITYSDK_OFFSET(0x116B19A0)

inline static constexpr unsigned int FGOEPFMLFLB_TypeDefinitionIndex = 83075;

class FGOEPFMLFLB : public ::System::Object
{
public:
	::System::String* ANMOEPMNGIJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGOEPFMLFLB__CTOR_OFFSET))(this);
	}
};
