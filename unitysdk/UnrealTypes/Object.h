#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"

namespace System { class String; }
namespace UnrealTypes { class Class; }

#define UNREALTYPES_OBJECT_ADDOBJECT_OFFSET UNITYSDK_OFFSET(0x1E2AEA40)
#define UNREALTYPES_OBJECT_DISPOSEGENIMPL_OFFSET UNITYSDK_OFFSET(0x1E2AD2F0)
#define UNREALTYPES_OBJECT_DISPOSEOBJECT_OFFSET UNITYSDK_OFFSET(0x1E2AEF10)
#define UNREALTYPES_OBJECT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E2AEE70)
#define UNREALTYPES_OBJECT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E2AEEA0)
#define UNREALTYPES_OBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E2AEDF0)
#define UNREALTYPES_OBJECT_GET_CLASS_OFFSET UNITYSDK_OFFSET(0x1E2AE980)
#define UNREALTYPES_OBJECT_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x1E2AE9B0)
#define UNREALTYPES_OBJECT_GET_FNAME_OFFSET UNITYSDK_OFFSET(0x1E2AE9A0)
#define UNREALTYPES_OBJECT_GET_OUTER_OFFSET UNITYSDK_OFFSET(0x1E2AE990)
#define UNREALTYPES_OBJECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2AD110)
#define UNREALTYPES_OBJECT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E2ACF50)
#define UNREALTYPES_OBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AE9C0)

namespace UnrealTypes
{
	inline static constexpr unsigned int Object_TypeDefinitionIndex = 27761;

	class Object : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::UnrealTypes::Class* ClassPrivate; // 0x18
		::UnrealTypes::Object* OuterPrivate; // 0x20
		::Foundation::Unreal::FName NamePrivate; // 0x28
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> ObjectHandle; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECT__CTOR_1_OFFSET))(this, initializer);
		}

		::System::Void _ctor_2(::UnrealTypes::Object* outer, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECT__CTOR_2_OFFSET))(this, outer, name);
		}

		::UnrealTypes::Class* get_Class()
		{
			return ((::UnrealTypes::Class*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECT_GET_CLASS_OFFSET))(this);
		}

		::UnrealTypes::Object* get_Outer()
		{
			return ((::UnrealTypes::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECT_GET_OUTER_OFFSET))(this);
		}

		::Foundation::Unreal::FName get_FName()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECT_GET_FNAME_OFFSET))(this);
		}

		::System::Boolean get_Disposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECT_GET_DISPOSED_OFFSET))(this);
		}

		::System::Void AddObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECT_ADDOBJECT_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECT_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECT_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECT_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void DisposeGenImpl(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECT_DISPOSEGENIMPL_OFFSET))(this, disposing);
		}

		::System::Void DisposeObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECT_DISPOSEOBJECT_OFFSET))(this);
		}
	};
}
