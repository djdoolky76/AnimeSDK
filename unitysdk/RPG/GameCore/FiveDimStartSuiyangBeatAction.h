#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimStartSuiyangBeatAction; }

#define RPG_GAMECORE_FIVEDIMSTARTSUIYANGBEATACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B11E0)
#define RPG_GAMECORE_FIVEDIMSTARTSUIYANGBEATACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B11F0)
#define RPG_GAMECORE_FIVEDIMSTARTSUIYANGBEATACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B1130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStartSuiyangBeatAction_TypeDefinitionIndex = 18710;

	class FiveDimStartSuiyangBeatAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Single BPM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSUIYANGBEATACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStartSuiyangBeatAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStartSuiyangBeatAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSUIYANGBEATACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStartSuiyangBeatAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStartSuiyangBeatAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSUIYANGBEATACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
