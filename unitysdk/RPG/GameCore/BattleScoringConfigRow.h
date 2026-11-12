#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleScoringDisplayType.h"
#include "unitysdk/RPG/GameCore/BattleScoringType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleScoringConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLESCORINGCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E677AF0)
#define RPG_GAMECORE_BATTLESCORINGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E677250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleScoringConfigRow_TypeDefinitionIndex = 12952;

	class BattleScoringConfigRow : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::Il2CppArray<::RPG::GameCore::BattleScoringDisplayType>* DisplayTypeList; // 0x18
		::Il2CppArray<::System::Single>* ParamList; // 0x20
		::RPG::Client::TextID ScoreRuleDesc; // 0x28
		::RPG::Client::TextID BonusDesc; // 0x38
		::System::UInt32 BonusScore; // 0x48
		::System::UInt32 ScoringID; // 0x4C
		::RPG::Client::TextID BonusSimpleDesc; // 0x50
		::RPG::GameCore::BattleScoringType ScoringType; // 0x60
		::System::UInt32 GameModeGroup; // 0x64
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
