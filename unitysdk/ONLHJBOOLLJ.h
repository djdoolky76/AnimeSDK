#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/BlockVisibilityHideScope.h"
#include "unitysdk/RPG/Client/OpenWorld/BlockVisibilityIntent.h"
#include "unitysdk/RPG/Client/OpenWorld/BlockVisibilityPriority.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ONLHJBOOLLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x3DB04F0)
#define ONLHJBOOLLJ_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3DEF770)
#define ONLHJBOOLLJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3DEF740)
#define ONLHJBOOLLJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x3DEF6D0)
#define ONLHJBOOLLJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3DEF6C0)
#define ONLHJBOOLLJ_GET_HIDESCOPE_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define ONLHJBOOLLJ_GET_INTENT_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define ONLHJBOOLLJ_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x7CEA10)
#define ONLHJBOOLLJ_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x17D80D40)
#define ONLHJBOOLLJ_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x17D80D00)
#define ONLHJBOOLLJ_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3DEF6A0)
#define ONLHJBOOLLJ_SET_HIDESCOPE_OFFSET UNITYSDK_OFFSET(0x3D73BE0)
#define ONLHJBOOLLJ_SET_INTENT_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define ONLHJBOOLLJ_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xFDBF80)
#define ONLHJBOOLLJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3DEF690)

inline static constexpr unsigned int ONLHJBOOLLJ_TypeDefinitionIndex = 76051;

	struct alignas(4) ONLHJBOOLLJ
	{
		::RPG::Client::OpenWorld::BlockVisibilityIntent _Intent_k__BackingField; // 0x10
		::RPG::Client::OpenWorld::BlockVisibilityPriority _Priority_k__BackingField; // 0x14
		::RPG::Client::OpenWorld::BlockVisibilityHideScope _HideScope_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::OpenWorld::BlockVisibilityIntent a1, ::RPG::Client::OpenWorld::BlockVisibilityPriority a2, ::RPG::Client::OpenWorld::BlockVisibilityHideScope a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::BlockVisibilityIntent, ::RPG::Client::OpenWorld::BlockVisibilityPriority, ::RPG::Client::OpenWorld::BlockVisibilityHideScope))((::PBYTE)hIl2Cpp + ONLHJBOOLLJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::OpenWorld::BlockVisibilityIntent get_Intent()
		{
			return ((::RPG::Client::OpenWorld::BlockVisibilityIntent(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLHJBOOLLJ_GET_INTENT_OFFSET))(this);
		}

		::System::Void set_Intent(::RPG::Client::OpenWorld::BlockVisibilityIntent a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::BlockVisibilityIntent))((::PBYTE)hIl2Cpp + ONLHJBOOLLJ_SET_INTENT_OFFSET))(this, a1);
		}

		::RPG::Client::OpenWorld::BlockVisibilityPriority get_Priority()
		{
			return ((::RPG::Client::OpenWorld::BlockVisibilityPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLHJBOOLLJ_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::RPG::Client::OpenWorld::BlockVisibilityPriority a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::BlockVisibilityPriority))((::PBYTE)hIl2Cpp + ONLHJBOOLLJ_SET_PRIORITY_OFFSET))(this, a1);
		}

		::RPG::Client::OpenWorld::BlockVisibilityHideScope get_HideScope()
		{
			return ((::RPG::Client::OpenWorld::BlockVisibilityHideScope(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLHJBOOLLJ_GET_HIDESCOPE_OFFSET))(this);
		}

		::System::Void set_HideScope(::RPG::Client::OpenWorld::BlockVisibilityHideScope a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::BlockVisibilityHideScope))((::PBYTE)hIl2Cpp + ONLHJBOOLLJ_SET_HIDESCOPE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLHJBOOLLJ_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ONLHJBOOLLJ_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::ONLHJBOOLLJ a1, ::ONLHJBOOLLJ a2)
		{
			return ((::System::Boolean(*)(::ONLHJBOOLLJ, ::ONLHJBOOLLJ))((::PBYTE)hIl2Cpp + ONLHJBOOLLJ_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::ONLHJBOOLLJ a1, ::ONLHJBOOLLJ a2)
		{
			return ((::System::Boolean(*)(::ONLHJBOOLLJ, ::ONLHJBOOLLJ))((::PBYTE)hIl2Cpp + ONLHJBOOLLJ_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLHJBOOLLJ_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONLHJBOOLLJ_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::ONLHJBOOLLJ a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ONLHJBOOLLJ))((::PBYTE)hIl2Cpp + ONLHJBOOLLJ_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::RPG::Client::OpenWorld::BlockVisibilityIntent a1, ::RPG::Client::OpenWorld::BlockVisibilityPriority a2, ::RPG::Client::OpenWorld::BlockVisibilityHideScope a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::BlockVisibilityIntent, ::RPG::Client::OpenWorld::BlockVisibilityPriority, ::RPG::Client::OpenWorld::BlockVisibilityHideScope))((::PBYTE)hIl2Cpp + ONLHJBOOLLJ_DECONSTRUCT_OFFSET))(this, a1, a2, a3);
		}

	};
