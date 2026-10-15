#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnterTrainPartyGame; }

#define RPG_GAMECORE_ENTERTRAINPARTYGAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D617BA0)
#define RPG_GAMECORE_ENTERTRAINPARTYGAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D617BB0)
#define RPG_GAMECORE_ENTERTRAINPARTYGAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D617AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnterTrainPartyGame_TypeDefinitionIndex = 22355;

	class EnterTrainPartyGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERTRAINPARTYGAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnterTrainPartyGame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnterTrainPartyGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERTRAINPARTYGAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnterTrainPartyGame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnterTrainPartyGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERTRAINPARTYGAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
