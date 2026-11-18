#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/Object.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"

namespace System { class String; }

#define UNREALTYPES_FIELD_DISPOSEGENIMPL_OFFSET UNITYSDK_OFFSET(0x1E2A0DE0)
#define UNREALTYPES_FIELD_DISPOSEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E2AD2E0)
#define UNREALTYPES_FIELD_INITIALIZEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E2AD2D0)
#define UNREALTYPES_FIELD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A0C90)
#define UNREALTYPES_FIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A0AD0)

namespace UnrealTypes
{
	inline static constexpr unsigned int Field_TypeDefinitionIndex = 27721;

	class Field : public ::UnrealTypes::Object
	{
	public:
		::System::Void _ctor(::UnrealTypes::Object* outer, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNREALTYPES_FIELD__CTOR_OFFSET))(this, outer, name);
		}

		::System::Void _ctor_1(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + UNREALTYPES_FIELD__CTOR_1_OFFSET))(this, initializer);
		}

		::System::Void InitializeProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FIELD_INITIALIZEPROPERTIES_OFFSET))(this);
		}

		::System::Void DisposeGenImpl(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_FIELD_DISPOSEGENIMPL_OFFSET))(this, disposing);
		}

		::System::Void DisposeProperties(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_FIELD_DISPOSEPROPERTIES_OFFSET))(this, disposing);
		}
	};
}
