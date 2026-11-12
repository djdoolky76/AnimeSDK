#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MusicRhythmTalkInfo; }
namespace RPG::GameCore { class PlayMusicRhythmTalk; }

#define RPG_GAMECORE_PLAYMUSICRHYTHMTALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB478C0)
#define RPG_GAMECORE_PLAYMUSICRHYTHMTALK_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1EB478D0)
#define RPG_GAMECORE_PLAYMUSICRHYTHMTALK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB47890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayMusicRhythmTalk_TypeDefinitionIndex = 22468;

	class PlayMusicRhythmTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MusicRhythmTalkInfo*>* SimpleTalkList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUSICRHYTHMTALK_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayMusicRhythmTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayMusicRhythmTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUSICRHYTHMTALK_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayMusicRhythmTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayMusicRhythmTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUSICRHYTHMTALK_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
