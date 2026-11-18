#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORSCHEMA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D201290)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORSCHEMA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2012D0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORSCHEMA___C___CCTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x1D2012E0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORSCHEMA___C___CCTOR_B__5_1_OFFSET UNITYSDK_OFFSET(0x1D201340)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORSCHEMA___C___CCTOR_B__5_2_OFFSET UNITYSDK_OFFSET(0x1D2013A0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_Class_ActorSchema___c_TypeDefinitionIndex = 84870;

	class RegistrationInfo_Class_ActorSchema___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_ActorSchema___c_TypeDefinitionIndex)->GetStaticField(0x3FCF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORSCHEMA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORSCHEMA___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::Class* __cctor_b__5_0()
		{
			return ((::UnrealTypes::Class*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORSCHEMA___C___CCTOR_B__5_0_OFFSET))(this);
		}

		::UnrealTypes::Class* __cctor_b__5_1()
		{
			return ((::UnrealTypes::Class*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORSCHEMA___C___CCTOR_B__5_1_OFFSET))(this);
		}

		::UnrealTypes::Class* __cctor_b__5_2()
		{
			return ((::UnrealTypes::Class*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_CLASS_ACTORSCHEMA___C___CCTOR_B__5_2_OFFSET))(this);
		}
	};
}
