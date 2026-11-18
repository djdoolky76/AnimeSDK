#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }
namespace UnrealTypes { class Object; }

#define UNREALTYPES_REGISTRATIONINFO_CLASS_PROPERTYBAG_CONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B3DA0)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_PROPERTYBAG_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E2B4040)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_PROPERTYBAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B3EE0)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Class_PropertyBag_TypeDefinitionIndex = 27867;

	class RegistrationInfo_Class_PropertyBag : public ::System::Object
	{
	public:
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_PropertyBag_TypeDefinitionIndex)->GetStaticField(0x251A0);
		}
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_PropertyBag_TypeDefinitionIndex)->GetStaticField(0x251A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_PROPERTYBAG__CCTOR_OFFSET))();
		}

		static ::UnrealTypes::Object* Constructor(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::UnrealTypes::Object*(*)(::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_PROPERTYBAG_CONSTRUCTOR_OFFSET))(initializer);
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_PROPERTYBAG_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
