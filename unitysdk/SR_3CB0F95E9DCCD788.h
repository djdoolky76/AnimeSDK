#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SR_3CB0F95E9DCCD788_FORMAT_OFFSET UNITYSDK_OFFSET(0x20072F30)

inline static constexpr unsigned int SR_3CB0F95E9DCCD788_TypeDefinitionIndex = 6538;

class SR_3CB0F95E9DCCD788 : public ::System::Object
{
public:
	static ::System::String* Format(::System::String* resourceFormat, ::System::Object* p1)
	{
		return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SR_3CB0F95E9DCCD788_FORMAT_OFFSET))(resourceFormat, p1);
	}
};
