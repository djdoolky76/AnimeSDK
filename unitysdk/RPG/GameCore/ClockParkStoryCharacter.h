#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkStoryAnimState; }
namespace RPG::GameCore { class ClockParkStoryCharacter; }
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKSTORYCHARACTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D596710)
#define RPG_GAMECORE_CLOCKPARKSTORYCHARACTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D596550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkStoryCharacter_TypeDefinitionIndex = 16030;

	class ClockParkStoryCharacter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::String* Anchor; // 0x18
		::System::Boolean Flipped; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::ClockParkStoryAnimState* DefaultAnimState; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYCHARACTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkStoryCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkStoryCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYCHARACTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
