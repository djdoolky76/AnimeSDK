#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityLocalLegendDifficulty.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityLocalLegendStageConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYLOCALLEGENDSTAGECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D33CEB0)
#define RPG_GAMECORE_ACTIVITYLOCALLEGENDSTAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D33CB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityLocalLegendStageConfigRow_TypeDefinitionIndex = 11840;

	class ActivityLocalLegendStageConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BattleTargetList; // 0x10
		::System::String* ManikinPrefabPath; // 0x18
		::System::String* ManikinConfigPath; // 0x20
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x28
		::RPG::Client::TextID FearlessStageMechanism; // 0x30
		::System::UInt32 EventID; // 0x40
		::System::UInt32 UnlockQuest; // 0x44
		::RPG::GameCore::ActivityLocalLegendDifficulty DifficultyLevel; // 0x48
		::System::UInt32 BattleAreaID; // 0x4C
		::System::UInt32 GroupID; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYLOCALLEGENDSTAGECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityLocalLegendStageConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityLocalLegendStageConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYLOCALLEGENDSTAGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
