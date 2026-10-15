#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/Unity/IL2CPP/CompilerServices/Option_8C0E13CE6C7FAB03.h"
namespace System { class Object; }

#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_1994E79EB0DA911A_CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E60F0)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_1994E79EB0DA911A_SET_OPTION_OFFSET UNITYSDK_OFFSET(0x1B9E6100)
#define UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_1994E79EB0DA911A_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B9E6110)

namespace Unity::IL2CPP::CompilerServices
{
	class Il2CppSetOptionAttribute_1994E79EB0DA911A : public ::System::Attribute
	{
	public:
		::System::Object* _Value_k__BackingField; // 0x10
		::Unity::IL2CPP::CompilerServices::Option_8C0E13CE6C7FAB03 _Option_k__BackingField; // 0x18
		::System::Void _ctor(::Unity::IL2CPP::CompilerServices::Option_8C0E13CE6C7FAB03 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::IL2CPP::CompilerServices::Option_8C0E13CE6C7FAB03, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_1994E79EB0DA911A_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void set_Option(::Unity::IL2CPP::CompilerServices::Option_8C0E13CE6C7FAB03 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::IL2CPP::CompilerServices::Option_8C0E13CE6C7FAB03))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_1994E79EB0DA911A_SET_OPTION_OFFSET))(this, a1);
		}

		::System::Void set_Value(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_IL2CPP_COMPILERSERVICES_IL2CPPSETOPTIONATTRIBUTE_1994E79EB0DA911A_SET_VALUE_OFFSET))(this, a1);
		}

	};
}
