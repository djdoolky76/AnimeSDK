#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }
namespace UnrealTypes { class ScriptStruct; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYPATHBINDING___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFF6870)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYPATHBINDING___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFF68B0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYPATHBINDING___C___CCTOR_B__6_0_OFFSET UNITYSDK_OFFSET(0x1FFF68C0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYPATHBINDING___C___CCTOR_B__6_1_OFFSET UNITYSDK_OFFSET(0x1FFF6920)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYPATHBINDING___C___CCTOR_B__6_2_OFFSET UNITYSDK_OFFSET(0x1FFF6980)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYPATHBINDING___C___CCTOR_B__6_3_OFFSET UNITYSDK_OFFSET(0x1FFF69E0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreePropertyPathBinding___c_TypeDefinitionIndex = 31073;

	class RegistrationInfo_ScriptStruct_StateTreePropertyPathBinding___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyPathBinding___c_TypeDefinitionIndex)->GetStaticField(0x27AD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYPATHBINDING___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYPATHBINDING___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* __cctor_b__6_0()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYPATHBINDING___C___CCTOR_B__6_0_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* __cctor_b__6_1()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYPATHBINDING___C___CCTOR_B__6_1_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* __cctor_b__6_2()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYPATHBINDING___C___CCTOR_B__6_2_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__6_3()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYPATHBINDING___C___CCTOR_B__6_3_OFFSET))(this);
		}
	};
}
