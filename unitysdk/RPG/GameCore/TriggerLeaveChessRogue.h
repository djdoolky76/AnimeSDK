#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerLeaveChessRogue; }

#define RPG_GAMECORE_TRIGGERLEAVECHESSROGUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC26700)
#define RPG_GAMECORE_TRIGGERLEAVECHESSROGUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC26710)
#define RPG_GAMECORE_TRIGGERLEAVECHESSROGUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC26640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerLeaveChessRogue_TypeDefinitionIndex = 22095;

	class TriggerLeaveChessRogue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERLEAVECHESSROGUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerLeaveChessRogue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerLeaveChessRogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERLEAVECHESSROGUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerLeaveChessRogue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerLeaveChessRogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERLEAVECHESSROGUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
