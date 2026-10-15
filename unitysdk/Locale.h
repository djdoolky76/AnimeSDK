#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define LOCALE_GETTEXT_1_OFFSET UNITYSDK_OFFSET(0x1C04C910)
#define LOCALE_GETTEXT_OFFSET UNITYSDK_OFFSET(0x1C04C900)

inline static constexpr unsigned int Locale_TypeDefinitionIndex = 2;

	class Locale : public ::System::Object
	{
	public:
		static ::System::String* GetText(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + LOCALE_GETTEXT_OFFSET))(a1);
		}

		static ::System::String* GetText_1(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + LOCALE_GETTEXT_1_OFFSET))(a1, a2);
		}

	};
