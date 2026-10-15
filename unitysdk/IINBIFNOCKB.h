#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IINBIFNOCKB;
namespace RPG::Client::ActivityFinalityBattle::Level { class FinalityBattleMazeBuffItem; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define IINBIFNOCKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x16445050)
#define IINBIFNOCKB_CTOR_OFFSET UNITYSDK_OFFSET(0x164445F0)
#define IINBIFNOCKB_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x16445070)
#define IINBIFNOCKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x16444DE0)
#define IINBIFNOCKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x16444CE0)
#define IINBIFNOCKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16444AE0)
#define IINBIFNOCKB_GET_BUFFITEM_OFFSET UNITYSDK_OFFSET(0x16444630)
#define IINBIFNOCKB_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x16444600)
#define IINBIFNOCKB_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x16444A40)
#define IINBIFNOCKB_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x164449A0)
#define IINBIFNOCKB_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x16444890)
#define IINBIFNOCKB_SET_BUFFITEM_OFFSET UNITYSDK_OFFSET(0x16444640)
#define IINBIFNOCKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16444650)
#define IINBIFNOCKB__CLONE___OFFSET UNITYSDK_OFFSET(0x16444FF0)

inline static constexpr unsigned int IINBIFNOCKB_TypeDefinitionIndex = 82066;

	class IINBIFNOCKB : public ::System::Object
	{
	public:
		::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem* _BuffItem_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*))((::PBYTE)hIl2Cpp + IINBIFNOCKB_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::IINBIFNOCKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IINBIFNOCKB*))((::PBYTE)hIl2Cpp + IINBIFNOCKB_CTOR_1_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + IINBIFNOCKB_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem* get_BuffItem()
		{
			return ((::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + IINBIFNOCKB_GET_BUFFITEM_OFFSET))(this);
		}

		::System::Void set_BuffItem(::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*))((::PBYTE)hIl2Cpp + IINBIFNOCKB_SET_BUFFITEM_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IINBIFNOCKB_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + IINBIFNOCKB_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::IINBIFNOCKB* a1, ::IINBIFNOCKB* a2)
		{
			return ((::System::Boolean(*)(::IINBIFNOCKB*, ::IINBIFNOCKB*))((::PBYTE)hIl2Cpp + IINBIFNOCKB_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::IINBIFNOCKB* a1, ::IINBIFNOCKB* a2)
		{
			return ((::System::Boolean(*)(::IINBIFNOCKB*, ::IINBIFNOCKB*))((::PBYTE)hIl2Cpp + IINBIFNOCKB_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IINBIFNOCKB_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IINBIFNOCKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IINBIFNOCKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IINBIFNOCKB*))((::PBYTE)hIl2Cpp + IINBIFNOCKB_EQUALS_1_OFFSET))(this, a1);
		}

		::IINBIFNOCKB* _Clone__()
		{
			return ((::IINBIFNOCKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IINBIFNOCKB__CLONE___OFFSET))(this);
		}

		::System::Void Deconstruct(::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*))((::PBYTE)hIl2Cpp + IINBIFNOCKB_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
