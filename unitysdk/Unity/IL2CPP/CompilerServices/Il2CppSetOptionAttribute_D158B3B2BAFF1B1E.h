#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/Unity/IL2CPP/CompilerServices/Option_4DA5621191FA22F7.h"

namespace System { class Object; }

#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_D158B3B2BAFF1B1E_GET_OPTION_OFFSET UNITYSDK_OFFSET(0x20068510)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_D158B3B2BAFF1B1E_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x20068530)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_D158B3B2BAFF1B1E_SET_OPTION_OFFSET UNITYSDK_OFFSET(0x20068520)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_D158B3B2BAFF1B1E_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x20068540)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_D158B3B2BAFF1B1E__CTOR_OFFSET UNITYSDK_OFFSET(0x20068550)

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppSetOptionAttribute_D158B3B2BAFF1B1E_TypeDefinitionIndex = 6982;

	class Il2CppSetOptionAttribute_D158B3B2BAFF1B1E : public ::System::Attribute
	{
	public:
		::System::Object* _Value_k__BackingField; // 0x10
		::Unity::IL2CPP::CompilerServices::Option_4DA5621191FA22F7 _Option_k__BackingField; // 0x18

		::System::Void _ctor(::Unity::IL2CPP::CompilerServices::Option_4DA5621191FA22F7 option, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::IL2CPP::CompilerServices::Option_4DA5621191FA22F7, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_D158B3B2BAFF1B1E__CTOR_OFFSET))(this, option, value);
		}

		::Unity::IL2CPP::CompilerServices::Option_4DA5621191FA22F7 get_Option()
		{
			return ((::Unity::IL2CPP::CompilerServices::Option_4DA5621191FA22F7(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_D158B3B2BAFF1B1E_GET_OPTION_OFFSET))(this);
		}

		::System::Void set_Option(::Unity::IL2CPP::CompilerServices::Option_4DA5621191FA22F7 value)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::IL2CPP::CompilerServices::Option_4DA5621191FA22F7))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_D158B3B2BAFF1B1E_SET_OPTION_OFFSET))(this, value);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_D158B3B2BAFF1B1E_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_D158B3B2BAFF1B1E_SET_VALUE_OFFSET))(this, value);
		}
	};
}
