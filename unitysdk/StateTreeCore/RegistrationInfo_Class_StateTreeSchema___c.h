#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }

#define STATETREECORE_REGISTRATIONINFO_CLASS_STATETREESCHEMA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA83C90)
#define STATETREECORE_REGISTRATIONINFO_CLASS_STATETREESCHEMA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA83CD0)
#define STATETREECORE_REGISTRATIONINFO_CLASS_STATETREESCHEMA___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1FA83CE0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Class_StateTreeSchema___c_TypeDefinitionIndex = 31110;

	class RegistrationInfo_Class_StateTreeSchema___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTreeSchema___c_TypeDefinitionIndex)->GetStaticField(0x27F50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_CLASS_STATETREESCHEMA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_CLASS_STATETREESCHEMA___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::Class* __cctor_b__2_0()
		{
			return ((::UnrealTypes::Class*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_CLASS_STATETREESCHEMA___C___CCTOR_B__2_0_OFFSET))(this);
		}
	};
}
