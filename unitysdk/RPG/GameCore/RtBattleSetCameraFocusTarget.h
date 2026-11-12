#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBattleSetCameraFocusTarget; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTBATTLESETCAMERAFOCUSTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC60F60)
#define RPG_GAMECORE_RTBATTLESETCAMERAFOCUSTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC60FA0)
#define RPG_GAMECORE_RTBATTLESETCAMERAFOCUSTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC60F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleSetCameraFocusTarget_TypeDefinitionIndex = 24553;

	class RtBattleSetCameraFocusTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESETCAMERAFOCUSTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleSetCameraFocusTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleSetCameraFocusTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESETCAMERAFOCUSTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleSetCameraFocusTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleSetCameraFocusTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESETCAMERAFOCUSTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
