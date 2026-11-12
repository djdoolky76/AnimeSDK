#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TypeNames_ATypeName.h"
namespace System { class String; }

#define SYSTEM_TYPEIDENTIFIERS_DISPLAY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D30D610)
#define SYSTEM_TYPEIDENTIFIERS_DISPLAY_GETINTERNALNAME_OFFSET UNITYSDK_OFFSET(0x1D30D660)
#define SYSTEM_TYPEIDENTIFIERS_DISPLAY_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1D30D620)
#define SYSTEM_TYPEIDENTIFIERS_DISPLAY_GET_INTERNALNAME_OFFSET UNITYSDK_OFFSET(0x1D30D630)

namespace System
{
	inline static constexpr unsigned int TypeIdentifiers_Display_TypeDefinitionIndex = 443;

	class TypeIdentifiers_Display : public ::System::TypeNames_ATypeName
	{
	public:
		::System::String* internal_name; // 0x10
		::System::String* displayName; // 0x18
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEIDENTIFIERS_DISPLAY_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEIDENTIFIERS_DISPLAY_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::String* get_InternalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEIDENTIFIERS_DISPLAY_GET_INTERNALNAME_OFFSET))(this);
		}

		::System::String* GetInternalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEIDENTIFIERS_DISPLAY_GETINTERNALNAME_OFFSET))(this);
		}

	};
}
