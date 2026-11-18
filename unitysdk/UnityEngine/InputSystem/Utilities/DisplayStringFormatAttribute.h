#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_DISPLAYSTRINGFORMATATTRIBUTE_GET_FORMATSTRING_OFFSET UNITYSDK_OFFSET(0x1F571DB0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_DISPLAYSTRINGFORMATATTRIBUTE_SET_FORMATSTRING_OFFSET UNITYSDK_OFFSET(0x1F571DC0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_DISPLAYSTRINGFORMATATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F571DD0)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int DisplayStringFormatAttribute_TypeDefinitionIndex = 32113;

	class DisplayStringFormatAttribute : public ::System::Attribute
	{
	public:
		::System::String* _formatString_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* formatString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_DISPLAYSTRINGFORMATATTRIBUTE__CTOR_OFFSET))(this, formatString);
		}

		::System::String* get_formatString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_DISPLAYSTRINGFORMATATTRIBUTE_GET_FORMATSTRING_OFFSET))(this);
		}

		::System::Void set_formatString(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_DISPLAYSTRINGFORMATATTRIBUTE_SET_FORMATSTRING_OFFSET))(this, value);
		}
	};
}
