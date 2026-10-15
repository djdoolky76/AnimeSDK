#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearNpcDistanceTrigger; }

#define RPG_GAMECORE_CLEARNPCDISTANCETRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B69D0)
#define RPG_GAMECORE_CLEARNPCDISTANCETRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B69E0)
#define RPG_GAMECORE_CLEARNPCDISTANCETRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B69A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearNpcDistanceTrigger_TypeDefinitionIndex = 20335;

	class ClearNpcDistanceTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 GroupNpcID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARNPCDISTANCETRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearNpcDistanceTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearNpcDistanceTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARNPCDISTANCETRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearNpcDistanceTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearNpcDistanceTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARNPCDISTANCETRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
