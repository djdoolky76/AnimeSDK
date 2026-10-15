#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueAeonLevelConfigRow; }

#define RPG_GAMECORE_ROGUEAEONLEVELCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D97A270)
#define RPG_GAMECORE_ROGUEAEONLEVELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9799F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAeonLevelConfigRow_TypeDefinitionIndex = 14839;

	class RogueAeonLevelConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 AeonStoryID; // 0x10
		::System::UInt32 Reward; // 0x14
		::System::UInt32 Exp; // 0x18
		::System::UInt32 RogueAeonID; // 0x1C
		::System::UInt32 Level; // 0x20
		::System::UInt32 UnlockID; // 0x24
		::System::UInt32 KeyPointRewardItemID; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID AeonStory_Name; // 0x30
		::RPG::Client::TextID AeonStory; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONLEVELCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAeonLevelConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAeonLevelConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONLEVELCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
