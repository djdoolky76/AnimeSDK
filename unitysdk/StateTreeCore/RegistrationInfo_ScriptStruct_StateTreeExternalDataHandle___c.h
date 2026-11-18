#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }
namespace UnrealTypes { class ScriptStruct; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEEXTERNALDATAHANDLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE0A400)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEEXTERNALDATAHANDLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE0A440)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEEXTERNALDATAHANDLE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1FE0A450)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEEXTERNALDATAHANDLE___C___CCTOR_B__4_1_OFFSET UNITYSDK_OFFSET(0x1FE0A4B0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeExternalDataHandle___c_TypeDefinitionIndex = 31005;

	class RegistrationInfo_ScriptStruct_StateTreeExternalDataHandle___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeExternalDataHandle___c_TypeDefinitionIndex)->GetStaticField(0x28030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEEXTERNALDATAHANDLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEEXTERNALDATAHANDLE___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* __cctor_b__4_0()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEEXTERNALDATAHANDLE___C___CCTOR_B__4_0_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__4_1()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEEXTERNALDATAHANDLE___C___CCTOR_B__4_1_OFFSET))(this);
		}
	};
}
