#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Animation; }

#define AKCDMJONKMB_CTOR_OFFSET UNITYSDK_OFFSET(0x10480)
#define AKCDMJONKMB_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x2305FF0)
#define AKCDMJONKMB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2305FD0)
#define AKCDMJONKMB_EQUALS_OFFSET UNITYSDK_OFFSET(0x2305F60)
#define AKCDMJONKMB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2305F50)
#define AKCDMJONKMB_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x12CCB680)
#define AKCDMJONKMB_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x12CCB650)
#define AKCDMJONKMB_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x2305DC0)
#define AKCDMJONKMB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2305DB0)

	struct alignas(8) AKCDMJONKMB
	{
		::UnityEngine::Animation* IJPHJEDPHGN; // 0x10
		::System::String* OBKONNDLKDL; // 0x18
		::System::Void _ctor(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + AKCDMJONKMB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCDMJONKMB_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + AKCDMJONKMB_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::AKCDMJONKMB a1, ::AKCDMJONKMB a2)
		{
			return ((::System::Boolean(*)(::AKCDMJONKMB, ::AKCDMJONKMB))((::PBYTE)hIl2Cpp + AKCDMJONKMB_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::AKCDMJONKMB a1, ::AKCDMJONKMB a2)
		{
			return ((::System::Boolean(*)(::AKCDMJONKMB, ::AKCDMJONKMB))((::PBYTE)hIl2Cpp + AKCDMJONKMB_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCDMJONKMB_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKCDMJONKMB_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::AKCDMJONKMB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AKCDMJONKMB))((::PBYTE)hIl2Cpp + AKCDMJONKMB_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + AKCDMJONKMB_DECONSTRUCT_OFFSET))(this, a1, a2);
		}

	};
