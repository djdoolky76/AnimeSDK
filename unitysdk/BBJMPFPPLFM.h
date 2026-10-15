#pragma once
#include "unitysdk/unitysdk.h"
class DEIPGFGBEMG;
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define BBJMPFPPLFM_CTOR_OFFSET UNITYSDK_OFFSET(0x94B0)
#define BBJMPFPPLFM_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3C51F20)
#define BBJMPFPPLFM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C51F10)
#define BBJMPFPPLFM_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C51EB0)
#define BBJMPFPPLFM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C51EA0)
#define BBJMPFPPLFM_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC64C30)
#define BBJMPFPPLFM_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EC64C10)
#define BBJMPFPPLFM_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3C51DC0)
#define BBJMPFPPLFM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C51DB0)

	struct alignas(8) BBJMPFPPLFM
	{
		::Il2CppArray<::DEIPGFGBEMG*>* ACJMMAMOOLF; // 0x10
		::System::Void _ctor(::Il2CppArray<::DEIPGFGBEMG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::DEIPGFGBEMG*>*))((::PBYTE)hIl2Cpp + BBJMPFPPLFM_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJMPFPPLFM_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + BBJMPFPPLFM_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::BBJMPFPPLFM a1, ::BBJMPFPPLFM a2)
		{
			return ((::System::Boolean(*)(::BBJMPFPPLFM, ::BBJMPFPPLFM))((::PBYTE)hIl2Cpp + BBJMPFPPLFM_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::BBJMPFPPLFM a1, ::BBJMPFPPLFM a2)
		{
			return ((::System::Boolean(*)(::BBJMPFPPLFM, ::BBJMPFPPLFM))((::PBYTE)hIl2Cpp + BBJMPFPPLFM_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJMPFPPLFM_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBJMPFPPLFM_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::BBJMPFPPLFM a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BBJMPFPPLFM))((::PBYTE)hIl2Cpp + BBJMPFPPLFM_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBJMPFPPLFM_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
