#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GameLevelHeartDialDialogueConfig; }
namespace RPG::GameCore { class GameLevelHeartDialPerformance; }
namespace RPG::GameCore { class LevelDialogInfo; }
namespace System { class String; }

#define RPG_GAMECORE_GAMELEVELHEARTDIALDIALOGUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D716D60)
#define RPG_GAMECORE_GAMELEVELHEARTDIALDIALOGUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D716A10)

namespace RPG::GameCore
{
	class GameLevelHeartDialDialogueConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 DialogueID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* ConfigEntityPath; // 0x18
		::System::UInt32 FreeStyleID; // 0x20
		::System::Byte _padding1[0x4];
		::RPG::GameCore::GameLevelHeartDialPerformance* StartPerformance; // 0x28
		::RPG::GameCore::GameLevelHeartDialPerformance* StartPerformanceOnFinish; // 0x30
		::RPG::GameCore::LevelDialogInfo* Dialog; // 0x38
		::System::UInt32 CustomGroupID; // 0x40
		::System::UInt32 CameraIndex; // 0x44
		::System::String* BlendShapeConfigName; // 0x48
		::System::Boolean IsOverrideFreeStyleAndBlendShape; // 0x50
		::System::Boolean IsShowToastAfterPerformance; // 0x51
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELHEARTDIALDIALOGUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GameLevelHeartDialDialogueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GameLevelHeartDialDialogueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELHEARTDIALDIALOGUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
