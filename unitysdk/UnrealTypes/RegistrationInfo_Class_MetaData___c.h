#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }

#define UNREALTYPES_REGISTRATIONINFO_CLASS_METADATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B3910)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_METADATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B3950)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_METADATA___C___CCTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x1E2B3960)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Class_MetaData___c_TypeDefinitionIndex = 27760;

	class RegistrationInfo_Class_MetaData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_MetaData___c_TypeDefinitionIndex)->GetStaticField(0x25160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_METADATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_METADATA___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::Class* __cctor_b__3_0()
		{
			return ((::UnrealTypes::Class*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_METADATA___C___CCTOR_B__3_0_OFFSET))(this);
		}
	};
}
