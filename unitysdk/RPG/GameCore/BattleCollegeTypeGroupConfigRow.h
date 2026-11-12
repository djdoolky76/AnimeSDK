#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleCollegeTypeGroupConfigRow; }
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLECOLLEGETYPEGROUPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6644E0)
#define RPG_GAMECORE_BATTLECOLLEGETYPEGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E6641F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleCollegeTypeGroupConfigRow_TypeDefinitionIndex = 12912;

	class BattleCollegeTypeGroupConfigRow : public ::System::Object
	{
	public:
		::System::String* TabIconPath; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockConditions; // 0x18
		::System::String* BackGroundImagePath; // 0x20
		::System::Boolean IsAdvanced; // 0x28
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID BattleCollegeTypeGroupIDTitle; // 0x30
		::System::UInt32 BattleCollegeTypeGroupID; // 0x40
		::System::UInt32 RewardID; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOLLEGETYPEGROUPCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleCollegeTypeGroupConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleCollegeTypeGroupConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOLLEGETYPEGROUPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
