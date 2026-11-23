#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AF120A15CAB5F8D1_F286A0F0065162E1_OFFSET UNITYSDK_OFFSET(0x410A2D0)

inline static constexpr unsigned int AF120A15CAB5F8D1_TypeDefinitionIndex = 16965;

class AF120A15CAB5F8D1 : public ::System::Object
{
public:
	static ::System::Int64 F286A0F0065162E1(::System::String* E97E8D008427A296)
	{
		return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + AF120A15CAB5F8D1_F286A0F0065162E1_OFFSET))(E97E8D008427A296);
	}
};
