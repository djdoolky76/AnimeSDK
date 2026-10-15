#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/Unity/IL2CPP/CompilerServices/Option_5BF9725B7CC8452F.h"
namespace System { class Object; }

#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_50A8B7EBDA2C5FC8_CTOR_OFFSET UNITYSDK_OFFSET(0x1F39E7B0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_50A8B7EBDA2C5FC8_SET_OPTION_OFFSET UNITYSDK_OFFSET(0x1F39E790)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_50A8B7EBDA2C5FC8_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1F39E7A0)

namespace Unity::IL2CPP::CompilerServices
{
	inline static constexpr unsigned int Il2CppSetOptionAttribute_50A8B7EBDA2C5FC8_TypeDefinitionIndex = 3978;

	class Il2CppSetOptionAttribute_50A8B7EBDA2C5FC8 : public ::System::Attribute
	{
	public:
		::System::Object* _Value_k__BackingField; // 0x10
		::Unity::IL2CPP::CompilerServices::Option_5BF9725B7CC8452F _Option_k__BackingField; // 0x18
		::System::Void _ctor(::Unity::IL2CPP::CompilerServices::Option_5BF9725B7CC8452F a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::IL2CPP::CompilerServices::Option_5BF9725B7CC8452F, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_50A8B7EBDA2C5FC8_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void set_Option(::Unity::IL2CPP::CompilerServices::Option_5BF9725B7CC8452F a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::IL2CPP::CompilerServices::Option_5BF9725B7CC8452F))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_50A8B7EBDA2C5FC8_SET_OPTION_OFFSET))(this, a1);
		}

		::System::Void set_Value(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_50A8B7EBDA2C5FC8_SET_VALUE_OFFSET))(this, a1);
		}

	};
}
