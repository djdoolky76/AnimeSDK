#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class ICppStructOps; }
namespace UnrealTypes { class ScriptStruct; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9E35F0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E3630)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITION___C___CCTOR_B__6_0_OFFSET UNITYSDK_OFFSET(0x1D9E3640)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITION___C___CCTOR_B__6_1_OFFSET UNITYSDK_OFFSET(0x1D9E36A0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITION___C___CCTOR_B__6_2_OFFSET UNITYSDK_OFFSET(0x1D9E3700)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CompareDistanceCondition___c_TypeDefinitionIndex = 52393;

	class RegistrationInfo_ScriptStruct_CompareDistanceCondition___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompareDistanceCondition___c_TypeDefinitionIndex)->GetStaticField(0x4DF30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITION___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::Enum* __cctor_b__6_0()
		{
			return ((::UnrealTypes::Enum*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITION___C___CCTOR_B__6_0_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* __cctor_b__6_1()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITION___C___CCTOR_B__6_1_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__6_2()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_COMPAREDISTANCECONDITION___C___CCTOR_B__6_2_OFFSET))(this);
		}
	};
}
