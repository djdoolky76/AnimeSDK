#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }
namespace UnrealTypes { class Object; }

#define UNREALTYPES_REGISTRATIONINFO_CLASS_OBJECT_CONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B39C0)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_OBJECT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E2B3B20)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_OBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B3A10)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Class_Object_TypeDefinitionIndex = 27762;

	class RegistrationInfo_Class_Object : public ::System::Object
	{
	public:
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_Object_TypeDefinitionIndex)->GetStaticField(0x25150);
		}
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_Object_TypeDefinitionIndex)->GetStaticField(0x25158);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_OBJECT__CCTOR_OFFSET))();
		}

		static ::UnrealTypes::Object* Constructor(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::UnrealTypes::Object*(*)(::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_OBJECT_CONSTRUCTOR_OFFSET))(initializer);
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_OBJECT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
