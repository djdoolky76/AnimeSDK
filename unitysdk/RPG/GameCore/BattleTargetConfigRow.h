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

#define RPG_GAMECORE_BATTLETARGETCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6798F0)
#define RPG_GAMECORE_BATTLETARGETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E678E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleTargetConfigRow_TypeDefinitionIndex = 12920;

	class BattleTargetConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* HintStep; // 0x10
		::System::String* AbilityName; // 0x18
		::Il2CppArray<::RPG::GameCore::BattleTargetIconType>* MultiTargetIconType; // 0x20
		::Il2CppArray<::System::UInt32>* MultiTarget; // 0x28
		::RPG::Client::TextID TargetNameSimple; // 0x30
		::RPG::GameCore::BattleTargetConfigType Type; // 0x40
		::System::UInt32 IsShowProgress; // 0x44
		::RPG::Client::TextID TargetName; // 0x48
		::RPG::GameCore::BattleTargetIconType IconType; // 0x58
		::System::UInt32 ID; // 0x5C
		::System::UInt32 IconNum; // 0x60
		::System::Boolean SkipWhenSuccessOnEnterBattle; // 0x64
		::System::Boolean ShowInScoreCounter; // 0x65
		::System::Boolean IsFixableHeight; // 0x66
		::System::Byte _padding0[0x1];
		::System::UInt32 TargetParam; // 0x68
		::RPG::GameCore::ParamType ParamType; // 0x6C
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
