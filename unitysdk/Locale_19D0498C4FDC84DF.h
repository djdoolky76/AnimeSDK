#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define LOCALE_19D0498C4FDC84DF_GETTEXT_1_OFFSET UNITYSDK_OFFSET(0x1F8A7400)
#define LOCALE_19D0498C4FDC84DF_GETTEXT_OFFSET UNITYSDK_OFFSET(0x1F8A73F0)
#define LOCALE_19D0498C4FDC84DF__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8A73E0)

inline static constexpr unsigned int Locale_19D0498C4FDC84DF_TypeDefinitionIndex = 2258;

class Locale_19D0498C4FDC84DF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALE_19D0498C4FDC84DF__CTOR_OFFSET))(this);
	}

	static ::System::String* GetText(::System::String* msg)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + LOCALE_19D0498C4FDC84DF_GETTEXT_OFFSET))(msg);
	}

	static ::System::String* GetText_1(::System::String* fmt, ::Il2CppArray<::System::Object*>* args)
	{
		return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + LOCALE_19D0498C4FDC84DF_GETTEXT_1_OFFSET))(fmt, args);
	}
};
