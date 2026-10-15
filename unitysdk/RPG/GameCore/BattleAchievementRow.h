#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleAchievementRow; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEACHIEVEMENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D440AA0)
#define RPG_GAMECORE_BATTLEACHIEVEMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4408A0)

namespace RPG::GameCore
{
	class BattleAchievementRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ExcludeTagList; // 0x10
		::System::String* AbilityName; // 0x18
		::Il2CppArray<::System::String*>* NeedTagList; // 0x20
		::System::UInt32 BattleAchievementID; // 0x28
		::System::UInt32 GameModeGroup; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEACHIEVEMENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleAchievementRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleAchievementRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEACHIEVEMENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
