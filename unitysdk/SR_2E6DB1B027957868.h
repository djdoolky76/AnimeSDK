#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Globalization { class CultureInfo; }

#define SR_2E6DB1B027957868_GETSTRING_1_OFFSET UNITYSDK_OFFSET(0x1EE91DB0)
#define SR_2E6DB1B027957868_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1EE91D00)

	class SR_2E6DB1B027957868 : public ::System::Object
	{
	public:
		static ::System::String* GetString(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SR_2E6DB1B027957868_GETSTRING_OFFSET))(a1, a2);
		}

		static ::System::String* GetString_1(::System::Globalization::CultureInfo* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::String*(*)(::System::Globalization::CultureInfo*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SR_2E6DB1B027957868_GETSTRING_1_OFFSET))(a1, a2, a3);
		}

	};
