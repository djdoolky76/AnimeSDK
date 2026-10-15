#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExitGameFlow; }

#define RPG_GAMECORE_EXITGAMEFLOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68C0E0)
#define RPG_GAMECORE_EXITGAMEFLOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D68C0F0)
#define RPG_GAMECORE_EXITGAMEFLOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D68C0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExitGameFlow_TypeDefinitionIndex = 24063;

	class ExitGameFlow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GameFlowType Type; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXITGAMEFLOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExitGameFlow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExitGameFlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXITGAMEFLOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExitGameFlow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExitGameFlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXITGAMEFLOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
