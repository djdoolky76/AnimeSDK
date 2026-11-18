#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }
namespace UnrealTypes { class Object; }

#define UNREALTYPES_REGISTRATIONINFO_CLASS_METADATA_CONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B36D0)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_METADATA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E2B3900)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_METADATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B37A0)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Class_MetaData_TypeDefinitionIndex = 27759;

	class RegistrationInfo_Class_MetaData : public ::System::Object
	{
	public:
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_MetaData_TypeDefinitionIndex)->GetStaticField(0x25170);
		}
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_MetaData_TypeDefinitionIndex)->GetStaticField(0x25178);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_METADATA__CCTOR_OFFSET))();
		}

		static ::UnrealTypes::Object* Constructor(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::UnrealTypes::Object*(*)(::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_METADATA_CONSTRUCTOR_OFFSET))(initializer);
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_METADATA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
