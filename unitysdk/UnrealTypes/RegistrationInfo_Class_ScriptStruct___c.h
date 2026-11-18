#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }

#define UNREALTYPES_REGISTRATIONINFO_CLASS_SCRIPTSTRUCT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B4530)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_SCRIPTSTRUCT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B4570)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_SCRIPTSTRUCT___C___CCTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x1E2B4580)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Class_ScriptStruct___c_TypeDefinitionIndex = 27751;

	class RegistrationInfo_Class_ScriptStruct___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_ScriptStruct___c_TypeDefinitionIndex)->GetStaticField(0x251D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_SCRIPTSTRUCT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_SCRIPTSTRUCT___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::Class* __cctor_b__3_0()
		{
			return ((::UnrealTypes::Class*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_SCRIPTSTRUCT___C___CCTOR_B__3_0_OFFSET))(this);
		}
	};
}
