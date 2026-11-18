#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_BASEFRAGMENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFBDE70)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_BASEFRAGMENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFBDEB0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_BASEFRAGMENT___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1FFBDEC0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_BaseFragment___c_TypeDefinitionIndex = 31021;

	class RegistrationInfo_ScriptStruct_BaseFragment___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_BaseFragment___c_TypeDefinitionIndex)->GetStaticField(0x27DD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_BASEFRAGMENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_BASEFRAGMENT___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__2_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_BASEFRAGMENT___C___CCTOR_B__2_0_OFFSET))(this);
		}
	};
}
