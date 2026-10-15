#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingGameBoyChallengeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingGameBoyChallengeRow; }
namespace RPG::GameCore { class DynamicValue; }

#define RPG_GAMECORE_CHENLINGGAMEBOYCHALLENGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D591C00)
#define RPG_GAMECORE_CHENLINGGAMEBOYCHALLENGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5918A0)

namespace RPG::GameCore
{
	class ChenLingGameBoyChallengeRow : public ::System::Object
	{
	public:
		::RPG::GameCore::DynamicValue* Parameter2; // 0x10
		::RPG::GameCore::DynamicValue* Parameter1; // 0x18
		::RPG::GameCore::DynamicValue* Parameter3; // 0x20
		::System::UInt32 GameBoyChallengeID; // 0x28
		::System::UInt32 RewardID; // 0x2C
		::RPG::GameCore::ChenLingGameBoyChallengeType ChallengeType; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TextmapMazePuzzle; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHALLENGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingGameBoyChallengeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingGameBoyChallengeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCHALLENGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
