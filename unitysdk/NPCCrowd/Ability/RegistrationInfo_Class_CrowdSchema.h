#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }
namespace UnrealTypes { class Object; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_CLASS_CROWDSCHEMA_CONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0xEE84D00)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_CLASS_CROWDSCHEMA_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0xEE84EB0)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_CLASS_CROWDSCHEMA__CCTOR_OFFSET UNITYSDK_OFFSET(0xEE84D50)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_Class_CrowdSchema_TypeDefinitionIndex = 72888;

	class RegistrationInfo_Class_CrowdSchema : public ::System::Object
	{
	public:
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_CrowdSchema_TypeDefinitionIndex)->GetStaticField(0x455F0);
		}
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_CrowdSchema_TypeDefinitionIndex)->GetStaticField(0x455F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_CLASS_CROWDSCHEMA__CCTOR_OFFSET))();
		}

		static ::UnrealTypes::Object* Constructor(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::UnrealTypes::Object*(*)(::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_CLASS_CROWDSCHEMA_CONSTRUCTOR_OFFSET))(initializer);
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_CLASS_CROWDSCHEMA_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
