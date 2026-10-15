#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ParamType.h"
#include "unitysdk/RPG/GameCore/RaidTargetType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RaidTargetConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_RAIDTARGETCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96B2C0)
#define RPG_GAMECORE_RAIDTARGETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D96A900)

namespace RPG::GameCore
{
	class RaidTargetConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* HintStep; // 0x10
		::System::String* AbilityName; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x20
		::System::UInt32 ID; // 0x28
		::System::UInt32 IsShowProgress; // 0x2C
		::RPG::Client::TextID TargetName; // 0x30
		::System::UInt32 RewardID; // 0x40
		::RPG::GameCore::RaidTargetType TargetType; // 0x44
		::System::UInt32 TargetParam1; // 0x48
		::System::UInt32 TargetParam2; // 0x4C
		::RPG::Client::TextID TargetNameSimple; // 0x50
		::RPG::GameCore::ParamType ParamType; // 0x60
		::System::Boolean IsInBattle; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDTARGETCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RaidTargetConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RaidTargetConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDTARGETCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
