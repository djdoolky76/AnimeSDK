#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleAchievementRow; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEACHIEVEMENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D413030)
#define RPG_GAMECORE_BATTLEACHIEVEMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D412E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleAchievementRow_TypeDefinitionIndex = 12882;

	class BattleAchievementRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ExcludeTagList; // 0x10
		::Il2CppArray<::System::String*>* NeedTagList; // 0x18
		::System::String* AbilityName; // 0x20
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
