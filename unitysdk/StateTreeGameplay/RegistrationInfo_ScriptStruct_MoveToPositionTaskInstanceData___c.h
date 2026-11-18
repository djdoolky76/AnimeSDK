#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ICppStructOps; }
namespace UnrealTypes { class ScriptStruct; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOPOSITIONTASKINSTANCEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6470D0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOPOSITIONTASKINSTANCEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D647110)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOPOSITIONTASKINSTANCEDATA___C___CCTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x1D647120)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOPOSITIONTASKINSTANCEDATA___C___CCTOR_B__5_1_OFFSET UNITYSDK_OFFSET(0x1D647180)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOPOSITIONTASKINSTANCEDATA___C___CCTOR_B__5_2_OFFSET UNITYSDK_OFFSET(0x1D6471E0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_MoveToPositionTaskInstanceData___c_TypeDefinitionIndex = 75024;

	class RegistrationInfo_ScriptStruct_MoveToPositionTaskInstanceData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_MoveToPositionTaskInstanceData___c_TypeDefinitionIndex)->GetStaticField(0x36450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOPOSITIONTASKINSTANCEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOPOSITIONTASKINSTANCEDATA___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::Class* __cctor_b__5_0()
		{
			return ((::UnrealTypes::Class*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOPOSITIONTASKINSTANCEDATA___C___CCTOR_B__5_0_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* __cctor_b__5_1()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOPOSITIONTASKINSTANCEDATA___C___CCTOR_B__5_1_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__5_2()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_MOVETOPOSITIONTASKINSTANCEDATA___C___CCTOR_B__5_2_OFFSET))(this);
		}
	};
}
