#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/NoteNotifyType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimSpeedNotifyConfig; }
namespace RPG::GameCore { class AnimationNotifyConfig; }
namespace RPG::GameCore { class BubbleNotifyConfig; }
namespace RPG::GameCore { class EffectNotifyConfig; }
namespace RPG::GameCore { class HanuBarNotifyConfig; }
namespace RPG::GameCore { class HanuHintNotifyConfig; }
namespace RPG::GameCore { class NoteNotifyConfig; }
namespace RPG::GameCore { class PuManHintNotifyConfig; }
namespace RPG::GameCore { class PuManMoveNotifyConfig; }
namespace RPG::GameCore { class RobotEmotionNotifyConfig; }
namespace RPG::GameCore { class SetTVNotifyConfig; }
namespace RPG::GameCore { class SetTargetPosNotifyConfig; }
namespace RPG::GameCore { class SetTargetTypeNotifyConfig; }
namespace RPG::GameCore { class ShowHintNotifyConfig; }
namespace RPG::GameCore { class SoundNotifyConfig; }
namespace System { class String; }

#define RPG_GAMECORE_NOTENOTIFYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DA740)
#define RPG_GAMECORE_NOTENOTIFYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8DA370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NoteNotifyConfig_TypeDefinitionIndex = 16955;

	class NoteNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single DeltaTime; // 0x10
		::System::Single DeltaBeatNum; // 0x14
		::System::String* EntityUniqueName; // 0x18
		::RPG::GameCore::NoteNotifyType NotifyType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::SoundNotifyConfig* SoundConfig; // 0x28
		::RPG::GameCore::AnimationNotifyConfig* AnimationConfig; // 0x30
		::RPG::GameCore::BubbleNotifyConfig* BubbleConfig; // 0x38
		::RPG::GameCore::AnimSpeedNotifyConfig* AnimSpeedConfig; // 0x40
		::RPG::GameCore::RobotEmotionNotifyConfig* RobotEmotionConfig; // 0x48
		::RPG::GameCore::ShowHintNotifyConfig* ShowHintConfig; // 0x50
		::RPG::GameCore::EffectNotifyConfig* EffectConfig; // 0x58
		::RPG::GameCore::PuManHintNotifyConfig* PuManHintConfig; // 0x60
		::RPG::GameCore::PuManMoveNotifyConfig* PuManMoveConfig; // 0x68
		::RPG::GameCore::SetTargetTypeNotifyConfig* SetTargetTypeConfig; // 0x70
		::RPG::GameCore::SetTargetPosNotifyConfig* SetTargetPosConfig; // 0x78
		::RPG::GameCore::SetTVNotifyConfig* SetTVConfig; // 0x80
		::RPG::GameCore::HanuHintNotifyConfig* HanuHintConfig; // 0x88
		::RPG::GameCore::HanuBarNotifyConfig* HanuBarConfig; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTENOTIFYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NoteNotifyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NoteNotifyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTENOTIFYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
