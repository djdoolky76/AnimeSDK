#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetMissionAudioState; }
namespace System { class String; }

#define RPG_GAMECORE_SETMISSIONAUDIOSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8C040)
#define RPG_GAMECORE_SETMISSIONAUDIOSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA8C050)
#define RPG_GAMECORE_SETMISSIONAUDIOSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8C010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMissionAudioState_TypeDefinitionIndex = 21683;

	class SetMissionAudioState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean SetBGMEmotionState; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* BGMEmotionStateName; // 0x20
		::System::Boolean SetDefaultBGMEmotionState; // 0x28
		::System::Boolean SetSoundEffectState; // 0x29
		::System::Byte _padding1[0x6];
		::System::String* SoundEffectStateName; // 0x30
		::System::Boolean SetDefaultSoundEffectState; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMISSIONAUDIOSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMissionAudioState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMissionAudioState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMISSIONAUDIOSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMissionAudioState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMissionAudioState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMISSIONAUDIOSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
