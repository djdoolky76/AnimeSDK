#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }
namespace UnrealTypes { class ScriptStruct; }

#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_UPDATEVALUEBOOLTASK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D647270)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_UPDATEVALUEBOOLTASK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6472B0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_UPDATEVALUEBOOLTASK___C___CCTOR_B__6_0_OFFSET UNITYSDK_OFFSET(0x1D6472C0)
#define STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_UPDATEVALUEBOOLTASK___C___CCTOR_B__6_1_OFFSET UNITYSDK_OFFSET(0x1D647320)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_UpdateValueBoolTask___c_TypeDefinitionIndex = 43832;

	class RegistrationInfo_ScriptStruct_UpdateValueBoolTask___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_UpdateValueBoolTask___c_TypeDefinitionIndex)->GetStaticField(0x4B390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_UPDATEVALUEBOOLTASK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_UPDATEVALUEBOOLTASK___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* __cctor_b__6_0()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_UPDATEVALUEBOOLTASK___C___CCTOR_B__6_0_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__6_1()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_REGISTRATIONINFO_SCRIPTSTRUCT_UPDATEVALUEBOOLTASK___C___CCTOR_B__6_1_OFFSET))(this);
		}
	};
}
