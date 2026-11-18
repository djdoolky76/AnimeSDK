#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SR_713DC5CDD546C50C_FORMAT_1_OFFSET UNITYSDK_OFFSET(0x1FB57840)
#define SR_713DC5CDD546C50C_FORMAT_2_OFFSET UNITYSDK_OFFSET(0x1FB57890)
#define SR_713DC5CDD546C50C_FORMAT_3_OFFSET UNITYSDK_OFFSET(0x1FB578E0)
#define SR_713DC5CDD546C50C_FORMAT_OFFSET UNITYSDK_OFFSET(0x1FB577A0)
#define SR_713DC5CDD546C50C_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1FB57790)

inline static constexpr unsigned int SR_713DC5CDD546C50C_TypeDefinitionIndex = 4315;

class SR_713DC5CDD546C50C : public ::System::Object
{
public:
	static ::System::String* GetString(::System::String* name)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SR_713DC5CDD546C50C_GETSTRING_OFFSET))(name);
	}

	static ::System::String* Format(::System::String* resourceFormat, ::Il2CppArray<::System::Object*>* args)
	{
		return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SR_713DC5CDD546C50C_FORMAT_OFFSET))(resourceFormat, args);
	}

	static ::System::String* Format_1(::System::String* resourceFormat, ::System::Object* p1)
	{
		return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SR_713DC5CDD546C50C_FORMAT_1_OFFSET))(resourceFormat, p1);
	}

	static ::System::String* Format_2(::System::String* resourceFormat, ::System::Object* p1, ::System::Object* p2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SR_713DC5CDD546C50C_FORMAT_2_OFFSET))(resourceFormat, p1, p2);
	}

	static ::System::String* Format_3(::System::String* resourceFormat, ::System::Object* p1, ::System::Object* p2, ::System::Object* p3)
	{
		return ((::System::String*(*)(::System::String*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SR_713DC5CDD546C50C_FORMAT_3_OFFSET))(resourceFormat, p1, p2, p3);
	}
};
