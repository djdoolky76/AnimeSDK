#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREESTATEHANDLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFBE270)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREESTATEHANDLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFBE2B0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREESTATEHANDLE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1FFBE2C0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeStateHandle___c_TypeDefinitionIndex = 31147;

	class RegistrationInfo_ScriptStruct_StateTreeStateHandle___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeStateHandle___c_TypeDefinitionIndex)->GetStaticField(0x27B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREESTATEHANDLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREESTATEHANDLE___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__4_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREESTATEHANDLE___C___CCTOR_B__4_0_OFFSET))(this);
		}
	};
}
