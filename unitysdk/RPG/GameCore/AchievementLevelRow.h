#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AchievementLevelRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACHIEVEMENTLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D313410)
#define RPG_GAMECORE_ACHIEVEMENTLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D312DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AchievementLevelRow_TypeDefinitionIndex = 10893;

	class AchievementLevelRow : public ::System::Object
	{
	public:
		::System::String* LevelIconPath; // 0x10
		::System::UInt32 Level; // 0x18
		::System::UInt32 Reward; // 0x1C
		::System::UInt32 Count; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AchievementLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AchievementLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
