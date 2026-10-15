#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleScoringDisplayType.h"
#include "unitysdk/RPG/GameCore/BattleScoringType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleScoringConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLESCORINGCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D43AA50)
#define RPG_GAMECORE_BATTLESCORINGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D43A1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleScoringConfigRow_TypeDefinitionIndex = 12880;

	class BattleScoringConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::BattleScoringDisplayType>* DisplayTypeList; // 0x10
		::System::String* AbilityName; // 0x18
		::Il2CppArray<::System::Single>* ParamList; // 0x20
		::System::UInt32 ScoringID; // 0x28
		::RPG::GameCore::BattleScoringType ScoringType; // 0x2C
		::System::UInt32 BonusScore; // 0x30
		::System::UInt32 GameModeGroup; // 0x34
		::RPG::Client::TextID BonusSimpleDesc; // 0x38
		::RPG::Client::TextID ScoreRuleDesc; // 0x48
		::RPG::Client::TextID BonusDesc; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESCORINGCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleScoringConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleScoringConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLESCORINGCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
