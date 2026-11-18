#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class ICppStructOps; }
namespace UnrealTypes { class ScriptStruct; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATTASK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E19ED20)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATTASK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E19ED60)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATTASK___C___CCTOR_B__7_0_OFFSET UNITYSDK_OFFSET(0x1E19ED70)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATTASK___C___CCTOR_B__7_1_OFFSET UNITYSDK_OFFSET(0x1E19EDD0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATTASK___C___CCTOR_B__7_2_OFFSET UNITYSDK_OFFSET(0x1E19EE30)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CompareValueFloatTask___c_TypeDefinitionIndex = 81686;

	class RegistrationInfo_ScriptStruct_CompareValueFloatTask___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareValueFloatTask___c_TypeDefinitionIndex)->GetStaticField(0x4CAD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATTASK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATTASK___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::Enum* __cctor_b__7_0()
		{
			return ((::UnrealTypes::Enum*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATTASK___C___CCTOR_B__7_0_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* __cctor_b__7_1()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATTASK___C___CCTOR_B__7_1_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__7_2()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREVALUEFLOATTASK___C___CCTOR_B__7_2_OFFSET))(this);
		}
	};
}
