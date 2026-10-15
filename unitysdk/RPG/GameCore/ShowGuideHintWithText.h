#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleOperationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TutorialGuideDirectionType.h"
#include "unitysdk/RPG/GameCore/TutorialGuideHintType.h"
#include "unitysdk/RPG/GameCore/TutorialGuideTextType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ShowGuideHintWithText; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TutorialGuideShowConfig; }
namespace RPG::GameCore { class TutorialGuideUIContextConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWGUIDEHINTWITHTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADE940)
#define RPG_GAMECORE_SHOWGUIDEHINTWITHTEXT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DADE960)
#define RPG_GAMECORE_SHOWGUIDEHINTWITHTEXT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DADE900)

namespace RPG::GameCore
{
	class ShowGuideHintWithText : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Block; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TargetEvent; // 0x20
		::Il2CppArray<::System::String*>* NodeIDList; // 0x28
		::System::Boolean IsAutoMatchGuideHintType; // 0x30
		::System::Byte _padding1[0x3];
		::RPG::GameCore::TutorialGuideHintType GuideHintType; // 0x34
		::RPG::GameCore::TutorialGuideTextType GuideTextType; // 0x38
		::System::Single WeakGuideLifeTime; // 0x3C
		::System::String* GuideText; // 0x40
		::System::String* GuideTextPC; // 0x48
		::System::String* GuideTextController; // 0x50
		::System::UInt32 GuideTalkID; // 0x58
		::System::UInt32 GuideTalkIDPC; // 0x5C
		::System::UInt32 GuideTalkIDController; // 0x60
		::System::Boolean ShowKeyMapTip; // 0x64
		::System::Byte _padding2[0x3];
		::System::String* OverrideActionName; // 0x68
		::System::String* OverrideHintPrefabPath; // 0x70
		::System::String* OverrideTextPrefabPath; // 0x78
		::RPG::GameCore::TutorialGuideDirectionType CustomTextDirection; // 0x80
		::System::Byte _padding3[0x4];
		::RPG::GameCore::TutorialGuideShowConfig* GuideHintShowConfig; // 0x88
		::RPG::GameCore::TutorialGuideShowConfig* GuideTextShowConfig; // 0x90
		::RPG::GameCore::TutorialGuideUIContextConfig* GuideUIContextConfig; // 0x98
		::System::Boolean EnableNavigation; // 0xA0
		::System::Boolean EnableSubmit; // 0xA1
		::System::Boolean EnableClickInHintArea; // 0xA2
		::System::Byte _padding4[0x5];
		::Il2CppArray<::System::String*>* EnableActionList; // 0xA8
		::Il2CppArray<::RPG::GameCore::BattleOperationType>* EnableBattleOperationList; // 0xB0
		::RPG::GameCore::DynamicFloat* ParamInt; // 0xB8
		::System::Single ShowDelay; // 0xC0
		::System::Boolean EnableHotSwitch; // 0xC4
		::System::Boolean DisableBlackMask; // 0xC5
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEHINTWITHTEXT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowGuideHintWithText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowGuideHintWithText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEHINTWITHTEXT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowGuideHintWithText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowGuideHintWithText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEHINTWITHTEXT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
