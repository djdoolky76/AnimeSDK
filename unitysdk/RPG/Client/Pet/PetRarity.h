#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_PET_PETRARITY_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x3EDB5F0)
#define RPG_CLIENT_PET_PETRARITY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3EDB5B0)
#define RPG_CLIENT_PET_PETRARITY_CTOR_OFFSET UNITYSDK_OFFSET(0x3E34B70)
#define RPG_CLIENT_PET_PETRARITY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3EDB600)
#define RPG_CLIENT_PET_PETRARITY_EQUALS_OFFSET UNITYSDK_OFFSET(0x3EDB520)
#define RPG_CLIENT_PET_PETRARITY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3EDB610)
#define RPG_CLIENT_PET_PETRARITY_GET_DETAILFRAMEBGPATH_OFFSET UNITYSDK_OFFSET(0x7F6810)
#define RPG_CLIENT_PET_PETRARITY_GET_ICONFRAMEBGPATH_OFFSET UNITYSDK_OFFSET(0x7F5730)
#define RPG_CLIENT_PET_PETRARITY_GET_LINECOLOR_OFFSET UNITYSDK_OFFSET(0x6C9390)
#define RPG_CLIENT_PET_PETRARITY_GET_STARCOUNT_OFFSET UNITYSDK_OFFSET(0x3EDB670)
#define RPG_CLIENT_PET_PETRARITY_GET_TEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x6C95B0)
#define RPG_CLIENT_PET_PETRARITY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define RPG_CLIENT_PET_PETRARITY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C1DA8C0)
#define RPG_CLIENT_PET_PETRARITY_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1C1DAD20)
#define RPG_CLIENT_PET_PETRARITY_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1C1DABA0)
#define RPG_CLIENT_PET_PETRARITY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C1DA9D0)
#define RPG_CLIENT_PET_PETRARITY_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1C1DAC60)
#define RPG_CLIENT_PET_PETRARITY_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1C1DAAE0)
#define RPG_CLIENT_PET_PETRARITY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3EDB660)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetRarity_TypeDefinitionIndex = 78029;

	struct alignas(8) PetRarity
	{
		::RPG::GameCore::ItemRarity _Value_k__BackingField; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* _TextColor_k__BackingField; // 0x18
		::System::String* _LineColor_k__BackingField; // 0x20
		::System::String* _IconFrameBgPath_k__BackingField; // 0x28
		::System::String* _DetailFrameBgPath_k__BackingField; // 0x30
		::System::Void _ctor(::RPG::GameCore::ItemRarity a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemRarity, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETRARITY_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		/*
		::System::Boolean Equals(::RPG::Client::Pet::PetRarity a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::PetRarity))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETRARITY_EQUALS_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Int32 CompareTo(::RPG::Client::Pet::PetRarity a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Pet::PetRarity))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETRARITY_COMPARETO_OFFSET))(this, a1);
		}
		*/

		::System::Int32 CompareTo_1(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETRARITY_COMPARETO_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETRARITY_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETRARITY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETRARITY_TOSTRING_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::RPG::Client::Pet::PetRarity a1, ::RPG::Client::Pet::PetRarity a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::PetRarity, ::RPG::Client::Pet::PetRarity))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETRARITY_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::RPG::Client::Pet::PetRarity a1, ::RPG::Client::Pet::PetRarity a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::PetRarity, ::RPG::Client::Pet::PetRarity))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETRARITY_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_LessThan(::RPG::Client::Pet::PetRarity a1, ::RPG::Client::Pet::PetRarity a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::PetRarity, ::RPG::Client::Pet::PetRarity))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETRARITY_OP_LESSTHAN_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_GreaterThan(::RPG::Client::Pet::PetRarity a1, ::RPG::Client::Pet::PetRarity a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::PetRarity, ::RPG::Client::Pet::PetRarity))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETRARITY_OP_GREATERTHAN_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_LessThanOrEqual(::RPG::Client::Pet::PetRarity a1, ::RPG::Client::Pet::PetRarity a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::PetRarity, ::RPG::Client::Pet::PetRarity))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETRARITY_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_GreaterThanOrEqual(::RPG::Client::Pet::PetRarity a1, ::RPG::Client::Pet::PetRarity a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::PetRarity, ::RPG::Client::Pet::PetRarity))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETRARITY_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}
		*/

		::RPG::GameCore::ItemRarity get_Value()
		{
			return ((::RPG::GameCore::ItemRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETRARITY_GET_VALUE_OFFSET))(this);
		}

		::System::String* get_TextColor()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETRARITY_GET_TEXTCOLOR_OFFSET))(this);
		}

		::System::String* get_LineColor()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETRARITY_GET_LINECOLOR_OFFSET))(this);
		}

		::System::String* get_IconFrameBgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETRARITY_GET_ICONFRAMEBGPATH_OFFSET))(this);
		}

		::System::String* get_DetailFrameBgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETRARITY_GET_DETAILFRAMEBGPATH_OFFSET))(this);
		}

		::System::UInt32 get_StarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETRARITY_GET_STARCOUNT_OFFSET))(this);
		}

	};
}
