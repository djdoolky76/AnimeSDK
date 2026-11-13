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

#define RPG_GAMECORE_RAIDTARGETCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2273A0)
#define RPG_GAMECORE_RAIDTARGETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F2269E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidTargetConfigRow_TypeDefinitionIndex = 14752;

	class RaidTargetConfigRow : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x18
		::Il2CppArray<::System::UInt32>* HintStep; // 0x20
		::RPG::Client::TextID TargetNameSimple; // 0x28
		::RPG::Client::TextID TargetName; // 0x38
		::System::UInt32 RewardID; // 0x48
		::System::Boolean IsInBattle; // 0x4C
		::System::Byte _padding0[0x3];
		::System::UInt32 ID; // 0x50
		::RPG::GameCore::ParamType ParamType; // 0x54
		::RPG::GameCore::RaidTargetType TargetType; // 0x58
		::System::UInt32 TargetParam2; // 0x5C
		::System::UInt32 TargetParam1; // 0x60
		::System::UInt32 IsShowProgress; // 0x64
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
