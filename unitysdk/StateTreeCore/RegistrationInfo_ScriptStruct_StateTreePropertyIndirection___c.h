#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class ICppStructOps; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYINDIRECTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE0B2C0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYINDIRECTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE0B300)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYINDIRECTION___C___CCTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x1FE0B310)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYINDIRECTION___C___CCTOR_B__9_1_OFFSET UNITYSDK_OFFSET(0x1FE0B370)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYINDIRECTION___C___CCTOR_B__9_2_OFFSET UNITYSDK_OFFSET(0x1FE0B3D0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreePropertyIndirection___c_TypeDefinitionIndex = 31076;

	class RegistrationInfo_ScriptStruct_StateTreePropertyIndirection___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyIndirection___c_TypeDefinitionIndex)->GetStaticField(0x27F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYINDIRECTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYINDIRECTION___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::Enum* __cctor_b__9_0()
		{
			return ((::UnrealTypes::Enum*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYINDIRECTION___C___CCTOR_B__9_0_OFFSET))(this);
		}

		::UnrealTypes::Class* __cctor_b__9_1()
		{
			return ((::UnrealTypes::Class*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYINDIRECTION___C___CCTOR_B__9_1_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__9_2()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYINDIRECTION___C___CCTOR_B__9_2_OFFSET))(this);
		}
	};
}
