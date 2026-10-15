#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfBehaviorStateType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantEmojiConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTEMOJICONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D990720)
#define RPG_GAMECORE_RESTAURANTEMOJICONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9905E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantEmojiConfigRow_TypeDefinitionIndex = 11379;

	class RestaurantEmojiConfigRow : public ::System::Object
	{
	public:
		::System::String* EmojiPath; // 0x10
		::RPG::GameCore::ElfBehaviorStateType EmojiType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTEMOJICONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestaurantEmojiConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestaurantEmojiConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTEMOJICONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
