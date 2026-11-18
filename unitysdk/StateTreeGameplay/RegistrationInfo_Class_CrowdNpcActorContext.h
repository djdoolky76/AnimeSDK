#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }
namespace UnrealTypes { class Object; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_CROWDNPCACTORCONTEXT_CONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1A80A790)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_CROWDNPCACTORCONTEXT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A80A940)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_CROWDNPCACTORCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A80A7E0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_Class_CrowdNpcActorContext_TypeDefinitionIndex = 91307;

	class RegistrationInfo_Class_CrowdNpcActorContext : public ::System::Object
	{
	public:
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_CrowdNpcActorContext_TypeDefinitionIndex)->GetStaticField(0x3D0B0);
		}
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_CrowdNpcActorContext_TypeDefinitionIndex)->GetStaticField(0x3D0B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_CROWDNPCACTORCONTEXT__CCTOR_OFFSET))();
		}

		static ::UnrealTypes::Object* Constructor(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::UnrealTypes::Object*(*)(::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_CROWDNPCACTORCONTEXT_CONSTRUCTOR_OFFSET))(initializer);
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_CROWDNPCACTORCONTEXT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
