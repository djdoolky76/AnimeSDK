#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/Struct.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace System { class String; }
namespace UnrealTypes { class ClassConstructorDelegate; }
namespace UnrealTypes { class Object; }

#define UNREALTYPES_CLASS_DISPOSEGENIMPL_OFFSET UNITYSDK_OFFSET(0x1E29E550)
#define UNREALTYPES_CLASS_DISPOSEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E29E560)
#define UNREALTYPES_CLASS_GET_CLASSHANDLE_OFFSET UNITYSDK_OFFSET(0x1E29E310)
#define UNREALTYPES_CLASS_INITIALIZEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E29E540)
#define UNREALTYPES_CLASS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E29E450)
#define UNREALTYPES_CLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E29E360)

namespace UnrealTypes
{
	inline static constexpr unsigned int Class_TypeDefinitionIndex = 27732;

	class Class : public ::UnrealTypes::Struct
	{
	public:
		::UnrealTypes::ClassConstructorDelegate* ClassConstructor; // 0x70

		::System::Void _ctor(::UnrealTypes::Object* outer, ::System::String* name, ::System::UInt32 typeId)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::Object*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNREALTYPES_CLASS__CTOR_OFFSET))(this, outer, name, typeId);
		}

		::System::Void _ctor_1(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + UNREALTYPES_CLASS__CTOR_1_OFFSET))(this, initializer);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Class*> get_ClassHandle()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Class*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_CLASS_GET_CLASSHANDLE_OFFSET))(this);
		}

		::System::Void InitializeProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_CLASS_INITIALIZEPROPERTIES_OFFSET))(this);
		}

		::System::Void DisposeGenImpl(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_CLASS_DISPOSEGENIMPL_OFFSET))(this, disposing);
		}

		::System::Void DisposeProperties(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_CLASS_DISPOSEPROPERTIES_OFFSET))(this, disposing);
		}
	};
}
