#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class ICppStructOps; }
namespace UnrealTypes { class ScriptStruct; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEBINDABLESTRUCTDESC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x2001D6E0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEBINDABLESTRUCTDESC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x2001D720)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEBINDABLESTRUCTDESC___C___CCTOR_B__8_0_OFFSET UNITYSDK_OFFSET(0x2001D730)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEBINDABLESTRUCTDESC___C___CCTOR_B__8_1_OFFSET UNITYSDK_OFFSET(0x2001D790)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEBINDABLESTRUCTDESC___C___CCTOR_B__8_2_OFFSET UNITYSDK_OFFSET(0x2001D7F0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEBINDABLESTRUCTDESC___C___CCTOR_B__8_3_OFFSET UNITYSDK_OFFSET(0x2001D850)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc___c_TypeDefinitionIndex = 31067;

	class RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeBindableStructDesc___c_TypeDefinitionIndex)->GetStaticField(0x27D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEBINDABLESTRUCTDESC___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEBINDABLESTRUCTDESC___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::Class* __cctor_b__8_0()
		{
			return ((::UnrealTypes::Class*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEBINDABLESTRUCTDESC___C___CCTOR_B__8_0_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* __cctor_b__8_1()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEBINDABLESTRUCTDESC___C___CCTOR_B__8_1_OFFSET))(this);
		}

		::UnrealTypes::Enum* __cctor_b__8_2()
		{
			return ((::UnrealTypes::Enum*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEBINDABLESTRUCTDESC___C___CCTOR_B__8_2_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__8_3()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEBINDABLESTRUCTDESC___C___CCTOR_B__8_3_OFFSET))(this);
		}
	};
}
