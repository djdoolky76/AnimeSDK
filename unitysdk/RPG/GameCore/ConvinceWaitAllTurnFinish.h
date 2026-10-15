#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConvinceWaitAllTurnFinish; }

#define RPG_GAMECORE_CONVINCEWAITALLTURNFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B2230)
#define RPG_GAMECORE_CONVINCEWAITALLTURNFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B2240)
#define RPG_GAMECORE_CONVINCEWAITALLTURNFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B2170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceWaitAllTurnFinish_TypeDefinitionIndex = 21842;

	class ConvinceWaitAllTurnFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEWAITALLTURNFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceWaitAllTurnFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceWaitAllTurnFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEWAITALLTURNFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceWaitAllTurnFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceWaitAllTurnFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEWAITALLTURNFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
