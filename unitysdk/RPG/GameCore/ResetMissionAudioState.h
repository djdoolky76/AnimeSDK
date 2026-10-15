#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResetMissionAudioState; }

#define RPG_GAMECORE_RESETMISSIONAUDIOSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95D990)
#define RPG_GAMECORE_RESETMISSIONAUDIOSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95D9A0)
#define RPG_GAMECORE_RESETMISSIONAUDIOSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95D960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetMissionAudioState_TypeDefinitionIndex = 21684;

	class ResetMissionAudioState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ResetBGMEmotionState; // 0x18
		::System::Boolean ResetSoundEffectState; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETMISSIONAUDIOSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetMissionAudioState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetMissionAudioState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETMISSIONAUDIOSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetMissionAudioState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetMissionAudioState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETMISSIONAUDIOSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
