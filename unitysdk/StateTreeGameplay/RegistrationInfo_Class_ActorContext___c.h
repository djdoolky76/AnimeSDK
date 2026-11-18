#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORCONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBC3BA0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORCONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC3BE0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORCONTEXT___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1EBC3BF0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_Class_ActorContext___c_TypeDefinitionIndex = 66496;

	class RegistrationInfo_Class_ActorContext___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_ActorContext___c_TypeDefinitionIndex)->GetStaticField(0x45A90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORCONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORCONTEXT___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::Class* __cctor_b__2_0()
		{
			return ((::UnrealTypes::Class*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORCONTEXT___C___CCTOR_B__2_0_OFFSET))(this);
		}
	};
}
