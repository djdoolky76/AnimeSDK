#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define LOCALE_0966535D9A2748BB_GETTEXT_OFFSET UNITYSDK_OFFSET(0x1C022F20)

inline static constexpr unsigned int Locale_0966535D9A2748BB_TypeDefinitionIndex = 2256;

	class Locale_0966535D9A2748BB : public ::System::Object
	{
	public:
		static ::System::String* GetText(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + LOCALE_0966535D9A2748BB_GETTEXT_OFFSET))(a1);
		}

	};
