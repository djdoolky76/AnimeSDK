#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/AnchorType.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ANCHORIDENTIFIER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xF5C00)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ANCHORIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0xF5B90)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ANCHORIDENTIFIER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xF5B80)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ANCHORIDENTIFIER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xDE79430)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ANCHORIDENTIFIER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xDE793F0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ANCHORIDENTIFIER_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xF5B60)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_ANCHORIDENTIFIER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF5B50)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int AnchorIdentifier_TypeDefinitionIndex = 80084;

	struct alignas(4) AnchorIdentifier
	{
		::System::UInt32 AnchorID; // 0x10
		::RPG::Client::LittleGame::ComicDessert::AnchorType Type; // 0x14
		::System::UInt32 DishID; // 0x18
		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ANCHORIDENTIFIER_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ANCHORIDENTIFIER_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier a1, ::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier, ::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ANCHORIDENTIFIER_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier a1, ::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier, ::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ANCHORIDENTIFIER_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ANCHORIDENTIFIER_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ANCHORIDENTIFIER_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_ANCHORIDENTIFIER_EQUALS_1_OFFSET))(this, a1);
		}
		*/

	};
}
