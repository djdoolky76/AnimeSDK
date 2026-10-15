#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBattleCharacterCameraTag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBattleTriggerCharacterCamera; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTBATTLETRIGGERCHARACTERCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA220B0)
#define RPG_GAMECORE_RTBATTLETRIGGERCHARACTERCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA220F0)
#define RPG_GAMECORE_RTBATTLETRIGGERCHARACTERCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA22050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleTriggerCharacterCamera_TypeDefinitionIndex = 24096;

	class RtBattleTriggerCharacterCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::RtBattleCharacterCameraTag CameraTag; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETRIGGERCHARACTERCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleTriggerCharacterCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleTriggerCharacterCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETRIGGERCHARACTERCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleTriggerCharacterCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleTriggerCharacterCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLETRIGGERCHARACTERCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
