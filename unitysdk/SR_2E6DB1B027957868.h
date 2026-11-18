#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Globalization { class CultureInfo; }

#define SR_2E6DB1B027957868_GETSTRING_1_OFFSET UNITYSDK_OFFSET(0x1F51A150)
#define SR_2E6DB1B027957868_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1F51A130)

inline static constexpr unsigned int SR_2E6DB1B027957868_TypeDefinitionIndex = 1633;

class SR_2E6DB1B027957868 : public ::System::Object
{
public:
	static ::System::String* GetString(::System::String* name, ::Il2CppArray<::System::Object*>* args)
	{
		return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SR_2E6DB1B027957868_GETSTRING_OFFSET))(name, args);
	}

	static ::System::String* GetString_1(::System::Globalization::CultureInfo* culture, ::System::String* name, ::Il2CppArray<::System::Object*>* args)
	{
		return ((::System::String*(*)(::System::Globalization::CultureInfo*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SR_2E6DB1B027957868_GETSTRING_1_OFFSET))(culture, name, args);
	}
};
