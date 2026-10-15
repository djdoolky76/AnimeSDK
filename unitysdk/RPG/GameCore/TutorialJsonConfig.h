#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialGuideHintAdaptConfig; }
namespace RPG::GameCore { class TutorialGuideTalkListAdaptConfig; }
namespace RPG::GameCore { class TutorialGuideTextAdaptConfig; }
namespace RPG::GameCore { class TutorialJsonConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALJSONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6CC60)
#define RPG_GAMECORE_TUTORIALJSONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6C860)

namespace RPG::GameCore
{
	class TutorialJsonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TutorialGuideHintAdaptConfig*>* GuideHintAdaptionConfigList; // 0x10
		::Il2CppArray<::RPG::GameCore::TutorialGuideTextAdaptConfig*>* GuideTextAdaptionConfigList; // 0x18
		::Il2CppArray<::RPG::GameCore::TutorialGuideTalkListAdaptConfig*>* GuideTalkAdaptionConfigList; // 0x20
		::System::String* DefaultTextPath; // 0x28
		::System::String* DefaultKeyMapPath; // 0x30
		::System::String* DefaultContentPath; // 0x38
		::System::String* TutorialUIMaskPath; // 0x40
		::System::String* TutorialBlockMaskPath; // 0x48
		::System::String* GuideTalkUIName; // 0x50
		::System::Single WidthHeightEqualCheckThreshold; // 0x58
		::System::Single ExtraOffsetDelta; // 0x5C
		::System::Single NodeMoveCheckThreshold; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALJSONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialJsonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialJsonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALJSONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
