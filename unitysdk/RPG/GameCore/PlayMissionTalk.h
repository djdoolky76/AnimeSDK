#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkListConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class MissionTalkStyle; }
namespace RPG::GameCore { class PlayMissionTalk; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PLAYMISSIONTALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92DB60)
#define RPG_GAMECORE_PLAYMISSIONTALK_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D92DB70)
#define RPG_GAMECORE_PLAYMISSIONTALK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D92DB20)

namespace RPG::GameCore
{
	class PlayMissionTalk : public ::RPG::GameCore::SimpleTalkListConfig
	{
	public:
		::System::Boolean IsVoice3D; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* Voice3DTargetType; // 0x28
		::System::Boolean ResumeAfterInterrupt; // 0x30
		::System::Byte _padding1[0x3];
		::System::UInt32 SubMissionIDForResume; // 0x34
		::System::Boolean PendingInBattle; // 0x38
		::System::Byte _padding2[0x7];
		::RPG::GameCore::DynamicFloat* StartSentenceID; // 0x40
		::RPG::GameCore::DynamicFloat* EndSentenceID; // 0x48
		::System::Boolean IsOverrideContentTime; // 0x50
		::System::Byte _padding3[0x3];
		::System::Single OverrideContentTime; // 0x54
		::System::Boolean MuteBattleVO; // 0x58
		::System::Boolean ChangeStyle; // 0x59
		::System::Byte _padding4[0x6];
		::Il2CppArray<::RPG::GameCore::MissionTalkStyle*>* StyleList; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMISSIONTALK_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayMissionTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayMissionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMISSIONTALK_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayMissionTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayMissionTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMISSIONTALK_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
