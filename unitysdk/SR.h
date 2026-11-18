#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SR_FORMAT_1_OFFSET UNITYSDK_OFFSET(0x1D1ABD30)
#define SR_FORMAT_OFFSET UNITYSDK_OFFSET(0x1D1ABCE0)

inline static constexpr unsigned int SR_TypeDefinitionIndex = 2;

class SR : public ::System::Object
{
public:
	static ::System::String* Format(::System::String* resourceFormat, ::System::Object* p1)
	{
		return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SR_FORMAT_OFFSET))(resourceFormat, p1);
	}

	static ::System::String* Format_1(::System::String* resourceFormat, ::System::Object* p1, ::System::Object* p2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SR_FORMAT_1_OFFSET))(resourceFormat, p1, p2);
	}
};
