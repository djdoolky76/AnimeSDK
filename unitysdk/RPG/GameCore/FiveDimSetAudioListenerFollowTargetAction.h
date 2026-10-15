#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetAudioListenerFollowTargetAction; }

#define RPG_GAMECORE_FIVEDIMSETAUDIOLISTENERFOLLOWTARGETACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AB270)
#define RPG_GAMECORE_FIVEDIMSETAUDIOLISTENERFOLLOWTARGETACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6AB280)
#define RPG_GAMECORE_FIVEDIMSETAUDIOLISTENERFOLLOWTARGETACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AB1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetAudioListenerFollowTargetAction_TypeDefinitionIndex = 18721;

	class FiveDimSetAudioListenerFollowTargetAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 TargetEntityID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETAUDIOLISTENERFOLLOWTARGETACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetAudioListenerFollowTargetAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetAudioListenerFollowTargetAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETAUDIOLISTENERFOLLOWTARGETACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetAudioListenerFollowTargetAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetAudioListenerFollowTargetAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETAUDIOLISTENERFOLLOWTARGETACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
