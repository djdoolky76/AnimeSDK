#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvTrackNpcTrigger; }

#define RPG_GAMECORE_ADVTRACKNPCTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B3920)
#define RPG_GAMECORE_ADVTRACKNPCTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B3930)
#define RPG_GAMECORE_ADVTRACKNPCTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B38F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvTrackNpcTrigger_TypeDefinitionIndex = 22192;

	class AdvTrackNpcTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single ValueDelta; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvTrackNpcTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvTrackNpcTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvTrackNpcTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvTrackNpcTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
