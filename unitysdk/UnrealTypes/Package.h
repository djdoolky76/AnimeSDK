#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/Object.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"

namespace System { class String; }

#define UNREALTYPES_PACKAGE_DISPOSEGENIMPL_OFFSET UNITYSDK_OFFSET(0x1E2B06E0)
#define UNREALTYPES_PACKAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2B06D0)
#define UNREALTYPES_PACKAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2ADCF0)

namespace UnrealTypes
{
	inline static constexpr unsigned int Package_TypeDefinitionIndex = 27797;

	class Package : public ::UnrealTypes::Object
	{
	public:
		::System::Void _ctor(::UnrealTypes::Object* outer, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNREALTYPES_PACKAGE__CTOR_OFFSET))(this, outer, name);
		}

		::System::Void _ctor_1(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + UNREALTYPES_PACKAGE__CTOR_1_OFFSET))(this, initializer);
		}

		::System::Void DisposeGenImpl(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_PACKAGE_DISPOSEGENIMPL_OFFSET))(this, disposing);
		}
	};
}
