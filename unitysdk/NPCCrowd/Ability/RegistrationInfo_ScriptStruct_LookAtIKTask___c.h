#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }
namespace UnrealTypes { class ScriptStruct; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_LOOKATIKTASK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xED5DD30)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_LOOKATIKTASK___C__CTOR_OFFSET UNITYSDK_OFFSET(0xED5DD70)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_LOOKATIKTASK___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0xED5DD80)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_LOOKATIKTASK___C___CCTOR_B__2_1_OFFSET UNITYSDK_OFFSET(0xED5DDE0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_LookAtIKTask___c_TypeDefinitionIndex = 58450;

	class RegistrationInfo_ScriptStruct_LookAtIKTask___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_LookAtIKTask___c_TypeDefinitionIndex)->GetStaticField(0x4DCE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_LOOKATIKTASK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_LOOKATIKTASK___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* __cctor_b__2_0()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_LOOKATIKTASK___C___CCTOR_B__2_0_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__2_1()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_LOOKATIKTASK___C___CCTOR_B__2_1_OFFSET))(this);
		}
	};
}
