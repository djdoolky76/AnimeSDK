#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetAdvAchievement; }

#define RPG_GAMECORE_SETADVACHIEVEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA92E20)
#define RPG_GAMECORE_SETADVACHIEVEMENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA92E30)
#define RPG_GAMECORE_SETADVACHIEVEMENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA92DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAdvAchievement_TypeDefinitionIndex = 20563;

	class SetAdvAchievement : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 AchievementID; // 0x18
		::System::UInt32 QuestID; // 0x1C
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 InstanceID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVACHIEVEMENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAdvAchievement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAdvAchievement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVACHIEVEMENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAdvAchievement* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAdvAchievement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVACHIEVEMENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
