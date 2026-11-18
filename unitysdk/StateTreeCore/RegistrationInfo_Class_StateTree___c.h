#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ScriptStruct; }

#define STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFF5FE0)
#define STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFF6020)
#define STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C___CCTOR_B__22_0_OFFSET UNITYSDK_OFFSET(0x1FFF6030)
#define STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C___CCTOR_B__22_1_OFFSET UNITYSDK_OFFSET(0x1FFF6090)
#define STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C___CCTOR_B__22_2_OFFSET UNITYSDK_OFFSET(0x1FFF60F0)
#define STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C___CCTOR_B__22_3_OFFSET UNITYSDK_OFFSET(0x1FFF6150)
#define STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C___CCTOR_B__22_4_OFFSET UNITYSDK_OFFSET(0x1FFF61B0)
#define STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C___CCTOR_B__22_5_OFFSET UNITYSDK_OFFSET(0x1FFF6210)
#define STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C___CCTOR_B__22_6_OFFSET UNITYSDK_OFFSET(0x1FFF6270)
#define STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C___CCTOR_B__22_7_OFFSET UNITYSDK_OFFSET(0x1FFF62D0)
#define STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C___CCTOR_B__22_8_OFFSET UNITYSDK_OFFSET(0x1FFF6330)
#define STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C___CCTOR_B__22_9_OFFSET UNITYSDK_OFFSET(0x1FFF6390)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Class_StateTree___c_TypeDefinitionIndex = 30957;

	class RegistrationInfo_Class_StateTree___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTree___c_TypeDefinitionIndex)->GetStaticField(0x27740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* __cctor_b__22_0()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C___CCTOR_B__22_0_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* __cctor_b__22_1()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C___CCTOR_B__22_1_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* __cctor_b__22_2()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C___CCTOR_B__22_2_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* __cctor_b__22_3()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C___CCTOR_B__22_3_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* __cctor_b__22_4()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C___CCTOR_B__22_4_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* __cctor_b__22_5()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C___CCTOR_B__22_5_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* __cctor_b__22_6()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C___CCTOR_B__22_6_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* __cctor_b__22_7()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C___CCTOR_B__22_7_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* __cctor_b__22_8()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C___CCTOR_B__22_8_OFFSET))(this);
		}

		::UnrealTypes::Class* __cctor_b__22_9()
		{
			return ((::UnrealTypes::Class*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE___C___CCTOR_B__22_9_OFFSET))(this);
		}
	};
}
