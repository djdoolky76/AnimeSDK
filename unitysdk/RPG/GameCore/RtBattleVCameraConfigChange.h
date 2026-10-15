#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraConfigChange.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBattleVCameraConfigChange; }

#define RPG_GAMECORE_RTBATTLEVCAMERACONFIGCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA229D0)
#define RPG_GAMECORE_RTBATTLEVCAMERACONFIGCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA229E0)
#define RPG_GAMECORE_RTBATTLEVCAMERACONFIGCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA229A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleVCameraConfigChange_TypeDefinitionIndex = 24098;

	class RtBattleVCameraConfigChange : public ::RPG::GameCore::VCameraConfigChange
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEVCAMERACONFIGCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleVCameraConfigChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleVCameraConfigChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEVCAMERACONFIGCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleVCameraConfigChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleVCameraConfigChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEVCAMERACONFIGCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
