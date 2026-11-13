#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleTargetConfigType.h"
#include "unitysdk/RPG/GameCore/BattleTargetIconType.h"
#include "unitysdk/RPG/GameCore/ParamType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleTargetConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLETARGETCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF42DF0)
#define RPG_GAMECORE_BATTLETARGETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DF42360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleTargetConfigRow_TypeDefinitionIndex = 12920;

	class BattleTargetConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MultiTarget; // 0x10
		::Il2CppArray<::RPG::GameCore::BattleTargetIconType>* MultiTargetIconType; // 0x18
		::System::String* AbilityName; // 0x20
		::Il2CppArray<::System::UInt32>* HintStep; // 0x28
		::RPG::GameCore::ParamType ParamType; // 0x30
		::System::Boolean IsFixableHeight; // 0x34
		::System::Boolean SkipWhenSuccessOnEnterBattle; // 0x35
		::System::Boolean ShowInScoreCounter; // 0x36
		::System::Byte _padding0[0x1];
		::RPG::GameCore::BattleTargetIconType IconType; // 0x38
		::System::UInt32 TargetParam; // 0x3C
		::RPG::Client::TextID TargetName; // 0x40
		::RPG::GameCore::BattleTargetConfigType Type; // 0x50
		::System::UInt32 IsShowProgress; // 0x54
		::System::UInt32 ID; // 0x58
		::System::UInt32 IconNum; // 0x5C
		::RPG::Client::TextID TargetNameSimple; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleTargetConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleTargetConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
