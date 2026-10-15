#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueBuffAeonType.h"
#include "unitysdk/RPG/GameCore/RogueBuffCategory.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueBuffRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEBUFFROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D97FFE0)
#define RPG_GAMECORE_ROGUEBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D97F660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBuffRow_TypeDefinitionIndex = 14731;

	class RogueBuffRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x10
		::System::String* AeonCrossIcon; // 0x18
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x20
		::RPG::GameCore::RogueBuffCategory RogueBuffCategory; // 0x28
		::System::Boolean IsShow; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 AeonID; // 0x30
		::System::UInt32 ActivityModuleID; // 0x34
		::System::UInt32 MazeBuffLevel; // 0x38
		::System::UInt32 RogueVersion; // 0x3C
		::RPG::GameCore::RogueBuffAeonType BattleEventBuffType; // 0x40
		::System::UInt32 RogueBuffType; // 0x44
		::System::UInt32 MazeBuffID; // 0x48
		::System::UInt32 RogueBuffTag; // 0x4C
		::RPG::Client::TextID HandbookUnlockDesc; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueBuffRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
