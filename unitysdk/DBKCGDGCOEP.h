#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Transform; }

#define DBKCGDGCOEP_CTOR_OFFSET UNITYSDK_OFFSET(0xB310)
#define DBKCGDGCOEP_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xF2A80)
#define DBKCGDGCOEP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xF2A50)
#define DBKCGDGCOEP_EQUALS_OFFSET UNITYSDK_OFFSET(0xF29E0)
#define DBKCGDGCOEP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xF29D0)
#define DBKCGDGCOEP_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xE221D10)
#define DBKCGDGCOEP_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xE221CD0)
#define DBKCGDGCOEP_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xF29B0)
#define DBKCGDGCOEP_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF29A0)

inline static constexpr unsigned int DBKCGDGCOEP_TypeDefinitionIndex = 49752;

	struct alignas(8) DBKCGDGCOEP
	{
		::System::String* BDACPPLKLGL; // 0x10
		::UnityEngine::Transform* MCLLALGABAB; // 0x18
		::UnityEngine::Transform* BNLCCCCMABF; // 0x20
		::System::Void _ctor(::System::String* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DBKCGDGCOEP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKCGDGCOEP_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + DBKCGDGCOEP_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::DBKCGDGCOEP a1, ::DBKCGDGCOEP a2)
		{
			return ((::System::Boolean(*)(::DBKCGDGCOEP, ::DBKCGDGCOEP))((::PBYTE)hIl2Cpp + DBKCGDGCOEP_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::DBKCGDGCOEP a1, ::DBKCGDGCOEP a2)
		{
			return ((::System::Boolean(*)(::DBKCGDGCOEP, ::DBKCGDGCOEP))((::PBYTE)hIl2Cpp + DBKCGDGCOEP_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKCGDGCOEP_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBKCGDGCOEP_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::DBKCGDGCOEP a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBKCGDGCOEP))((::PBYTE)hIl2Cpp + DBKCGDGCOEP_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::String* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DBKCGDGCOEP_DECONSTRUCT_OFFSET))(this, a1, a2, a3);
		}

	};
