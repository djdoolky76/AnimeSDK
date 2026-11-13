#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/InputField_ContentType.h"
namespace System { class String; }

#define MIHOYO_SDK_CONSOLEIMEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD503C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleImeInfo_TypeDefinitionIndex = 7879;

	class ConsoleImeInfo : public ::System::Object
	{
	public:
		::System::String* defaultValue; // 0x10
		::System::String* description; // 0x18
		::System::String* placeholder; // 0x20
		::System::String* title; // 0x28
		::System::Boolean isMultiLine; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 maxLength; // 0x34
		::UnityEngine::UI::InputField_ContentType imeType; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEIMEINFO_CTOR_OFFSET))(this);
		}

	};
}
