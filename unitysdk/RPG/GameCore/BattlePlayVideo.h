#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PerformanceSkipType.h"
#include "unitysdk/RPG/GameCore/ScreenTransferMode.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"
#include "unitysdk/RPG/GameCore/StoryBlackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattlePlayVideo; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_BATTLEPLAYVIDEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D437CD0)
#define RPG_GAMECORE_BATTLEPLAYVIDEO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D437CF0)
#define RPG_GAMECORE_BATTLEPLAYVIDEO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D437C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePlayVideo_TypeDefinitionIndex = 23384;

	class BattlePlayVideo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 VideoID; // 0x18
		::System::Boolean IsMuteBGM; // 0x1C
		::System::Boolean MuteBGMWithFadeOut; // 0x1D
		::System::Byte _padding0[0x2];
		::RPG::GameCore::PerformanceSkipType SkipType; // 0x20
		::System::Boolean WithoutChangeAudio; // 0x24
		::System::Byte _padding1[0x3];
		::RPG::GameCore::ScreenTransferMode EndTransferMode; // 0x28
		::RPG::GameCore::StoryBlackType StartBlack; // 0x2C
		::RPG::GameCore::ScreenTransferType StartBlackColor; // 0x30
		::RPG::GameCore::StoryBlackType EndBlack; // 0x34
		::RPG::GameCore::ScreenTransferType EndBlackColor; // 0x38
		::System::Byte _padding2[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeginPlay; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNearlyEnd; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPlayEnd; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPLAYVIDEO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattlePlayVideo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattlePlayVideo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPLAYVIDEO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattlePlayVideo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattlePlayVideo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPLAYVIDEO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
