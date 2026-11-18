#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/Object.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"

#define UNREALTYPES_PROPERTYBAGMISSINGOBJECT_DISPOSEGENIMPL_OFFSET UNITYSDK_OFFSET(0x1E2B2CF0)
#define UNREALTYPES_PROPERTYBAGMISSINGOBJECT_DISPOSEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E2B2D00)
#define UNREALTYPES_PROPERTYBAGMISSINGOBJECT_INITIALIZEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E2B2CE0)
#define UNREALTYPES_PROPERTYBAGMISSINGOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B2CD0)

namespace UnrealTypes
{
	inline static constexpr unsigned int PropertyBagMissingObject_TypeDefinitionIndex = 27851;

	class PropertyBagMissingObject : public ::UnrealTypes::Object
	{
	public:
		::System::Void _ctor(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAGMISSINGOBJECT__CTOR_OFFSET))(this, initializer);
		}

		::System::Void InitializeProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAGMISSINGOBJECT_INITIALIZEPROPERTIES_OFFSET))(this);
		}

		::System::Void DisposeGenImpl(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAGMISSINGOBJECT_DISPOSEGENIMPL_OFFSET))(this, disposing);
		}

		::System::Void DisposeProperties(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAGMISSINGOBJECT_DISPOSEPROPERTIES_OFFSET))(this, disposing);
		}
	};
}
