#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_OBJECT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B685E0)
#define SYSTEM_OBJECT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E90DF0)
#define SYSTEM_OBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define SYSTEM_OBJECT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3D08960)
#define SYSTEM_OBJECT_GETTYPE_OFFSET UNITYSDK_OFFSET(0x3D08970)
#define SYSTEM_OBJECT_INTERNALGETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3D08960)
#define SYSTEM_OBJECT_MEMBERWISECLONE_OFFSET UNITYSDK_OFFSET(0x3D08980)
#define SYSTEM_OBJECT_REFERENCEEQUALS_OFFSET UNITYSDK_OFFSET(0x1E90DF0)
#define SYSTEM_OBJECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3D08990)
#define SYSTEM_OBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8060)

namespace System
{
	inline static constexpr unsigned int Object_TypeDefinitionIndex = 10849;

	class Object : public Il2CppObject
	{
	public:
		static ::System::Boolean ReferenceEquals(::System::Object* BA371D769725CB9F, ::System::Object* E6C4000F6EED8366)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_REFERENCEEQUALS_OFFSET))(BA371D769725CB9F, E6C4000F6EED8366);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_TOSTRING_OFFSET))(this);
		}

		::System::Object* MemberwiseClone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_MEMBERWISECLONE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_FINALIZE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_EQUALS_OFFSET))(this, A86A90C31A146E9C);
		}

		static ::System::Int32 InternalGetHashCode(::System::Object* E1B624472530B0E4)
		{
			return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_INTERNALGETHASHCODE_OFFSET))(E1B624472530B0E4);
		}

		::System::Type* GetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_GETTYPE_OFFSET))(this);
		}

		static ::System::Boolean Equals_1(::System::Object* BA371D769725CB9F, ::System::Object* E6C4000F6EED8366)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_EQUALS_1_OFFSET))(BA371D769725CB9F, E6C4000F6EED8366);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT__CTOR_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_GETHASHCODE_OFFSET))(this);
		}
	};
}
