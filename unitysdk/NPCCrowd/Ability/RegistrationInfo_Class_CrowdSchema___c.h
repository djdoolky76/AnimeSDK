#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_CLASS_CROWDSCHEMA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10DB4C90)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_CLASS_CROWDSCHEMA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10DB4CD0)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_CLASS_CROWDSCHEMA___C___CCTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x10DB4CE0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_Class_CrowdSchema___c_TypeDefinitionIndex = 72889;

	class RegistrationInfo_Class_CrowdSchema___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_CrowdSchema___c_TypeDefinitionIndex)->GetStaticField(0x455E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_CLASS_CROWDSCHEMA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_CLASS_CROWDSCHEMA___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::Class* __cctor_b__3_0()
		{
			return ((::UnrealTypes::Class*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_CLASS_CROWDSCHEMA___C___CCTOR_B__3_0_OFFSET))(this);
		}
	};
}
