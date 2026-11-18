#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }
namespace UnrealTypes { class Object; }

#define UNREALTYPES_REGISTRATIONINFO_CLASS_ENUM_CONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B3110)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_ENUM_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E2B33A0)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_ENUM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B3240)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Class_Enum_TypeDefinitionIndex = 27744;

	class RegistrationInfo_Class_Enum : public ::System::Object
	{
	public:
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_Enum_TypeDefinitionIndex)->GetStaticField(0x24F30);
		}
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_Enum_TypeDefinitionIndex)->GetStaticField(0x24F38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_ENUM__CCTOR_OFFSET))();
		}

		static ::UnrealTypes::Object* Constructor(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::UnrealTypes::Object*(*)(::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_ENUM_CONSTRUCTOR_OFFSET))(initializer);
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_ENUM_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
