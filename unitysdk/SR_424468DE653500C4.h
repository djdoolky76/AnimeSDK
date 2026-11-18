#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SR_424468DE653500C4_FORMAT_1_OFFSET UNITYSDK_OFFSET(0x1F988C60)
#define SR_424468DE653500C4_FORMAT_2_OFFSET UNITYSDK_OFFSET(0x1F988CB0)
#define SR_424468DE653500C4_FORMAT_OFFSET UNITYSDK_OFFSET(0x1F988C10)
#define SR_424468DE653500C4_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1F988C00)

inline static constexpr unsigned int SR_424468DE653500C4_TypeDefinitionIndex = 37212;

class SR_424468DE653500C4 : public ::System::Object
{
public:
	static ::System::String* GetString(::System::String* name)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SR_424468DE653500C4_GETSTRING_OFFSET))(name);
	}

	static ::System::String* Format(::System::String* resourceFormat, ::System::Object* p1)
	{
		return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SR_424468DE653500C4_FORMAT_OFFSET))(resourceFormat, p1);
	}

	static ::System::String* Format_1(::System::String* resourceFormat, ::System::Object* p1, ::System::Object* p2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SR_424468DE653500C4_FORMAT_1_OFFSET))(resourceFormat, p1, p2);
	}

	static ::System::String* Format_2(::System::String* resourceFormat, ::System::Object* p1, ::System::Object* p2, ::System::Object* p3)
	{
		return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SR_424468DE653500C4_FORMAT_2_OFFSET))(resourceFormat, p1, p2, p3);
	}
};
