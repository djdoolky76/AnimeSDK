#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }
namespace UnrealTypes { class ClassPropertyParams; }
namespace UnrealTypes { class Object; }
namespace UnrealTypes { class PropertyParamsBase; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORSCHEMA_CONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1F1BFF40)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORSCHEMA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F1C0250)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORSCHEMA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1BFF90)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_Class_ActorSchema_TypeDefinitionIndex = 84869;

	class RegistrationInfo_Class_ActorSchema : public ::System::Object
	{
	public:
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_ActorSchema_TypeDefinitionIndex)->GetStaticField(0x42AF0);
		}
		static ::UnrealTypes::ClassPropertyParams** StaticGet_Property_ActorClass()
		{
			return (::UnrealTypes::ClassPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_ActorSchema_TypeDefinitionIndex)->GetStaticField(0x42AF8);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_ActorSchema_TypeDefinitionIndex)->GetStaticField(0x42B00);
		}
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_ActorSchema_TypeDefinitionIndex)->GetStaticField(0x42B08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORSCHEMA__CCTOR_OFFSET))();
		}

		static ::UnrealTypes::Object* Constructor(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::UnrealTypes::Object*(*)(::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORSCHEMA_CONSTRUCTOR_OFFSET))(initializer);
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORSCHEMA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
