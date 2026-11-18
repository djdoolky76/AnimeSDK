#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }
namespace UnrealTypes { class Object; }

#define UNREALTYPES_REGISTRATIONINFO_CLASS_PACKAGE_CONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B3B30)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_PACKAGE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E2B3CE0)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_PACKAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B3B80)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Class_Package_TypeDefinitionIndex = 27798;

	class RegistrationInfo_Class_Package : public ::System::Object
	{
	public:
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_Package_TypeDefinitionIndex)->GetStaticField(0x250C0);
		}
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_Package_TypeDefinitionIndex)->GetStaticField(0x250C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_PACKAGE__CCTOR_OFFSET))();
		}

		static ::UnrealTypes::Object* Constructor(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::UnrealTypes::Object*(*)(::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_PACKAGE_CONSTRUCTOR_OFFSET))(initializer);
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_PACKAGE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
