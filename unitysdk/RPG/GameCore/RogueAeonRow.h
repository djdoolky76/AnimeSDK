#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueAeonRow; }

#define RPG_GAMECORE_ROGUEAEONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBF0D70)
#define RPG_GAMECORE_ROGUEAEONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EBEF160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAeonRow_TypeDefinitionIndex = 14980;

	class RogueAeonRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID EffectDesc1; // 0x10
		::System::UInt32 BattleEventBuffGroup; // 0x20
		::System::UInt32 UnlockID; // 0x24
		::System::UInt32 DisplayID; // 0x28
		::System::UInt32 RogueBuffType; // 0x2C
		::System::UInt32 Sort; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID EffectDesc2; // 0x38
		::System::UInt32 BattleEventEnhanceBuffGroup; // 0x48
		::System::UInt32 AeonID; // 0x4C
		::System::UInt32 ArrivedTalkDialogueGroupID; // 0x50
		::System::UInt32 RogueVersion; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAeonRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAeonRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
