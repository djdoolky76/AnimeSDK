#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class ICppStructOps; }
namespace UnrealTypes { class ScriptStruct; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1F20D0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1F2110)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITION___C___CCTOR_B__6_0_OFFSET UNITYSDK_OFFSET(0x1C1F2120)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITION___C___CCTOR_B__6_1_OFFSET UNITYSDK_OFFSET(0x1C1F2180)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITION___C___CCTOR_B__6_2_OFFSET UNITYSDK_OFFSET(0x1C1F21E0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CompareValueFloatCondition___c_TypeDefinitionIndex = 76048;

	class RegistrationInfo_ScriptStruct_CompareValueFloatCondition___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareValueFloatCondition___c_TypeDefinitionIndex)->GetStaticField(0x3D0F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITION___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::Enum* __cctor_b__6_0()
		{
			return ((::UnrealTypes::Enum*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITION___C___CCTOR_B__6_0_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* __cctor_b__6_1()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITION___C___CCTOR_B__6_1_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__6_2()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATCONDITION___C___CCTOR_B__6_2_OFFSET))(this);
		}
	};
}
